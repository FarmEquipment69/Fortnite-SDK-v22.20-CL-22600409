// WidgetBlueprintGeneratedClass SettingsListEntry_SubCollection.SettingsListEntry_SubCollection_C
// Size: 0x340 (Inherited: 0x330)
struct USettingsListEntry_SubCollection_C : UFortSettingsListEntrySetting_Navigation {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UWidgetAnimation* OnHover; // 0x338(0x08)

	struct UWidget* GetPrimaryGamepadFocusWidget(); // Function SettingsListEntry_SubCollection.SettingsListEntry_SubCollection_C.GetPrimaryGamepadFocusWidget // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnSettingAssigned(struct FText& ActionText); // Function SettingsListEntry_SubCollection.SettingsListEntry_SubCollection_C.OnSettingAssigned // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function SettingsListEntry_SubCollection.SettingsListEntry_SubCollection_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function SettingsListEntry_SubCollection.SettingsListEntry_SubCollection_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_SettingsListEntry_SubCollection(int32_t EntryPoint); // Function SettingsListEntry_SubCollection.SettingsListEntry_SubCollection_C.ExecuteUbergraph_SettingsListEntry_SubCollection // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

