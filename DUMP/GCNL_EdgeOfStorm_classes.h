// BlueprintGeneratedClass GCNL_EdgeOfStorm.GCNL_EdgeOfStorm_C
// Size: 0x979 (Inherited: 0x960)
struct AGCNL_EdgeOfStorm_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x960(0x08)
	struct UAudioComponent* Audio; // 0x968(0x08)
	struct AFortPlayerPawn* StormPawn; // 0x970(0x08)
	bool bBoundAudioPercent; // 0x978(0x01)

	bool OnRemove(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function GCNL_EdgeOfStorm.GCNL_EdgeOfStorm_C.OnRemove // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	bool OnExecute(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function GCNL_EdgeOfStorm.GCNL_EdgeOfStorm_C.OnExecute // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	bool OnActive(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function GCNL_EdgeOfStorm.GCNL_EdgeOfStorm_C.OnActive // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Activated(struct FVector EdgeOfStorm); // Function GCNL_EdgeOfStorm.GCNL_EdgeOfStorm_C.Activated // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Deactivated(); // Function GCNL_EdgeOfStorm.GCNL_EdgeOfStorm_C.Deactivated // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GCNL_EdgeOfStorm(int32_t EntryPoint); // Function GCNL_EdgeOfStorm.GCNL_EdgeOfStorm_C.ExecuteUbergraph_GCNL_EdgeOfStorm // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

