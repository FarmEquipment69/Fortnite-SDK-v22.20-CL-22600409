// WidgetBlueprintGeneratedClass BPS22_TutorialTooltip.BPS22_TutorialTooltip_C
// Size: 0x450 (Inherited: 0x2f0)
struct UBPS22_TutorialTooltip_C : UFortBattlePassTutorialTooltipS22 {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	struct UWidgetAnimation* burstLoop; // 0x2f8(0x08)
	struct UWidgetAnimation* Show; // 0x300(0x08)
	struct UHorizontalBox* HorizontalBoxcontent; // 0x308(0x08)
	struct UImage* Icon; // 0x310(0x08)
	struct UImage* Image_Arrow; // 0x318(0x08)
	struct FText In Text; // 0x320(0x18)
	char pad_338[0x8]; // 0x338(0x08)
	struct FSlateBrush In Brush; // 0x340(0xc0)
	enum class EHorizontalAlignment In Horizontal Alignment; // 0x400(0x01)
	enum class EVerticalAlignment In Vertical Alignment; // 0x401(0x01)
	char pad_402[0x6]; // 0x402(0x06)
	struct FWidgetTransform In Transform; // 0x408(0x38)
	bool Show Icon; // 0x440(0x01)
	char pad_441[0x7]; // 0x441(0x07)
	double Right; // 0x448(0x08)

	void PreConstruct(bool IsDesignTime); // Function BPS22_TutorialTooltip.BPS22_TutorialTooltip_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ShowTooltip(); // Function BPS22_TutorialTooltip.BPS22_TutorialTooltip_C.ShowTooltip // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void HideTooltip(); // Function BPS22_TutorialTooltip.BPS22_TutorialTooltip_C.HideTooltip // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_BPS22_TutorialTooltip(int32_t EntryPoint); // Function BPS22_TutorialTooltip.BPS22_TutorialTooltip_C.ExecuteUbergraph_BPS22_TutorialTooltip // (Final|UbergraphFunction) // @ game+0xd67374
};

