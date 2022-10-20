// BlueprintGeneratedClass GA_Athena_Slurp_OLD.GA_Athena_Slurp_OLD_C
// Size: 0xb50 (Inherited: 0xb20)
struct UGA_Athena_Slurp_OLD_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0xb28(0x08)
	int32_t IncreCheck; // 0xb30(0x04)
	char pad_B34[0x4]; // 0xb34(0x04)
	double MaxTicks; // 0xb38(0x08)
	struct FTimerHandle TimerHandle; // 0xb40(0x08)
	double TickRate; // 0xb48(0x08)

	void K2_ActivateAbility(); // Function GA_Athena_Slurp_OLD.GA_Athena_Slurp_OLD_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Athena_Slurp_OLD.GA_Athena_Slurp_OLD_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ApplyHealthOrShield(); // Function GA_Athena_Slurp_OLD.GA_Athena_Slurp_OLD_C.ApplyHealthOrShield // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GA_Athena_Slurp_OLD(int32_t EntryPoint); // Function GA_Athena_Slurp_OLD.GA_Athena_Slurp_OLD_C.ExecuteUbergraph_GA_Athena_Slurp_OLD // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

