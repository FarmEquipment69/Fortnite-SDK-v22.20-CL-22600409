// WidgetBlueprintGeneratedClass BPS22_GetAllButton.BPS22_GetAllButton_C
// Size: 0x1481 (Inherited: 0x1430)
struct UBPS22_GetAllButton_C : UCommonButtonBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1430(0x08)
	struct UWidgetAnimation* Hover; // 0x1438(0x08)
	struct UImage* Image; // 0x1440(0x08)
	struct UImage* ; // 0x1448(0x08)
	struct UImage* Image_Hover; // 0x1450(0x08)
	struct UCommonRichTextBlock* MainText; // 0x1458(0x08)
	struct UCommonRichTextBlock* MainText_hover; // 0x1460(0x08)
	struct UOverlay* ; // 0x1468(0x08)
	struct UOverlay* Overlay_Input; // 0x1470(0x08)
	struct USizeBox* ; // 0x1478(0x08)
	bool Page Complete; // 0x1480(0x01)

	void UpdateTextAndStyle(enum class ECommonInputType Input Type); // Function BPS22_GetAllButton.BPS22_GetAllButton_C.UpdateTextAndStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Set Text Data(bool Page Complete, int32_t Starting Page, int32_t Ending Page, int32_t Cost); // Function BPS22_GetAllButton.BPS22_GetAllButton_C.Set Text Data // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BP_OnHovered(); // Function BPS22_GetAllButton.BPS22_GetAllButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnUnhovered(); // Function BPS22_GetAllButton.BPS22_GetAllButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function BPS22_GetAllButton.BPS22_GetAllButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void Destruct(); // Function BPS22_GetAllButton.BPS22_GetAllButton_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_BPS22_GetAllButton(int32_t EntryPoint); // Function BPS22_GetAllButton.BPS22_GetAllButton_C.ExecuteUbergraph_BPS22_GetAllButton // (Final|UbergraphFunction) // @ game+0xd67374
};

