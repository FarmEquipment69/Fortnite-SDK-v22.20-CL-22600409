// WidgetBlueprintGeneratedClass UserListHeaderEntry.UserListHeaderEntry_C
// Size: 0x14d8 (Inherited: 0x14b0)
struct UUserListHeaderEntry_C : USocialUserListHeaderEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x14b0(0x08)
	struct UWidgetAnimation* OnExpansion; // 0x14b8(0x08)
	struct UWidgetAnimation* OnHover; // 0x14c0(0x08)
	struct UFortMobileImage* ExpandDirectionTick; // 0x14c8(0x08)
	struct USizeBox* SB_EntryContent; // 0x14d0(0x08)

	void BP_OnUnhovered(); // Function UserListHeaderEntry.UserListHeaderEntry_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function UserListHeaderEntry.UserListHeaderEntry_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnHovered(); // Function UserListHeaderEntry.UserListHeaderEntry_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void (struct UObject* ListItemObject); // Function UserListHeaderEntry.UserListHeaderEntry_C. // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnFocusLost(struct FFocusEvent InFocusEvent); // Function UserListHeaderEntry.UserListHeaderEntry_C.OnFocusLost // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_UserListHeaderEntry(int32_t EntryPoint); // Function UserListHeaderEntry.UserListHeaderEntry_C.ExecuteUbergraph_UserListHeaderEntry // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

