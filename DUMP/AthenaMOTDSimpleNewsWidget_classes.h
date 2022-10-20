// WidgetBlueprintGeneratedClass AthenaMOTDSimpleNewsWidget.AthenaMOTDSimpleNewsWidget_C
// Size: 0x484 (Inherited: 0x430)
struct UAthenaMOTDSimpleNewsWidget_C : UFortAthenaMOTDSimpleNewsWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x430(0x08)
	struct UWidgetAnimation* Intro; // 0x438(0x08)
	struct UImage* Backplate; // 0x440(0x08)
	struct UImage* GlowBackground; // 0x448(0x08)
	struct UImage* Image_Background; // 0x450(0x08)
	struct UImage* Image_Border; // 0x458(0x08)
	struct UImage* Image_ColorFade; // 0x460(0x08)
	struct USizeBox* SizeBoxButtonSize; // 0x468(0x08)
	struct FColor DarkDefaultColor; // 0x470(0x04)
	struct FColor LightDefaultColor; // 0x474(0x04)
	struct FColor PreviewDarkColor; // 0x478(0x04)
	bool TestPreviewColors; // 0x47c(0x01)
	char pad_47D[0x3]; // 0x47d(0x03)
	struct FColor PreviewLightColor; // 0x480(0x04)

	void SetDynamicColors(struct FColor Dark, struct FColor Light); // Function AthenaMOTDSimpleNewsWidget.AthenaMOTDSimpleNewsWidget_C.SetDynamicColors // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function AthenaMOTDSimpleNewsWidget.AthenaMOTDSimpleNewsWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnPopulateNews(struct FAthenaMOTDBase& NewsEntry); // Function AthenaMOTDSimpleNewsWidget.AthenaMOTDSimpleNewsWidget_C.OnPopulateNews // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void BP_OnActivated(); // Function AthenaMOTDSimpleNewsWidget.AthenaMOTDSimpleNewsWidget_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_AthenaMOTDSimpleNewsWidget(int32_t EntryPoint); // Function AthenaMOTDSimpleNewsWidget.AthenaMOTDSimpleNewsWidget_C.ExecuteUbergraph_AthenaMOTDSimpleNewsWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

