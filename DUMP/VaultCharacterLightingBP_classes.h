// BlueprintGeneratedClass VaultCharacterLightingBP.VaultCharacterLightingBP_C
// Size: 0x358 (Inherited: 0x288)
struct AVaultCharacterLightingBP_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UArrowComponent* Arrow1; // 0x290(0x08)
	struct USpotLightComponent* KeyLight4; // 0x298(0x08)
	struct USpotLightComponent* KeyLight3; // 0x2a0(0x08)
	struct USpotLightComponent* KeyLight2; // 0x2a8(0x08)
	struct UPostProcessComponent* PostProcess_Mobile; // 0x2b0(0x08)
	struct UPostProcessComponent* PostProcess_LOWPC; // 0x2b8(0x08)
	struct USkyLightComponent* SkyLight_LOWPC; // 0x2c0(0x08)
	struct UDirectionalLightComponent* DirectionalLight_LOWPC; // 0x2c8(0x08)
	struct UArrowComponent* Arrow; // 0x2d0(0x08)
	struct UDirectionalLightComponent* DirectionalLightMobile; // 0x2d8(0x08)
	struct USkyLightComponent* SkyLightLowMobil; // 0x2e0(0x08)
	struct USkyLightComponent* SkyLight; // 0x2e8(0x08)
	struct USpotLightComponent* RimLowerRight; // 0x2f0(0x08)
	struct USpotLightComponent* RimLeft; // 0x2f8(0x08)
	struct USpotLightComponent* RimTopRight; // 0x300(0x08)
	struct USpotLightComponent* RimBottomLeft; // 0x308(0x08)
	struct USpotLightComponent* KeyLight; // 0x310(0x08)
	struct USpotLightComponent* Bounce; // 0x318(0x08)
	struct USpotLightComponent* BounceRear; // 0x320(0x08)
	struct USceneComponent* SharedRoot; // 0x328(0x08)
	bool DebugMobile Lighting; // 0x330(0x01)
	bool DebugLightingPC; // 0x331(0x01)
	bool IsActive; // 0x332(0x01)
	bool AlwaysOn; // 0x333(0x01)
	bool DebugLighting_LOWDetailPC; // 0x334(0x01)
	char pad_335[0x3]; // 0x335(0x03)
	struct FLinearColor MPC-ManualSunlightVector; // 0x338(0x10)
	struct FLinearColor MPC-ManualSunlightColor; // 0x348(0x10)

	void SwitchPCLighting_LOWDetail(bool Visibility); // Function VaultCharacterLightingBP.VaultCharacterLightingBP_C.SwitchPCLighting_LOWDetail // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SwitchPCLighting(bool Visibility); // Function VaultCharacterLightingBP.VaultCharacterLightingBP_C.SwitchPCLighting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SwitchMobileLighting(bool Visibilty); // Function VaultCharacterLightingBP.VaultCharacterLightingBP_C.SwitchMobileLighting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UserConstructionScript(); // Function VaultCharacterLightingBP.VaultCharacterLightingBP_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateSettings(); // Function VaultCharacterLightingBP.VaultCharacterLightingBP_C.UpdateSettings // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ToggleLighting(); // Function VaultCharacterLightingBP.VaultCharacterLightingBP_C.ToggleLighting // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OVERRIDELIGHTING(); // Function VaultCharacterLightingBP.VaultCharacterLightingBP_C.OVERRIDELIGHTING // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void LightControl(bool NewParam); // Function VaultCharacterLightingBP.VaultCharacterLightingBP_C.LightControl // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ReceiveBeginPlay(); // Function VaultCharacterLightingBP.VaultCharacterLightingBP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_VaultCharacterLightingBP(int32_t EntryPoint); // Function VaultCharacterLightingBP.VaultCharacterLightingBP_C.ExecuteUbergraph_VaultCharacterLightingBP // (Final|UbergraphFunction) // @ game+0xd67374
};

