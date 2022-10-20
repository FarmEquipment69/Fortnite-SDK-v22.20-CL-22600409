// BlueprintGeneratedClass GCNL_Irwin_Swim.GCNL_Irwin_Swim_C
// Size: 0x980 (Inherited: 0x960)
struct AGCNL_Irwin_Swim_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x960(0x08)
	struct AFortAIPawn* Irwin; // 0x968(0x08)
	struct UFXSystemComponent* Swim VFX; // 0x970(0x08)
	struct UFortMovementComp_AIChar* Irwin Movement; // 0x978(0x08)

	void OnLoopingStartGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents); // Function GCNL_Irwin_Swim.GCNL_Irwin_Swim_C.OnLoopingStartGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void ReceiveTick(float DeltaSeconds); // Function GCNL_Irwin_Swim.GCNL_Irwin_Swim_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GCNL_Irwin_Swim(int32_t EntryPoint); // Function GCNL_Irwin_Swim.GCNL_Irwin_Swim_C.ExecuteUbergraph_GCNL_Irwin_Swim // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

