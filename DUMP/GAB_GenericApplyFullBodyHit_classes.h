// BlueprintGeneratedClass GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C
// Size: 0xb90 (Inherited: 0xb20)
struct UGAB_GenericApplyFullBodyHit_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct UGameplayEffect* GE_FullBodyHitActiveEffect; // 0xb28(0x08)
	struct FVector HitImpulse; // 0xb30(0x18)
	struct UGameplayEffect* GE_RestoreControlResistance; // 0xb48(0x08)
	struct FActiveGameplayEffectHandle ActiveImpactImmunity; // 0xb50(0x08)
	struct UGameplayEffect* GE_ImpactImmunity; // 0xb58(0x08)
	struct FActiveGameplayEffectHandle ActiveFullBodyHit; // 0xb60(0x08)
	struct FGameplayTag Event_Triggered_FullBodyHit; // 0xb68(0x04)
	struct FGameplayTag Event Control Ended; // 0xb6c(0x04)
	struct UGameplayEffect* GE_TransferFullBodyHit; // 0xb70(0x08)
	struct UAnimMontage* FullBodyHitMontage; // 0xb78(0x08)
	struct FName FullBodyHitMontageSection; // 0xb80(0x04)
	bool EndAbilityOnBlendOut; // 0xb84(0x01)
	char pad_B85[0x3]; // 0xb85(0x03)
	double Duration_NoAnim; // 0xb88(0x08)

	bool K2_CanActivateAbility(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayAbilitySpecHandle Handle, struct FGameplayTagContainer& RelevantTags); // Function GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C.K2_CanActivateAbility // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xd67374
	void OnCancelled_25E5E66442E815EB40A6DB8205FE0D98(); // Function GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C.OnCancelled_25E5E66442E815EB40A6DB8205FE0D98 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnInterrupted_25E5E66442E815EB40A6DB8205FE0D98(); // Function GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C.OnInterrupted_25E5E66442E815EB40A6DB8205FE0D98 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnBlendOut_25E5E66442E815EB40A6DB8205FE0D98(); // Function GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C.OnBlendOut_25E5E66442E815EB40A6DB8205FE0D98 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnCompleted_25E5E66442E815EB40A6DB8205FE0D98(); // Function GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C.OnCompleted_25E5E66442E815EB40A6DB8205FE0D98 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void K2_OnEndAbility(bool bWasCancelled); // Function GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnHitPawn(struct AActor* SelfActor, struct AActor* OtherActor, struct FVector NormalImpulse, struct FHitResult& Hit); // Function GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C.OnHitPawn // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void PickFullBodyHitMontageSection(); // Function GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C.PickFullBodyHitMontageSection // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GAB_GenericApplyFullBodyHit(int32_t EntryPoint); // Function GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C.ExecuteUbergraph_GAB_GenericApplyFullBodyHit // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

