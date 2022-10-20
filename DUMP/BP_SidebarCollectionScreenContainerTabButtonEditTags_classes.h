// WidgetBlueprintGeneratedClass BP_SidebarCollectionScreenContainerTabButtonEditTags.BP_SidebarCollectionScreenContainerTabButtonEditTags_C
// Size: 0x1579 (Inherited: 0x14d0)
struct UBP_SidebarCollectionScreenContainerTabButtonEditTags_C : UFortSidebarCollectionScreenContainerTabButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x14d0(0x08)
	struct UWidgetAnimation* Selected_Touch; // 0x14d8(0x08)
	struct UWidgetAnimation* Unselected_Touch; // 0x14e0(0x08)
	struct UWidgetAnimation* Tag_DisabledUnhover; // 0x14e8(0x08)
	struct UWidgetAnimation* Tag_DisabledHover; // 0x14f0(0x08)
	struct UWidgetAnimation* Tag_DisabledUnhovered; // 0x14f8(0x08)
	struct UWidgetAnimation* Tag_DisabledHovered; // 0x1500(0x08)
	struct UWidgetAnimation* Tag_Enabled; // 0x1508(0x08)
	struct UWidgetAnimation* Tag_Unhovered; // 0x1510(0x08)
	struct UWidgetAnimation* Tag_Hovered; // 0x1518(0x08)
	struct UWidgetAnimation* Tag_Reset; // 0x1520(0x08)
	struct UWidgetAnimation* Reset; // 0x1528(0x08)
	struct UWidgetAnimation* Unhovered; // 0x1530(0x08)
	struct UWidgetAnimation* Hovered; // 0x1538(0x08)
	struct UWidgetAnimation* Unselected; // 0x1540(0x08)
	struct UWidgetAnimation* Selected; // 0x1548(0x08)
	struct UHorizontalBox* ; // 0x1550(0x08)
	struct USpacer* Mobile_Spacer; // 0x1558(0x08)
	struct UCommonBorder* NewBang; // 0x1560(0x08)
	struct UOverlay* ; // 0x1568(0x08)
	struct UScaleBox* ScaleBox_MobileMultiplier; // 0x1570(0x08)
	bool isTab; // 0x1578(0x01)

	void HandleInputMethodChanged(enum class ECommonInputType NewInputType); // Function BP_SidebarCollectionScreenContainerTabButtonEditTags.BP_SidebarCollectionScreenContainerTabButtonEditTags_C.HandleInputMethodChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Finished_D3AB39584598BB6DA7EE7C98805576AC(); // Function BP_SidebarCollectionScreenContainerTabButtonEditTags.BP_SidebarCollectionScreenContainerTabButtonEditTags_C.Finished_D3AB39584598BB6DA7EE7C98805576AC // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BP_OnHovered(); // Function BP_SidebarCollectionScreenContainerTabButtonEditTags.BP_SidebarCollectionScreenContainerTabButtonEditTags_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnUnhovered(); // Function BP_SidebarCollectionScreenContainerTabButtonEditTags.BP_SidebarCollectionScreenContainerTabButtonEditTags_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnSelected(); // Function BP_SidebarCollectionScreenContainerTabButtonEditTags.BP_SidebarCollectionScreenContainerTabButtonEditTags_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnDeselected(); // Function BP_SidebarCollectionScreenContainerTabButtonEditTags.BP_SidebarCollectionScreenContainerTabButtonEditTags_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_ShowBang(bool bShow); // Function BP_SidebarCollectionScreenContainerTabButtonEditTags.BP_SidebarCollectionScreenContainerTabButtonEditTags_C.BP_ShowBang // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function BP_SidebarCollectionScreenContainerTabButtonEditTags.BP_SidebarCollectionScreenContainerTabButtonEditTags_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void BP_OnTagCategoryChange(enum class ESocialTagCategory InTagCategory); // Function BP_SidebarCollectionScreenContainerTabButtonEditTags.BP_SidebarCollectionScreenContainerTabButtonEditTags_C.BP_OnTagCategoryChange // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnInitialized(); // Function BP_SidebarCollectionScreenContainerTabButtonEditTags.BP_SidebarCollectionScreenContainerTabButtonEditTags_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_BP_SidebarCollectionScreenContainerTabButtonEditTags(int32_t EntryPoint); // Function BP_SidebarCollectionScreenContainerTabButtonEditTags.BP_SidebarCollectionScreenContainerTabButtonEditTags_C.ExecuteUbergraph_BP_SidebarCollectionScreenContainerTabButtonEditTags // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

