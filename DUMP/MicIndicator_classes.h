// WidgetBlueprintGeneratedClass MicIndicator.MicIndicator_C
// Size: 0x33a (Inherited: 0x310)
struct UMicIndicator_C : UFortMicIndicatorWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x310(0x08)
	struct UOverlay* 01-NotSpeaking; // 0x318(0x08)
	struct UOverlay* 02-Speaking; // 0x320(0x08)
	struct UOverlay* 03-Muted; // 0x328(0x08)
	struct UWidgetSwitcher* MicStateSwitcher; // 0x330(0x08)
	bool bIsMuted; // 0x338(0x01)
	bool bIsTalking; // 0x339(0x01)

	void OnPlayerTalkingChanged(bool bIsTalking); // Function MicIndicator.MicIndicator_C.OnPlayerTalkingChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnPlayerMuted(bool bIsMuted); // Function MicIndicator.MicIndicator_C.OnPlayerMuted // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_MicIndicator(int32_t EntryPoint); // Function MicIndicator.MicIndicator_C.ExecuteUbergraph_MicIndicator // (Final|UbergraphFunction) // @ game+0xd67374
};

