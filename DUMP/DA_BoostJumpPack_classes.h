// BlueprintGeneratedClass DA_BoostJumpPack.DA_BoostJumpPack_C
// Size: 0x1110 (Inherited: 0x10c8)
struct ADA_BoostJumpPack_C : AFortCustomizableAbilityDecoTool {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x10c8(0x08)
	struct FGameplayTagContainer ErrorReason; // 0x10d0(0x20)
	struct FGameplayTagContainer ErrorReasonGamepad; // 0x10f0(0x20)

	void IsOnGround(bool& bOnGround); // Function DA_BoostJumpPack.DA_BoostJumpPack_C.IsOnGround // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void RaiseUsageError(struct FGameplayTagContainer& FailedReason); // Function DA_BoostJumpPack.DA_BoostJumpPack_C.RaiseUsageError // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BPPressTrigger(struct AFortDecoHelper* FortDecoHelper); // Function DA_BoostJumpPack.DA_BoostJumpPack_C.BPPressTrigger // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_DA_BoostJumpPack(int32_t EntryPoint); // Function DA_BoostJumpPack.DA_BoostJumpPack_C.ExecuteUbergraph_DA_BoostJumpPack // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

