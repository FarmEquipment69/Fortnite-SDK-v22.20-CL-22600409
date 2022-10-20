// BlueprintGeneratedClass B_CameraLens_Boat_Droplets.B_CameraLens_Boat_Droplets_C
// Size: 0x388 (Inherited: 0x370)
struct AB_CameraLens_Boat_Droplets_C : AEmitterCameraLensEffectBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x370(0x08)
	float Timeline_0_Alpha_0C9ACFAF463718824428D0A86CC5D789; // 0x378(0x04)
	enum class ETimelineDirection Timeline_0__Direction_0C9ACFAF463718824428D0A86CC5D789; // 0x37c(0x01)
	char pad_37D[0x3]; // 0x37d(0x03)
	struct UTimelineComponent* ; // 0x380(0x08)

	void Timeline_0__FinishedFunc(); // Function B_CameraLens_Boat_Droplets.B_CameraLens_Boat_Droplets_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0xd67374
	void Timeline_0__UpdateFunc(); // Function B_CameraLens_Boat_Droplets.B_CameraLens_Boat_Droplets_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0xd67374
	void ReceiveBeginPlay(); // Function B_CameraLens_Boat_Droplets.B_CameraLens_Boat_Droplets_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ReceiveDestroyed(); // Function B_CameraLens_Boat_Droplets.B_CameraLens_Boat_Droplets_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_B_CameraLens_Boat_Droplets(int32_t EntryPoint); // Function B_CameraLens_Boat_Droplets.B_CameraLens_Boat_Droplets_C.ExecuteUbergraph_B_CameraLens_Boat_Droplets // (Final|UbergraphFunction) // @ game+0xd67374
};

