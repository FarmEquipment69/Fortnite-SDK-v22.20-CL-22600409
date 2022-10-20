// WidgetBlueprintGeneratedClass RewardInfoSimpleWidget.RewardInfoSimpleWidget_C
// Size: 0x14b8 (Inherited: 0x14a0)
struct URewardInfoSimpleWidget_C : UFortRewardInfoButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x14a0(0x08)
	struct UCommonTextBlock* ItemCount; // 0x14a8(0x08)
	struct UCommonLazyImage* ItemIcon; // 0x14b0(0x08)

	void GetDisplayName(struct FText& DisplayName); // Function RewardInfoSimpleWidget.RewardInfoSimpleWidget_C.GetDisplayName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleDifferentItemOrQuantitySetBP(); // Function RewardInfoSimpleWidget.RewardInfoSimpleWidget_C.HandleDifferentItemOrQuantitySetBP // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_RewardInfoSimpleWidget(int32_t EntryPoint); // Function RewardInfoSimpleWidget.RewardInfoSimpleWidget_C.ExecuteUbergraph_RewardInfoSimpleWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

