// WidgetBlueprintGeneratedClass BackButtonSmall.BackButtonSmall_C
// Size: 0x1458 (Inherited: 0x1430)
struct UBackButtonSmall_C : UCommonButtonBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1430(0x08)
	struct UWidgetAnimation* OnHover; // 0x1438(0x08)
	struct UCommonActionWidget* ; // 0x1440(0x08)
	struct UHorizontalBox* ; // 0x1448(0x08)
	struct UFortMobileImage* Image_Arrow; // 0x1450(0x08)

	void OnInitialized(); // Function BackButtonSmall.BackButtonSmall_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void BP_OnHovered(); // Function BackButtonSmall.BackButtonSmall_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnUnhovered(); // Function BackButtonSmall.BackButtonSmall_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnClicked(); // Function BackButtonSmall.BackButtonSmall_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_BackButtonSmall(int32_t EntryPoint); // Function BackButtonSmall.BackButtonSmall_C.ExecuteUbergraph_BackButtonSmall // (Final|UbergraphFunction) // @ game+0xd67374
};

