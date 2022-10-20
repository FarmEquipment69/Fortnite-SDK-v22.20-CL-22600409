// WidgetBlueprintGeneratedClass SidebarPartyPortrait.SidebarPartyPortrait_C
// Size: 0x319 (Inherited: 0x2f8)
struct USidebarPartyPortrait_C : UFortJoinablePartyPortrait {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f8(0x08)
	struct UBorder* ; // 0x300(0x08)
	struct UImage* ; // 0x308(0x08)
	struct UFortSocialAvatarIcon* Image_ValueBackground; // 0x310(0x08)
	bool IsPartyLeader; // 0x318(0x01)

	void PreConstruct(bool IsDesignTime); // Function SidebarPartyPortrait.SidebarPartyPortrait_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_SidebarPartyPortrait(int32_t EntryPoint); // Function SidebarPartyPortrait.SidebarPartyPortrait_C.ExecuteUbergraph_SidebarPartyPortrait // (Final|UbergraphFunction) // @ game+0xd67374
};

