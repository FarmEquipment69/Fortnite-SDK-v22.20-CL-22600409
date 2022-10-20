// WidgetBlueprintGeneratedClass windowchromebuttons.windowchromebuttons_C
// Size: 0x300 (Inherited: 0x2e0)
struct Uwindowchromebuttons_C : UCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UWidgetAnimation* FadeOut; // 0x2e8(0x08)
	struct UWidgetAnimation* FadeIn; // 0x2f0(0x08)
	struct UWindowTitleBarArea* ; // 0x2f8(0x08)

	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function windowchromebuttons.windowchromebuttons_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function windowchromebuttons.windowchromebuttons_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_windowchromebuttons(int32_t EntryPoint); // Function windowchromebuttons.windowchromebuttons_C.ExecuteUbergraph_windowchromebuttons // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

