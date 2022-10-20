// WidgetBlueprintGeneratedClass SquadMemberTile.SquadMemberTile_C
// Size: 0x1568 (Inherited: 0x14f0)
struct USquadMemberTile_C : UAthenaSquadMemberDetailedEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x14f0(0x08)
	struct UWidgetAnimation* OnIntro; // 0x14f8(0x08)
	struct UWidgetAnimation* OnLocalUserDefined; // 0x1500(0x08)
	struct UWidgetAnimation* OnSelected; // 0x1508(0x08)
	struct UWidgetAnimation* SetRibbonRotation; // 0x1510(0x08)
	struct UWidgetAnimation* StyleEmpty; // 0x1518(0x08)
	struct UWidgetAnimation* StyleNotReady; // 0x1520(0x08)
	struct UWidgetAnimation* StyleReady; // 0x1528(0x08)
	struct UWidgetAnimation* StyleSitOut; // 0x1530(0x08)
	struct UWidgetAnimation* OnHovered; // 0x1538(0x08)
	struct UBorder* EntryBorder; // 0x1540(0x08)
	struct UImage* LoadingThrobberBacking; // 0x1548(0x08)
	struct UImage* LocalUserIcon; // 0x1550(0x08)
	struct UImage* SquadOverlay; // 0x1558(0x08)
	struct UImage* SquadRibbon; // 0x1560(0x08)

	void SetVisuals(enum class EGameReadiness Member Readiness, bool Is In Frontend); // Function SquadMemberTile.SquadMemberTile_C.SetVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetEmptyVisuals(); // Function SquadMemberTile.SquadMemberTile_C.SetEmptyVisuals // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetSitOutVisuals(); // Function SquadMemberTile.SquadMemberTile_C.SetSitOutVisuals // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetReadyVisuals(); // Function SquadMemberTile.SquadMemberTile_C.SetReadyVisuals // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetNotReadyVisuals(); // Function SquadMemberTile.SquadMemberTile_C.SetNotReadyVisuals // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnLoaded_A3B69DDA4214DBAA66546FAB9F43D5E7(struct UObject* Loaded); // Function SquadMemberTile.SquadMemberTile_C.OnLoaded_A3B69DDA4214DBAA66546FAB9F43D5E7 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BP_OnUnhovered(); // Function SquadMemberTile.SquadMemberTile_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnHovered(); // Function SquadMemberTile.SquadMemberTile_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnSquadAssigned(); // Function SquadMemberTile.SquadMemberTile_C.OnSquadAssigned // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function SquadMemberTile.SquadMemberTile_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function SquadMemberTile.SquadMemberTile_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnMemberGameReadinessChanged(enum class EGameReadiness ReadyStatus); // Function SquadMemberTile.SquadMemberTile_C.OnMemberGameReadinessChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnSelected(); // Function SquadMemberTile.SquadMemberTile_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnDeselected(); // Function SquadMemberTile.SquadMemberTile_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnTeamMemberEstablished(bool bHasValidMember); // Function SquadMemberTile.SquadMemberTile_C.BP_OnTeamMemberEstablished // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnMemberIsInFrontendChanged(bool bIsInFrontEnd); // Function SquadMemberTile.SquadMemberTile_C.OnMemberIsInFrontendChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_SquadMemberTile(int32_t EntryPoint); // Function SquadMemberTile.SquadMemberTile_C.ExecuteUbergraph_SquadMemberTile // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

