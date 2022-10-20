// WidgetBlueprintGeneratedClass WBP_RebootRallyTimer.WBP_RebootRallyTimer_C
// Size: 0x310 (Inherited: 0x2f8)
struct UWBP_RebootRallyTimer_C : URebootRallyTimerBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f8(0x08)
	struct UImage* Image_Timer; // 0x300(0x08)
	struct UCommonTextBlock* Text_Timer; // 0x308(0x08)

	void UpdateRemainingTime(); // Function WBP_RebootRallyTimer.WBP_RebootRallyTimer_C.UpdateRemainingTime // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_WBP_RebootRallyTimer(int32_t EntryPoint); // Function WBP_RebootRallyTimer.WBP_RebootRallyTimer_C.ExecuteUbergraph_WBP_RebootRallyTimer // (Final|UbergraphFunction) // @ game+0xd67374
};

