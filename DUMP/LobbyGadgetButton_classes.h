// WidgetBlueprintGeneratedClass LobbyGadgetButton.LobbyGadgetButton_C
// Size: 0x339 (Inherited: 0x2e0)
struct ULobbyGadgetButton_C : UCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UPanelButton_C* Button; // 0x2e8(0x08)
	struct UImage* EmptySlot; // 0x2f0(0x08)
	struct UFortMultiSizeItemCard* Item; // 0x2f8(0x08)
	struct TArray<struct UFortWorldItemDefinition*> DesignTestItemDefinitions; // 0x300(0x10)
	struct UFortWorldItem* GadgetItem; // 0x310(0x08)
	struct FMulticastInlineDelegate OnButtonClicked; // 0x318(0x10)
	struct FMulticastInlineDelegate OnButtonHovered; // 0x328(0x10)
	bool bLocked; // 0x338(0x01)

	void Focus(); // Function LobbyGadgetButton.LobbyGadgetButton_C.Focus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void GetLocked(bool& bLocked); // Function LobbyGadgetButton.LobbyGadgetButton_C.GetLocked // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void SetLocked(bool bLocked); // Function LobbyGadgetButton.LobbyGadgetButton_C.SetLocked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void GetGadgetItem(struct UFortWorldItem*& GadgetItem); // Function LobbyGadgetButton.LobbyGadgetButton_C.GetGadgetItem // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void Refresh(struct UFortWorldItem* WorldItem); // Function LobbyGadgetButton.LobbyGadgetButton_C.Refresh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function LobbyGadgetButton.LobbyGadgetButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void BndEvt__Button_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function LobbyGadgetButton.LobbyGadgetButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__Button_K2Node_ComponentBoundEvent_96_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function LobbyGadgetButton.LobbyGadgetButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_96_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_LobbyGadgetButton(int32_t EntryPoint); // Function LobbyGadgetButton.LobbyGadgetButton_C.ExecuteUbergraph_LobbyGadgetButton // (Final|UbergraphFunction) // @ game+0xd67374
	void OnButtonHovered__DelegateSignature(struct ULobbyGadgetButton_C* GadgetButton); // Function LobbyGadgetButton.LobbyGadgetButton_C.OnButtonHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnButtonClicked__DelegateSignature(struct ULobbyGadgetButton_C* GadgetButton); // Function LobbyGadgetButton.LobbyGadgetButton_C.OnButtonClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

