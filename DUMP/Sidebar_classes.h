// WidgetBlueprintGeneratedClass Sidebar.Sidebar_C
// Size: 0x6a8 (Inherited: 0x628)
struct USidebar_C : UFortSocialPanelView_Sidebar {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x628(0x08)
	struct USidebarProfile_C* Panel_Profile; // 0x630(0x08)
	struct USafeZone* Safezone_OnboardingTooltip; // 0x638(0x08)
	struct USafeZone* SafeZone_SideBar; // 0x640(0x08)
	struct FText Text_PartyUp; // 0x648(0x18)
	struct FText Text_FindFriends; // 0x660(0x18)
	struct FText Text_VoiceChat; // 0x678(0x18)
	struct FText Text_UserSettings; // 0x690(0x18)

	void BP_OnActivated(); // Function Sidebar.Sidebar_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_Sidebar(int32_t EntryPoint); // Function Sidebar.Sidebar_C.ExecuteUbergraph_Sidebar // (Final|UbergraphFunction) // @ game+0xd67374
};

