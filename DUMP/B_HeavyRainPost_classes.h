// BlueprintGeneratedClass B_HeavyRainPost.B_HeavyRainPost_C
// Size: 0x2b0 (Inherited: 0x288)
struct AB_HeavyRainPost_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UPostProcessComponent* PostProcess; // 0x290(0x08)
	float Timeline_0_NewTrack_0_94328C264A3D77D59B39B9A6A4A4A124; // 0x298(0x04)
	enum class ETimelineDirection Timeline_0__Direction_94328C264A3D77D59B39B9A6A4A4A124; // 0x29c(0x01)
	char pad_29D[0x3]; // 0x29d(0x03)
	struct UTimelineComponent* ; // 0x2a0(0x08)
	struct UMaterialInstanceDynamic* PP_MID; // 0x2a8(0x08)

	void UserConstructionScript(); // Function B_HeavyRainPost.B_HeavyRainPost_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Timeline_0__FinishedFunc(); // Function B_HeavyRainPost.B_HeavyRainPost_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0xd67374
	void Timeline_0__UpdateFunc(); // Function B_HeavyRainPost.B_HeavyRainPost_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0xd67374
	void CE_Deactivate(); // Function B_HeavyRainPost.B_HeavyRainPost_C.CE_Deactivate // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ReceiveBeginPlay(); // Function B_HeavyRainPost.B_HeavyRainPost_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_B_HeavyRainPost(int32_t EntryPoint); // Function B_HeavyRainPost.B_HeavyRainPost_C.ExecuteUbergraph_B_HeavyRainPost // (Final|UbergraphFunction) // @ game+0xd67374
};

