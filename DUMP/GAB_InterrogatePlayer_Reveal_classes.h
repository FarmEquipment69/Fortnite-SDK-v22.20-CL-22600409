// BlueprintGeneratedClass GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C
// Size: 0xf60 (Inherited: 0xb20)
struct UGAB_InterrogatePlayer_Reveal_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0xb28(0x08)
	struct AFortPlayerControllerAthena* PlayerController; // 0xb30(0x08)
	struct AFortPlayerPawn* InterrogatedPlayer; // 0xb38(0x08)
	struct UAnimMontage* Anim_Reveal; // 0xb40(0x08)
	struct UAnimMontage* Anim_End; // 0xb48(0x08)
	struct FName RevealHolster; // 0xb50(0x04)
	struct FGameplayTag GC_Reveal; // 0xb54(0x04)
	struct FScalableFloat MarkDurationPlayer; // 0xb58(0x28)
	struct FScalableFloat MarkDurationNPC; // 0xb80(0x28)
	struct FScalableFloat MarkRadius; // 0xba8(0x28)
	struct TArray<struct AActor*> SquadmatesToMark; // 0xbd0(0x10)
	struct FTimerHandle Timer_Reveal; // 0xbe0(0x08)
	struct FGameplayTag T_NPC; // 0xbe8(0x04)
	char pad_BEC[0x4]; // 0xbec(0x04)
	double RevealDuration; // 0xbf0(0x08)
	double EndAbilityDelay; // 0xbf8(0x08)
	double SweepDelay; // 0xc00(0x08)
	bool Cancelled; // 0xc08(0x01)
	bool Ending; // 0xc09(0x01)
	char pad_C0A[0x6]; // 0xc0a(0x06)
	struct FString IndicatorGroup; // 0xc10(0x10)
	struct UFortCameraMode* CameraMode; // 0xc20(0x08)
	struct TArray<struct AActor*> ActorsToMark; // 0xc28(0x10)
	struct FGameplayTagContainer T_ReticleHUD; // 0xc38(0x20)
	struct FGameplayTagContainer NPCTagsToMark; // 0xc58(0x20)
	struct FGameplayTagContainer ChestTagsToMark; // 0xc78(0x20)
	struct FGameplayTagContainer GameplayItemTagsToMark; // 0xc98(0x20)
	struct FName ParticleSystemParamName; // 0xcb8(0x04)
	char pad_CBC[0x4]; // 0xcbc(0x04)
	struct UParticleSystem* IndicatedPS; // 0xcc0(0x08)
	struct USoundBase* IndicatedSound; // 0xcc8(0x08)
	struct FVector PSOffset; // 0xcd0(0x18)
	struct FName PSVectorParamName; // 0xce8(0x04)
	char pad_CEC[0x4]; // 0xcec(0x04)
	struct FVector PSDBNOOffset; // 0xcf0(0x18)
	struct FName EnemyStencilName; // 0xd08(0x04)
	struct FName TreasureChestStencilName; // 0xd0c(0x04)
	double StepTime; // 0xd10(0x08)
	bool testbool; // 0xd18(0x01)
	char pad_D19[0x7]; // 0xd19(0x07)
	struct FScalableFloat EnemyStencilID; // 0xd20(0x28)
	struct FScalableFloat StencilStepTime; // 0xd48(0x28)
	struct FScalableFloat bUseDefaultStencil; // 0xd70(0x28)
	struct FScalableFloat IndicatorStepTime; // 0xd98(0x28)
	struct FGameplayTagQuery NPCGameplayTagQuery; // 0xdc0(0x48)
	struct FIndicatedActorData IndicatedActorDataPlayers; // 0xe08(0xd8)
	struct FStenciledActorData StenciledActorDataPlayers; // 0xee0(0x80)

	struct TArray<struct AFortPlayerStateAthena*> GetTeamMembers(struct APawn* Target, bool bIncludeSelf); // Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.GetTeamMembers // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void GAB_InterrogatePlayer_Reveal_AutoGenFunc(struct AActor* IndicatedActor); // Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.GAB_InterrogatePlayer_Reveal_AutoGenFunc // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ToggleReticleVisibility(bool Hide); // Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.ToggleReticleVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Reveal(); // Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.Reveal // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void EndAbilityCleanup(); // Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.EndAbilityCleanup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void InitAbility(); // Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.InitAbility // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Completed_23F3C2DB411862D627ACFCA8233F7B33(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.Completed_23F3C2DB411862D627ACFCA8233F7B33 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Cancelled_23F3C2DB411862D627ACFCA8233F7B33(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.Cancelled_23F3C2DB411862D627ACFCA8233F7B33 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Triggered_23F3C2DB411862D627ACFCA8233F7B33(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.Triggered_23F3C2DB411862D627ACFCA8233F7B33 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Completed_3C2C8C224B62B00BDEEAF5AF38A401C1(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.Completed_3C2C8C224B62B00BDEEAF5AF38A401C1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Cancelled_3C2C8C224B62B00BDEEAF5AF38A401C1(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.Cancelled_3C2C8C224B62B00BDEEAF5AF38A401C1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Triggered_3C2C8C224B62B00BDEEAF5AF38A401C1(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.Triggered_3C2C8C224B62B00BDEEAF5AF38A401C1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnFinish_68B3C6D14B44CCD3170ABDA038C1203E(); // Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.OnFinish_68B3C6D14B44CCD3170ABDA038C1203E // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void K2_OnEndAbility(bool bWasCancelled); // Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void (struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C. // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void EndInterrogation(); // Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.EndInterrogation // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GAB_InterrogatePlayer_Reveal(int32_t EntryPoint); // Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.ExecuteUbergraph_GAB_InterrogatePlayer_Reveal // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

