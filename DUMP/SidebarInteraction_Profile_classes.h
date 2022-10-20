// WidgetBlueprintGeneratedClass SidebarInteraction_Profile.SidebarInteraction_Profile_C
// Size: 0x15a8 (Inherited: 0x1540)
struct USidebarInteraction_Profile_C : UFortSidebarSocialInteractionButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1540(0x08)
	struct UWidgetAnimation* OnHover; // 0x1548(0x08)
	struct UImage* EncourageEpicFriend; // 0x1550(0x08)
	struct UImage* Image_Arrow; // 0x1558(0x08)
	struct UMenuAnchor* MenuAnchor_Actions; // 0x1560(0x08)
	struct USizeBox* ; // 0x1568(0x08)
	struct UWBP_RebootRallyIcon_C* WBP_RebootRallyIcon; // 0x1570(0x08)
	struct FLinearColor EncourageEpicFriend_IdleColor; // 0x1578(0x10)
	struct FLinearColor EncourageEpicFriend_HoveredColor; // 0x1588(0x10)
	struct FLinearColor AddFriendColor; // 0x1598(0x10)

	void SetArrow(); // Function SidebarInteraction_Profile.SidebarInteraction_Profile_C.SetArrow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnInteractionSet(); // Function SidebarInteraction_Profile.SidebarInteraction_Profile_C.OnInteractionSet // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnUnhovered(); // Function SidebarInteraction_Profile.SidebarInteraction_Profile_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnHovered(); // Function SidebarInteraction_Profile.SidebarInteraction_Profile_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnInitialized(); // Function SidebarInteraction_Profile.SidebarInteraction_Profile_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_SidebarInteraction_Profile(int32_t EntryPoint); // Function SidebarInteraction_Profile.SidebarInteraction_Profile_C.ExecuteUbergraph_SidebarInteraction_Profile // (Final|UbergraphFunction) // @ game+0xd67374
};

