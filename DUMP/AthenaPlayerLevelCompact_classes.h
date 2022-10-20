// WidgetBlueprintGeneratedClass AthenaPlayerLevelCompact.AthenaPlayerLevelCompact_C
// Size: 0x318 (Inherited: 0x2e0)
struct UAthenaPlayerLevelCompact_C : UFortSeasonDataWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UImage* ; // 0x2e8(0x08)
	struct UImage* Image_ProgressBar; // 0x2f0(0x08)
	struct UAthenaSeasonItemRewardIcon_C* RewardIcon; // 0x2f8(0x08)
	struct UCommonTextBlock* Text_Level; // 0x300(0x08)
	struct FMulticastInlineDelegate LevelChanged; // 0x308(0x10)

	void (struct UFortItem* RewardItem, struct TSoftObjectPtr<UTexture2D>& RewardTexture, bool bHasAdditionalStylesToDisplay, int32_t RewardLevel, bool bRequiresBattlePass); // Function AthenaPlayerLevelCompact.AthenaPlayerLevelCompact_C. // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void (double Progress, bool bIsMaxLevel); // Function AthenaPlayerLevelCompact.AthenaPlayerLevelCompact_C. // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_AthenaPlayerLevelCompact(int32_t EntryPoint); // Function AthenaPlayerLevelCompact.AthenaPlayerLevelCompact_C.ExecuteUbergraph_AthenaPlayerLevelCompact // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
	void LevelChanged__DelegateSignature(int32_t Level); // Function AthenaPlayerLevelCompact.AthenaPlayerLevelCompact_C.LevelChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

