// WidgetBlueprintGeneratedClass RebootVanIndicator.RebootVanIndicator_C
// Size: 0x660 (Inherited: 0x620)
struct URebootVanIndicator_C : UAthenaRebootVanIndicator {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x620(0x08)
	struct UWidgetAnimation* Intro; // 0x628(0x08)
	struct UBorder* Border_Nameplate; // 0x630(0x08)
	struct UImage* Icon; // 0x638(0x08)
	struct UImage* Image_RebootIcon; // 0x640(0x08)
	struct UImage* Image_SmallIndicator; // 0x648(0x08)
	struct UImage* Image_Van; // 0x650(0x08)
	struct USpacer* IndicatorSpacer; // 0x658(0x08)

	void Construct(); // Function RebootVanIndicator.RebootVanIndicator_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_RebootVanIndicator(int32_t EntryPoint); // Function RebootVanIndicator.RebootVanIndicator_C.ExecuteUbergraph_RebootVanIndicator // (Final|UbergraphFunction) // @ game+0xd67374
};

