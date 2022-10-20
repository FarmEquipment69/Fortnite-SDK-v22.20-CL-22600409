// BlueprintGeneratedClass GCNL_Athena_ChromeSurface.GCNL_Athena_ChromeSurface_C
// Size: 0x988 (Inherited: 0x972)
struct AGCNL_Athena_ChromeSurface_C : AGCNL_Athena_Surface_Parent_C {
	char pad_972[0x6]; // 0x972(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x978(0x08)
	struct AFortPlayerPawn* LocalTarget; // 0x980(0x08)

	void OnApplicationGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_Athena_ChromeSurface.GCNL_Athena_ChromeSurface_C.OnApplicationGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnRemovalGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_Athena_ChromeSurface.GCNL_Athena_ChromeSurface_C.OnRemovalGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GCNL_Athena_ChromeSurface(int32_t EntryPoint); // Function GCNL_Athena_ChromeSurface.GCNL_Athena_ChromeSurface_C.ExecuteUbergraph_GCNL_Athena_ChromeSurface // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

