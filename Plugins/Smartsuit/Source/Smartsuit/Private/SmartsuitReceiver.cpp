// Copyright 2019 Rokoko Electronics. All Rights Reserved.

#include "SmartsuitReceiver.h"
#include "Smartsuit.h"



// Sets default values
ARokokoReceiver::ARokokoReceiver()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RokokoPortNumber = 14045;
}

// Called when the game starts or when spawned
void ARokokoReceiver::BeginPlay()
{
	Super::BeginPlay();
	StartListener();
	enabled = true;
	realLife = true;
}

void ARokokoReceiver::BeginDestroy()
{
	Super::BeginDestroy();
	StopListener();
}

// Called every frame
void ARokokoReceiver::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


void ARokokoReceiver::StartListener()
{
	UE_LOG(LogTemp, Warning, TEXT("Listening..."));
	//listener.Start(streamingDataPort);
	VPlistener.Start(RokokoPortNumber);
}

void ARokokoReceiver::StopListener()
{
	//listener.Stop();
	VPlistener.Stop();
	UE_LOG(LogTemp, Warning, TEXT("Not listening..."));
}

FFace ARokokoReceiver::GetFaceByFaceID(FString faceId)
{
	return VPlistener.GetFaceByFaceID(faceId);
}

FFace ARokokoReceiver::GetFaceByProfileName(const FString& faceName, bool& found)
{
	//return *VPlistener.GetFaceByProfileName(faceName);



	found = false;
	FFace returnval;
	FFace* temp = VPlistener.GetFaceByProfileName(faceName);
	if (temp)
	{
		returnval = *temp;
		found = true;
	}
	return returnval;
}

TArray<FFace> ARokokoReceiver::GetAllFaces()
{
	return VPlistener.GetAllFaces();
}

TArray<FFace> ARokokoReceiver::GetFacesNotAssociatedWithActor()
{
	TArray<FFace> FacesNotPairedWithSuit;
	for (auto CurrentFace : GetAllFaces())
	{
		bool FoundExistingProfileForFace = false;

		for (auto CurrentSuit : GetAllSmartsuits())
		{
			if (CurrentSuit.id == CurrentFace.profileName)
			{
				FoundExistingProfileForFace = true;
			}
		}

		if (!FoundExistingProfileForFace)
		{
			FacesNotPairedWithSuit.Add(CurrentFace);
		}
	}
	return FacesNotPairedWithSuit;
}

FSuitData* ARokokoReceiver::GetSmartsuit(FString suitName)
{
	return VPlistener.GetSmartsuitByName(suitName);
}

bool ARokokoReceiver::GetSmartsuitByName(const FString& suitName, FSuitData& SuitData)
{
	//return *VPlistener.GetSmartsuitByName(suitName);

	if (FSuitData* smartsuit = GetSmartsuit(suitName))
	{
		SuitData = *smartsuit;
		return true;
	}
	SuitData = FSuitData();
	return false;
}

TArray<FSuitData> ARokokoReceiver::GetAllSmartsuits()
{
	return VPlistener.GetAllSmartsuits();
}

TArray<FString> ARokokoReceiver::GetAvailableSmartsuitNames()
{
	return VPlistener.GetAvailableSmartsuitNames();
}


FProp* ARokokoReceiver::GetPropByNameFromVP(FString name, bool isLive)
{
	return VPlistener.GetPropByName(name, isLive);
}
PRAGMA_DISABLE_OPTIMIZATION
TArray<FProp> ARokokoReceiver::GetAllProps()
{
	TArray<FProp> result;
	//UE_LOG(LogTemp, Display, TEXT("Yeeee1"));
	bool found = false;
	int i = 0;
	for (TObjectIterator<ARokokoReceiver> It; It; ++It)
	{
		//UE_LOG(LogTemp, Display, TEXT("Looking up receiver %d"), i);
		i++;
		if (It->realLife)
		{
			found = true;
			//UE_LOG(LogTemp, Display, TEXT("Real life!"));
			result = It->VPlistener.GetAllProps();
		}
	}
	if (!found)
	{
		//UE_LOG(LogTemp, Display, TEXT("not Real life..."));
	}
	//UE_LOG(LogTemp, Display, TEXT("Yeeee2 %d"), result.Num());
	return result;
}
PRAGMA_ENABLE_OPTIMIZATION
bool ARokokoReceiver::GetProp(FString name, bool isLive, FProp& OutProp)
{
	//FProp result;
	//for (TObjectIterator<ARokokoReceiver> It; It; ++It)
	//{
	//	if (It->realLife)
	//	{
	//		result = *It->GetPropByNameFromVP(name, isLive);
	//	}
	//}
	//return result;

	if (FProp* prop = GetPropByNameFromVP(name, isLive))
	{
		OutProp = *prop;
		return true;
	}
	OutProp = FProp();
	return false;
}

FTracker* ARokokoReceiver::GetTrackerByNameFromVP(FString name, bool isLive)
{
	return VPlistener.GetTrackerByName(name, isLive);
}

FTracker ARokokoReceiver::GetTracker(FString name, bool isLive)
{
	FTracker result;
	for (TObjectIterator<ARokokoReceiver> It; It; ++It)
	{
		if (It->realLife)
		{
			result = *It->GetTrackerByNameFromVP(name, isLive);
		}
	}
	return result;
}

FTracker ARokokoReceiver::GetTrackerByConnectionIDFromVP(const FString& name, bool isLive, bool& found)
{
	found = false;
	FTracker returnval;
	FTracker* temp = VPlistener.GetTrackerByConnectionID(name, isLive);
	if (temp)
	{
		returnval = *temp;
		found = true;
	}
	return returnval;
}

void ARokokoReceiver::SetSupportsWiFiAPI(FString suitname)
{
	//listener.wifiSupportedSuits.Add(suitname);
}