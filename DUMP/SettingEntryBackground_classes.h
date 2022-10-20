// WidgetBlueprintGeneratedClass SettingEntryBackground.SettingEntryBackground_C
// Size: 0x2e0 (Inherited: 0x2b8)
struct USettingEntryBackground_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b8(0x08)
	struct UWidgetAnimation* OnHover; // 0x2c0(0x08)
	struct UNamedSlot* Content; // 0x2c8(0x08)
	struct FMulticastInlineDelegate OnMouseEnterChanged; // 0x2d0(0x10)

	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function SettingEntryBackground.SettingEntryBackground_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function SettingEntryBackground.SettingEntryBackground_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_SettingEntryBackground(int32_t EntryPoint); // Function SettingEntryBackground.SettingEntryBackground_C.ExecuteUbergraph_SettingEntryBackground // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
	void OnMouseEnterChanged__DelegateSignature(bool IsEnterEvent); // Function SettingEntryBackground.SettingEntryBackground_C.OnMouseEnterChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

