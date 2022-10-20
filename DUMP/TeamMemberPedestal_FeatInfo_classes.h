// WidgetBlueprintGeneratedClass TeamMemberPedestal_FeatInfo.TeamMemberPedestal_FeatInfo_C
// Size: 0x14d0 (Inherited: 0x14c0)
struct UTeamMemberPedestal_FeatInfo_C : UFortTeamMemberPedestalFeatInfo {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x14c0(0x08)
	struct UWidgetAnimation* FeatInfoSet; // 0x14c8(0x08)

	void OnAnimationFinished(struct UWidgetAnimation* Animation); // Function TeamMemberPedestal_FeatInfo.TeamMemberPedestal_FeatInfo_C.OnAnimationFinished // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnFeatDefinitionSet(); // Function TeamMemberPedestal_FeatInfo.TeamMemberPedestal_FeatInfo_C.OnFeatDefinitionSet // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_TeamMemberPedestal_FeatInfo(int32_t EntryPoint); // Function TeamMemberPedestal_FeatInfo.TeamMemberPedestal_FeatInfo_C.ExecuteUbergraph_TeamMemberPedestal_FeatInfo // (Final|UbergraphFunction) // @ game+0xd67374
};

