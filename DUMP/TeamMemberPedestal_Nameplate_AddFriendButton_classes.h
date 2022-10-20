// WidgetBlueprintGeneratedClass TeamMemberPedestal_Nameplate_AddFriendButton.TeamMemberPedestal_Nameplate_AddFriendButton_C
// Size: 0x14d0 (Inherited: 0x1480)
struct UTeamMemberPedestal_Nameplate_AddFriendButton_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1480(0x08)
	struct UWidgetAnimation* OnUnhovered; // 0x1488(0x08)
	struct UWidgetAnimation* Reset; // 0x1490(0x08)
	struct UWidgetAnimation* Disabled; // 0x1498(0x08)
	struct UWidgetAnimation* PlayShine; // 0x14a0(0x08)
	struct UWidgetAnimation* OnHovered; // 0x14a8(0x08)
	struct UCommonTextBlock* CenterButtonTextWidget; // 0x14b0(0x08)
	struct UImage* Image_ButtonTop; // 0x14b8(0x08)
	struct USizeBox* SB_InputAction; // 0x14c0(0x08)
	struct USizeBox* ; // 0x14c8(0x08)

	void UpdateVisuals(bool IsUsingTouch); // Function TeamMemberPedestal_Nameplate_AddFriendButton.TeamMemberPedestal_Nameplate_AddFriendButton_C.UpdateVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetButtonText(struct FText InText); // Function TeamMemberPedestal_Nameplate_AddFriendButton.TeamMemberPedestal_Nameplate_AddFriendButton_C.SetButtonText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BP_OnClicked(); // Function TeamMemberPedestal_Nameplate_AddFriendButton.TeamMemberPedestal_Nameplate_AddFriendButton_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnUnhovered(); // Function TeamMemberPedestal_Nameplate_AddFriendButton.TeamMemberPedestal_Nameplate_AddFriendButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void SetInputActionVisibility(enum class ESlateVisibility InVisibility); // Function TeamMemberPedestal_Nameplate_AddFriendButton.TeamMemberPedestal_Nameplate_AddFriendButton_C.SetInputActionVisibility // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BP_OnHovered(); // Function TeamMemberPedestal_Nameplate_AddFriendButton.TeamMemberPedestal_Nameplate_AddFriendButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function TeamMemberPedestal_Nameplate_AddFriendButton.TeamMemberPedestal_Nameplate_AddFriendButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_TeamMemberPedestal_Nameplate_AddFriendButton(int32_t EntryPoint); // Function TeamMemberPedestal_Nameplate_AddFriendButton.TeamMemberPedestal_Nameplate_AddFriendButton_C.ExecuteUbergraph_TeamMemberPedestal_Nameplate_AddFriendButton // (Final|UbergraphFunction) // @ game+0xd67374
};

