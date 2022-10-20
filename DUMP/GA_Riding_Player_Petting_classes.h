// BlueprintGeneratedClass GA_Riding_Player_Petting.GA_Riding_Player_Petting_C
// Size: 0xb50 (Inherited: 0xb20)
struct UGA_Riding_Player_Petting_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct URidableComponent* Active Ridable; // 0xb28(0x08)
	struct UGameplayEffect* GE_PlayerPetting; // 0xb30(0x08)
	struct TArray<struct FGameplayTag> TagsToCancelPetting; // 0xb38(0x10)
	struct AFortPlayerPawn* FortPlayerPawnRider; // 0xb48(0x08)

	void PettingTelemetry(struct AActor* Owner); // Function GA_Riding_Player_Petting.GA_Riding_Player_Petting_C.PettingTelemetry // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void GetRiderPettingMontage(struct UAnimMontage*& RiderPettingMontage); // Function GA_Riding_Player_Petting.GA_Riding_Player_Petting_C.GetRiderPettingMontage // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void OnCancelled_EBEF9ED74121A25C39ABC2B953D1B3F8(); // Function GA_Riding_Player_Petting.GA_Riding_Player_Petting_C.OnCancelled_EBEF9ED74121A25C39ABC2B953D1B3F8 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnInterrupted_EBEF9ED74121A25C39ABC2B953D1B3F8(); // Function GA_Riding_Player_Petting.GA_Riding_Player_Petting_C.OnInterrupted_EBEF9ED74121A25C39ABC2B953D1B3F8 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnBlendOut_EBEF9ED74121A25C39ABC2B953D1B3F8(); // Function GA_Riding_Player_Petting.GA_Riding_Player_Petting_C.OnBlendOut_EBEF9ED74121A25C39ABC2B953D1B3F8 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnCompleted_EBEF9ED74121A25C39ABC2B953D1B3F8(); // Function GA_Riding_Player_Petting.GA_Riding_Player_Petting_C.OnCompleted_EBEF9ED74121A25C39ABC2B953D1B3F8 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Added_DE1C9DFC4A5B4A7B0E203C8095E1CE5D(); // Function GA_Riding_Player_Petting.GA_Riding_Player_Petting_C.Added_DE1C9DFC4A5B4A7B0E203C8095E1CE5D // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void K2_ActivateAbility(); // Function GA_Riding_Player_Petting.GA_Riding_Player_Petting_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Riding_Player_Petting.GA_Riding_Player_Petting_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void FailedToActivatePassiveAbility(struct FGameplayAbilityActorInfo ActorInfo); // Function GA_Riding_Player_Petting.GA_Riding_Player_Petting_C.FailedToActivatePassiveAbility // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GA_Riding_Player_Petting(int32_t EntryPoint); // Function GA_Riding_Player_Petting.GA_Riding_Player_Petting_C.ExecuteUbergraph_GA_Riding_Player_Petting // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

