// BlueprintGeneratedClass GCNL_Zipline_Travel.GCNL_Zipline_Travel_C
// Size: 0xa60 (Inherited: 0xa40)
struct AGCNL_Zipline_Travel_C : AFortGameplayCueNotifyLoop_ZiplineTravel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa40(0x08)
	struct UAudioComponent* AttachSoundAudioComp; // 0xa48(0x08)
	struct TArray<bool> ; // 0xa50(0x10)

	void OnApplicationGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_Zipline_Travel.GCNL_Zipline_Travel_C.OnApplicationGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnRemovalGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_Zipline_Travel.GCNL_Zipline_Travel_C.OnRemovalGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GCNL_Zipline_Travel(int32_t EntryPoint); // Function GCNL_Zipline_Travel.GCNL_Zipline_Travel_C.ExecuteUbergraph_GCNL_Zipline_Travel // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

