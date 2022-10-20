// BlueprintGeneratedClass GCNL_Athena_Player_SlideImpulse_VelocityMet.GCNL_Athena_Player_SlideImpulse_VelocityMet_C
// Size: 0x97c (Inherited: 0x960)
struct AGCNL_Athena_Player_SlideImpulse_VelocityMet_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x960(0x08)
	struct AFortPawn* FortPawnRef; // 0x968(0x08)
	struct UFXSystemComponent* ParticleRef; // 0x970(0x08)
	struct FName SlideVelocityName; // 0x978(0x04)

	void ReceiveTick(float DeltaSeconds); // Function GCNL_Athena_Player_SlideImpulse_VelocityMet.GCNL_Athena_Player_SlideImpulse_VelocityMet_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnLoopingStartGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents); // Function GCNL_Athena_Player_SlideImpulse_VelocityMet.GCNL_Athena_Player_SlideImpulse_VelocityMet_C.OnLoopingStartGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GCNL_Athena_Player_SlideImpulse_VelocityMet(int32_t EntryPoint); // Function GCNL_Athena_Player_SlideImpulse_VelocityMet.GCNL_Athena_Player_SlideImpulse_VelocityMet_C.ExecuteUbergraph_GCNL_Athena_Player_SlideImpulse_VelocityMet // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

