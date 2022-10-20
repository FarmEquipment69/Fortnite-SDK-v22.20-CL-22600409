// WidgetBlueprintGeneratedClass SidebarLfgEmptyButton.SidebarLfgEmptyButton_C
// Size: 0x1460 (Inherited: 0x1430)
struct USidebarLfgEmptyButton_C : UCommonButtonBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1430(0x08)
	struct UWidgetAnimation* Hover; // 0x1438(0x08)
	struct UCommonTextBlock* ButtonText; // 0x1440(0x08)
	struct FText ButtonCopy; // 0x1448(0x18)

	void BP_OnUnhovered(); // Function SidebarLfgEmptyButton.SidebarLfgEmptyButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnHovered(); // Function SidebarLfgEmptyButton.SidebarLfgEmptyButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function SidebarLfgEmptyButton.SidebarLfgEmptyButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function SidebarLfgEmptyButton.SidebarLfgEmptyButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_SidebarLfgEmptyButton(int32_t EntryPoint); // Function SidebarLfgEmptyButton.SidebarLfgEmptyButton_C.ExecuteUbergraph_SidebarLfgEmptyButton // (Final|UbergraphFunction) // @ game+0xd67374
};

