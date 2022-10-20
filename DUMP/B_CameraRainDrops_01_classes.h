// BlueprintGeneratedClass B_CameraRainDrops_01.B_CameraRainDrops_01_C
// Size: 0x388 (Inherited: 0x370)
struct AB_CameraRainDrops_01_C : AEmitterCameraLensEffectBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x370(0x08)
	float Alpha_Alpha_06897833405CC2B231B02C93C4E725A3; // 0x378(0x04)
	enum class ETimelineDirection Alpha__Direction_06897833405CC2B231B02C93C4E725A3; // 0x37c(0x01)
	char pad_37D[0x3]; // 0x37d(0x03)
	struct UTimelineComponent* Alpha; // 0x380(0x08)

	void Alpha__FinishedFunc(); // Function B_CameraRainDrops_01.B_CameraRainDrops_01_C.Alpha__FinishedFunc // (BlueprintEvent) // @ game+0xd67374
	void Alpha__UpdateFunc(); // Function B_CameraRainDrops_01.B_CameraRainDrops_01_C.Alpha__UpdateFunc // (BlueprintEvent) // @ game+0xd67374
	void ReceiveBeginPlay(); // Function B_CameraRainDrops_01.B_CameraRainDrops_01_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_B_CameraRainDrops_01(int32_t EntryPoint); // Function B_CameraRainDrops_01.B_CameraRainDrops_01_C.ExecuteUbergraph_B_CameraRainDrops_01 // (Final|UbergraphFunction) // @ game+0xd67374
};

