// BlueprintGeneratedClass DA_Glider_Item.DA_Glider_Item_C
// Size: 0x10f0 (Inherited: 0x10c8)
struct ADA_Glider_Item_C : AFortCustomizableAbilityDecoTool {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x10c8(0x08)
	struct FGameplayTagContainer ErrorReason; // 0x10d0(0x20)

	void IsOnGround(bool& bOnGround); // Function DA_Glider_Item.DA_Glider_Item_C.IsOnGround // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void RaiseUsageError(struct FGameplayTagContainer& FailedReason); // Function DA_Glider_Item.DA_Glider_Item_C.RaiseUsageError // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BPPressTrigger(struct AFortDecoHelper* FortDecoHelper); // Function DA_Glider_Item.DA_Glider_Item_C.BPPressTrigger // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_DA_Glider_Item(int32_t EntryPoint); // Function DA_Glider_Item.DA_Glider_Item_C.ExecuteUbergraph_DA_Glider_Item // (Final|UbergraphFunction) // @ game+0xd67374
};

