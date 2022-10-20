// WidgetBlueprintGeneratedClass SocialPanel_TopBarExtension.SocialPanel_TopBarExtension_C
// Size: 0x14a8 (Inherited: 0x1480)
struct USocialPanel_TopBarExtension_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1480(0x08)
	struct UWidgetAnimation* Hovered; // 0x1488(0x08)
	struct UImage* Arrow; // 0x1490(0x08)
	struct UImage* Image_PlatformIcon; // 0x1498(0x08)
	struct UMiniPartyBar_C* MiniPartyBar; // 0x14a0(0x08)

	void BP_OnHovered(); // Function SocialPanel_TopBarExtension.SocialPanel_TopBarExtension_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnUnhovered(); // Function SocialPanel_TopBarExtension.SocialPanel_TopBarExtension_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_SocialPanel_TopBarExtension(int32_t EntryPoint); // Function SocialPanel_TopBarExtension.SocialPanel_TopBarExtension_C.ExecuteUbergraph_SocialPanel_TopBarExtension // (Final|UbergraphFunction) // @ game+0xd67374
};

