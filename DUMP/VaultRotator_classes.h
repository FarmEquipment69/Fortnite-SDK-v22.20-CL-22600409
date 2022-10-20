// BlueprintGeneratedClass VaultRotator.VaultRotator_C
// Size: 0x540 (Inherited: 0x3c0)
struct AVaultRotator_C : AItemPreviewRotator {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c0(0x08)
	struct UDirectionalLightComponent* DirectionalLightMobile; // 0x3c8(0x08)
	struct UDirectionalLightComponent* DirectionalLight_LOWPC; // 0x3d0(0x08)
	struct USceneComponent* DirectionalLights; // 0x3d8(0x08)
	struct USkyLightComponent* SkyLightLowMobile; // 0x3e0(0x08)
	struct USkyLightComponent* SkyLight; // 0x3e8(0x08)
	struct USkyLightComponent* SkyLight_LOWPC; // 0x3f0(0x08)
	struct UArrowComponent* Arrow; // 0x3f8(0x08)
	struct UPostProcessComponent* PostProcess_Mobile; // 0x400(0x08)
	struct UPostProcessComponent* PostProcess_LOWPC; // 0x408(0x08)
	struct USceneComponent* GenericLighting; // 0x410(0x08)
	float Timeline_Zoom_ZoomLevel_6FFD6729471BD965D850258DA1C0AF39; // 0x418(0x04)
	enum class ETimelineDirection Timeline_Zoom__Direction_6FFD6729471BD965D850258DA1C0AF39; // 0x41c(0x01)
	char pad_41D[0x3]; // 0x41d(0x03)
	struct UTimelineComponent* Timeline_Zoom; // 0x420(0x08)
	struct FVector CameraTurn_180_to_360_CameraRotationOffset_DF51680448A0BDB5D459C9BB5786D714; // 0x428(0x18)
	struct FVector CameraTurn_180_to_360_CameraPositionOffset_DF51680448A0BDB5D459C9BB5786D714; // 0x440(0x18)
	float CameraTurn_180_to_360_DirectionRotation_DF51680448A0BDB5D459C9BB5786D714; // 0x458(0x04)
	float CameraTurn_180_to_360_FoV_DF51680448A0BDB5D459C9BB5786D714; // 0x45c(0x04)
	enum class ETimelineDirection CameraTurn_180_to_360__Direction_DF51680448A0BDB5D459C9BB5786D714; // 0x460(0x01)
	char pad_461[0x7]; // 0x461(0x07)
	struct UTimelineComponent* ; // 0x468(0x08)
	struct FVector CameraTurn_0_to_180_CameraRotationOffset_EEFFCB9D4EE2DC181BC00CBD7C0E7EF0; // 0x470(0x18)
	struct FVector CameraTurn_0_to_180_CameraPositionOffset_EEFFCB9D4EE2DC181BC00CBD7C0E7EF0; // 0x488(0x18)
	float CameraTurn_0_to_180_DirectionalRotation_EEFFCB9D4EE2DC181BC00CBD7C0E7EF0; // 0x4a0(0x04)
	float CameraTurn_0_to_180_FoV_EEFFCB9D4EE2DC181BC00CBD7C0E7EF0; // 0x4a4(0x04)
	enum class ETimelineDirection CameraTurn_0_to_180__Direction_EEFFCB9D4EE2DC181BC00CBD7C0E7EF0; // 0x4a8(0x01)
	char pad_4A9[0x7]; // 0x4a9(0x07)
	struct UTimelineComponent* ; // 0x4b0(0x08)
	char pad_4B8[0x8]; // 0x4b8(0x08)
	struct FTransform InitialCameraTransform; // 0x4c0(0x60)
	struct USoundBase* ClockwiseSound; // 0x520(0x08)
	struct USoundBase* CounterClockwiseSound; // 0x528(0x08)
	bool DebugMobile Lighting; // 0x530(0x01)
	bool DebugLightingPC; // 0x531(0x01)
	bool IsActive; // 0x532(0x01)
	bool AlwaysOn; // 0x533(0x01)
	bool DebugLighting_LOWDetailPC; // 0x534(0x01)
	char pad_535[0x3]; // 0x535(0x03)
	double TargetZoomLevel; // 0x538(0x08)

	void PlaySoundWhenEnabled(struct USoundBase* sound); // Function VaultRotator.VaultRotator_C.PlaySoundWhenEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetBackgroundColor(struct FLinearColor RGBA0, struct FLinearColor RGBA1); // Function VaultRotator.VaultRotator_C.SetBackgroundColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ToggleBackgroundText(bool bDisplayText); // Function VaultRotator.VaultRotator_C.ToggleBackgroundText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void LightControl(bool Active); // Function VaultRotator.VaultRotator_C.LightControl // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SwitchPCLighting(bool Visibility); // Function VaultRotator.VaultRotator_C.SwitchPCLighting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SwitchPCLighting_LOWDetail(bool Visibility); // Function VaultRotator.VaultRotator_C.SwitchPCLighting_LOWDetail // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SwitchMobileLighting(bool Visibility); // Function VaultRotator.VaultRotator_C.SwitchMobileLighting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetBackgroundString(struct FText CustomText); // Function VaultRotator.VaultRotator_C.SetBackgroundString // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void CameraTurn_0_to_180__FinishedFunc(); // Function VaultRotator.VaultRotator_C.CameraTurn_0_to_180__FinishedFunc // (BlueprintEvent) // @ game+0xd67374
	void CameraTurn_0_to_180__UpdateFunc(); // Function VaultRotator.VaultRotator_C.CameraTurn_0_to_180__UpdateFunc // (BlueprintEvent) // @ game+0xd67374
	void CameraTurn_180_to_360__FinishedFunc(); // Function VaultRotator.VaultRotator_C.CameraTurn_180_to_360__FinishedFunc // (BlueprintEvent) // @ game+0xd67374
	void CameraTurn_180_to_360__UpdateFunc(); // Function VaultRotator.VaultRotator_C.CameraTurn_180_to_360__UpdateFunc // (BlueprintEvent) // @ game+0xd67374
	void Timeline_Zoom__FinishedFunc(); // Function VaultRotator.VaultRotator_C.Timeline_Zoom__FinishedFunc // (BlueprintEvent) // @ game+0xd67374
	void Timeline_Zoom__UpdateFunc(); // Function VaultRotator.VaultRotator_C.Timeline_Zoom__UpdateFunc // (BlueprintEvent) // @ game+0xd67374
	void ReceiveBeginPlay(); // Function VaultRotator.VaultRotator_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void UpdateSettings(); // Function VaultRotator.VaultRotator_C.UpdateSettings // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnCameraTransitionReady(bool bPrimaryToSecondary, struct UFortAccountItemDefinition* PrimaryRequestedItem, struct FSceneTransitionOptions& Options); // Function VaultRotator.VaultRotator_C.OnCameraTransitionReady // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnTargetZoomLevelSet(float TargetZoomLevel); // Function VaultRotator.VaultRotator_C.OnTargetZoomLevelSet // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnSetBackgroundMessageText(struct FText& BackgroundMessageText); // Function VaultRotator.VaultRotator_C.OnSetBackgroundMessageText // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnUpdateBackgroundColor(bool bEnableAutotestBackground); // Function VaultRotator.VaultRotator_C.OnUpdateBackgroundColor // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_VaultRotator(int32_t EntryPoint); // Function VaultRotator.VaultRotator_C.ExecuteUbergraph_VaultRotator // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

