// WidgetBlueprintGeneratedClass BPS22_ContextualButton.BPS22_ContextualButton_C
// Size: 0x15c8 (Inherited: 0x14d0)
struct UBPS22_ContextualButton_C : UFortHoldableButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x14d0(0x08)
	struct UWidgetAnimation* HoldCompleted; // 0x14d8(0x08)
	struct UWidgetAnimation* HoldProgress; // 0x14e0(0x08)
	struct UWidgetAnimation* Hover; // 0x14e8(0x08)
	struct UCommonTextBlock* Button_text; // 0x14f0(0x08)
	struct UImage* Image_Icon; // 0x14f8(0x08)
	struct UImage* Image_material; // 0x1500(0x08)
	struct UImage* Image_Progress; // 0x1508(0x08)
	struct USizeBox* ; // 0x1510(0x08)
	struct USpacer* Spacer_Icon; // 0x1518(0x08)
	struct UCommonTextBlock* Text_Subtitle; // 0x1520(0x08)
	struct UCommonActionWidget* UnbindedInputActionWidget; // 0x1528(0x08)
	struct FText In Text; // 0x1530(0x18)
	double In Width Override; // 0x1548(0x08)
	struct UMaterialInterface* Material; // 0x1550(0x08)
	enum class ETextJustify Justification; // 0x1558(0x01)
	char pad_1559[0x7]; // 0x1559(0x07)
	struct UMaterialInstanceDynamic* HoldProgressDMI; // 0x1560(0x08)
	struct FText In SubText; // 0x1568(0x18)
	bool Show BP icon; // 0x1580(0x01)
	char pad_1581[0x3]; // 0x1581(0x03)
	int32_t Size; // 0x1584(0x04)
	double In Height Override; // 0x1588(0x08)
	struct UAudioComponent* FillingSoundAudioComponent; // 0x1590(0x08)
	struct USoundBase* FillingSoundOverride; // 0x1598(0x08)
	struct USoundBase* FillCompleteSoundOverride; // 0x15a0(0x08)
	struct UObject* Font Material; // 0x15a8(0x08)
	struct USoundBase* FillSoundReleased; // 0x15b0(0x08)
	struct FMulticastInlineDelegate HoldActionProgress; // 0x15b8(0x10)

	void BP_OnHoldStarted(float HoldPercentage, bool bInUseSecondaryHoldAnimation); // Function BPS22_ContextualButton.BPS22_ContextualButton_C.BP_OnHoldStarted // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnHoldEnded(float HoldPercentage, bool bInUseSecondaryHoldAnimation); // Function BPS22_ContextualButton.BPS22_ContextualButton_C.BP_OnHoldEnded // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnHoldCompleted(); // Function BPS22_ContextualButton.BPS22_ContextualButton_C.BP_OnHoldCompleted // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnHoldIncreased(float HoldPercentage); // Function BPS22_ContextualButton.BPS22_ContextualButton_C.BP_OnHoldIncreased // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnHoldDecreased(float HoldPercentage); // Function BPS22_ContextualButton.BPS22_ContextualButton_C.BP_OnHoldDecreased // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnHoldReset(); // Function BPS22_ContextualButton.BPS22_ContextualButton_C.BP_OnHoldReset // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnPressed(); // Function BPS22_ContextualButton.BPS22_ContextualButton_C.BP_OnPressed // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnUnhovered(); // Function BPS22_ContextualButton.BPS22_ContextualButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function BPS22_ContextualButton.BPS22_ContextualButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void BP_OnHovered(); // Function BPS22_ContextualButton.BPS22_ContextualButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function BPS22_ContextualButton.BPS22_ContextualButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void Destruct(); // Function BPS22_ContextualButton.BPS22_ContextualButton_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void PlayFillSound(); // Function BPS22_ContextualButton.BPS22_ContextualButton_C.PlayFillSound // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void FillComplete(); // Function BPS22_ContextualButton.BPS22_ContextualButton_C.FillComplete // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void StopFillSound(); // Function BPS22_ContextualButton.BPS22_ContextualButton_C.StopFillSound // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_BPS22_ContextualButton(int32_t EntryPoint); // Function BPS22_ContextualButton.BPS22_ContextualButton_C.ExecuteUbergraph_BPS22_ContextualButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
	void HoldActionProgress__DelegateSignature(bool IsHolding); // Function BPS22_ContextualButton.BPS22_ContextualButton_C.HoldActionProgress__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

