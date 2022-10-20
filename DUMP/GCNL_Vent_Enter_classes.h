// BlueprintGeneratedClass GCNL_Vent_Enter.GCNL_Vent_Enter_C
// Size: 0x991 (Inherited: 0x960)
struct AGCNL_Vent_Enter_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x960(0x08)
	struct UPostProcessComponent* PostProcess; // 0x968(0x08)
	float FadePPVol_LERP_6D28D8B64202D10F474B48B80194DA6D; // 0x970(0x04)
	enum class ETimelineDirection FadePPVol__Direction_6D28D8B64202D10F474B48B80194DA6D; // 0x974(0x01)
	char pad_975[0x3]; // 0x975(0x03)
	struct UTimelineComponent* FadePPVol; // 0x978(0x08)
	struct ULegacyCameraShake* CameraShakeClass; // 0x980(0x08)
	struct ULegacyCameraShake* CameraShake; // 0x988(0x08)
	bool UsePP; // 0x990(0x01)

	void FadePPVol__FinishedFunc(); // Function GCNL_Vent_Enter.GCNL_Vent_Enter_C.FadePPVol__FinishedFunc // (BlueprintEvent) // @ game+0xd67374
	void FadePPVol__UpdateFunc(); // Function GCNL_Vent_Enter.GCNL_Vent_Enter_C.FadePPVol__UpdateFunc // (BlueprintEvent) // @ game+0xd67374
	void OnLoopingStart(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UParticleSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents); // Function GCNL_Vent_Enter.GCNL_Vent_Enter_C.OnLoopingStart // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnRemoval(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UParticleSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_Vent_Enter.GCNL_Vent_Enter_C.OnRemoval // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GCNL_Vent_Enter(int32_t EntryPoint); // Function GCNL_Vent_Enter.GCNL_Vent_Enter_C.ExecuteUbergraph_GCNL_Vent_Enter // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

