// WidgetBlueprintGeneratedClass AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C
// Size: 0x8e0 (Inherited: 0x600)
struct UAthenaLobbyPlayerPanel_C : UAthenaLobbyPlayerPanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x600(0x08)
	struct UHorizontalBox* BattlePassRow; // 0x608(0x08)
	struct UBorder* ; // 0x610(0x08)
	char pad_618[0x8]; // 0x618(0x08)
	struct FFortTeamMemberInfo TeamMemberInfo; // 0x620(0x250)
	struct FMulticastInlineDelegate OnGadgetsClicked; // 0x870(0x10)
	struct FText AddFriendText; // 0x880(0x18)
	struct FText AcceptInviteText; // 0x898(0x18)
	struct FText SentInviteText; // 0x8b0(0x18)
	struct FText AcceptedInviteText; // 0x8c8(0x18)

	struct FEventReply (struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C. // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnHasBattlePassUpdated(bool bHasBattlePass); // Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.OnHasBattlePassUpdated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnFriendStatusUpdated(enum class EFortFriendRequestStatus FriendRequestStatus); // Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.OnFriendStatusUpdated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnIsMutedUpdated(bool bIsMuted); // Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.OnIsMutedUpdated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_AthenaLobbyPlayerPanel(int32_t EntryPoint); // Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.ExecuteUbergraph_AthenaLobbyPlayerPanel // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
	void OnGadgetsClicked__DelegateSignature(); // Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.OnGadgetsClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

