// BlueprintGeneratedClass GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C
// Size: 0xc41 (Inherited: 0xbe8)
struct UGA_Athena_Ascender_Smash_C : UGA_Athena_ZipLine_SmashParent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xbe8(0x08)
	struct UPrimitiveComponent* ; // 0xbf0(0x08)
	struct AB_Athena_Zipline_Ascender_C* AscenderZipline; // 0xbf8(0x08)
	struct FGameplayTag DescendingTag; // 0xc00(0x04)
	char pad_C04[0x4]; // 0xc04(0x04)
	struct UAnimMontage* M_AscendingAnim; // 0xc08(0x08)
	struct UAnimMontage* M_DescendingAnim; // 0xc10(0x08)
	struct FActiveGameplayEffectHandle DescendingGE_Handle; // 0xc18(0x08)
	struct FActiveGameplayEffectHandle AscendingGE_Handle; // 0xc20(0x08)
	struct UAnimMontage* F_AscendingAnim; // 0xc28(0x08)
	struct UAnimMontage* F_DescendingAnim; // 0xc30(0x08)
	struct FActiveGameplayEffectHandle ZiplinePassiveGE; // 0xc38(0x08)
	bool bHolsterApplied; // 0xc40(0x01)

	void DoFailSafeUnholster(); // Function GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.DoFailSafeUnholster // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void DoUnholster(); // Function GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.DoUnholster // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void DoHolster(); // Function GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.DoHolster // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	bool IsPlayerUsingHandle(); // Function GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.IsPlayerUsingHandle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void OnCancelled_899182BF4C098785CCBCFD85AA84455F(); // Function GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.OnCancelled_899182BF4C098785CCBCFD85AA84455F // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnInterrupted_899182BF4C098785CCBCFD85AA84455F(); // Function GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.OnInterrupted_899182BF4C098785CCBCFD85AA84455F // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnBlendOut_899182BF4C098785CCBCFD85AA84455F(); // Function GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.OnBlendOut_899182BF4C098785CCBCFD85AA84455F // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnCompleted_899182BF4C098785CCBCFD85AA84455F(); // Function GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.OnCompleted_899182BF4C098785CCBCFD85AA84455F // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ZipliningComplete(); // Function GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.ZipliningComplete // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SurroundingsCheck_SmashObjects(); // Function GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.SurroundingsCheck_SmashObjects // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SurroundingsCheck_MotorCheck(); // Function GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.SurroundingsCheck_MotorCheck // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void GameplayTagEvent_ZiplineEnter(struct FGameplayEventData& EventData); // Function GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.GameplayTagEvent_ZiplineEnter // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void GameplayTagEvent_ZiplineExit(struct FGameplayEventData& EventData); // Function GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.GameplayTagEvent_ZiplineExit // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void FallingTagRemoved(); // Function GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.FallingTagRemoved // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Pre_BeginZiplinging(); // Function GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.Pre_BeginZiplinging // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Post_BeginZiplining(); // Function GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.Post_BeginZiplining // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleGameplayEventTag(struct FGameplayEventData& EventData); // Function GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.HandleGameplayEventTag // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GA_Athena_Ascender_Smash(int32_t EntryPoint); // Function GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.ExecuteUbergraph_GA_Athena_Ascender_Smash // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

