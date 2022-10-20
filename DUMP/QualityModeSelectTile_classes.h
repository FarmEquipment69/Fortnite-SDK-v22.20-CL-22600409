// WidgetBlueprintGeneratedClass QualityModeSelectTile.QualityModeSelectTile_C
// Size: 0x1531 (Inherited: 0x14a0)
struct UQualityModeSelectTile_C : UFortQualityModeTile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x14a0(0x08)
	struct UWidgetAnimation* InAnOutro; // 0x14a8(0x08)
	struct UWidgetAnimation* ConfirmSeleccion; // 0x14b0(0x08)
	struct UWidgetAnimation* GameModeSelection; // 0x14b8(0x08)
	struct UCommonBorder* Border_Recommended; // 0x14c0(0x08)
	struct UImage* ConfirmSelectionFlash; // 0x14c8(0x08)
	struct UImage* ConfirmSelectionShine; // 0x14d0(0x08)
	struct UImage* DisabledGray; // 0x14d8(0x08)
	struct UImage* ; // 0x14e0(0x08)
	struct UImage* SelectedIcon; // 0x14e8(0x08)
	struct UCommonTextBlock* T_Recommended; // 0x14f0(0x08)
	struct UBorder* Tag_Selected; // 0x14f8(0x08)
	struct UCommonTextBlock* TextBlock_AdditionalDownloadSize; // 0x1500(0x08)
	struct UCommonTextBlock* TextBlock_QualityDescription; // 0x1508(0x08)
	struct UCommonTextBlock* TextBlock_QualityLevelName; // 0x1510(0x08)
	struct UCommonTextBlock* TextBlock_TotalBuildSize; // 0x1518(0x08)
	struct UImage* TileArt; // 0x1520(0x08)
	struct UImage* UnhoveredVignette; // 0x1528(0x08)
	bool bIsRecommendedLevel; // 0x1530(0x01)

	void Setup(); // Function QualityModeSelectTile.QualityModeSelectTile_C.Setup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function QualityModeSelectTile.QualityModeSelectTile_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnSelectedStateChanged(bool bIsSelected); // Function QualityModeSelectTile.QualityModeSelectTile_C.OnSelectedStateChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnSizeInfoReceived(); // Function QualityModeSelectTile.QualityModeSelectTile_C.OnSizeInfoReceived // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function QualityModeSelectTile.QualityModeSelectTile_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_QualityModeSelectTile(int32_t EntryPoint); // Function QualityModeSelectTile.QualityModeSelectTile_C.ExecuteUbergraph_QualityModeSelectTile // (Final|UbergraphFunction) // @ game+0xd67374
};

