// BlueprintGeneratedClass GCNL_Athena_VictoryCrown_CrownWearer_Looping.GCNL_Athena_VictoryCrown_CrownWearer_Looping_C
// Size: 0xae0 (Inherited: 0x960)
struct AGCNL_Athena_VictoryCrown_CrownWearer_Looping_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x960(0x08)
	float Intro_Ambient_FX_Timeline_Ambient_FX_Volume_EE4EF3FC4169AF85C3E076ADB15A9FAB; // 0x968(0x04)
	enum class ETimelineDirection Intro_Ambient_FX_Timeline__Direction_EE4EF3FC4169AF85C3E076ADB15A9FAB; // 0x96c(0x01)
	char pad_96D[0x3]; // 0x96d(0x03)
	struct UTimelineComponent* Intro Ambient FX Timeline; // 0x970(0x08)
	float Intro_Flare_Timeline_Flare_FX_Volume_DC12FFA64C913C89F456A7BA1F0987D7; // 0x978(0x04)
	enum class ETimelineDirection Intro_Flare_Timeline__Direction_DC12FFA64C913C89F456A7BA1F0987D7; // 0x97c(0x01)
	char pad_97D[0x3]; // 0x97d(0x03)
	struct UTimelineComponent* Intro Flare Timeline; // 0x980(0x08)
	struct FScalableFloat Audio Vizualizer Shown On Wearer?; // 0x988(0x28)
	struct FScalableFloat Audio Vizualizer Range; // 0x9b0(0x28)
	struct FScalableFloat Audio Vizualizer Ping Frequency; // 0x9d8(0x28)
	struct FScalableFloat Intro AmbientFX Timeline Rate; // 0xa00(0x28)
	struct FScalableFloat Intro Flare Timline Rate; // 0xa28(0x28)
	struct FScalableFloat Intro FX Visual Volume; // 0xa50(0x28)
	struct FScalableFloat 1st Person FX Visual Volume; // 0xa78(0x28)
	struct FScalableFloat 3rd Perosn FX Visual Volume; // 0xaa0(0x28)
	struct FTimerHandle timer handle; // 0xac8(0x08)
	struct TArray<struct UFXSystemComponent*> Particle Components; // 0xad0(0x10)

	void GetVisualVolume(bool IsFirstPerson, double& NewParam1); // Function GCNL_Athena_VictoryCrown_CrownWearer_Looping.GCNL_Athena_VictoryCrown_CrownWearer_Looping_C.GetVisualVolume // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void Intro Ambient FX Timeline__FinishedFunc(); // Function GCNL_Athena_VictoryCrown_CrownWearer_Looping.GCNL_Athena_VictoryCrown_CrownWearer_Looping_C.Intro Ambient FX Timeline__FinishedFunc // (BlueprintEvent) // @ game+0xd67374
	void Intro Ambient FX Timeline__UpdateFunc(); // Function GCNL_Athena_VictoryCrown_CrownWearer_Looping.GCNL_Athena_VictoryCrown_CrownWearer_Looping_C.Intro Ambient FX Timeline__UpdateFunc // (BlueprintEvent) // @ game+0xd67374
	void Intro Flare Timeline__FinishedFunc(); // Function GCNL_Athena_VictoryCrown_CrownWearer_Looping.GCNL_Athena_VictoryCrown_CrownWearer_Looping_C.Intro Flare Timeline__FinishedFunc // (BlueprintEvent) // @ game+0xd67374
	void Intro Flare Timeline__UpdateFunc(); // Function GCNL_Athena_VictoryCrown_CrownWearer_Looping.GCNL_Athena_VictoryCrown_CrownWearer_Looping_C.Intro Flare Timeline__UpdateFunc // (BlueprintEvent) // @ game+0xd67374
	void AVIndicatorLoop(); // Function GCNL_Athena_VictoryCrown_CrownWearer_Looping.GCNL_Athena_VictoryCrown_CrownWearer_Looping_C.AVIndicatorLoop // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnRemovalGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_Athena_VictoryCrown_CrownWearer_Looping.GCNL_Athena_VictoryCrown_CrownWearer_Looping_C.OnRemovalGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnApplicationGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_Athena_VictoryCrown_CrownWearer_Looping.GCNL_Athena_VictoryCrown_CrownWearer_Looping_C.OnApplicationGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnLoopingStartGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents); // Function GCNL_Athena_VictoryCrown_CrownWearer_Looping.GCNL_Athena_VictoryCrown_CrownWearer_Looping_C.OnLoopingStartGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping(int32_t EntryPoint); // Function GCNL_Athena_VictoryCrown_CrownWearer_Looping.GCNL_Athena_VictoryCrown_CrownWearer_Looping_C.ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

