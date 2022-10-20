// WidgetBlueprintGeneratedClass NPCStatusWidget.NPCStatusWidget_C
// Size: 0x3f8 (Inherited: 0x390)
struct UNPCStatusWidget_C : UNPCStatusWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x390(0x08)
	struct UNPCStatusWidgetBar_C* Bar_Health; // 0x398(0x08)
	struct UNPCStatusWidgetBar_C* Bar_Shield; // 0x3a0(0x08)
	struct UOverlay* Overlay_BarsPrefix; // 0x3a8(0x08)
	struct UVerticalBox* VerticalBox_BarExtensions; // 0x3b0(0x08)
	struct FTimerHandle VisibiltyTimer; // 0x3b8(0x08)
	struct FMulticastInlineDelegate VisibilityChanged; // 0x3c0(0x10)
	double StatusWidgetVisibleDuration; // 0x3d0(0x08)
	double CurrentHealthPercent; // 0x3d8(0x08)
	double CurrentShieldPercent; // 0x3e0(0x08)
	bool KeepVisibilityOn; // 0x3e8(0x01)
	char pad_3E9[0x7]; // 0x3e9(0x07)
	struct AFortPawn* FortPawn; // 0x3f0(0x08)

	void EventUpdateStatus(double Health, double Shield, bool ShowShield); // Function NPCStatusWidget.NPCStatusWidget_C.EventUpdateStatus // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void EventHideStatus(); // Function NPCStatusWidget.NPCStatusWidget_C.EventHideStatus // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ChangeWidgetVisibleDuration(double StatusWidgetVisibleDuration); // Function NPCStatusWidget.NPCStatusWidget_C.ChangeWidgetVisibleDuration // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetKeepVisibilityOn(bool KeepVisibilityOn); // Function NPCStatusWidget.NPCStatusWidget_C.SetKeepVisibilityOn // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void TryCallEventHideByTimer(); // Function NPCStatusWidget.NPCStatusWidget_C.TryCallEventHideByTimer // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BP_HandlePlaylistExtensionWidgetCreated(struct UUserWidget* Widget, enum class EUIExtensionSlot SlotType); // Function NPCStatusWidget.NPCStatusWidget_C.BP_HandlePlaylistExtensionWidgetCreated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function NPCStatusWidget.NPCStatusWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnPawnFocused(); // Function NPCStatusWidget.NPCStatusWidget_C.OnPawnFocused // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_NPCStatusWidget(int32_t EntryPoint); // Function NPCStatusWidget.NPCStatusWidget_C.ExecuteUbergraph_NPCStatusWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
	void VisibilityChanged__DelegateSignature(bool bVisible); // Function NPCStatusWidget.NPCStatusWidget_C.VisibilityChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

