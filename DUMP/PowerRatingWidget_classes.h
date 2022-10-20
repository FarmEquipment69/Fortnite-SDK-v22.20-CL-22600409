// WidgetBlueprintGeneratedClass PowerRatingWidget.PowerRatingWidget_C
// Size: 0x394 (Inherited: 0x308)
struct UPowerRatingWidget_C : UFortPlayerPowerRating {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x308(0x08)
	struct UCommonTextBlock* BaseRatingValue; // 0x310(0x08)
	struct UCommonTextBlock* BaseRatingValue-Large; // 0x318(0x08)
	struct UImage* BuffedRatingOuterGlow; // 0x320(0x08)
	struct UHomebaseRatingBar_C* HomebaseRatingBar; // 0x328(0x08)
	struct UImage* Image_Power; // 0x330(0x08)
	struct UCommonWidgetSwitcherLegacy* ModeTypeSwitcher; // 0x338(0x08)
	struct UVerticalBox* OversizedMode; // 0x340(0x08)
	struct UImage* PowerIconGlow; // 0x348(0x08)
	struct UImage* Rating-Glow-Large; // 0x350(0x08)
	struct USizeBox* RatingBar; // 0x358(0x08)
	struct UHorizontalBox* RegularMode; // 0x360(0x08)
	struct UCommonNumericTextBlock* TeamRatingValue; // 0x368(0x08)
	struct UCommonNumericTextBlock* TeamRatingValue-Large; // 0x370(0x08)
	bool ShowDualPower; // 0x378(0x01)
	bool ShowProgress; // 0x379(0x01)
	bool ShowGlow; // 0x37a(0x01)
	bool UseLargeStyle; // 0x37b(0x01)
	bool UseOversizedMode; // 0x37c(0x01)
	char pad_37D[0x3]; // 0x37d(0x03)
	double InterpDuration; // 0x380(0x08)
	struct USoundBase* PowerIncreasedSound; // 0x388(0x08)
	int32_t Power Rating Num; // 0x390(0x04)

	void UpdateWidgetState(); // Function PowerRatingWidget.PowerRatingWidget_C.UpdateWidgetState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function PowerRatingWidget.PowerRatingWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnBasePowerRatingUpdated(int32_t BasePowerRating); // Function PowerRatingWidget.PowerRatingWidget_C.OnBasePowerRatingUpdated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnTeamPowerRatingUpdated(int32_t TeamPowerRating); // Function PowerRatingWidget.PowerRatingWidget_C.OnTeamPowerRatingUpdated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnPowerRatingProgressUpdated(float BaseRatingProgress, float TeamRatingProgress); // Function PowerRatingWidget.PowerRatingWidget_C.OnPowerRatingProgressUpdated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function PowerRatingWidget.PowerRatingWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnTeamMembershipChanged(); // Function PowerRatingWidget.PowerRatingWidget_C.OnTeamMembershipChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_PowerRatingWidget(int32_t EntryPoint); // Function PowerRatingWidget.PowerRatingWidget_C.ExecuteUbergraph_PowerRatingWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

