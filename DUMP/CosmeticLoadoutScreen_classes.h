// WidgetBlueprintGeneratedClass CosmeticLoadoutScreen.CosmeticLoadoutScreen_C
// Size: 0x748 (Inherited: 0x680)
struct UCosmeticLoadoutScreen_C : UFortCosmeticLoadoutScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x680(0x08)
	struct UWidgetAnimation* Intro; // 0x688(0x08)
	struct UVerticalBox* LeftSideButtons; // 0x690(0x08)
	struct UCommonTextBlock* NewPresetDisclaimerText; // 0x698(0x08)
	struct UImage* Panel; // 0x6a0(0x08)
	struct UCommonTextBlock* PresetHeader; // 0x6a8(0x08)
	struct UCommonTextBlock* RandomDisclaimertext; // 0x6b0(0x08)
	struct USafeZone* SafeZone_BackButton; // 0x6b8(0x08)
	struct USafeZone* SafeZone_CloseButton; // 0x6c0(0x08)
	struct UCommonTextBlock* SaveSubHeader; // 0x6c8(0x08)
	struct USoloButton_C* xButton_DeleteLoadout; // 0x6d0(0x08)
	struct USoloButton_C* xButton_RenameLoadout; // 0x6d8(0x08)
	struct USimpleFeatured_YellowButton_C* xSimpleFeatured_YellowButton; // 0x6e0(0x08)
	struct FText BrowseHeaderText; // 0x6e8(0x18)
	struct FText SaveHeaderText; // 0x700(0x18)
	struct FText ApplyButtonText; // 0x718(0x18)
	struct FText SaveButtonText; // 0x730(0x18)

	void BP_OnActivated(); // Function CosmeticLoadoutScreen.CosmeticLoadoutScreen_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnPreviewTile(enum class EFortLoadoutCardType CardType); // Function CosmeticLoadoutScreen.CosmeticLoadoutScreen_C.OnPreviewTile // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnFlavorForScreenMode(enum class EFortCosmeticLoadoutScreenMode NewMode); // Function CosmeticLoadoutScreen.CosmeticLoadoutScreen_C.OnFlavorForScreenMode // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_CosmeticLoadoutScreen(int32_t EntryPoint); // Function CosmeticLoadoutScreen.CosmeticLoadoutScreen_C.ExecuteUbergraph_CosmeticLoadoutScreen // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

