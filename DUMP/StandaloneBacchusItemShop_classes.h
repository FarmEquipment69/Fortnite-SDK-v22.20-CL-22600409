// WidgetBlueprintGeneratedClass StandaloneBacchusItemShop.StandaloneBacchusItemShop_C
// Size: 0x6b8 (Inherited: 0x678)
struct UStandaloneBacchusItemShop_C : UFortStandaloneItemShop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x678(0x08)
	struct UHorizontalBox* HBox_Tabs; // 0x680(0x08)
	struct UBorder* LoadingBackground; // 0x688(0x08)
	struct UMTXButton_C* MTXButton; // 0x690(0x08)
	struct UCommonActionWidget* NextTabAction; // 0x698(0x08)
	struct UCommonActionWidget* PreviousTabAction; // 0x6a0(0x08)
	struct USafeZone* SafeZone_TabButtons; // 0x6a8(0x08)
	struct USafeZone* SafeZone_TopRightButtons; // 0x6b0(0x08)

	void OnCameraLevelLoaded(); // Function StandaloneBacchusItemShop.StandaloneBacchusItemShop_C.OnCameraLevelLoaded // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnLoadingIndicatorShown(bool bShown); // Function StandaloneBacchusItemShop.StandaloneBacchusItemShop_C.OnLoadingIndicatorShown // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function StandaloneBacchusItemShop.StandaloneBacchusItemShop_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void Destruct(); // Function StandaloneBacchusItemShop.StandaloneBacchusItemShop_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnTabSelected(int32_t TabIndex); // Function StandaloneBacchusItemShop.StandaloneBacchusItemShop_C.OnTabSelected // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void InitializeTabs(); // Function StandaloneBacchusItemShop.StandaloneBacchusItemShop_C.InitializeTabs // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_StandaloneBacchusItemShop(int32_t EntryPoint); // Function StandaloneBacchusItemShop.StandaloneBacchusItemShop_C.ExecuteUbergraph_StandaloneBacchusItemShop // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

