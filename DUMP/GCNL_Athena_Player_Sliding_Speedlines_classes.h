// BlueprintGeneratedClass GCNL_Athena_Player_Sliding_Speedlines.GCNL_Athena_Player_Sliding_Speedlines_C
// Size: 0x979 (Inherited: 0x960)
struct AGCNL_Athena_Player_Sliding_Speedlines_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x960(0x08)
	struct UFXSystemComponent* DustFX; // 0x968(0x08)
	struct UFortMovementComp_Character* CachedMovementCmponent; // 0x970(0x08)
	bool bIsGraceFalling; // 0x978(0x01)

	void OnLoopingStartGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents); // Function GCNL_Athena_Player_Sliding_Speedlines.GCNL_Athena_Player_Sliding_Speedlines_C.OnLoopingStartGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void ReceiveTick(float DeltaSeconds); // Function GCNL_Athena_Player_Sliding_Speedlines.GCNL_Athena_Player_Sliding_Speedlines_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GCNL_Athena_Player_Sliding_Speedlines(int32_t EntryPoint); // Function GCNL_Athena_Player_Sliding_Speedlines.GCNL_Athena_Player_Sliding_Speedlines_C.ExecuteUbergraph_GCNL_Athena_Player_Sliding_Speedlines // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

