// BlueprintGeneratedClass B_CameraRainDrops_03.B_CameraRainDrops_03_C
// Size: 0x390 (Inherited: 0x370)
struct AB_CameraRainDrops_03_C : AEmitterCameraLensEffectBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x370(0x08)
	float Alpha_Alpha_510BB77E4E686B10F0392B81CE9926AC; // 0x378(0x04)
	enum class ETimelineDirection Alpha__Direction_510BB77E4E686B10F0392B81CE9926AC; // 0x37c(0x01)
	char pad_37D[0x3]; // 0x37d(0x03)
	struct UTimelineComponent* Alpha; // 0x380(0x08)
	struct AB_HeavyRainPost_C* PostActor; // 0x388(0x08)

	void Alpha__FinishedFunc(); // Function B_CameraRainDrops_03.B_CameraRainDrops_03_C.Alpha__FinishedFunc // (BlueprintEvent) // @ game+0xd67374
	void Alpha__UpdateFunc(); // Function B_CameraRainDrops_03.B_CameraRainDrops_03_C.Alpha__UpdateFunc // (BlueprintEvent) // @ game+0xd67374
	void ReceiveDestroyed(); // Function B_CameraRainDrops_03.B_CameraRainDrops_03_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ReceiveBeginPlay(); // Function B_CameraRainDrops_03.B_CameraRainDrops_03_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_B_CameraRainDrops_03(int32_t EntryPoint); // Function B_CameraRainDrops_03.B_CameraRainDrops_03_C.ExecuteUbergraph_B_CameraRainDrops_03 // (Final|UbergraphFunction) // @ game+0xd67374
};

