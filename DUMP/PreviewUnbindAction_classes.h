// WidgetBlueprintGeneratedClass PreviewUnbindAction.PreviewUnbindAction_C
// Size: 0x2f8 (Inherited: 0x2d0)
struct UPreviewUnbindAction_C : UFortSettingsPreviewActionUnbind {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d0(0x08)
	struct UCommonBorder* BorderFrame; // 0x2d8(0x08)
	struct UCommonBorder* ; // 0x2e0(0x08)
	struct USizeBox* PrimaryKeybindTextSizeBox; // 0x2e8(0x08)
	struct USizeBox* SecondaryKeybindTextSizeBox; // 0x2f0(0x08)

	void BP_OnEntryReleased(); // Function PreviewUnbindAction.PreviewUnbindAction_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function PreviewUnbindAction.PreviewUnbindAction_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function PreviewUnbindAction.PreviewUnbindAction_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function PreviewUnbindAction.PreviewUnbindAction_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_PreviewUnbindAction(int32_t EntryPoint); // Function PreviewUnbindAction.PreviewUnbindAction_C.ExecuteUbergraph_PreviewUnbindAction // (Final|UbergraphFunction) // @ game+0xd67374
};

