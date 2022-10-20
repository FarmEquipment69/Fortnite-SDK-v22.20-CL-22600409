// WidgetBlueprintGeneratedClass StandaloneItemShop.StandaloneItemShop_C
// Size: 0x6b8 (Inherited: 0x678)
struct UStandaloneItemShop_C : UFortStandaloneItemShop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x678(0x08)
	struct UHorizontalBox* HBox_Tabs; // 0x680(0x08)
	struct UImage* Image_TabBackground; // 0x688(0x08)
	struct UBorder* LoadingBackground; // 0x690(0x08)
	struct UMTXButton_C* MTXButton; // 0x698(0x08)
	struct UCommonActionWidget* NextTabAction; // 0x6a0(0x08)
	struct UCommonActionWidget* PreviousTabAction; // 0x6a8(0x08)
	struct USafeZone* SafeZone_TabButtons; // 0x6b0(0x08)

	void OnCameraLevelLoaded(); // Function StandaloneItemShop.StandaloneItemShop_C.OnCameraLevelLoaded // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnLoadingIndicatorShown(bool bShown); // Function StandaloneItemShop.StandaloneItemShop_C.OnLoadingIndicatorShown // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function StandaloneItemShop.StandaloneItemShop_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void Destruct(); // Function StandaloneItemShop.StandaloneItemShop_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnTabSelected(int32_t TabIndex); // Function StandaloneItemShop.StandaloneItemShop_C.OnTabSelected // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void InitializeTabs(); // Function StandaloneItemShop.StandaloneItemShop_C.InitializeTabs // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_StandaloneItemShop(int32_t EntryPoint); // Function StandaloneItemShop.StandaloneItemShop_C.ExecuteUbergraph_StandaloneItemShop // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

