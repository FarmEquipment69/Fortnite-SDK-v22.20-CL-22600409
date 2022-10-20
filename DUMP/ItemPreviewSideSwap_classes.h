// BlueprintGeneratedClass ItemPreviewSideSwap.ItemPreviewSideSwap_C
// Size: 0x548 (Inherited: 0x3c8)
struct AItemPreviewSideSwap_C : AItemPreviewSwapper {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c8(0x08)
	struct UPostProcessComponent* PostProcess_Mobile; // 0x3d0(0x08)
	struct USkyLightComponent* SkyLightLowMobile; // 0x3d8(0x08)
	struct USkyLightComponent* SkyLight; // 0x3e0(0x08)
	struct USkyLightComponent* SkyLight_LOWPC; // 0x3e8(0x08)
	struct UArrowComponent* Arrow; // 0x3f0(0x08)
	struct UPostProcessComponent* PostProcess_LOWPC; // 0x3f8(0x08)
	struct UDirectionalLightComponent* DirectionalLight_LOWPC; // 0x400(0x08)
	struct UDirectionalLightComponent* DirectionalLightMobile; // 0x408(0x08)
	struct USceneComponent* DirectionalLights; // 0x410(0x08)
	struct USceneComponent* GenericLighting; // 0x418(0x08)
	float Timeline_1_RotationOffsetLerp_F81FDC884C74C17EBF78B0B928138870; // 0x420(0x04)
	enum class ETimelineDirection Timeline_1__Direction_F81FDC884C74C17EBF78B0B928138870; // 0x424(0x01)
	char pad_425[0x3]; // 0x425(0x03)
	struct UTimelineComponent* ; // 0x428(0x08)
	float Timeline_0_ZoomLevel_F92CF88A423F8300F5A67CB744A0DA45; // 0x430(0x04)
	enum class ETimelineDirection Timeline_0__Direction_F92CF88A423F8300F5A67CB744A0DA45; // 0x434(0x01)
	char pad_435[0x3]; // 0x435(0x03)
	struct UTimelineComponent* ; // 0x438(0x08)
	struct FVector MoveOutRight_Location_89D9209D4024EFFF08326CBAE53949F1; // 0x440(0x18)
	enum class ETimelineDirection MoveOutRight__Direction_89D9209D4024EFFF08326CBAE53949F1; // 0x458(0x01)
	char pad_459[0x7]; // 0x459(0x07)
	struct UTimelineComponent* MoveOutRight; // 0x460(0x08)
	struct FVector MoveInRight_Location_3FE1D8EB4B6BCBA0C3D120B521728FCE; // 0x468(0x18)
	enum class ETimelineDirection MoveInRight__Direction_3FE1D8EB4B6BCBA0C3D120B521728FCE; // 0x480(0x01)
	char pad_481[0x7]; // 0x481(0x07)
	struct UTimelineComponent* MoveInRight; // 0x488(0x08)
	struct FVector MoveInLeft_Location_B344DA1A46B3CB2F19E2E0A1F7E36A47; // 0x490(0x18)
	enum class ETimelineDirection MoveInLeft__Direction_B344DA1A46B3CB2F19E2E0A1F7E36A47; // 0x4a8(0x01)
	char pad_4A9[0x7]; // 0x4a9(0x07)
	struct UTimelineComponent* MoveInLeft; // 0x4b0(0x08)
	struct FVector MoveOutLeft_Location_6890893D4037128B5CB3B2AE9A4AE0A1; // 0x4b8(0x18)
	enum class ETimelineDirection MoveOutLeft__Direction_6890893D4037128B5CB3B2AE9A4AE0A1; // 0x4d0(0x01)
	char pad_4D1[0x7]; // 0x4d1(0x07)
	struct UTimelineComponent* MoveOutLeft; // 0x4d8(0x08)
	bool DebugMobile Lighting; // 0x4e0(0x01)
	bool DebugLightingPC; // 0x4e1(0x01)
	bool IsActive; // 0x4e2(0x01)
	bool AlwaysOn; // 0x4e3(0x01)
	bool DebugLighting_LOWDetailPC; // 0x4e4(0x01)
	char pad_4E5[0x3]; // 0x4e5(0x03)
	struct FMulticastInlineDelegate On New Item Spawned; // 0x4e8(0x10)
	double CurrentZoomLevel; // 0x4f8(0x08)
	double TargetZoomLevel; // 0x500(0x08)
	struct FRotator TargetRotationOffset; // 0x508(0x18)
	struct FRotator OrigRotationOffset; // 0x520(0x18)
	struct UFortAccountItemDefinition* Primary Requested Item; // 0x538(0x08)
	struct UFortAccountItemDefinition* Previous Requested Item; // 0x540(0x08)

