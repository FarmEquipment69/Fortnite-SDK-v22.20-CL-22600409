// BlueprintGeneratedClass GAB_AthenaDBNO.GAB_AthenaDBNO_C
// Size: 0xcd1 (Inherited: 0xb20)
struct UGAB_AthenaDBNO_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct UAnimMontage* DeathMontage; // 0xb28(0x08)
	struct FVector DeathHitDirection; // 0xb30(0x18)
	struct FHitResult DeathHitResult; // 0xb48(0xe0)
	struct FGameplayTagContainer DamageTags; // 0xc28(0x20)
	struct FGameplayTagContainer GameplayStatusAfflicted; // 0xc48(0x20)
	struct UAnimMontage* DeathMontageSkydive; // 0xc68(0x08)
	struct FActiveGameplayEffectHandle DBNOBleedGEHandle; // 0xc70(0x08)
	struct FName HolsterId; // 0xc78(0x04)
	char pad_C7C[0x4]; // 0xc7c(0x04)
	struct UAnimMontage* DeathMontageSwimming; // 0xc80(0x08)
	struct AFortPlayerPawnAthena* FortPlayerPawn; // 0xc88(0x08)
	struct UGameplayEffect* DBNOStart_GE_Class; // 0xc90(0x08)
	bool ImprovedDBNO; // 0xc98(0x01)
	char pad_C99[0x7]; // 0xc99(0x07)
	struct FGameplayTagContainer Old DBNO Block Tags; // 0xca0(0x20)
	struct FActiveGameplayEffectHandle GE Handle  Health Bonus; // 0xcc0(0x08)
	double TenacityAmount; // 0xcc8(0x08)
	enum class ETenacityType TenacityType; // 0xcd0(0x01)

	void Get Custom Tenacity(double& Tenacity); // Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.Get Custom Tenacity // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void Get Max Health Tenacity(double& Tenacity); // Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.Get Max Health Tenacity // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void Get Default Tenacity Amount(double& Tenacity); // Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.Get Default Tenacity Amount // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void Apply Health Bonus(struct FActiveGameplayEffectHandle& EffectHandle); // Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.Apply Health Bonus // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ApplyBleeding(struct FActiveGameplayEffectHandle& EffectHandle); // Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.ApplyBleeding // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	struct UAnimMontage* Get DBNO Montage(); // Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.Get DBNO Montage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void Get Initial Heal Amount(double& Health); // Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.Get Initial Heal Amount // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void InitializeDeathHitDirection(struct FGameplayEventData EventHitData); // Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.InitializeDeathHitDirection // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnCancelled_F0F6785443BD2E74F5591884CB19F35F(); // Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.OnCancelled_F0F6785443BD2E74F5591884CB19F35F // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnInterrupted_F0F6785443BD2E74F5591884CB19F35F(); // Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.OnInterrupted_F0F6785443BD2E74F5591884CB19F35F // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnBlendOut_F0F6785443BD2E74F5591884CB19F35F(); // Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.OnBlendOut_F0F6785443BD2E74F5591884CB19F35F // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnCompleted_F0F6785443BD2E74F5591884CB19F35F(); // Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.OnCompleted_F0F6785443BD2E74F5591884CB19F35F // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnStateInterrupted_C85094F843D5075FE4872C95AFC5D6B6(); // Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.OnStateInterrupted_C85094F843D5075FE4872C95AFC5D6B6 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnStateEnded_C85094F843D5075FE4872C95AFC5D6B6(); // Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.OnStateEnded_C85094F843D5075FE4872C95AFC5D6B6 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnFinish_4C169D40441E45B462D83CBBA67F6E45(); // Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.OnFinish_4C169D40441E45B462D83CBBA67F6E45 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void K2_OnEndAbility(bool bWasCancelled); // Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void DropHeldObjects(); // Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.DropHeldObjects // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GAB_AthenaDBNO(int32_t EntryPoint); // Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.ExecuteUbergraph_GAB_AthenaDBNO // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

