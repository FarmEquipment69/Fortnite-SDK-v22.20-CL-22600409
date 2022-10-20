// BlueprintGeneratedClass GAT_GenericTriggeredAbility.GAT_GenericTriggeredAbility_C
// Size: 0xbf2 (Inherited: 0xb2d)
struct UGAT_GenericTriggeredAbility_C : UGAT_TriggeredAbility_C {
	char pad_B2D[0x3]; // 0xb2d(0x03)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb30(0x08)
	struct FGameplayEventData EventData; // 0xb38(0xb0)
	struct AFortPlayerPawn* FortPlayerPawn; // 0xbe8(0x08)
	bool isAutoCommitted; // 0xbf0(0x01)
	bool isStaminaLockedOut; // 0xbf1(0x01)

	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GAT_GenericTriggeredAbility.GAT_GenericTriggeredAbility_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GAT_GenericTriggeredAbility(int32_t EntryPoint); // Function GAT_GenericTriggeredAbility.GAT_GenericTriggeredAbility_C.ExecuteUbergraph_GAT_GenericTriggeredAbility // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

