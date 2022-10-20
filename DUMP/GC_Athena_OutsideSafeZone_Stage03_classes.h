// BlueprintGeneratedClass GC_Athena_OutsideSafeZone_Stage03.GC_Athena_OutsideSafeZone_Stage03_C
// Size: 0xa20 (Inherited: 0xa11)
struct AGC_Athena_OutsideSafeZone_Stage03_C : AGC_Athena_OutsideSafeZone_C {
	char pad_A11[0x7]; // 0xa11(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa18(0x08)

	void OnLoopingStart(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UParticleSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents); // Function GC_Athena_OutsideSafeZone_Stage03.GC_Athena_OutsideSafeZone_Stage03_C.OnLoopingStart // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void On Distant Lightning Spawn(struct FName EventName, float EmitterTime, struct FVector Location, struct FVector Velocity); // Function GC_Athena_OutsideSafeZone_Stage03.GC_Athena_OutsideSafeZone_Stage03_C.On Distant Lightning Spawn // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GC_Athena_OutsideSafeZone_Stage03(int32_t EntryPoint); // Function GC_Athena_OutsideSafeZone_Stage03.GC_Athena_OutsideSafeZone_Stage03_C.ExecuteUbergraph_GC_Athena_OutsideSafeZone_Stage03 // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

