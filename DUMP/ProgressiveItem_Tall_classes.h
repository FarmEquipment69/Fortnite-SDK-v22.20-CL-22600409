// WidgetBlueprintGeneratedClass ProgressiveItem_Tall.ProgressiveItem_Tall_C
// Size: 0x161e (Inherited: 0x14e0)
struct UProgressiveItem_Tall_C : UFortProgressiveSetTile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x14e0(0x08)
	struct UWidgetAnimation* HoverBurst; // 0x14e8(0x08)
	struct UWidgetAnimation* Deselected; // 0x14f0(0x08)
	struct UWidgetAnimation* Selected; // 0x14f8(0x08)
	struct UImage* Image; // 0x1500(0x08)
	struct UImage* ; // 0x1508(0x08)
	struct UImage* ; // 0x1510(0x08)
	struct UImage* Image_CompletedCheck; // 0x1518(0x08)
	struct UImage* Image_Dimmer; // 0x1520(0x08)
	struct UImage* Image_Gradient; // 0x1528(0x08)
	struct UFortLazyImage* Image_Item; // 0x1530(0x08)
	struct UImage* Image_PriceBg; // 0x1538(0x08)
	struct UOverlay* Overlay_InspectionText; // 0x1540(0x08)
	struct UCommonVisibilitySwitcher* Switcher_CheckDelay; // 0x1548(0x08)
	struct UAthenaItemShopReactiveTileText* Text_Stages; // 0x1550(0x08)
	struct UCommonRichTextBlock* Text_Subtitle; // 0x1558(0x08)
	struct UAthenaItemShopReactiveTileText* TileText_ItemName; // 0x1560(0x08)
	enum class ETextJustify TileTextJustification; // 0x1568(0x01)
	char pad_1569[0x7]; // 0x1569(0x07)
	struct UMaterialInterface* Material; // 0x1570(0x08)
	struct FVector2D In Size; // 0x1578(0x10)
	double Extra Space; // 0x1588(0x08)
	struct FText Empty text; // 0x1590(0x18)
	bool IsDisabled; // 0x15a8(0x01)
	bool HasExtraLock; // 0x15a9(0x01)
	char pad_15AA[0x6]; // 0x15aa(0x06)
	struct FProgressiveSetInfo SetInfo; // 0x15b0(0x68)
	bool Subscribed; // 0x1618(0x01)
	bool IsCompleted; // 0x1619(0x01)
	bool Hovered_DesignTime; // 0x161a(0x01)
	bool Subbed_DesignTime; // 0x161b(0x01)
	bool Completed_DesignTime; // 0x161c(0x01)
	bool Hovered; // 0x161d(0x01)

	void UpdateSubscribedState(bool bInSubscribed); // Function ProgressiveItem_Tall.ProgressiveItem_Tall_C.UpdateSubscribedState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateCompletedState(); // Function ProgressiveItem_Tall.ProgressiveItem_Tall_C.UpdateCompletedState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateVisualState(bool Selected, bool Subbed, bool Completed, bool Hovered); // Function ProgressiveItem_Tall.ProgressiveItem_Tall_C.UpdateVisualState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Play intro(); // Function ProgressiveItem_Tall.ProgressiveItem_Tall_C.Play intro // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function ProgressiveItem_Tall.ProgressiveItem_Tall_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void BP_OnInitializeSetInfo(struct FProgressiveSetInfo& InSetInfo, struct FText& BottomText, struct FText& BottomSubtext, bool bSubscribed); // Function ProgressiveItem_Tall.ProgressiveItem_Tall_C.BP_OnInitializeSetInfo // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void BP_OnSelected(); // Function ProgressiveItem_Tall.ProgressiveItem_Tall_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnDeselected(); // Function ProgressiveItem_Tall.ProgressiveItem_Tall_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnTileMaterialLoaded(bool bSubscribed); // Function ProgressiveItem_Tall.ProgressiveItem_Tall_C.BP_OnTileMaterialLoaded // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnHovered(); // Function ProgressiveItem_Tall.ProgressiveItem_Tall_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnUnhovered(); // Function ProgressiveItem_Tall.ProgressiveItem_Tall_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_ProgressiveItem_Tall(int32_t EntryPoint); // Function ProgressiveItem_Tall.ProgressiveItem_Tall_C.ExecuteUbergraph_ProgressiveItem_Tall // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

