// WidgetBlueprintGeneratedClass ItemSeriesOrRarity.ItemSeriesOrRarity_C
// Size: 0x2d9 (Inherited: 0x2b8)
struct UItemSeriesOrRarity_C : UUserWidget {
	struct UWidgetSwitcher* RarityOrSeriesSwitcher; // 0x2b8(0x08)
	struct UCommonTextBlock* RarityTextBlock; // 0x2c0(0x08)
	struct UBorder* SeriesBorder; // 0x2c8(0x08)
	struct UCommonTextBlock* SeriesTextBlock; // 0x2d0(0x08)
	bool OnlyShowSeries; // 0x2d8(0x01)

	void UpdateItemDefinition(struct UFortItemDefinition* ItemDefinition); // Function ItemSeriesOrRarity.ItemSeriesOrRarity_C.UpdateItemDefinition // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

