// BlueprintGeneratedClass GCN_Athena_LowGravity.GCN_Athena_LowGravity_C
// Size: 0x3e8 (Inherited: 0x3b0)
struct AGCN_Athena_LowGravity_C : AFortGameplayCueNotifyLoop_LowGravity {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3b0(0x08)
	struct AActor* MyTargetCached; // 0x3b8(0x08)
	struct FTimerHandle ExpireTellDelayTimer; // 0x3c0(0x08)
	double ExpirationSoundPeriod; // 0x3c8(0x08)
	struct FTimerHandle ExpirationSoundTimer; // 0x3d0(0x08)
	double MaxDrawDistance; // 0x3d8(0x08)
	struct UFXSystemComponent* LoopingFX; // 0x3e0(0x08)

	bool OnRemove(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.OnRemove // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Activated(struct AActor* PlayerPawn); // Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.Activated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	bool WhileActive(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.WhileActive // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExpireTell(); // Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.ExpireTell // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PlayExpirationSound(); // Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.PlayExpirationSound // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters); // Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void ReceiveBeginPlay(); // Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ClearExpireTell(); // Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.ClearExpireTell // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GCN_Athena_LowGravity(int32_t EntryPoint); // Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.ExecuteUbergraph_GCN_Athena_LowGravity // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

