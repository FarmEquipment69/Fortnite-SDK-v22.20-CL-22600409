// WidgetBlueprintGeneratedClass SidebarProfile.SidebarProfile_C
// Size: 0x4f8 (Inherited: 0x4c8)
struct USidebarProfile_C : UFortSocialProfilePanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4c8(0x08)
	struct UWidgetAnimation* OnContentLoaded; // 0x4d0(0x08)
	struct UCommonBorder* Border_PresenceRegion; // 0x4d8(0x08)
	struct USafeZone* SafeZone_Content; // 0x4e0(0x08)
	struct UImage* SidebarProfileLoading; // 0x4e8(0x08)
	struct USidebarProfileSubPanelFriendRequest_C* SubPanelFriendRequest; // 0x4f0(0x08)

	void OnStartProfileLoading(); // Function SidebarProfile.SidebarProfile_C.OnStartProfileLoading // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnFinishedProfileLoading(); // Function SidebarProfile.SidebarProfile_C.OnFinishedProfileLoading // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_SidebarProfile(int32_t EntryPoint); // Function SidebarProfile.SidebarProfile_C.ExecuteUbergraph_SidebarProfile // (Final|UbergraphFunction) // @ game+0xd67374
};

