// WidgetBlueprintGeneratedClass SidebarProfileSubPanelIdentity.SidebarProfileSubPanelIdentity_C
// Size: 0x3a8 (Inherited: 0x378)
struct USidebarProfileSubPanelIdentity_C : UFortSocialProfileIdentity {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x378(0x08)
	struct UHorizontalBox* HorizontalBox_SeasonLevel; // 0x380(0x08)
	struct UImage* ; // 0x388(0x08)
	struct UImage* ; // 0x390(0x08)
	struct UImage* Image_Battlepass; // 0x398(0x08)
	struct UCommonTextBlock* Text_SeasonLevel; // 0x3a0(0x08)

	void SetFortniteCrewVisiblity(bool bIsVisible); // Function SidebarProfileSubPanelIdentity.SidebarProfileSubPanelIdentity_C.SetFortniteCrewVisiblity // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void SetBattlePassVisiblity(bool bIsVisible); // Function SidebarProfileSubPanelIdentity.SidebarProfileSubPanelIdentity_C.SetBattlePassVisiblity // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnFinishedProfileLoading(); // Function SidebarProfileSubPanelIdentity.SidebarProfileSubPanelIdentity_C.OnFinishedProfileLoading // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnStartProfileLoading(); // Function SidebarProfileSubPanelIdentity.SidebarProfileSubPanelIdentity_C.OnStartProfileLoading // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void SetSeasonLevel(int32_t Level); // Function SidebarProfileSubPanelIdentity.SidebarProfileSubPanelIdentity_C.SetSeasonLevel // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_SidebarProfileSubPanelIdentity(int32_t EntryPoint); // Function SidebarProfileSubPanelIdentity.SidebarProfileSubPanelIdentity_C.ExecuteUbergraph_SidebarProfileSubPanelIdentity // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

