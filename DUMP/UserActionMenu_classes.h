// WidgetBlueprintGeneratedClass UserActionMenu.UserActionMenu_C
// Size: 0x520 (Inherited: 0x4f0)
struct UUserActionMenu_C : UFortSocialInteractionMenu {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4f0(0x08)
	struct UWidgetAnimation* ConfirmationOpened; // 0x4f8(0x08)
	struct UWidgetAnimation* Opened; // 0x500(0x08)
	struct UBorder* Border_OnlineStatusIndicator; // 0x508(0x08)
	struct UBorder* EntryBorder; // 0x510(0x08)
	struct UFortMobileImage* Image_Platform; // 0x518(0x08)

	void OnToggleConfirmation(bool bIsVisible); // Function UserActionMenu.UserActionMenu_C.OnToggleConfirmation // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnOpened(); // Function UserActionMenu.UserActionMenu_C.OnOpened // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_UserActionMenu(int32_t EntryPoint); // Function UserActionMenu.UserActionMenu_C.ExecuteUbergraph_UserActionMenu // (Final|UbergraphFunction) // @ game+0xd67374
};

