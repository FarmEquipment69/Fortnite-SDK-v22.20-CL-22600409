// BlueprintGeneratedClass GCNL_AthenaAI_NonParticipant_AlertState.GCNL_AthenaAI_NonParticipant_AlertState_C
// Size: 0xa38 (Inherited: 0x9f0)
struct AGCNL_AthenaAI_NonParticipant_AlertState_C : AFortGameplayCueNotifyAthena_AIAlertState {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x9f0(0x08)
	struct FLinearColor IconColorAlert; // 0x9f8(0x10)
	struct FLinearColor IconColorThreatend; // 0xa08(0x10)
	double AnimationLength; // 0xa18(0x08)
	struct FLinearColor IconColorAlertInner; // 0xa20(0x10)
	struct USoundBase* sound; // 0xa30(0x08)

	void PlayAlertSound(); // Function GCNL_AthenaAI_NonParticipant_AlertState.GCNL_AthenaAI_NonParticipant_AlertState_C.PlayAlertSound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnApplication(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UParticleSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_AthenaAI_NonParticipant_AlertState.GCNL_AthenaAI_NonParticipant_AlertState_C.OnApplication // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GCNL_AthenaAI_NonParticipant_AlertState(int32_t EntryPoint); // Function GCNL_AthenaAI_NonParticipant_AlertState.GCNL_AthenaAI_NonParticipant_AlertState_C.ExecuteUbergraph_GCNL_AthenaAI_NonParticipant_AlertState // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

