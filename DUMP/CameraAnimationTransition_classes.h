// BlueprintGeneratedClass CameraAnimationTransition.CameraAnimationTransition_C
// Size: 0x3a0 (Inherited: 0x288)
struct ACameraAnimationTransition_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x290(0x08)
	float Timeline_0_NewTrack_0_2750533A46B9AEF2BE294F8153FE4FD4; // 0x298(0x04)
	enum class ETimelineDirection Timeline_0__Direction_2750533A46B9AEF2BE294F8153FE4FD4; // 0x29c(0x01)
	char pad_29D[0x3]; // 0x29d(0x03)
	struct UTimelineComponent* ; // 0x2a0(0x08)
	struct AFortnitePartyBackdrop_Camera_C* CameraBR; // 0x2a8(0x08)
	struct FTransform CameraLocationBR; // 0x2b0(0x60)
	struct AFortnitePartyBackdrop_Camera_C* CameraBR16Player; // 0x310(0x08)
	struct AFortnitePartyBackdrop_Camera_C* CameraCreative; // 0x318(0x08)
	struct AFortnitePartyBackdrop_Camera_C* CameraCreative16Player; // 0x320(0x08)
	char pad_328[0x8]; // 0x328(0x08)
	struct FTransform CameraLocationCreative; // 0x330(0x60)
	double FOVPostion1; // 0x390(0x08)
	double FOVPostion2; // 0x398(0x08)

	void UserConstructionScript(); // Function CameraAnimationTransition.CameraAnimationTransition_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Timeline_0__FinishedFunc(); // Function CameraAnimationTransition.CameraAnimationTransition_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0xd67374
	void Timeline_0__UpdateFunc(); // Function CameraAnimationTransition.CameraAnimationTransition_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0xd67374
	void MoveCameraUp(); // Function CameraAnimationTransition.CameraAnimationTransition_C.MoveCameraUp // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void MoveCameraDown(); // Function CameraAnimationTransition.CameraAnimationTransition_C.MoveCameraDown // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_CameraAnimationTransition(int32_t EntryPoint); // Function CameraAnimationTransition.CameraAnimationTransition_C.ExecuteUbergraph_CameraAnimationTransition // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

