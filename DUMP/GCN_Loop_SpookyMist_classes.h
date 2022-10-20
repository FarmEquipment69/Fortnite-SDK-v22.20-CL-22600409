// BlueprintGeneratedClass GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C
// Size: 0xb20 (Inherited: 0xb00)
struct AGCN_Loop_SpookyMist_C : AFortGameplayCueNotifyLoop_SpookyMist {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb00(0x08)
	struct UPostProcessComponent* PostProcess; // 0xb08(0x08)
	float Timeline_Interaction_Fade_In_Out_Visbility_5529D6B24898E091AFB4668B43CFAB50; // 0xb10(0x04)
	enum class ETimelineDirection Timeline_Interaction_Fade_In_Out__Direction_5529D6B24898E091AFB4668B43CFAB50; // 0xb14(0x01)
	char pad_B15[0x3]; // 0xb15(0x03)
	struct UTimelineComponent* Timeline Interaction Fade In Out; // 0xb18(0x08)

	void Timeline Interaction Fade In Out__FinishedFunc(); // Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.Timeline Interaction Fade In Out__FinishedFunc // (BlueprintEvent) // @ game+0xd67374
	void Timeline Interaction Fade In Out__UpdateFunc(); // Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.Timeline Interaction Fade In Out__UpdateFunc // (BlueprintEvent) // @ game+0xd67374
	void OnRemoval(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UParticleSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.OnRemoval // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnLoopingStart(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UParticleSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents); // Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.OnLoopingStart // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void StartedInteract(); // Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.StartedInteract // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void EndedInteract(); // Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.EndedInteract // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GCN_Loop_SpookyMist(int32_t EntryPoint); // Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.ExecuteUbergraph_GCN_Loop_SpookyMist // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