	void PlaySwipeSound(struct USoundBase* sound); // Function ItemPreviewSideSwap.ItemPreviewSideSwap_C.PlaySwipeSound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void LightControl(bool Active); // Function ItemPreviewSideSwap.ItemPreviewSideSwap_C.LightControl // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SwitchPCLighting(bool Visibility); // Function ItemPreviewSideSwap.ItemPreviewSideSwap_C.SwitchPCLighting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SwitchPCLighting_LOWDetail(bool Visibility); // Function ItemPreviewSideSwap.ItemPreviewSideSwap_C.SwitchPCLighting_LOWDetail // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SwitchMobileLighting(bool Visibility); // Function ItemPreviewSideSwap.ItemPreviewSideSwap_C.SwitchMobileLighting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void MoveOutLeft__FinishedFunc(); // Function ItemPreviewSideSwap.ItemPreviewSideSwap_C.MoveOutLeft__FinishedFunc // (BlueprintEvent) // @ game+0xd67374
	void MoveOutLeft__UpdateFunc(); // Function ItemPreviewSideSwap.ItemPreviewSideSwap_C.MoveOutLeft__UpdateFunc // (BlueprintEvent) // @ game+0xd67374
	void MoveInLeft__FinishedFunc(); // Function ItemPreviewSideSwap.ItemPreviewSideSwap_C.MoveInLeft__FinishedFunc // (BlueprintEvent) // @ game+0xd67374
	void MoveInLeft__UpdateFunc(); // Function ItemPreviewSideSwap.ItemPreviewSideSwap_C.MoveInLeft__UpdateFunc // (BlueprintEvent) // @ game+0xd67374
	void MoveInRight__FinishedFunc(); // Function ItemPreviewSideSwap.ItemPreviewSideSwap_C.MoveInRight__FinishedFunc // (BlueprintEvent) // @ game+0xd67374
	void MoveInRight__UpdateFunc(); // Function ItemPreviewSideSwap.ItemPreviewSideSwap_C.MoveInRight__UpdateFunc // (BlueprintEvent) // @ game+0xd67374
	void MoveOutRight__FinishedFunc(); // Function ItemPreviewSideSwap.ItemPreviewSideSwap_C.MoveOutRight__FinishedFunc // (BlueprintEvent) // @ game+0xd67374
	void MoveOutRight__UpdateFunc(); // Function ItemPreviewSideSwap.ItemPreviewSideSwap_C.MoveOutRight__UpdateFunc // (BlueprintEvent) // @ game+0xd67374
	void Timeline_0__FinishedFunc(); // Function ItemPreviewSideSwap.ItemPreviewSideSwap_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0xd67374
	void Timeline_0__UpdateFunc(); // Function ItemPreviewSideSwap.ItemPreviewSideSwap_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0xd67374
	void Timeline_1__FinishedFunc(); // Function ItemPreviewSideSwap.ItemPreviewSideSwap_C.Timeline_1__FinishedFunc // (BlueprintEvent) // @ game+0xd67374
	void Timeline_1__UpdateFunc(); // Function ItemPreviewSideSwap.ItemPreviewSideSwap_C.Timeline_1__UpdateFunc // (BlueprintEvent) // @ game+0xd67374
	void ReceiveBeginPlay(); // Function ItemPreviewSideSwap.ItemPreviewSideSwap_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnReadyToSwap(struct UFortAccountItemDefinition* PrimaryRequestedItem, struct FSceneTransitionOptions& Options); // Function ItemPreviewSideSwap.ItemPreviewSideSwap_C.OnReadyToSwap // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnNewSceneRequested(struct UFortAccountItemDefinition* PrimaryRequestedItem, struct FSceneTransitionOptions& TransitionOptions); // Function ItemPreviewSideSwap.ItemPreviewSideSwap_C.OnNewSceneRequested // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void UpdateSettings(); // Function ItemPreviewSideSwap.ItemPreviewSideSwap_C.UpdateSettings // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnTargetZoomLevelSet(float TargetZoomLevel); // Function ItemPreviewSideSwap.ItemPreviewSideSwap_C.OnTargetZoomLevelSet // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnTargetRotationOffsetSet(struct FRotator& TargetRotationOffset); // Function ItemPreviewSideSwap.ItemPreviewSideSwap_C.OnTargetRotationOffsetSet // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_ItemPreviewSideSwap(int32_t EntryPoint); // Function ItemPreviewSideSwap.ItemPreviewSideSwap_C.ExecuteUbergraph_ItemPreviewSideSwap // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
	void On New Item Spawned__DelegateSignature(bool Should Show Floor); // Function ItemPreviewSideSwap.ItemPreviewSideSwap_C.On New Item Spawned__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

