// BlueprintGeneratedClass GA_Athena_ZipLine_ReachedEnd.GA_Athena_ZipLine_ReachedEnd_C
// Size: 0xc18 (Inherited: 0xb20)
struct UGA_Athena_ZipLine_ReachedEnd_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0xb28(0x08)
	struct FScalableFloat MaxLateralSpeed; // 0xb30(0x28)
	struct FVector ImpulseVec; // 0xb58(0x18)
	struct FScalableFloat JumpVertStrength; // 0xb70(0x28)
	struct FScalableFloat LateralDamping; // 0xb98(0x28)
	struct FScalableFloat MaxZiplineVel; // 0xbc0(0x28)
	bool Debug; // 0xbe8(0x01)
	char pad_BE9[0x7]; // 0xbe9(0x07)
	struct FScalableFloat MinJumpVertStrength; // 0xbf0(0x28)

	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Athena_ZipLine_ReachedEnd.GA_Athena_ZipLine_ReachedEnd_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void K2_ActivateAbility(); // Function GA_Athena_ZipLine_ReachedEnd.GA_Athena_ZipLine_ReachedEnd_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GA_Athena_ZipLine_ReachedEnd(int32_t EntryPoint); // Function GA_Athena_ZipLine_ReachedEnd.GA_Athena_ZipLine_ReachedEnd_C.ExecuteUbergraph_GA_Athena_ZipLine_ReachedEnd // (Final|UbergraphFunction) // @ game+0xd67374
};

