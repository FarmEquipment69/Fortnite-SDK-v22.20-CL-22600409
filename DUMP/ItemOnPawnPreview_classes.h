// BlueprintGeneratedClass ItemOnPawnPreview.ItemOnPawnPreview_C
// Size: 0x758 (Inherited: 0x660)
struct AItemOnPawnPreview_C : AFortItemPreviewOnPawnActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x660(0x08)
	struct UArrowComponent* Arrow1; // 0x668(0x08)
	struct UDirectionalLightComponent* Directional Light For Atmosphere_PC; // 0x670(0x08)
	struct USkyLightComponent* SkyLightPC; // 0x678(0x08)
	struct UArrowComponent* Arrow; // 0x680(0x08)
	struct USkyLightComponent* SkyLightLowMobile; // 0x688(0x08)
	struct UDirectionalLightComponent* DirectionalLightMobile; // 0x690(0x08)
	struct USpotLightComponent* KeyLight_StandaloneForSwitch; // 0x698(0x08)
	struct USpotLightComponent* KeyLight5; // 0x6a0(0x08)
	struct USpotLightComponent* KeyLight6; // 0x6a8(0x08)
	struct USpotLightComponent* KeyLigh3; // 0x6b0(0x08)
	struct USpotLightComponent* KeyLight2; // 0x6b8(0x08)
	struct USpotLightComponent* BounceRear1; // 0x6c0(0x08)
	struct USpotLightComponent* RimLowerRight1; // 0x6c8(0x08)
	struct USpotLightComponent* RimLeft1; // 0x6d0(0x08)
	struct USpotLightComponent* RimTopRight1; // 0x6d8(0x08)
	struct USpotLightComponent* RimBottomLeft1; // 0x6e0(0x08)
	struct USpotLightComponent* Bounce1; // 0x6e8(0x08)
	struct USceneComponent* LightTransform; // 0x6f0(0x08)
	struct UStaticMeshComponent* Plane; // 0x6f8(0x08)
	struct USkeletalMeshComponent* Sample Mesh; // 0x700(0x08)
	bool AlwaysOn; // 0x708(0x01)
	bool IsActive; // 0x709(0x01)
	bool debugConstructionLighting; // 0x70a(0x01)
	char pad_70B[0x5]; // 0x70b(0x05)
	struct UParticleSystemComponent* ObscuringLoopEmitter; // 0x710(0x08)
	struct FRotator ToonLightRotatio; // 0x718(0x18)
	bool bIsBattlePassReward; // 0x730(0x01)
	char pad_731[0x7]; // 0x731(0x07)
	struct FTimerHandle LOD_StreamingSafetyTimer; // 0x738(0x08)
	double LOD_StreamingSafetyDuration; // 0x740(0x08)
	struct UMaterialInterface* DefaultFloorMaterial; // 0x748(0x08)
	struct UMaterialInterface* CustomFloorMaterial; // 0x750(0x08)

	void SwitchErebusLighting(bool Visibility); // Function ItemOnPawnPreview.ItemOnPawnPreview_C.SwitchErebusLighting // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetFloorEnabled(bool Show Floor); // Function ItemOnPawnPreview.ItemOnPawnPreview_C.SetFloorEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void LightControl(bool Active); // Function ItemOnPawnPreview.ItemOnPawnPreview_C.LightControl // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SwitchPCLighting(bool Visibility); // Function ItemOnPawnPreview.ItemOnPawnPreview_C.SwitchPCLighting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SwitchMobileLighting(bool NewParam); // Function ItemOnPawnPreview.ItemOnPawnPreview_C.SwitchMobileLighting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnPreviewVisualsSpawned(bool bUseSecondaryTransitionEffects, bool bShowFloor); // Function ItemOnPawnPreview.ItemOnPawnPreview_C.OnPreviewVisualsSpawned // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ReceiveBeginPlay(); // Function ItemOnPawnPreview.ItemOnPawnPreview_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void UpdateSettings(); // Function ItemOnPawnPreview.ItemOnPawnPreview_C.UpdateSettings // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnSetFloorMaterial(struct UMaterialInterface* InMaterialInstance); // Function ItemOnPawnPreview.ItemOnPawnPreview_C.OnSetFloorMaterial // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnAllLODStreamingComplete(); // Function ItemOnPawnPreview.ItemOnPawnPreview_C.OnAllLODStreamingComplete // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnCurrentVisualsCleanedUp(); // Function ItemOnPawnPreview.ItemOnPawnPreview_C.OnCurrentVisualsCleanedUp // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnUpdateFloorMaterial(bool bEnableAutotestBackground); // Function ItemOnPawnPreview.ItemOnPawnPreview_C.OnUpdateFloorMaterial // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void Backup_LODStreamingFailed(); // Function ItemOnPawnPreview.ItemOnPawnPreview_C.Backup_LODStreamingFailed // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_ItemOnPawnPreview(int32_t EntryPoint); // Function ItemOnPawnPreview.ItemOnPawnPreview_C.ExecuteUbergraph_ItemOnPawnPreview // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

