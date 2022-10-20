// WidgetBlueprintGeneratedClass LeavePlatformPartyButton.LeavePlatformPartyButton_C
// Size: 0x1498 (Inherited: 0x1480)
struct ULeavePlatformPartyButton_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1480(0x08)
	struct UWidgetAnimation* OnHover; // 0x1488(0x08)
	struct UCommonTextBlock* ; // 0x1490(0x08)

	void SetText(struct FText New Text); // Function LeavePlatformPartyButton.LeavePlatformPartyButton_C.SetText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BP_OnHovered(); // Function LeavePlatformPartyButton.LeavePlatformPartyButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnUnhovered(); // Function LeavePlatformPartyButton.LeavePlatformPartyButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_LeavePlatformPartyButton(int32_t EntryPoint); // Function LeavePlatformPartyButton.LeavePlatformPartyButton_C.ExecuteUbergraph_LeavePlatformPartyButton // (Final|UbergraphFunction) // @ game+0xd67374
};

