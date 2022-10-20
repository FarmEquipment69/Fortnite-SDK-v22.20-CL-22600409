// BlueprintGeneratedClass WrapPreview.WrapPreview_C
// Size: 0x5d4 (Inherited: 0x520)
struct AWrapPreview_C : AAthenaWrapPreviewActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x520(0x08)
	struct USkyLightComponent* SkyLightPC; // 0x528(0x08)
	struct USkeletalMeshComponent* AssaultRiflePreview; // 0x530(0x08)
	struct USkeletalMeshComponent* MechPreview; // 0x538(0x08)
	struct USkyLightComponent* SkyLightLowMobile; // 0x540(0x08)
	struct UArrowComponent* Arrow; // 0x548(0x08)
	struct UDirectionalLightComponent* DirectionalLightMobile; // 0x550(0x08)
	struct USpotLightComponent* KeyLight_StandaloneForSwitch; // 0x558(0x08)
	struct USpotLightComponent* KeyLigh4; // 0x560(0x08)
	struct USpotLightComponent* KeyLight7; // 0x568(0x08)
	struct USpotLightComponent* KeyLight8; // 0x570(0x08)
	struct USpotLightComponent* KeyLight3; // 0x578(0x08)
	struct USpotLightComponent* RimLowerRight2; // 0x580(0x08)
	struct USpotLightComponent* RimLeft2; // 0x588(0x08)
	struct USpotLightComponent* Bounce2; // 0x590(0x08)
	struct USpotLightComponent* BounceRear2; // 0x598(0x08)
	struct USpotLightComponent* RimTopRight2; // 0x5a0(0x08)
	struct USpotLightComponent* RimBottomLeft2; // 0x5a8(0x08)
	struct USceneComponent* LightingPivot; // 0x5b0(0x08)
	struct UStaticMeshComponent* Plane; // 0x5b8(0x08)
	bool bLightsScaledForVehicle; // 0x5c0(0x01)
	char pad_5C1[0x7]; // 0x5c1(0x07)
	double DeltaScale; // 0x5c8(0x08)
	bool IsActive; // 0x5d0(0x01)
	bool AlwaysOn; // 0x5d1(0x01)
	bool FloorEverAllowed; // 0x5d2(0x01)
	bool debugConstructionLighting; // 0x5d3(0x01)

	void UpdateFloorVisibility(); // Function WrapPreview.WrapPreview_C.UpdateFloorVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SwitchErebusLighting(bool Visibility); // Function WrapPreview.WrapPreview_C.SwitchErebusLighting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateLightingScale(); // Function WrapPreview.WrapPreview_C.UpdateLightingScale // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetFloorEnabled(bool Floor Enabled); // Function WrapPreview.WrapPreview_C.SetFloorEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void LightControl(bool Active); // Function WrapPreview.WrapPreview_C.LightControl // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SwitchPCLighting(bool Visibility); // Function WrapPreview.WrapPreview_C.SwitchPCLighting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SwitchMobileLighting(bool NewParam); // Function WrapPreview.WrapPreview_C.SwitchMobileLighting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleLightingScale(); // Function WrapPreview.WrapPreview_C.HandleLightingScale // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateSettings(); // Function WrapPreview.WrapPreview_C.UpdateSettings // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnSetFloorMaterial(struct UMaterialInterface* InMaterialInstance); // Function WrapPreview.WrapPreview_C.OnSetFloorMaterial // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnPreviewVisualsSpawned(bool bUseSecondaryTransitionEffects, bool bShowFloor); // Function WrapPreview.WrapPreview_C.OnPreviewVisualsSpawned // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnUpdateFloorMaterial(bool bEnableAutotestBackground); // Function WrapPreview.WrapPreview_C.OnUpdateFloorMaterial // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_WrapPreview(int32_t EntryPoint); // Function WrapPreview.WrapPreview_C.ExecuteUbergraph_WrapPreview // (Final|UbergraphFunction) // @ game+0xd67374
};

