// WidgetBlueprintGeneratedClass WBP_RebootRallySelectionHeader.WBP_RebootRallySelectionHeader_C
// Size: 0x14a0 (Inherited: 0x1440)
struct UWBP_RebootRallySelectionHeader_C : URebootRallySelectionHeaderBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1440(0x08)
	struct UWidgetAnimation* Unhovered; // 0x1448(0x08)
	struct UWidgetAnimation* Hovered; // 0x1450(0x08)
	struct UWidgetAnimation* Default; // 0x1458(0x08)
	struct UCommonActionWidget* CommonActionWidget; // 0x1460(0x08)
	struct UImage* Image_Emoticon; // 0x1468(0x08)
	struct UImage* Image_Glider; // 0x1470(0x08)
	struct UImage* Image_LinearFade; // 0x1478(0x08)
	struct UImage* Image_Pickaxe; // 0x1480(0x08)
	struct UImage* Image_RebootRallyLogo; // 0x1488(0x08)
	struct UImage* Image_Wrap; // 0x1490(0x08)
	struct UImage* Image_ZoomRays; // 0x1498(0x08)

	void InputMethodChanged(enum class ECommonInputType bNewInputType); // Function WBP_RebootRallySelectionHeader.WBP_RebootRallySelectionHeader_C.InputMethodChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Finished_83AA4B0145343A56061784AA887827D3(); // Function WBP_RebootRallySelectionHeader.WBP_RebootRallySelectionHeader_C.Finished_83AA4B0145343A56061784AA887827D3 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function WBP_RebootRallySelectionHeader.WBP_RebootRallySelectionHeader_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void BP_OnHovered(); // Function WBP_RebootRallySelectionHeader.WBP_RebootRallySelectionHeader_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnUnhovered(); // Function WBP_RebootRallySelectionHeader.WBP_RebootRallySelectionHeader_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnInitialized(); // Function WBP_RebootRallySelectionHeader.WBP_RebootRallySelectionHeader_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_WBP_RebootRallySelectionHeader(int32_t EntryPoint); // Function WBP_RebootRallySelectionHeader.WBP_RebootRallySelectionHeader_C.ExecuteUbergraph_WBP_RebootRallySelectionHeader // (Final|UbergraphFunction) // @ game+0xd67374
};

