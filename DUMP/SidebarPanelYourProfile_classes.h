// WidgetBlueprintGeneratedClass SidebarPanelYourProfile.SidebarPanelYourProfile_C
// Size: 0x4f8 (Inherited: 0x4d8)
struct USidebarPanelYourProfile_C : UFortSidebarPanelYourProfile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4d8(0x08)
	struct UWidgetAnimation* OnContentLoaded; // 0x4e0(0x08)
	struct UCommonBorder* Border_PresenceRegion; // 0x4e8(0x08)
	struct USidebarProfileLoading_C* SidebarProfileLoading; // 0x4f0(0x08)

	void OnStartProfileLoading(); // Function SidebarPanelYourProfile.SidebarPanelYourProfile_C.OnStartProfileLoading // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnFinishedProfileLoading(); // Function SidebarPanelYourProfile.SidebarPanelYourProfile_C.OnFinishedProfileLoading // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_SidebarPanelYourProfile(int32_t EntryPoint); // Function SidebarPanelYourProfile.SidebarPanelYourProfile_C.ExecuteUbergraph_SidebarPanelYourProfile // (Final|UbergraphFunction) // @ game+0xd67374
};

