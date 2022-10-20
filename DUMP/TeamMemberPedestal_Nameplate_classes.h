// WidgetBlueprintGeneratedClass TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C
// Size: 0x188a (Inherited: 0x1550)
struct UTeamMemberPedestal_Nameplate_C : UFortTeamMemberPedestalNameplate {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1550(0x08)
	struct UWidgetAnimation* NotReadyTextColor; // 0x1558(0x08)
	struct UWidgetAnimation* ReadyTextColor; // 0x1560(0x08)
	struct UWidgetAnimation* On Ready Change Text; // 0x1568(0x08)
	struct UFortHUDElementWrapper_C* FortHUDElementWrapper; // 0x1570(0x08)
	struct USizeBox* SB_InputAction; // 0x1578(0x08)
	struct UScaleBox* ; // 0x1580(0x08)
	struct UTeamMemberPedestal_ActivatableContainer_C* TeamMemberPedestal_ActivatableContainer; // 0x1588(0x08)
	struct USizeBox* Widget_PlayerLevel; // 0x1590(0x08)
	char pad_1598[0x8]; // 0x1598(0x08)
	struct FFortTeamMemberInfo TeamMemberInfo; // 0x15a0(0x250)
	bool bHovered; // 0x17f0(0x01)
	char pad_17F1[0x3]; // 0x17f1(0x03)
	struct FLinearColor ReadyColor; // 0x17f4(0x10)
	struct FLinearColor NotReadyColor; // 0x1804(0x10)
	char pad_1814[0x4]; // 0x1814(0x04)
	struct USoundBase* UnReadySound; // 0x1818(0x08)
	struct USoundBase* ReadySound; // 0x1820(0x08)
	struct FText AddFriendText; // 0x1828(0x18)
	struct FText AcceptedInviteText; // 0x1840(0x18)
	struct FText AcceptFriendRequestText; // 0x1858(0x18)
	struct FText SentInviteText; // 0x1870(0x18)
	enum class ESlateVisibility FALSE; // 0x1888(0x01)
	enum class EFrontEndCamera DefaultOldCameraValue; // 0x1889(0x01)

	void Update Add Friend Button Visuals(bool IsUsingTouch); // Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.Update Add Friend Button Visuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateInputActionVisibility(); // Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.UpdateInputActionVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	enum class ESlateVisibility GetInputActionVisibility(); // Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.GetInputActionVisibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void OnReadyStatusChanged(enum class EGameReadiness GameReadiness, bool bIsDownloading); // Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.OnReadyStatusChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnTeamMemberEstablished(bool bHasValidMember); // Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.BP_OnTeamMemberEstablished // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnFrontEndCameraChanged(enum class EFrontEndCamera NewCamera, enum class EFrontEndCamera OldCamera); // Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.OnFrontEndCameraChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnPlayReadyAudio(bool bIsReadyForMatchmaking); // Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.OnPlayReadyAudio // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnCurrentSubGameChanged(enum class ESubGame NewSubGame); // Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.OnCurrentSubGameChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnFriendStatusUpdated(enum class EFortFriendRequestStatus FriendRequestStatus); // Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.OnFriendStatusUpdated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void HandleInputMethodChanged(enum class ECommonInputType bNewInputType); // Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.HandleInputMethodChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Destruct(); // Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnInitialized(); // Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnInputChanged(enum class ECommonInputType bNewInputType); // Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.OnInputChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_TeamMemberPedestal_Nameplate(int32_t EntryPoint); // Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.ExecuteUbergraph_TeamMemberPedestal_Nameplate // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

