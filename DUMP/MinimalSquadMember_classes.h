// WidgetBlueprintGeneratedClass MinimalSquadMember.MinimalSquadMember_C
// Size: 0x14f8 (Inherited: 0x14b0)
struct UMinimalSquadMember_C : UAthenaMinimalSquadMemberEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x14b0(0x08)
	struct UWidgetAnimation* StyleNotReady; // 0x14b8(0x08)
	struct UWidgetAnimation* StyleSitOut; // 0x14c0(0x08)
	struct UWidgetAnimation* StyleEmpty; // 0x14c8(0x08)
	struct UWidgetAnimation* OnReady; // 0x14d0(0x08)
	struct UImage* Image_Meeple; // 0x14d8(0x08)
	struct UImage* LocalUserIndicator; // 0x14e0(0x08)
	struct UOverlay* MeepleContainer; // 0x14e8(0x08)
	struct UImage* ReadyFlash; // 0x14f0(0x08)

	void SetEmptyVisuals(); // Function MinimalSquadMember.MinimalSquadMember_C.SetEmptyVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetSitOutVisuals(); // Function MinimalSquadMember.MinimalSquadMember_C.SetSitOutVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetNotReadyVisuals(); // Function MinimalSquadMember.MinimalSquadMember_C.SetNotReadyVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetReadyVisuals(); // Function MinimalSquadMember.MinimalSquadMember_C.SetReadyVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnMemberGameReadinessChanged(enum class EGameReadiness ReadyStatus); // Function MinimalSquadMember.MinimalSquadMember_C.OnMemberGameReadinessChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnTeamMemberEstablished(bool bHasValidMember); // Function MinimalSquadMember.MinimalSquadMember_C.BP_OnTeamMemberEstablished // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_MinimalSquadMember(int32_t EntryPoint); // Function MinimalSquadMember.MinimalSquadMember_C.ExecuteUbergraph_MinimalSquadMember // (Final|UbergraphFunction) // @ game+0xd67374
};

