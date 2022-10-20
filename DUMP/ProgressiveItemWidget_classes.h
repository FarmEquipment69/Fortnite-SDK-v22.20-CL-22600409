// WidgetBlueprintGeneratedClass ProgressiveItemWidget.ProgressiveItemWidget_C
// Size: 0x154a (Inherited: 0x14c0)
struct UProgressiveItemWidget_C : UFortProgressiveItemWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x14c0(0x08)
	struct UWidgetAnimation* Item_Hover; // 0x14c8(0x08)
	struct UWidgetAnimation* Hover_Burst; // 0x14d0(0x08)
	struct UWidgetAnimation* Select; // 0x14d8(0x08)
	struct UWidgetAnimation* NotCurrentRow; // 0x14e0(0x08)
	struct UWidgetAnimation* Reveal_Hide; // 0x14e8(0x08)
	struct UWidgetAnimation* GrowTile; // 0x14f0(0x08)
	struct UImage* DisableTintOverlay; // 0x14f8(0x08)
	struct UHorizontalBox* HBox_locks; // 0x1500(0x08)
	struct UImage* Image; // 0x1508(0x08)
	struct UImage* ; // 0x1510(0x08)
	struct UImage* Image_RarityStripe; // 0x1518(0x08)
	struct UFortLazyImage* ItemCardImage; // 0x1520(0x08)
	struct UImage* OffscreenOverlay; // 0x1528(0x08)
	struct UOverlay* Overlay_Delayed; // 0x1530(0x08)
	struct UFortMobileImage* Widget_ClaimedImage; // 0x1538(0x08)
	struct UFortMobileImage* Widget_LockedImage; // 0x1540(0x08)
	bool Selected; // 0x1548(0x01)
	bool Hovered; // 0x1549(0x01)

	void Update Subscribed Visuals(bool IsSubscribed); // Function ProgressiveItemWidget.ProgressiveItemWidget_C.Update Subscribed Visuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnStageItemChanged(struct FProgressiveStageItemInfo& InStageItemInfo); // Function ProgressiveItemWidget.ProgressiveItemWidget_C.OnStageItemChanged // (Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnHighlighted(); // Function ProgressiveItemWidget.ProgressiveItemWidget_C.OnHighlighted // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnUnhighlighted(); // Function ProgressiveItemWidget.ProgressiveItemWidget_C.OnUnhighlighted // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnPeekStateChanged(bool bIsInPeekState); // Function ProgressiveItemWidget.ProgressiveItemWidget_C.OnPeekStateChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function ProgressiveItemWidget.ProgressiveItemWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void BP_OnHovered(); // Function ProgressiveItemWidget.ProgressiveItemWidget_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnInitialized(); // Function ProgressiveItemWidget.ProgressiveItemWidget_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void BP_OnUnhovered(); // Function ProgressiveItemWidget.ProgressiveItemWidget_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnTileMaterialLoaded(bool bSubscribed); // Function ProgressiveItemWidget.ProgressiveItemWidget_C.OnTileMaterialLoaded // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_ProgressiveItemWidget(int32_t EntryPoint); // Function ProgressiveItemWidget.ProgressiveItemWidget_C.ExecuteUbergraph_ProgressiveItemWidget // (Final|UbergraphFunction) // @ game+0xd67374
};

