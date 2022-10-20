// WidgetBlueprintGeneratedClass BPS22_SeasonalDataWidget.BPS22_SeasonalDataWidget_C
// Size: 0x348 (Inherited: 0x2e0)
struct UBPS22_SeasonalDataWidget_C : UFortSeasonDataWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UImage* ; // 0x2e8(0x08)
	struct UImage* Image_BattlePass_Free; // 0x2f0(0x08)
	struct UImage* Image_BattlePass_Owned; // 0x2f8(0x08)
	struct UImage* Image_RaceTrack; // 0x300(0x08)
	struct UCommonRichTextBlock* RichText_CurrentLevel; // 0x308(0x08)
	struct UCommonRichTextBlock* RichText_Level; // 0x310(0x08)
	struct UCommonTextBlock* Text_BattlePass; // 0x318(0x08)
	struct UVerticalBox* VerticalBox_5stars; // 0x320(0x08)
	struct UMaterialInterface* Bp Material; // 0x328(0x08)
	struct FMulticastInlineDelegate On Bp Owned; // 0x330(0x10)
	bool OwnsBattlePass; // 0x340(0x01)
	char pad_341[0x3]; // 0x341(0x03)
	int32_t MaxBPLevelForRewards; // 0x344(0x04)

	void UpdateText(); // Function BPS22_SeasonalDataWidget.BPS22_SeasonalDataWidget_C.UpdateText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnBattlePassOwned(); // Function BPS22_SeasonalDataWidget.BPS22_SeasonalDataWidget_C.OnBattlePassOwned // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnLevelChanged(); // Function BPS22_SeasonalDataWidget.BPS22_SeasonalDataWidget_C.OnLevelChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnProgressUpdated(); // Function BPS22_SeasonalDataWidget.BPS22_SeasonalDataWidget_C.OnProgressUpdated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnSuperCharged(); // Function BPS22_SeasonalDataWidget.BPS22_SeasonalDataWidget_C.OnSuperCharged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_BPS22_SeasonalDataWidget(int32_t EntryPoint); // Function BPS22_SeasonalDataWidget.BPS22_SeasonalDataWidget_C.ExecuteUbergraph_BPS22_SeasonalDataWidget // (Final|UbergraphFunction) // @ game+0xd67374
	void On Bp Owned__DelegateSignature(); // Function BPS22_SeasonalDataWidget.BPS22_SeasonalDataWidget_C.On Bp Owned__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

