// WidgetBlueprintGeneratedClass SidebarSocialAddTagWidget.SidebarSocialAddTagWidget_C
// Size: 0x1620 (Inherited: 0x1430)
struct USidebarSocialAddTagWidget_C : UCommonButtonBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1430(0x08)
	struct UWidgetAnimation* Hovered; // 0x1438(0x08)
	struct UBorder* Border_AddTagBorder; // 0x1440(0x08)
	struct USidebarSocialAddingTagWidget_C* SidebarSocialAddingTagWidget; // 0x1448(0x08)
	struct UCommonVisibilitySwitcher* Switcher_Tag; // 0x1450(0x08)
	struct UCommonTextBlock* Text_AddTagName; // 0x1458(0x08)
	struct FTimerHandle StateChangeLerpTimerHandle; // 0x1460(0x08)
	double StateChangeLerpAlpha; // 0x1468(0x08)
	double StateChangeLerpTimeStep; // 0x1470(0x08)
	struct FLinearColor TagContentColorWhite; // 0x1478(0x10)
	struct FLinearColor TagContentColorBlack; // 0x1488(0x10)
	double EnabledTagOpacity; // 0x1498(0x08)
	double DisabledTagOpacity; // 0x14a0(0x08)
	struct FName Name_InnerColor; // 0x14a8(0x04)
	struct FName Name_OuterColor; // 0x14ac(0x04)
	struct FName Name_TagOpacity; // 0x14b0(0x04)
	char pad_14B4[0x4]; // 0x14b4(0x04)
	struct FString TagCategory_AddTag; // 0x14b8(0x10)
	struct FString TagCategory_Disabled; // 0x14c8(0x10)
	struct FLinearColor CurrentInnerColorReference; // 0x14d8(0x10)
	struct FLinearColor CurrentOuterColorReference; // 0x14e8(0x10)
	struct FLinearColor TargetInnerColorReference; // 0x14f8(0x10)
	struct FLinearColor TargetOuterColorReference; // 0x1508(0x10)
	struct FLinearColor CurrentTagContentColorReference; // 0x1518(0x10)
	struct FLinearColor TargetTagContentColorReference; // 0x1528(0x10)
	struct FSidebarSocialTagCategoryStructure TagCategoryStructureReference; // 0x1538(0x70)
	struct FSidebarSocialTagCategoryStructure DisabledTagCategoryStructureReference; // 0x15a8(0x70)
	struct UMaterialInstanceDynamic* TagBorderMaterialReference; // 0x1618(0x08)

	void GetCurrentTagBorderColors(); // Function SidebarSocialAddTagWidget.SidebarSocialAddTagWidget_C.GetCurrentTagBorderColors // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void FunctionOnUnhovered(); // Function SidebarSocialAddTagWidget.SidebarSocialAddTagWidget_C.FunctionOnUnhovered // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void FunctionOnHovered(); // Function SidebarSocialAddTagWidget.SidebarSocialAddTagWidget_C.FunctionOnHovered // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void FunctionSetCategoryCustomizationVisibility(enum class ESlateVisibility CategoryCustomizationVisibility); // Function SidebarSocialAddTagWidget.SidebarSocialAddTagWidget_C.FunctionSetCategoryCustomizationVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void EventSetTag(); // Function SidebarSocialAddTagWidget.SidebarSocialAddTagWidget_C.EventSetTag // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BP_OnUnhovered(); // Function SidebarSocialAddTagWidget.SidebarSocialAddTagWidget_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnSelected(); // Function SidebarSocialAddTagWidget.SidebarSocialAddTagWidget_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnDeselected(); // Function SidebarSocialAddTagWidget.SidebarSocialAddTagWidget_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnHovered(); // Function SidebarSocialAddTagWidget.SidebarSocialAddTagWidget_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function SidebarSocialAddTagWidget.SidebarSocialAddTagWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void InterpolateTagColors(); // Function SidebarSocialAddTagWidget.SidebarSocialAddTagWidget_C.InterpolateTagColors // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_SidebarSocialAddTagWidget(int32_t EntryPoint); // Function SidebarSocialAddTagWidget.SidebarSocialAddTagWidget_C.ExecuteUbergraph_SidebarSocialAddTagWidget // (Final|UbergraphFunction) // @ game+0xd67374
};

