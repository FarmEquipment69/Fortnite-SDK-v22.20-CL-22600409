// BlueprintGeneratedClass GA_Athena_TillLandFallDamageImmunity_Parent.GA_Athena_TillLandFallDamageImmunity_Parent_C
// Size: 0xb80 (Inherited: 0xb20)
struct UGA_Athena_TillLandFallDamageImmunity_Parent_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct UGameplayEffect* GE_FallDamageImmunity; // 0xb28(0x08)
	struct FActiveGameplayEffectHandle GEH_FallDamageImmunity; // 0xb30(0x08)
	double Delay_PostLand; // 0xb38(0x08)
	struct FGameplayTag Tag_SurfaceSwimming; // 0xb40(0x04)
	char pad_B44[0x4]; // 0xb44(0x04)
	struct FGameplayTagContainer TC_IgnoreApplication; // 0xb48(0x20)
	struct FGameplayTag Tag_InVehicle; // 0xb68(0x04)
	char pad_B6C[0x4]; // 0xb6c(0x04)
	double Delay_WaterSwimBind; // 0xb70(0x08)
	bool ApplyInAirOnly; // 0xb78(0x01)
	char pad_B79[0x3]; // 0xb79(0x03)
	struct FGameplayTag TagIsRiding; // 0xb7c(0x04)

	void Added_3DBE819D4ED6A0A0909A7690321F9B09(); // Function GA_Athena_TillLandFallDamageImmunity_Parent.GA_Athena_TillLandFallDamageImmunity_Parent_C.Added_3DBE819D4ED6A0A0909A7690321F9B09 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Added_15DBA1504E74C72F22BBCBAD8E3CD31E(); // Function GA_Athena_TillLandFallDamageImmunity_Parent.GA_Athena_TillLandFallDamageImmunity_Parent_C.Added_15DBA1504E74C72F22BBCBAD8E3CD31E // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Added_052C8416489756AFAF2C5391148ABB52(); // Function GA_Athena_TillLandFallDamageImmunity_Parent.GA_Athena_TillLandFallDamageImmunity_Parent_C.Added_052C8416489756AFAF2C5391148ABB52 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void K2_ActivateAbility(); // Function GA_Athena_TillLandFallDamageImmunity_Parent.GA_Athena_TillLandFallDamageImmunity_Parent_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Athena_TillLandFallDamageImmunity_Parent.GA_Athena_TillLandFallDamageImmunity_Parent_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void CallEnd(); // Function GA_Athena_TillLandFallDamageImmunity_Parent.GA_Athena_TillLandFallDamageImmunity_Parent_C.CallEnd // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetUpWaits(); // Function GA_Athena_TillLandFallDamageImmunity_Parent.GA_Athena_TillLandFallDamageImmunity_Parent_C.SetUpWaits // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetUpBinds(); // Function GA_Athena_TillLandFallDamageImmunity_Parent.GA_Athena_TillLandFallDamageImmunity_Parent_C.SetUpBinds // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PawnLanded(struct FHitResult& Hit); // Function GA_Athena_TillLandFallDamageImmunity_Parent.GA_Athena_TillLandFallDamageImmunity_Parent_C.PawnLanded // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void FailedToActivatePassiveAbility(struct FGameplayAbilityActorInfo ActorInfo); // Function GA_Athena_TillLandFallDamageImmunity_Parent.GA_Athena_TillLandFallDamageImmunity_Parent_C.FailedToActivatePassiveAbility // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent(int32_t EntryPoint); // Function GA_Athena_TillLandFallDamageImmunity_Parent.GA_Athena_TillLandFallDamageImmunity_Parent_C.ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

