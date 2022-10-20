// BlueprintGeneratedClass GA_Athena_ZipLine_Jump.GA_Athena_ZipLine_Jump_C
// Size: 0xbc0 (Inherited: 0xb20)
struct UGA_Athena_ZipLine_Jump_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0xb28(0x08)
	struct FScalableFloat MaxLateralSpeed; // 0xb30(0x28)
	struct FVector ImpulseVec; // 0xb58(0x18)
	struct FScalableFloat JumpVertStrength; // 0xb70(0x28)
	struct FScalableFloat JumpLateralDamper; // 0xb98(0x28)

	void K2_ActivateAbility(); // Function GA_Athena_ZipLine_Jump.GA_Athena_ZipLine_Jump_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Athena_ZipLine_Jump.GA_Athena_ZipLine_Jump_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GA_Athena_ZipLine_Jump(int32_t EntryPoint); // Function GA_Athena_ZipLine_Jump.GA_Athena_ZipLine_Jump_C.ExecuteUbergraph_GA_Athena_ZipLine_Jump // (Final|UbergraphFunction) // @ game+0xd67374
};

