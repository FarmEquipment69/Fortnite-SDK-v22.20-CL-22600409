// WidgetBlueprintGeneratedClass DivisionDetailsProgress.DivisionDetailsProgress_C
// Size: 0x308 (Inherited: 0x2f0)
struct UDivisionDetailsProgress_C : UFortShowdownDivisionRankProgressView {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	struct UCommonBorder* CommonBorder_CalloutOffset; // 0x2f8(0x08)
	struct USizeBox* ProgressBarContainer; // 0x300(0x08)

	void OnSetInProgress(float NewPercent, bool bIsInProgress); // Function DivisionDetailsProgress.DivisionDetailsProgress_C.OnSetInProgress // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_DivisionDetailsProgress(int32_t EntryPoint); // Function DivisionDetailsProgress.DivisionDetailsProgress_C.ExecuteUbergraph_DivisionDetailsProgress // (Final|UbergraphFunction) // @ game+0xd67374
};

