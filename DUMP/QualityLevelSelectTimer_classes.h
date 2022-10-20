// WidgetBlueprintGeneratedClass QualityLevelSelectTimer.QualityLevelSelectTimer_C
// Size: 0x338 (Inherited: 0x320)
struct UQualityLevelSelectTimer_C : UFortHUDQualityLevelSelectTimer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	double TextScaleUnderOneSecond; // 0x328(0x08)
	double TextScaleOverOneSecond; // 0x330(0x08)

	void UpdateTextScale(double TimeRemaining); // Function QualityLevelSelectTimer.QualityLevelSelectTimer_C.UpdateTextScale // (Private|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnProgressStarted(float Duration); // Function QualityLevelSelectTimer.QualityLevelSelectTimer_C.OnProgressStarted // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnProgressEnded(); // Function QualityLevelSelectTimer.QualityLevelSelectTimer_C.OnProgressEnded // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnTimeRemainingChanged(float TimeRemaining); // Function QualityLevelSelectTimer.QualityLevelSelectTimer_C.OnTimeRemainingChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnInitialized(); // Function QualityLevelSelectTimer.QualityLevelSelectTimer_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_QualityLevelSelectTimer(int32_t EntryPoint); // Function QualityLevelSelectTimer.QualityLevelSelectTimer_C.ExecuteUbergraph_QualityLevelSelectTimer // (Final|UbergraphFunction) // @ game+0xd67374
};

