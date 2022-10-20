// BlueprintGeneratedClass B_CameraLens_Geyser.B_CameraLens_Geyser_C
// Size: 0x388 (Inherited: 0x370)
struct AB_CameraLens_Geyser_C : AEmitterCameraLensEffectBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x370(0x08)
	float Timeline_0_Alpha_3D5AA2144E9B8D6D3B409B845315B143; // 0x378(0x04)
	enum class ETimelineDirection Timeline_0__Direction_3D5AA2144E9B8D6D3B409B845315B143; // 0x37c(0x01)
	char pad_37D[0x3]; // 0x37d(0x03)
	struct UTimelineComponent* ; // 0x380(0x08)

	void Timeline_0__FinishedFunc(); // Function B_CameraLens_Geyser.B_CameraLens_Geyser_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0xd67374
	void Timeline_0__UpdateFunc(); // Function B_CameraLens_Geyser.B_CameraLens_Geyser_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0xd67374
	void ReceiveBeginPlay(); // Function B_CameraLens_Geyser.B_CameraLens_Geyser_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ReceiveDestroyed(); // Function B_CameraLens_Geyser.B_CameraLens_Geyser_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_B_CameraLens_Geyser(int32_t EntryPoint); // Function B_CameraLens_Geyser.B_CameraLens_Geyser_C.ExecuteUbergraph_B_CameraLens_Geyser // (Final|UbergraphFunction) // @ game+0xd67374
};

