// BlueprintGeneratedClass UnderwaterAudioComponent.UnderwaterAudioComponent_C
// Size: 0xd1 (Inherited: 0xa0)
struct UUnderwaterAudioComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa0(0x08)
	struct USoundMix* CamUnderwaterSoundMix; // 0xa8(0x08)
	struct USoundBase* CamUnderwaterStartSound; // 0xb0(0x08)
	struct UAudioComponent* CamUnderwaterAudio; // 0xb8(0x08)
	struct USoundBase* CamUnderwaterLoopSound; // 0xc0(0x08)
	struct USoundBase* CamUnderwaterStopSound; // 0xc8(0x08)
	bool bEnabled; // 0xd0(0x01)

	void ReceiveBeginPlay(); // Function UnderwaterAudioComponent.UnderwaterAudioComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void On Camera Underwater State Changed(bool bIsUnderWater, float DepthUnderwater); // Function UnderwaterAudioComponent.UnderwaterAudioComponent_C.On Camera Underwater State Changed // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function UnderwaterAudioComponent.UnderwaterAudioComponent_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_UnderwaterAudioComponent(int32_t EntryPoint); // Function UnderwaterAudioComponent.UnderwaterAudioComponent_C.ExecuteUbergraph_UnderwaterAudioComponent // (Final|UbergraphFunction) // @ game+0xd67374
};

