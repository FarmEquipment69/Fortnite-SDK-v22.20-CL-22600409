// WidgetBlueprintGeneratedClass AthenaSeasonItemRewardIcon.AthenaSeasonItemRewardIcon_C
// Size: 0x371 (Inherited: 0x2b8)
struct UAthenaSeasonItemRewardIcon_C : UAthenaSeasonItemRewardIcon {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b8(0x08)
	struct UWidgetAnimation* AdjustRewardFillSize; // 0x2c0(0x08)
	struct UWidgetAnimation* Selected; // 0x2c8(0x08)
	struct UWidgetAnimation* HoverState; // 0x2d0(0x08)
	struct UImage* Image_BattlePassIcon; // 0x2d8(0x08)
	struct UOverlay* Image_RewardContainer; // 0x2e0(0x08)
	struct USizeBox* RewardContainer_Size; // 0x2e8(0x08)
	struct UFortLazyImage* RewardTile; // 0x2f0(0x08)
	struct USizeBox* SizeBox_BattlePassIcon; // 0x2f8(0x08)
	struct USizeBox* SizeBox_Styles; // 0x300(0x08)
	struct UOverlay* Styles+Count; // 0x308(0x08)
	struct UImage* Styles_Backing; // 0x310(0x08)
	struct UCommonTextBlock* StylesLabel; // 0x318(0x08)
	struct UBorder* StylesWrapper; // 0x320(0x08)
	struct UCommonTextBlock* Text_Count; // 0x328(0x08)
	double Width; // 0x330(0x08)
	double Height; // 0x338(0x08)
	bool ShowStyle; // 0x340(0x01)
	bool ShowCount; // 0x341(0x01)
	char pad_342[0x6]; // 0x342(0x06)
	double BattlePassIconSize; // 0x348(0x08)
	bool BattlePassIconEnabled; // 0x350(0x01)
	char pad_351[0x7]; // 0x351(0x07)
	double BattlePassIconPositionOffsetMultiplier; // 0x358(0x08)
	double FillSize; // 0x360(0x08)
	double DesiredPixelSize; // 0x368(0x08)
	bool bIsEmoji; // 0x370(0x01)

	void SetRarityColors(struct FLinearColor Color1, struct FLinearColor Color2, struct FLinearColor Color3, struct FLinearColor Color4, struct FLinearColor Color5); // Function AthenaSeasonItemRewardIcon.AthenaSeasonItemRewardIcon_C.SetRarityColors // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleMultipleRewardSelctedAnim(bool bLeftRewardSelected); // Function AthenaSeasonItemRewardIcon.AthenaSeasonItemRewardIcon_C.HandleMultipleRewardSelctedAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void DeselectedAnim(); // Function AthenaSeasonItemRewardIcon.AthenaSeasonItemRewardIcon_C.DeselectedAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SelectedAnim(); // Function AthenaSeasonItemRewardIcon.AthenaSeasonItemRewardIcon_C.SelectedAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetupItemCardStyle(struct UFortItem* RewardItem); // Function AthenaSeasonItemRewardIcon.AthenaSeasonItemRewardIcon_C.SetupItemCardStyle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Unhover(); // Function AthenaSeasonItemRewardIcon.AthenaSeasonItemRewardIcon_C.Unhover // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Hover(); // Function AthenaSeasonItemRewardIcon.AthenaSeasonItemRewardIcon_C.Hover // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function AthenaSeasonItemRewardIcon.AthenaSeasonItemRewardIcon_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnInitializeReward(struct UFortItem* RewardItem, struct TSoftObjectPtr<UTexture2D>& RewardTexture, bool bHasAdditionalStylesToDisplay, int32_t RewardLevel, bool bRequiresBattlePass); // Function AthenaSeasonItemRewardIcon.AthenaSeasonItemRewardIcon_C.OnInitializeReward // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnInitializeSeriesReward(struct UFortItemSeriesDefinition* SeriesData); // Function AthenaSeasonItemRewardIcon.AthenaSeasonItemRewardIcon_C.OnInitializeSeriesReward // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_AthenaSeasonItemRewardIcon(int32_t EntryPoint); // Function AthenaSeasonItemRewardIcon.AthenaSeasonItemRewardIcon_C.ExecuteUbergraph_AthenaSeasonItemRewardIcon // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

