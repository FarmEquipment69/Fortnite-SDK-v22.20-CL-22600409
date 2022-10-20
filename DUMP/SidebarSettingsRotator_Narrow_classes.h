// WidgetBlueprintGeneratedClass SidebarSettingsRotator_Narrow.SidebarSettingsRotator_Narrow_C
// Size: 0x14a8 (Inherited: 0x1490)
struct USidebarSettingsRotator_Narrow_C : UFortSettingsRotator {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1490(0x08)
	struct UWidgetAnimation* RotatorHover; // 0x1498(0x08)
	struct UBorder* Background; // 0x14a0(0x08)

	void BP_OnOptionsPopulated(int32_t Count); // Function SidebarSettingsRotator_Narrow.SidebarSettingsRotator_Narrow_C.BP_OnOptionsPopulated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnOptionSelected(int32_t Index); // Function SidebarSettingsRotator_Narrow.SidebarSettingsRotator_Narrow_C.BP_OnOptionSelected // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnDefaultOptionSpecified(int32_t DefaultOptionIndex); // Function SidebarSettingsRotator_Narrow.SidebarSettingsRotator_Narrow_C.BP_OnDefaultOptionSpecified // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnHover Animation(); // Function SidebarSettingsRotator_Narrow.SidebarSettingsRotator_Narrow_C.OnHover Animation // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnUnHover Animation(); // Function SidebarSettingsRotator_Narrow.SidebarSettingsRotator_Narrow_C.OnUnHover Animation // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_SidebarSettingsRotator_Narrow(int32_t EntryPoint); // Function SidebarSettingsRotator_Narrow.SidebarSettingsRotator_Narrow_C.ExecuteUbergraph_SidebarSettingsRotator_Narrow // (Final|UbergraphFunction) // @ game+0xd67374
};

