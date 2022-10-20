// WidgetBlueprintGeneratedClass AthenaMOTDTileMainPage.AthenaMOTDTileMainPage_C
// Size: 0x1578 (Inherited: 0x14d0)
struct UAthenaMOTDTileMainPage_C : UFortAthenaMOTDTile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x14d0(0x08)
	struct UWidgetAnimation* OnHover; // 0x14d8(0x08)
	struct UWidgetAnimation* OnSelected; // 0x14e0(0x08)
	struct UWidgetAnimation* Intro; // 0x14e8(0x08)
	struct UBorder* Border_Details; // 0x14f0(0x08)
	struct UBorder* Border_PipDisplay; // 0x14f8(0x08)
	struct UCommonLoadGuard* ; // 0x1500(0x08)
	struct UImage* Fill; // 0x1508(0x08)
	struct UImage* Image_SelectedPointer; // 0x1510(0x08)
	struct UImage* Image_SelectedPointer_Shadow; // 0x1518(0x08)
	struct UImage* LoadingImage; // 0x1520(0x08)
	struct UOverlay* LoadingImageOvr; // 0x1528(0x08)
	struct UCommonWidgetSwitcherLegacy* LoadSwitcher; // 0x1530(0x08)
	struct UScaleBox* NewsItemScale; // 0x1538(0x08)
	struct USizeBox* SizeBox_Tile; // 0x1540(0x08)
	bool bShowImageOnly; // 0x1548(0x01)
	char pad_1549[0x3]; // 0x1549(0x03)
	int32_t PreviewPipCount; // 0x154c(0x04)
	struct FMulticastInlineDelegate OnHoveredChanged; // 0x1550(0x10)
	struct FLinearColor DefaultColor; // 0x1560(0x10)
	struct UMaterialInstanceDynamic* MID_Font; // 0x1570(0x08)

	void UpdateDisplay(); // Function AthenaMOTDTileMainPage.AthenaMOTDTileMainPage_C.UpdateDisplay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ShowImageOnly(); // Function AthenaMOTDTileMainPage.AthenaMOTDTileMainPage_C.ShowImageOnly // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function AthenaMOTDTileMainPage.AthenaMOTDTileMainPage_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function AthenaMOTDTileMainPage.AthenaMOTDTileMainPage_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function AthenaMOTDTileMainPage.AthenaMOTDTileMainPage_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function AthenaMOTDTileMainPage.AthenaMOTDTileMainPage_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnPopulateNews(struct FAthenaMOTDBase& NewsEntry); // Function AthenaMOTDTileMainPage.AthenaMOTDTileMainPage_C.OnPopulateNews // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void BP_OnSelected(); // Function AthenaMOTDTileMainPage.AthenaMOTDTileMainPage_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnDeselected(); // Function AthenaMOTDTileMainPage.AthenaMOTDTileMainPage_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnInitialized(); // Function AthenaMOTDTileMainPage.AthenaMOTDTileMainPage_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_AthenaMOTDTileMainPage(int32_t EntryPoint); // Function AthenaMOTDTileMainPage.AthenaMOTDTileMainPage_C.ExecuteUbergraph_AthenaMOTDTileMainPage // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
	void OnHoveredChanged__DelegateSignature(bool NewIsHovered); // Function AthenaMOTDTileMainPage.AthenaMOTDTileMainPage_C.OnHoveredChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

