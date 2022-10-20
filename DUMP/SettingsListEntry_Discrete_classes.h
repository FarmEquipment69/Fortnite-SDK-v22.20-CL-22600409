// WidgetBlueprintGeneratedClass SettingsListEntry_Discrete.SettingsListEntry_Discrete_C
// Size: 0x380 (Inherited: 0x350)
struct USettingsListEntry_Discrete_C : UFortSettingsListEntrySetting_Discrete {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x350(0x08)
	struct UWidgetAnimation* OnHover; // 0x358(0x08)
	struct UIconTextButton_C* Button_FirstOption; // 0x360(0x08)
	struct UIconTextButton_C* Button_SecondOption; // 0x368(0x08)
	struct UWidgetSwitcher* OptionsSets; // 0x370(0x08)
	struct UHorizontalBox* Several_Options; // 0x378(0x08)

	struct UWidget* GetPrimaryGamepadFocusWidget(); // Function SettingsListEntry_Discrete.SettingsListEntry_Discrete_C.GetPrimaryGamepadFocusWidget // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function SettingsListEntry_Discrete.SettingsListEntry_Discrete_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function SettingsListEntry_Discrete.SettingsListEntry_Discrete_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_SettingsListEntry_Discrete(int32_t EntryPoint); // Function SettingsListEntry_Discrete.SettingsListEntry_Discrete_C.ExecuteUbergraph_SettingsListEntry_Discrete // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

