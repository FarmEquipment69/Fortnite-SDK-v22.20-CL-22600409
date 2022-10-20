// WidgetBlueprintGeneratedClass BPS22_HoldableCloseButton.BPS22_HoldableCloseButton_C
// Size: 0x1560 (Inherited: 0x14d0)
struct UBPS22_HoldableCloseButton_C : UFortHoldableButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x14d0(0x08)
	struct UWidgetAnimation* Hover; // 0x14d8(0x08)
	struct UWidgetAnimation* HoldCompleted; // 0x14e0(0x08)
	struct UWidgetAnimation* HoldProgress; // 0x14e8(0x08)
	struct UImage* Image_Background; // 0x14f0(0x08)
	struct UImage* Image_GamepadProgress; // 0x14f8(0x08)
	struct UOverlay* Overlay_Input; // 0x1500(0x08)
	struct UProgressBar* ; // 0x1508(0x08)
	struct USizeBox* SizeBox_Height; // 0x1510(0x08)
	struct USizeBox* SizeBox_KBM; // 0x1518(0x08)
	struct UCommonTextBlock* TextButton_Text; // 0x1520(0x08)
	struct FText In Text; // 0x1528(0x18)
	double In Min Desired Width; // 0x1540(0x08)
	double In Min Desired Height; // 0x1548(0x08)
	struct FMulticastInlineDelegate Hold Completed; // 0x1550(0x10)

	void Update style(bool Using Gamepad); // Function BPS22_HoldableCloseButton.BPS22_HoldableCloseButton_C.Update style // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateTextAndStyle(enum class ECommonInputType Input Type); // Function BPS22_HoldableCloseButton.BPS22_HoldableCloseButton_C.UpdateTextAndStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BP_OnHoldStarted(float HoldPercentage, bool bInUseSecondaryHoldAnimation); // Function BPS22_HoldableCloseButton.BPS22_HoldableCloseButton_C.BP_OnHoldStarted // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnHoldEnded(float HoldPercentage, bool bInUseSecondaryHoldAnimation); // Function BPS22_HoldableCloseButton.BPS22_HoldableCloseButton_C.BP_OnHoldEnded // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnHoldCompleted(); // Function BPS22_HoldableCloseButton.BPS22_HoldableCloseButton_C.BP_OnHoldCompleted // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnHoldIncreased(float HoldPercentage); // Function BPS22_HoldableCloseButton.BPS22_HoldableCloseButton_C.BP_OnHoldIncreased // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnHoldDecreased(float HoldPercentage); // Function BPS22_HoldableCloseButton.BPS22_HoldableCloseButton_C.BP_OnHoldDecreased // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnHoldReset(); // Function BPS22_HoldableCloseButton.BPS22_HoldableCloseButton_C.BP_OnHoldReset // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnPressed(); // Function BPS22_HoldableCloseButton.BPS22_HoldableCloseButton_C.BP_OnPressed // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function BPS22_HoldableCloseButton.BPS22_HoldableCloseButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void BP_OnHovered(); // Function BPS22_HoldableCloseButton.BPS22_HoldableCloseButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnUnhovered(); // Function BPS22_HoldableCloseButton.BPS22_HoldableCloseButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function BPS22_HoldableCloseButton.BPS22_HoldableCloseButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void Destruct(); // Function BPS22_HoldableCloseButton.BPS22_HoldableCloseButton_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_BPS22_HoldableCloseButton(int32_t EntryPoint); // Function BPS22_HoldableCloseButton.BPS22_HoldableCloseButton_C.ExecuteUbergraph_BPS22_HoldableCloseButton // (Final|UbergraphFunction) // @ game+0xd67374
	void Hold Completed__DelegateSignature(); // Function BPS22_HoldableCloseButton.BPS22_HoldableCloseButton_C.Hold Completed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

