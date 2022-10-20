// WidgetBlueprintGeneratedClass HorizontalTabList.HorizontalTabList_C
// Size: 0x510 (Inherited: 0x470)
struct UHorizontalTabList_C : UFortTabListWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x470(0x08)
	struct UImage* ImageGamepadKeyPrompt; // 0x478(0x08)
	struct UImage* ImageHorizRule; // 0x480(0x08)
	struct UCommonActionWidget* NextTabAction; // 0x488(0x08)
	struct USizeBox* NextTabActionWrapper; // 0x490(0x08)
	struct UOverlay* Overlay_Container; // 0x498(0x08)
	struct UCommonActionWidget* PreviousTabAction; // 0x4a0(0x08)
	struct USizeBox* PreviousTabActionWrapper; // 0x4a8(0x08)
	struct UHorizontalBox* TabButtonBox; // 0x4b0(0x08)
	struct FMargin TabButtonPadding; // 0x4b8(0x10)
	struct UCommonButtonStyle* ButtonStyle; // 0x4c8(0x08)
	bool UseButtonStyle; // 0x4d0(0x01)
	bool ShowGamePadInputPrompt; // 0x4d1(0x01)
	bool ShowRail; // 0x4d2(0x01)
	char pad_4D3[0x1]; // 0x4d3(0x01)
	int32_t MinTabWidth; // 0x4d4(0x04)
	bool ForceTabLabelsCollapsed; // 0x4d8(0x01)
	bool ForceTabIconsCollapsed; // 0x4d9(0x01)
	char pad_4DA[0x6]; // 0x4da(0x06)
	struct FMulticastInlineDelegate RefreshGamepad; // 0x4e0(0x10)
	struct UCommonButtonBase* DebugButtonTypeDisplay; // 0x4f0(0x08)
	int32_t DebugTabCount; // 0x4f8(0x04)
	char pad_4FC[0x4]; // 0x4fc(0x04)
	double PreviousTabActionPaddingRight; // 0x500(0x08)
	double NextTabActionPaddingLeft; // 0x508(0x08)

	void DebugCreateTabsForDesigner(); // Function HorizontalTabList.HorizontalTabList_C.DebugCreateTabsForDesigner // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateTabStyles(struct UCommonButtonBase* ButtonWidget); // Function HorizontalTabList.HorizontalTabList_C.UpdateTabStyles // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetVerticalAlignment(enum class EVerticalAlignment FillVertically); // Function HorizontalTabList.HorizontalTabList_C.SetVerticalAlignment // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateGamepadKeyVisibility(); // Function HorizontalTabList.HorizontalTabList_C.UpdateGamepadKeyVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function HorizontalTabList.HorizontalTabList_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void Previous Visibility(); // Function HorizontalTabList.HorizontalTabList_C.Previous Visibility // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function HorizontalTabList.HorizontalTabList_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void (struct FName TabId); // Function HorizontalTabList.HorizontalTabList_C. // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleOnInputMethodChanged(enum class ECommonInputType bNewInputType); // Function HorizontalTabList.HorizontalTabList_C.HandleOnInputMethodChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void (enum class ESlateVisibility InVisibility); // Function HorizontalTabList.HorizontalTabList_C. // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleTabCreation(struct FName TabNameID, struct UCommonButtonBase* TabButton); // Function HorizontalTabList.HorizontalTabList_C.HandleTabCreation // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void HandleTabRemoval(struct FName TabNameID, struct UCommonButtonBase* TabButton); // Function HorizontalTabList.HorizontalTabList_C.HandleTabRemoval // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_HorizontalTabList(int32_t EntryPoint); // Function HorizontalTabList.HorizontalTabList_C.ExecuteUbergraph_HorizontalTabList // (Final|UbergraphFunction) // @ game+0xd67374
	void RefreshGamepad__DelegateSignature(); // Function HorizontalTabList.HorizontalTabList_C.RefreshGamepad__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

