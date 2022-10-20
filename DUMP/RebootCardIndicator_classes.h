// WidgetBlueprintGeneratedClass RebootCardIndicator.RebootCardIndicator_C
// Size: 0x678 (Inherited: 0x620)
struct URebootCardIndicator_C : UAthenaRebootCardIndicator {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x620(0x08)
	struct UWidgetAnimation* UpdateTime; // 0x628(0x08)
	struct UBorder* Border_Nameplate; // 0x630(0x08)
	struct UImage* burst; // 0x638(0x08)
	struct UImage* Image_RebootIcon; // 0x640(0x08)
	struct USpacer* IndicatorSpacer; // 0x648(0x08)
	struct UHorizontalBox* RebootCountdownContainer; // 0x650(0x08)
	struct UCommonTextBlock* TimeText; // 0x658(0x08)
	double CurTime; // 0x660(0x08)
	double EndTime; // 0x668(0x08)
	struct FTimerHandle TimerHandle; // 0x670(0x08)

	void bp_UpdateCountdownText(); // Function RebootCardIndicator.RebootCardIndicator_C.bp_UpdateCountdownText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetupCountdown(float StartTimeLocalWorld, float EndTimeLocalWorld); // Function RebootCardIndicator.RebootCardIndicator_C.SetupCountdown // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void UpdateCountdownText(); // Function RebootCardIndicator.RebootCardIndicator_C.UpdateCountdownText // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleDisplayForSelf(bool bSelf); // Function RebootCardIndicator.RebootCardIndicator_C.HandleDisplayForSelf // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_RebootCardIndicator(int32_t EntryPoint); // Function RebootCardIndicator.RebootCardIndicator_C.ExecuteUbergraph_RebootCardIndicator // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

