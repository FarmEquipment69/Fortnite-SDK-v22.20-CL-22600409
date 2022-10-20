// WidgetBlueprintGeneratedClass SidebarSettingsListEntry_Scalar_Narrow.SidebarSettingsListEntry_Scalar_Narrow_C
// Size: 0x368 (Inherited: 0x340)
struct USidebarSettingsListEntry_Scalar_Narrow_C : UFortSettingsListEntrySetting_Scalar {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x340(0x08)
	struct UWidgetAnimation* OnHover; // 0x348(0x08)
	struct UImage* DefaultValueLayer; // 0x350(0x08)
	struct USimpleMaterialProgressBar_C* Progress; // 0x358(0x08)
	struct USidebarSettingEntryBackground_C* SidebarSettingEntryBackground; // 0x360(0x08)

	struct UWidget* GetPrimaryGamepadFocusWidget(); // Function SidebarSettingsListEntry_Scalar_Narrow.SidebarSettingsListEntry_Scalar_Narrow_C.GetPrimaryGamepadFocusWidget // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnValueChanged(float Value); // Function SidebarSettingsListEntry_Scalar_Narrow.SidebarSettingsListEntry_Scalar_Narrow_C.OnValueChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnDefaultValueChanged(float DefaultValue); // Function SidebarSettingsListEntry_Scalar_Narrow.SidebarSettingsListEntry_Scalar_Narrow_C.OnDefaultValueChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function SidebarSettingsListEntry_Scalar_Narrow.SidebarSettingsListEntry_Scalar_Narrow_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function SidebarSettingsListEntry_Scalar_Narrow.SidebarSettingsListEntry_Scalar_Narrow_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_SidebarSettingsListEntry_Scalar_Narrow(int32_t EntryPoint); // Function SidebarSettingsListEntry_Scalar_Narrow.SidebarSettingsListEntry_Scalar_Narrow_C.ExecuteUbergraph_SidebarSettingsListEntry_Scalar_Narrow // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

