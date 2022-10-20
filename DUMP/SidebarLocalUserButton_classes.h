// WidgetBlueprintGeneratedClass SidebarLocalUserButton.SidebarLocalUserButton_C
// Size: 0x1550 (Inherited: 0x14e0)
struct USidebarLocalUserButton_C : UFortSocialSidebarLocalUserButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x14e0(0x08)
	struct UWidgetAnimation* Unselected; // 0x14e8(0x08)
	struct UWidgetAnimation* Hovered; // 0x14f0(0x08)
	struct UWidgetAnimation* Selected; // 0x14f8(0x08)
	struct UBorder* Border_OnlineStatusIndicator; // 0x1500(0x08)
	struct UFortMobileImage* Image_TabIcon; // 0x1508(0x08)
	struct FLinearColor Online; // 0x1510(0x10)
	struct FLinearColor Offline; // 0x1520(0x10)
	struct FLinearColor Away; // 0x1530(0x10)
	struct FLinearColor Color_PresenceIndicatorOutline; // 0x1540(0x10)

	void SetPresenceIndicatorOutlineColor(struct FLinearColor Value); // Function SidebarLocalUserButton.SidebarLocalUserButton_C.SetPresenceIndicatorOutlineColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetSkewBoxColor(struct FLinearColor InputPin); // Function SidebarLocalUserButton.SidebarLocalUserButton_C.SetSkewBoxColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BP_OnHovered(); // Function SidebarLocalUserButton.SidebarLocalUserButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnSelected(); // Function SidebarLocalUserButton.SidebarLocalUserButton_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnDeselected(); // Function SidebarLocalUserButton.SidebarLocalUserButton_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnUnhovered(); // Function SidebarLocalUserButton.SidebarLocalUserButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnOnlineStatusChanged(enum class ELocalUserOnlineStatus OnlineStatus); // Function SidebarLocalUserButton.SidebarLocalUserButton_C.OnOnlineStatusChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function SidebarLocalUserButton.SidebarLocalUserButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_SidebarLocalUserButton(int32_t EntryPoint); // Function SidebarLocalUserButton.SidebarLocalUserButton_C.ExecuteUbergraph_SidebarLocalUserButton // (Final|UbergraphFunction) // @ game+0xd67374
};

