// Class CreativeEditCameraModeRuntime.FortPawnComponent_CreativeEditCameraMode
// Size: 0xf0 (Inherited: 0xa0)
struct UFortPawnComponent_CreativeEditCameraMode : UFortPawnComponent {
	float CameraBlendSwitchMeshTime; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct UFortCameraMode* ImmersiveCameraModeClass; // 0xa8(0x08)
	struct FCreativeOptionVariableBase WantsToImmersiveEdit; // 0xb0(0x08)
	bool bIsImmersiveModeEnabled; // 0xb8(0x01)
	char pad_B9[0x37]; // 0xb9(0x37)

	void ServerSetImmersiveEdit(bool bWantsToImmersiveEdit, bool bIsCreativeEditModeEnabled); // Function CreativeEditCameraModeRuntime.FortPawnComponent_CreativeEditCameraMode.ServerSetImmersiveEdit // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x674f2d0
	void RestrictImmersiveMode(); // Function CreativeEditCameraModeRuntime.FortPawnComponent_CreativeEditCameraMode.RestrictImmersiveMode // (Final|Native|Private) // @ game+0x24841e4
	void OnWantsToImmersiveEditChanged(struct UFortCreativeOption* CreativeOption, char IndexValue); // Function CreativeEditCameraModeRuntime.FortPawnComponent_CreativeEditCameraMode.OnWantsToImmersiveEditChanged // (Final|Native|Private) // @ game+0x674f20c
	void OnRep_IsImmersiveModeEnabled(); // Function CreativeEditCameraModeRuntime.FortPawnComponent_CreativeEditCameraMode.OnRep_IsImmersiveModeEnabled // (Final|Native|Private) // @ game+0x674f1f8
	void OnCreativeEditModeChanged(bool bIsCreativeEditModeEnabled); // Function CreativeEditCameraModeRuntime.FortPawnComponent_CreativeEditCameraMode.OnCreativeEditModeChanged // (Final|Native|Private) // @ game+0x674f178
	void HandleWeaponEquipped(struct AFortWeapon* NewWeapon, struct AFortWeapon* PrevWeapon); // Function CreativeEditCameraModeRuntime.FortPawnComponent_CreativeEditCameraMode.HandleWeaponEquipped // (Final|Native|Private) // @ game+0x674f0b4
	void BindVehicleEvents(struct APawn* Pawn, struct AController* OldController, struct AController* NewController); // Function CreativeEditCameraModeRuntime.FortPawnComponent_CreativeEditCameraMode.BindVehicleEvents // (Final|Native|Private) // @ game+0x674efd0
	void AllowImmersiveMode(); // Function CreativeEditCameraModeRuntime.FortPawnComponent_CreativeEditCameraMode.AllowImmersiveMode // (Final|Native|Private) // @ game+0x24841e4
};

