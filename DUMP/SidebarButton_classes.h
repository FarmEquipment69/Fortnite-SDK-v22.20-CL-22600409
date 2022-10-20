// WidgetBlueprintGeneratedClass SidebarButton.SidebarButton_C
// Size: 0x1579 (Inherited: 0x1550)
struct USidebarButton_C : UFortSocialSidebarButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1550(0x08)
	struct UWidgetAnimation* Unselected; // 0x1558(0x08)
	struct UWidgetAnimation* Hovered; // 0x1560(0x08)
	struct UWidgetAnimation* Selected; // 0x1568(0x08)
	struct USizeBox* ; // 0x1570(0x08)
	bool Condition; // 0x1578(0x01)

	void SetSkewBoxColor(struct FLinearColor InputPin); // Function SidebarButton.SidebarButton_C.SetSkewBoxColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BP_OnUnhovered(); // Function SidebarButton.SidebarButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnHovered(); // Function SidebarButton.SidebarButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnSelected(); // Function SidebarButton.SidebarButton_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnDeselected(); // Function SidebarButton.SidebarButton_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnInitialized(); // Function SidebarButton.SidebarButton_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function SidebarButton.SidebarButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_SidebarButton(int32_t EntryPoint); // Function SidebarButton.SidebarButton_C.ExecuteUbergraph_SidebarButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

