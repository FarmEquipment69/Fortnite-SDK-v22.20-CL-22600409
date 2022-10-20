// WidgetBlueprintGeneratedClass SidebarSocialTagWidget.SidebarSocialTagWidget_C
// Size: 0x16cc (Inherited: 0x1490)
struct USidebarSocialTagWidget_C : USocialTagWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1490(0x08)
	struct UWidgetAnimation* StateChange; // 0x1498(0x08)
	struct UBorder* Border_TagBorder; // 0x14a0(0x08)
	struct UBP_SidebarCollectionScreenContainerTabButtonEditTags_C* BP_SidebarCollectionScreenContainerTabButtonEditTags; // 0x14a8(0x08)
	struct UGridPanel* GridPanel_TagWidget; // 0x14b0(0x08)
	struct UScaleBox* ScaleBox_TagCategoryIcon; // 0x14b8(0x08)
	struct USidebarSocialAddingTagWidget_C* SidebarSocialAddingTagWidget; // 0x14c0(0x08)
	struct USpacer* Spacer_TagCategoryIcon; // 0x14c8(0x08)
	struct UCommonVisibilitySwitcher* Switcher_SelectedState; // 0x14d0(0x08)
	struct UCommonTextBlock* Text_TagName; // 0x14d8(0x08)
	struct FName Name_InnerColor; // 0x14e0(0x04)
	struct FName Name_OuterColor; // 0x14e4(0x04)
	struct FName Name_TagOpacity; // 0x14e8(0x04)
	char pad_14EC[0x4]; // 0x14ec(0x04)
	struct FString TagCategory_Disabled; // 0x14f0(0x10)
	struct FTimerHandle StateChangeLerpTimerHandle; // 0x1500(0x08)
	double StateChangeLerpAlpha; // 0x1508(0x08)
	struct FSidebarSocialTagCategoryStructure TagCategoryStructureReference; // 0x1510(0x70)
	struct FSidebarSocialTagCategoryStructure DisabledTagCategoryStructureReference; // 0x1580(0x70)
	double StateChangeLerpTimeStep; // 0x15f0(0x08)
	struct UMaterialInstanceDynamic* TagBorderMaterialReference; // 0x15f8(0x08)
	struct FLinearColor CurrentInnerColorReference; // 0x1600(0x10)
	struct FLinearColor CurrentOuterColorReference; // 0x1610(0x10)
	struct FLinearColor TargetInnerColorReference; // 0x1620(0x10)
	struct FLinearColor TargetOuterColorReference; // 0x1630(0x10)
	struct FLinearColor TagContentColorWhite; // 0x1640(0x10)
	struct FLinearColor TagContentColorWhiteDisabled; // 0x1650(0x10)
	struct FLinearColor TagContentColorBlack; // 0x1660(0x10)
	struct FLinearColor CurrentTagContentColorReference; // 0x1670(0x10)
	struct FLinearColor TargetTagContentColorReference; // 0x1680(0x10)
	struct FLinearColor TagContentColorBlackDisabled; // 0x1690(0x10)
	double EnabledTagOpacity; // 0x16a0(0x08)
	double DisabledTagOpacity; // 0x16a8(0x08)
	bool Highlighted; // 0x16b0(0x01)
	char pad_16B1[0x7]; // 0x16b1(0x07)
	struct UMaterialInstanceDynamic* TagCategoryIconMaterialReference; // 0x16b8(0x08)
	struct FName Name_GradientStartColor; // 0x16c0(0x04)
	struct FName Name_GradientEndColor; // 0x16c4(0x04)
	struct FName Name_IconColor; // 0x16c8(0x04)

	void FunctionSetTagBorderColors(struct FLinearColor InnerColor, struct FLinearColor OuterColor); // Function SidebarSocialTagWidget.SidebarSocialTagWidget_C.FunctionSetTagBorderColors // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnTagListEntryUnhovered(); // Function SidebarSocialTagWidget.SidebarSocialTagWidget_C.OnTagListEntryUnhovered // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnTagListEntryHovered(); // Function SidebarSocialTagWidget.SidebarSocialTagWidget_C.OnTagListEntryHovered // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void GetCurrentTagBorderColors(); // Function SidebarSocialTagWidget.SidebarSocialTagWidget_C.GetCurrentTagBorderColors // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void FunctionOnUnhovered(); // Function SidebarSocialTagWidget.SidebarSocialTagWidget_C.FunctionOnUnhovered // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void FunctionOnHovered(); // Function SidebarSocialTagWidget.SidebarSocialTagWidget_C.FunctionOnHovered // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void FunctionSetCategoryCustomizationVisibility(enum class ESlateVisibility CategoryCustomizationVisibility); // Function SidebarSocialTagWidget.SidebarSocialTagWidget_C.FunctionSetCategoryCustomizationVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void FunctionSetTag(struct FText InTagName, enum class ESocialTagCategory InTagCategory, bool InIsSystemTag); // Function SidebarSocialTagWidget.SidebarSocialTagWidget_C.FunctionSetTag // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetCategoryCustomizationVisibility(enum class ESlateVisibility CategoryCustomizationVisibility); // Function SidebarSocialTagWidget.SidebarSocialTagWidget_C.SetCategoryCustomizationVisibility // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnHovered(); // Function SidebarSocialTagWidget.SidebarSocialTagWidget_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnUnhovered(); // Function SidebarSocialTagWidget.SidebarSocialTagWidget_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnDeselected(); // Function SidebarSocialTagWidget.SidebarSocialTagWidget_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnSelected(); // Function SidebarSocialTagWidget.SidebarSocialTagWidget_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void SetTag(struct FText& InTagName, enum class ESocialTagCategory InTagCategory, bool bInIsSystemTag); // Function SidebarSocialTagWidget.SidebarSocialTagWidget_C.SetTag // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void InterpolateTagColors(); // Function SidebarSocialTagWidget.SidebarSocialTagWidget_C.InterpolateTagColors // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function SidebarSocialTagWidget.SidebarSocialTagWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void SetHighlightState(bool bHighlighted); // Function SidebarSocialTagWidget.SidebarSocialTagWidget_C.SetHighlightState // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void SetFullColor(); // Function SidebarSocialTagWidget.SidebarSocialTagWidget_C.SetFullColor // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_SidebarSocialTagWidget(int32_t EntryPoint); // Function SidebarSocialTagWidget.SidebarSocialTagWidget_C.ExecuteUbergraph_SidebarSocialTagWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

