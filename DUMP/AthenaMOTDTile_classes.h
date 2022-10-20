// WidgetBlueprintGeneratedClass AthenaMOTDTile.AthenaMOTDTile_C
// Size: 0x1558 (Inherited: 0x14d0)
struct UAthenaMOTDTile_C : UFortAthenaMOTDTile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x14d0(0x08)
	struct UWidgetAnimation* OnHovered; // 0x14d8(0x08)
	struct UWidgetAnimation* Intro; // 0x14e0(0x08)
	struct UBorder* Border_Details; // 0x14e8(0x08)
	struct UBorder* Border_PipDisplay; // 0x14f0(0x08)
	struct UCommonLoadGuard* ; // 0x14f8(0x08)
	struct UImage* Fill; // 0x1500(0x08)
	struct UImage* ; // 0x1508(0x08)
	struct UImage* Image_ClickCatcher; // 0x1510(0x08)
	struct UImage* LoadingImage; // 0x1518(0x08)
	struct UOverlay* LoadingImageOvr; // 0x1520(0x08)
	struct UCommonWidgetSwitcherLegacy* LoadSwitcher; // 0x1528(0x08)
	struct UScaleBox* NewsItemScale; // 0x1530(0x08)
	struct USizeBox* SizeBox_Tile; // 0x1538(0x08)
	bool bShowImageOnly; // 0x1540(0x01)
	char pad_1541[0x7]; // 0x1541(0x07)
	struct FMulticastInlineDelegate OnHoveredChanged; // 0x1548(0x10)

	void UpdateDisplay(); // Function AthenaMOTDTile.AthenaMOTDTile_C.UpdateDisplay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ShowImageOnly(); // Function AthenaMOTDTile.AthenaMOTDTile_C.ShowImageOnly // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function AthenaMOTDTile.AthenaMOTDTile_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function AthenaMOTDTile.AthenaMOTDTile_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function AthenaMOTDTile.AthenaMOTDTile_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_AthenaMOTDTile(int32_t EntryPoint); // Function AthenaMOTDTile.AthenaMOTDTile_C.ExecuteUbergraph_AthenaMOTDTile // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
	void OnHoveredChanged__DelegateSignature(bool NewIsHovered); // Function AthenaMOTDTile.AthenaMOTDTile_C.OnHoveredChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

