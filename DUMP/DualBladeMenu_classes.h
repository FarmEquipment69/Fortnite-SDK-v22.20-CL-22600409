// WidgetBlueprintGeneratedClass DualBladeMenu.DualBladeMenu_C
// Size: 0x470 (Inherited: 0x458)
struct UDualBladeMenu_C : UFortDualBladeMenu {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x458(0x08)
	struct UOverlay* MainOverlay; // 0x460(0x08)
	struct UOverlay* Overlay_xp; // 0x468(0x08)

	void OnInitialized(); // Function DualBladeMenu.DualBladeMenu_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnFullScreenWidgetCreated(struct UWidget* NewWidget); // Function DualBladeMenu.DualBladeMenu_C.OnFullScreenWidgetCreated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_DualBladeMenu(int32_t EntryPoint); // Function DualBladeMenu.DualBladeMenu_C.ExecuteUbergraph_DualBladeMenu // (Final|UbergraphFunction) // @ game+0xd67374
};

