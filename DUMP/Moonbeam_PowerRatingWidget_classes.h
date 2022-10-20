// WidgetBlueprintGeneratedClass Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C
// Size: 0x3c0 (Inherited: 0x308)
struct UMoonbeam_PowerRatingWidget_C : UFortPlayerPowerRating {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x308(0x08)
	struct UCommonTextBlock* BaseRatingValue; // 0x310(0x08)
	struct UCommonTextBlock* BaseRatingValue-Large; // 0x318(0x08)
	struct UImage* BuffedRatingOuterGlow; // 0x320(0x08)
	struct UHomebaseRatingBar_C* HomebaseRatingBar; // 0x328(0x08)
	struct UImage* Image_Power; // 0x330(0x08)
	struct UCommonWidgetSwitcherLegacy* ModeTypeSwitcher; // 0x338(0x08)
	struct UImage* Moonbeam_Power_Back; // 0x340(0x08)
	struct UVerticalBox* OversizedMode; // 0x348(0x08)
	struct UImage* PowerIconGlow; // 0x350(0x08)
	struct UImage* Rating-Glow-Large; // 0x358(0x08)
	struct USizeBox* RatingBar; // 0x360(0x08)
	struct UHorizontalBox* RegularMode; // 0x368(0x08)
	struct UCommonNumericTextBlock* TeamRatingValue; // 0x370(0x08)
	struct UCommonNumericTextBlock* TeamRatingValue-Large; // 0x378(0x08)
	bool ShowDualPower; // 0x380(0x01)
	bool ShowProgress; // 0x381(0x01)
	bool ShowGlow; // 0x382(0x01)
	bool UseLargeStyle; // 0x383(0x01)
	bool UseOversizedMode; // 0x384(0x01)
	char pad_385[0x3]; // 0x385(0x03)
	double InterpDuration; // 0x388(0x08)
	struct USoundBase* PowerIncreasedSound; // 0x390(0x08)
	int32_t Power Rating Num; // 0x398(0x04)
	struct FLinearColor PowerBackingColor; // 0x39c(0x10)
	struct FSlateColor FontColor; // 0x3ac(0x14)

	void SetBackgroundColor(struct FLinearColor NewColor); // Function Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C.SetBackgroundColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateWidgetState(); // Function Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C.UpdateWidgetState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnBasePowerRatingUpdated(int32_t BasePowerRating); // Function Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C.OnBasePowerRatingUpdated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnTeamPowerRatingUpdated(int32_t TeamPowerRating); // Function Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C.OnTeamPowerRatingUpdated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnPowerRatingProgressUpdated(float BaseRatingProgress, float TeamRatingProgress); // Function Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C.OnPowerRatingProgressUpdated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnTeamMembershipChanged(); // Function Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C.OnTeamMembershipChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_Moonbeam_PowerRatingWidget(int32_t EntryPoint); // Function Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C.ExecuteUbergraph_Moonbeam_PowerRatingWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

