// WidgetBlueprintGeneratedClass ProgressiveStageWidget.ProgressiveStageWidget_C
// Size: 0x359 (Inherited: 0x300)
struct UProgressiveStageWidget_C : UFortProgressiveStageWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x08)
	struct UWidgetAnimation* Outro; // 0x308(0x08)
	struct UWidgetAnimation* Intro; // 0x310(0x08)
	struct UOverlay* CenterSeparator; // 0x318(0x08)
	struct UImage* DownArrow; // 0x320(0x08)
	struct UImage* Image; // 0x328(0x08)
	struct UOverlay* ItemLeftContainer; // 0x330(0x08)
	struct UOverlay* ItemRightContainer; // 0x338(0x08)
	struct UProgressiveItem_Tooltip_C* ProgressiveItem_Tooltip; // 0x340(0x08)
	struct UProgressiveItemWidget_C* ProgressiveItemWidget_Left; // 0x348(0x08)
	struct UProgressiveItemWidget_C* ProgressiveItemWidget_Right; // 0x350(0x08)
	bool Show Top Arrow; // 0x358(0x01)

	void Update Subscribed Visuals(bool IsSubscribed); // Function ProgressiveStageWidget.ProgressiveStageWidget_C.Update Subscribed Visuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function ProgressiveStageWidget.ProgressiveStageWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ClearStageItemWidgets(); // Function ProgressiveStageWidget.ProgressiveStageWidget_C.ClearStageItemWidgets // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	struct UFortProgressiveItemWidget* AddStageItemWidget(); // Function ProgressiveStageWidget.ProgressiveStageWidget_C.AddStageItemWidget // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function ProgressiveStageWidget.ProgressiveStageWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnPeekStateChanged(bool bIsInPeekState); // Function ProgressiveStageWidget.ProgressiveStageWidget_C.OnPeekStateChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnSetTooltipText(struct FText& InToolTipText); // Function ProgressiveStageWidget.ProgressiveStageWidget_C.OnSetTooltipText // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnSetTooltipVisible(bool bVisible); // Function ProgressiveStageWidget.ProgressiveStageWidget_C.OnSetTooltipVisible // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_ProgressiveStageWidget(int32_t EntryPoint); // Function ProgressiveStageWidget.ProgressiveStageWidget_C.ExecuteUbergraph_ProgressiveStageWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

