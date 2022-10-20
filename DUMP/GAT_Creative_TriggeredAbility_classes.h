// BlueprintGeneratedClass GAT_Creative_TriggeredAbility.GAT_Creative_TriggeredAbility_C
// Size: 0xb48 (Inherited: 0xb2d)
struct UGAT_Creative_TriggeredAbility_C : UGAT_TriggeredAbility_C {
	char pad_B2D[0x3]; // 0xb2d(0x03)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb30(0x08)
	struct TArray<struct FName> OverriddenPropertyNames; // 0xb38(0x10)

	void IsPropertyOverridden(struct FName PropertyName, bool& bResult); // Function GAT_Creative_TriggeredAbility.GAT_Creative_TriggeredAbility_C.IsPropertyOverridden // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xd67374
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GAT_Creative_TriggeredAbility.GAT_Creative_TriggeredAbility_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void SetupAbilityFailsafeTimer(double Duration); // Function GAT_Creative_TriggeredAbility.GAT_Creative_TriggeredAbility_C.SetupAbilityFailsafeTimer // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void AbilityTimeout(); // Function GAT_Creative_TriggeredAbility.GAT_Creative_TriggeredAbility_C.AbilityTimeout // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GAT_Creative_TriggeredAbility(int32_t EntryPoint); // Function GAT_Creative_TriggeredAbility.GAT_Creative_TriggeredAbility_C.ExecuteUbergraph_GAT_Creative_TriggeredAbility // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

