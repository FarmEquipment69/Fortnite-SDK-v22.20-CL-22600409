// BlueprintGeneratedClass GAT_CommandoActiveAbility.GAT_CommandoActiveAbility_C
// Size: 0xc3a (Inherited: 0xb78)
struct UGAT_CommandoActiveAbility_C : UGAT_ActiveAbility_Hero_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb78(0x08)
	struct FGameplayEventData Event Data; // 0xb80(0xb0)
	struct AFortPawn* CommandoPlayerPawn; // 0xc30(0x08)
	bool isAutoCommitted; // 0xc38(0x01)
	bool isStaminaLockedOut; // 0xc39(0x01)

	void K2_ActivateAbility(); // Function GAT_CommandoActiveAbility.GAT_CommandoActiveAbility_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GAT_CommandoActiveAbility(int32_t EntryPoint); // Function GAT_CommandoActiveAbility.GAT_CommandoActiveAbility_C.ExecuteUbergraph_GAT_CommandoActiveAbility // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

