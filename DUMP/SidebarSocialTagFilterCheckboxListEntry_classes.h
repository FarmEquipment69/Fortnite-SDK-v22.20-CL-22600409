// WidgetBlueprintGeneratedClass SidebarSocialTagFilterCheckboxListEntry.SidebarSocialTagFilterCheckboxListEntry_C
// Size: 0x1510 (Inherited: 0x14c0)
struct USidebarSocialTagFilterCheckboxListEntry_C : UFortLFGFilterCheckboxEntryWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x14c0(0x08)
	struct UWidgetAnimation* Unhovered; // 0x14c8(0x08)
	struct UWidgetAnimation* Hovered; // 0x14d0(0x08)
	struct UBorder* Border_Background; // 0x14d8(0x08)
	struct USizeBox* SBox_Checkbox; // 0x14e0(0x08)
	struct USizeBox* ; // 0x14e8(0x08)
	struct FLinearColor EncourageEpicFriend_IdleColor; // 0x14f0(0x10)
	struct FLinearColor EncourageEpicFriend_HoveredColor; // 0x1500(0x10)

	void Construct(); // Function SidebarSocialTagFilterCheckboxListEntry.SidebarSocialTagFilterCheckboxListEntry_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void BP_OnHovered(); // Function SidebarSocialTagFilterCheckboxListEntry.SidebarSocialTagFilterCheckboxListEntry_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnUnhovered(); // Function SidebarSocialTagFilterCheckboxListEntry.SidebarSocialTagFilterCheckboxListEntry_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_SidebarSocialTagFilterCheckboxListEntry(int32_t EntryPoint); // Function SidebarSocialTagFilterCheckboxListEntry.SidebarSocialTagFilterCheckboxListEntry_C.ExecuteUbergraph_SidebarSocialTagFilterCheckboxListEntry // (Final|UbergraphFunction) // @ game+0xd67374
};

