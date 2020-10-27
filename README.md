<h2 align="center"> Rokoko Studio - Unreal Demo Project</h1>

[Rokoko Studio](https://www.rokoko.com/en/products/studio) is a powerful and intuitive software for recording, visualizing and exporting motion capture.

This Demo project let's you star up a scene with a character already set up for Rokoko Studio livestreaming for you to test out and learn how the Rokoko Studio Live works. 

---

## Requirements
- Unreal Engine 4.25.4
- Rokoko Studio 1.18.0b

## Featured in this demo project
- A charecter set up for body, finger and face data streaming from Rokoko Studio
- Virtual camera setup
- Props ready to add to your tracker inside Rokoko Studio

---

This demo project for Unreal contains a more advanced setup with [HTC Vive integration](https://www.rokoko.com/en/products/virtual-production) 
and Virtual Camera use and streaming using the [Rokoko Remote App](https://apps.apple.com/us/app/rokoko-remote/id1465692290). 

The project comes with dependencies for the plugins "Rokoko Live", "SteamVR" and "VirtualCamera".

![Unrel Viewport ](Images/unrealViewport.PNG?raw=true)

If you want to learn more about the basics of setting up a Smartsuit with Unreal Engine, you can watch this tutorial: https://www.youtube.com/watch?v=ibawBo0d4gk
Or you can browse the tutorials on https://www.rokoko.com/


## Getting Started for Streaming

In order to use face and tracker information, you'll first need to setup a connection between Rokoko Studio and Unreal Engine through Live Link. This is the format we currently stream the information for face and trackers in, though you can still use the suit without Live Link. 

In Rokoko Studio, set up live streaming as normal. For the unreal project we are using the port 14043 for suits and 14045 for virtual production. 

In Unreal, go to window - Live Link. Add a source, and choose "Rokoko Studio Source". Choose "Studio", and click "Okay". 

Rokoko is now streaming any live suits/trackers/faces, and Unreal Engine is now looking for the live link stream whenever play mode in the editor is activated. 

## Virtual Camera Setup

In Studio, connect to steamVR and add trackers. Assign one of these trackers to any prop. Now the tracker data is being streamed to Unreal via Live Link

If you want to use the virtual camera, you have to change the gamemode to VirtualCameraGamemode (or SiggraphVirtualCameraGameMode). In order to control what prop from Studio is currently controlling the tracker, open up the VirtualCameraPlayerController (or SiggraphVirtualCameraGameMode) in your content browser. In here, you can change the class defaults "Input source" to "Live Link", and state a Live Link Target Name (You can see the valid targets inside the Live Link window while playing). 

For siggraph we used a custom virtual camera, that has some gamepad controls for controlling the scene. If you want to check these controls out, they are defined in the input manager under project settings. 
If using the siggraphCamera, you also need to open up the level blueprint, and reconnect BeginPlay to the loose nodes (They tell the siggraphcamera where to find certain actors). The siggraph version of the virtual camera does not work in packaged builds. 

If you want Box-1 from Studio to control the virtual camera, you have to change the target name to prop:L:Box-1 for example

