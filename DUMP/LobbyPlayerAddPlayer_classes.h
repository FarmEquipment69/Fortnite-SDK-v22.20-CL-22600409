// WidgetBlueprintGeneratedClass LobbyPlayerAddPlayer.LobbyPlayerAddPlayer_C
// Size: 0x1508 (Inherited: 0x14d0)
struct ULobbyPlayerAddPlayer_C : UFortLobbyAddPlayer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x14d0(0x08)
	struct UWidgetAnimation* ShowPartyFinderText; // 0x14d8(0x08)
	struct UWidgetAnimation* OnHovered; // 0x14e0(0x08)
	struct UCommonTextBlock* ; // 0x14e8(0x08)
	struct UFortHUDElementWrapper_C* FortHUDElementWrapper; // 0x14f0(0x08)
	struct UOverlay* OverlayInputAction; // 0x14f8(0x08)
	struct UVerticalBox* VB_ControlLegend; // 0x1500(0x08)

	void BP_OnHovered(); // Function LobbyPlayerAddPlayer.LobbyPlayerAddPlayer_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnUnhovered(); // Function LobbyPlayerAddPlayer.LobbyPlayerAddPlayer_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_LobbyPlayerAddPlayer(int32_t EntryPoint); // Function LobbyPlayerAddPlayer.LobbyPlayerAddPlayer_C.ExecuteUbergraph_LobbyPlayerAddPlayer // (Final|UbergraphFunction) // @ game+0xd67374
};

