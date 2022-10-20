// BlueprintGeneratedClass GA_Athena_SCMachine_Passive.GA_Athena_SCMachine_Passive_C
// Size: 0xb4c (Inherited: 0xb20)
struct UGA_Athena_SCMachine_Passive_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct AFortPlayerPawnAthena* PlayerPawn; // 0xb28(0x08)
	struct FVector SpawnZOffset; // 0xb30(0x18)
	struct FGameplayTag BlockChipSpawnTag; // 0xb48(0x04)

	void CheckPlayerChipSpawnEnabled(bool& IsChipSpawnEnabled); // Function GA_Athena_SCMachine_Passive.GA_Athena_SCMachine_Passive_C.CheckPlayerChipSpawnEnabled // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Check Resurrection Active(bool& bEnabled); // Function GA_Athena_SCMachine_Passive.GA_Athena_SCMachine_Passive_C.Check Resurrection Active // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SaveOutPlayer(); // Function GA_Athena_SCMachine_Passive.GA_Athena_SCMachine_Passive_C.SaveOutPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Spawn(); // Function GA_Athena_SCMachine_Passive.GA_Athena_SCMachine_Passive_C.Spawn // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleOnFortPlayerDied(struct AFortPlayerPawnAthena* FortPlayerPawnAthena); // Function GA_Athena_SCMachine_Passive.GA_Athena_SCMachine_Passive_C.HandleOnFortPlayerDied // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void K2_ActivateAbility(); // Function GA_Athena_SCMachine_Passive.GA_Athena_SCMachine_Passive_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GA_Athena_SCMachine_Passive(int32_t EntryPoint); // Function GA_Athena_SCMachine_Passive.GA_Athena_SCMachine_Passive_C.ExecuteUbergraph_GA_Athena_SCMachine_Passive // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

