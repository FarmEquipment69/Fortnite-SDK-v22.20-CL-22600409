// BlueprintGeneratedClass GCN_Loop_GhostMode.GCN_Loop_GhostMode_C
// Size: 0x9d0 (Inherited: 0x960)
struct AGCN_Loop_GhostMode_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x960(0x08)
	float FadeMaterialsTL_Lerp_D7B0BAAD47F48403BE23B98F38D8CA3E; // 0x968(0x04)
	enum class ETimelineDirection FadeMaterialsTL__Direction_D7B0BAAD47F48403BE23B98F38D8CA3E; // 0x96c(0x01)
	char pad_96D[0x3]; // 0x96d(0x03)
	struct UTimelineComponent* FadeMaterialsTL; // 0x970(0x08)
	struct FLinearColor HitGlowColor; // 0x978(0x10)
	struct FLinearColor HotGlowOuterColor; // 0x988(0x10)
	double HitGlowFresnelBrightness; // 0x998(0x08)
	double HitGlowFresnelExponent; // 0x9a0(0x08)
	double Glow Priority; // 0x9a8(0x08)
	struct USoundBase* StopSoundCue; // 0x9b0(0x08)
	struct USoundBase* StartSoundCue; // 0x9b8(0x08)
	struct TScriptInterface<IPawnHighlight_Interface_C> TargetPawn; // 0x9c0(0x10)

	void Highlight Lerp(double Alpha, struct FPawnHighlight& Highlight); // Function GCN_Loop_GhostMode.GCN_Loop_GhostMode_C.Highlight Lerp // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void FadeMaterialsTL__FinishedFunc(); // Function GCN_Loop_GhostMode.GCN_Loop_GhostMode_C.FadeMaterialsTL__FinishedFunc // (BlueprintEvent) // @ game+0xd67374
	void FadeMaterialsTL__UpdateFunc(); // Function GCN_Loop_GhostMode.GCN_Loop_GhostMode_C.FadeMaterialsTL__UpdateFunc // (BlueprintEvent) // @ game+0xd67374
	void OnLoopingStart(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UParticleSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents); // Function GCN_Loop_GhostMode.GCN_Loop_GhostMode_C.OnLoopingStart // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnRemoval(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UParticleSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCN_Loop_GhostMode.GCN_Loop_GhostMode_C.OnRemoval // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void FadeMaterialsIn(); // Function GCN_Loop_GhostMode.GCN_Loop_GhostMode_C.FadeMaterialsIn // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void FadeMaterialsOut(); // Function GCN_Loop_GhostMode.GCN_Loop_GhostMode_C.FadeMaterialsOut // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GCN_Loop_GhostMode(int32_t EntryPoint); // Function GCN_Loop_GhostMode.GCN_Loop_GhostMode_C.ExecuteUbergraph_GCN_Loop_GhostMode // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

