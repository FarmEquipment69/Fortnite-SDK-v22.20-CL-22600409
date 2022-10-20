// WidgetBlueprintGeneratedClass AthenaMatchmakingPlayButton.AthenaMatchmakingPlayButton_C
// Size: 0x14e0 (Inherited: 0x14a0)
struct UAthenaMatchmakingPlayButton_C : UAthenaMatchmakingPlayButtonBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x14a0(0x08)
	struct UWidgetAnimation* Disabled; // 0x14a8(0x08)
	struct UWidgetAnimation* PlayShine; // 0x14b0(0x08)
	struct UWidgetAnimation* OnHovered; // 0x14b8(0x08)
	struct UCommonTextBlock* CenterButtonTextWidget; // 0x14c0(0x08)
	struct UImage* Image_ButtonTop; // 0x14c8(0x08)
	struct UImage* Image_Shadow; // 0x14d0(0x08)
	struct UMatchmakingInputIndicator_C* MatchmakingInputIndicator; // 0x14d8(0x08)

	void SetButtonText(struct FText InText); // Function AthenaMatchmakingPlayButton.AthenaMatchmakingPlayButton_C.SetButtonText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BP_OnHovered(); // Function AthenaMatchmakingPlayButton.AthenaMatchmakingPlayButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnUnhovered(); // Function AthenaMatchmakingPlayButton.AthenaMatchmakingPlayButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_AthenaMatchmakingPlayButton(int32_t EntryPoint); // Function AthenaMatchmakingPlayButton.AthenaMatchmakingPlayButton_C.ExecuteUbergraph_AthenaMatchmakingPlayButton // (Final|UbergraphFunction) // @ game+0xd67374
};

