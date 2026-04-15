# GTA-Style Game Prototype - Project Structure

This folder contains the core scripts and assets for your cross-platform GTA-style game.

## Directory Overview

- **/Unity**: Contains the C# script for a Third-Person Player Controller.
  - `TPSPlayerController.cs`: Handles WASD movement, Space for jumping, and 'F' for raycast-based vehicle interaction.
- **/UE5**: Contains the C++ source and header files for an Unreal Engine 5 Character.
  - `OpenWorldCharacter.h` & `OpenWorldCharacter.cpp`: Implements input handling and a line-trace system (F key) to detect and possess vehicles.
- **/Web**: A standalone Three.js prototype.
  - `index.html`: Open this in any browser to test a 3D environment with physics (Cannon.js), movement, and interaction logic.
- **/Assets**: High-quality generated concepts.
  - `CharacterConcept.png`: The GTA San Andreas style character design.
  - `MiamiSkybox.png`: A 360-degree night skybox of Miami for your environment maps.

## How to use the Skybox
1. **Unity**: Import `MiamiSkybox.png`. Change Texture Shape to **Cube**. Create a new Material, set Shader to **Skybox/Cubemap**, and assign the texture.
2. **UE5**: Create a **Texture Cube** asset or use it in a **Post Process Volume** cubemap slot.

## Note on 3D Models
As an AI, I cannot directly export binary mesh files like `.FBX` or `.GLB`. The `CharacterConcept.png` serves as your visual reference for modeling or AI-assisted mesh generation tools.
