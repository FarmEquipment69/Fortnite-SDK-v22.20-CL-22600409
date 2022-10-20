// WidgetBlueprintGeneratedClass QualityLevelSelectScreen.QualityLevelSelectScreen_C
// Size: 0x5d0 (Inherited: 0x588)
struct UQualityLevelSelectScreen_C : UFortQualityLevelSelectScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x588(0x08)
	struct UWidgetAnimation* Intro; // 0x590(0x08)
	struct UQualityModeSelectTile_C* ; // 0x598(0x08)
	struct USafeZone* Footersafezone; // 0x5a0(0x08)
	struct UImage* ; // 0x5a8(0x08)
	struct UCommonAnimatedSwitcher* OptionMessage; // 0x5b0(0x08)
	struct UCommonTextBlock* Text_QualityLevelCalculated; // 0x5b8(0x08)
	struct UCommonTextBlock* Text_QualityTitle; // 0x5c0(0x08)
	struct UHorizontalBox* TilesRow; // 0x5c8(0x08)

	void Construct(); // Function QualityLevelSelectScreen.QualityLevelSelectScreen_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_QualityLevelSelectScreen(int32_t EntryPoint); // Function QualityLevelSelectScreen.QualityLevelSelectScreen_C.ExecuteUbergraph_QualityLevelSelectScreen // (Final|UbergraphFunction) // @ game+0xd67374
};

