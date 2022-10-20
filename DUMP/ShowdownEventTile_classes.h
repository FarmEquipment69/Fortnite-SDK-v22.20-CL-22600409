// WidgetBlueprintGeneratedClass ShowdownEventTile.ShowdownEventTile_C
// Size: 0x1530 (Inherited: 0x1480)
struct UShowdownEventTile_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1480(0x08)
	struct UWidgetAnimation* Focus_Violator; // 0x1488(0x08)
	struct UWidgetAnimation* Hover; // 0x1490(0x08)
	struct UWidgetAnimation* Focus; // 0x1498(0x08)
	struct UWidgetAnimation* TransitionSize; // 0x14a0(0x08)
	struct UWidgetAnimation* Intro; // 0x14a8(0x08)
	struct UCommonBorder* CommonBorder_InputContainer; // 0x14b0(0x08)
	struct UImage* Image_BG; // 0x14b8(0x08)
	struct UImage* Image_Ended; // 0x14c0(0x08)
	struct UImage* Image_Focus; // 0x14c8(0x08)
	struct UImage* Image_Hover; // 0x14d0(0x08)
	struct UImage* Image_Tail; // 0x14d8(0x08)
	struct UShowdownEventTile_RoundBreak_C* ShowdownEventTile_RoundBreak; // 0x14e0(0x08)
	struct UShowdownEventTileInfo_C* ShowdownEventTileInfo; // 0x14e8(0x08)
	struct UShowdownEventTileViolator_C* Violator; // 0x14f0(0x08)
	struct FString EventId; // 0x14f8(0x10)
	bool isEnded; // 0x1508(0x01)
	bool IsLive; // 0x1509(0x01)
	char pad_150A[0x6]; // 0x150a(0x06)
	struct FMulticastInlineDelegate OnWindowSelected; // 0x1510(0x10)
	struct FString TournamentId; // 0x1520(0x10)

	void SetData(struct FString TournamentInfo, struct FString EventInfo); // Function ShowdownEventTile.ShowdownEventTile_C.SetData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function ShowdownEventTile.ShowdownEventTile_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void BP_OnClicked(); // Function ShowdownEventTile.ShowdownEventTile_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void EventIntro(int32_t Index); // Function ShowdownEventTile.ShowdownEventTile_C.EventIntro // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void EventResize(bool Out); // Function ShowdownEventTile.ShowdownEventTile_C.EventResize // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BP_OnHovered(); // Function ShowdownEventTile.ShowdownEventTile_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnUnhovered(); // Function ShowdownEventTile.ShowdownEventTile_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnSelected(); // Function ShowdownEventTile.ShowdownEventTile_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnDeselected(); // Function ShowdownEventTile.ShowdownEventTile_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function ShowdownEventTile.ShowdownEventTile_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function ShowdownEventTile.ShowdownEventTile_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void EventSetState(enum class EFortShowdownEventState EventState); // Function ShowdownEventTile.ShowdownEventTile_C.EventSetState // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void EventColorize(struct FFortTournamentDisplayInfo DisplayInfo); // Function ShowdownEventTile.ShowdownEventTile_C.EventColorize // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void EventColorizeDispatch(struct FFortTournamentDisplayInfo DisplayInfo); // Function ShowdownEventTile.ShowdownEventTile_C.EventColorizeDispatch // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void EventMultiRoundStyle(); // Function ShowdownEventTile.ShowdownEventTile_C.EventMultiRoundStyle // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_ShowdownEventTile(int32_t EntryPoint); // Function ShowdownEventTile.ShowdownEventTile_C.ExecuteUbergraph_ShowdownEventTile // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
	void OnWindowSelected__DelegateSignature(); // Function ShowdownEventTile.ShowdownEventTile_C.OnWindowSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

