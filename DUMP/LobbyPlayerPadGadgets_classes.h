// WidgetBlueprintGeneratedClass LobbyPlayerPadGadgets.LobbyPlayerPadGadgets_C
// Size: 0x320 (Inherited: 0x2e0)
struct ULobbyPlayerPadGadgets_C : UCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct ULobbyGadgetButton_C* Gadget1; // 0x2e8(0x08)
	struct ULobbyGadgetButton_C* Gadget2; // 0x2f0(0x08)
	int32_t PlayerIndex; // 0x2f8(0x04)
	char pad_2FC[0x4]; // 0x2fc(0x04)
	struct FMulticastInlineDelegate OnGadgetsMouseEntered; // 0x300(0x10)
	struct FMulticastInlineDelegate OnGadgetsMouseLeft; // 0x310(0x10)

	void Initialize(int32_t PlayerIndex); // Function LobbyPlayerPadGadgets.LobbyPlayerPadGadgets_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnInputClicked(); // Function LobbyPlayerPadGadgets.LobbyPlayerPadGadgets_C.OnInputClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function LobbyPlayerPadGadgets.LobbyPlayerPadGadgets_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Refresh(struct FFortTeamMemberInfo TeamMemberInfo); // Function LobbyPlayerPadGadgets.LobbyPlayerPadGadgets_C.Refresh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function LobbyPlayerPadGadgets.LobbyPlayerPadGadgets_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function LobbyPlayerPadGadgets.LobbyPlayerPadGadgets_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_LobbyPlayerPadGadgets(int32_t EntryPoint); // Function LobbyPlayerPadGadgets.LobbyPlayerPadGadgets_C.ExecuteUbergraph_LobbyPlayerPadGadgets // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
	void OnGadgetsMouseLeft__DelegateSignature(); // Function LobbyPlayerPadGadgets.LobbyPlayerPadGadgets_C.OnGadgetsMouseLeft__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnGadgetsMouseEntered__DelegateSignature(); // Function LobbyPlayerPadGadgets.LobbyPlayerPadGadgets_C.OnGadgetsMouseEntered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

