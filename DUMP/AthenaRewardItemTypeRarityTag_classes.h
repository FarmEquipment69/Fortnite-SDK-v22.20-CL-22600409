// WidgetBlueprintGeneratedClass AthenaRewardItemTypeRarityTag.AthenaRewardItemTypeRarityTag_C
// Size: 0x320 (Inherited: 0x300)
struct UAthenaRewardItemTypeRarityTag_C : UAthenaRewardItemTypeRarityTag {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x08)
	struct UBorder* Border_ItemType; // 0x308(0x08)
	struct FLinearColor ItemTypeTextColor; // 0x310(0x10)

	void OverrideTypeTextColor(struct FSlateColor InColorAndOpacity); // Function AthenaRewardItemTypeRarityTag.AthenaRewardItemTypeRarityTag_C.OverrideTypeTextColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnInitializeRarityWithSeries(struct UFortItemSeriesDefinition* SeriesData); // Function AthenaRewardItemTypeRarityTag.AthenaRewardItemTypeRarityTag_C.OnInitializeRarityWithSeries // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnInitializeRarityWithoutSeries(struct FFortRarityItemData RarityData); // Function AthenaRewardItemTypeRarityTag.AthenaRewardItemTypeRarityTag_C.OnInitializeRarityWithoutSeries // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_AthenaRewardItemTypeRarityTag(int32_t EntryPoint); // Function AthenaRewardItemTypeRarityTag.AthenaRewardItemTypeRarityTag_C.ExecuteUbergraph_AthenaRewardItemTypeRarityTag // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

