// WidgetBlueprintGeneratedClass InfoFlag.InfoFlag_C
// Size: 0x330 (Inherited: 0x2b8)
struct UInfoFlag_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b8(0x08)
	struct UImage* BG_Gradient; // 0x2c0(0x08)
	struct UCommonRichTextBlock* ; // 0x2c8(0x08)
	struct USizeBox* ; // 0x2d0(0x08)
	struct UImage* Trim; // 0x2d8(0x08)
	struct FLinearColor TrimColor; // 0x2e0(0x10)
	struct FLinearColor GradientColor; // 0x2f0(0x10)
	double TrimWidth; // 0x300(0x08)
	struct FText InfoText; // 0x308(0x18)
	double GradientDistance; // 0x320(0x08)
	double MaxWidth; // 0x328(0x08)

	void UpdateText(struct FText& Text); // Function InfoFlag.InfoFlag_C.UpdateText // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateGradientColor(struct FLinearColor Color); // Function InfoFlag.InfoFlag_C.UpdateGradientColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateTrimColor(struct FLinearColor Color); // Function InfoFlag.InfoFlag_C.UpdateTrimColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function InfoFlag.InfoFlag_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function InfoFlag.InfoFlag_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_InfoFlag(int32_t EntryPoint); // Function InfoFlag.InfoFlag_C.ExecuteUbergraph_InfoFlag // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

