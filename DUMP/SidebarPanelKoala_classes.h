// WidgetBlueprintGeneratedClass SidebarPanelKoala.SidebarPanelKoala_C
// Size: 0x490 (Inherited: 0x430)
struct USidebarPanelKoala_C : UFortSidebarPanelKoala {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x430(0x08)
	struct UVerticalBox* PanelWidget_KoalaElements; // 0x438(0x08)
	struct UCommonRichTextBlock* RichText_Description_SignIn; // 0x440(0x08)
	struct UFortRichTextBlockKeybind* RichText_Description_Use; // 0x448(0x08)
	struct UCommonVisibilitySwitcher* Switcher_Description; // 0x450(0x08)
	struct UCommonRichTextBlock* Text_BasicKoalaDescription; // 0x458(0x08)
	struct FText UsageDescText_KBM; // 0x460(0x18)
	struct FText UsageDescText_Gamepad; // 0x478(0x18)

	void UpdateUsageDescription(enum class ECommonInputType Index); // Function SidebarPanelKoala.SidebarPanelKoala_C.UpdateUsageDescription // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function SidebarPanelKoala.SidebarPanelKoala_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnConnectionChanged(bool bConnected); // Function SidebarPanelKoala.SidebarPanelKoala_C.OnConnectionChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnInputMethodChanged(enum class ECommonInputType bNewInputType); // Function SidebarPanelKoala.SidebarPanelKoala_C.OnInputMethodChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_SidebarPanelKoala(int32_t EntryPoint); // Function SidebarPanelKoala.SidebarPanelKoala_C.ExecuteUbergraph_SidebarPanelKoala // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

