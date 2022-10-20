// BlueprintGeneratedClass NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C
// Size: 0x3ac8 (Inherited: 0x3970)
struct ANPC_Pawn_Wildlife_Parent_C : ANPC_Pawn_Parent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3970(0x08)
	struct UNiagaraComponent* Wildlife_FootDust; // 0x3978(0x08)
	struct UFortPawnComponent_Convert* ConvertComponent; // 0x3980(0x08)
	struct TSoftClassPtr<UObject> Layer Idle; // 0x3988(0x28)
	struct TSoftClassPtr<UObject> Layer Locomotion; // 0x39b0(0x28)
	struct TSoftClassPtr<UObject> Layer Jump; // 0x39d8(0x28)
	char LeaderTeam; // 0x3a00(0x01)
	char pad_3A01[0x7]; // 0x3a01(0x07)
	struct USoundEffectSourcePresetChain* VocalSourceEffectChainOverride; // 0x3a08(0x08)
	bool bTamingEnabled; // 0x3a10(0x01)
	char pad_3A11[0x7]; // 0x3a11(0x07)
	struct FMulticastInlineDelegate OnPickupGrabbed_Destroyed; // 0x3a18(0x10)
	bool bCanBeInteractedWithWhileTamed; // 0x3a28(0x01)
	char pad_3A29[0x3]; // 0x3a29(0x03)
	struct FActiveGameplayEffectHandle GE_Quest_Converted_Handle; // 0x3a2c(0x08)
	char pad_3A34[0x4]; // 0x3a34(0x04)
	struct UGameplayEffect* GE_Quest_Converted_Irwin; // 0x3a38(0x08)
	struct FMulticastInlineDelegate ConvertedDispatcher; // 0x3a40(0x10)
	bool bIsBeingRidden; // 0x3a50(0x01)
	bool NPCStatusWidgetShouldDisplayDamage; // 0x3a51(0x01)
	char pad_3A52[0x6]; // 0x3a52(0x06)
	struct UGameplayEffect* GE_GoalSelectionWhileTamed; // 0x3a58(0x08)
	struct FGameplayTagContainer T_GoalSelectionWhileTamed; // 0x3a60(0x20)
	double CurrentEnergy; // 0x3a80(0x08)
	struct FGameplayTag IrwinSlidingGC; // 0x3a88(0x04)
	bool bLeaderSetSuccess; // 0x3a8c(0x01)
	char pad_3A8D[0x3]; // 0x3a8d(0x03)
	struct FGameplayTag JumpLandSoundLibTag; // 0x3a90(0x04)
	struct FGameplayTag TameSoundLibTag; // 0x3a94(0x04)
	struct USoundBase* SoundIndicatorSound_Unridden; // 0x3a98(0x08)
	struct USoundBase* SoundIndicatorSound_Ridden; // 0x3aa0(0x08)
	bool OverrideIncomingDmg; // 0x3aa8(0x01)
	char pad_3AA9[0x7]; // 0x3aa9(0x07)
	double OverridenIncomingDmgAmount; // 0x3ab0(0x08)
	struct FMulticastInlineDelegate OnModifiedDamageReceived; // 0x3ab8(0x10)

	void PlayStateChangeAudio(enum class Enum_NPC_AlertLevel Index); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.PlayStateChangeAudio // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PlayAdditiveHitReacts(struct FVector& Hit Direction, struct UAnimMontage* Anim Montage); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.PlayAdditiveHitReacts // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	float BlueprintModifyIncomingDamage(float Damage, struct FGameplayTagContainer& DamageTags, struct FGameplayEffectContextHandle& EffectContext, struct AController* EventInstigator, struct AActor* DamageCauser); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.BlueprintModifyIncomingDamage // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void NPCStatusWidget_UpdateKeepVisible(bool ShouldKeepVisible); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.NPCStatusWidget_UpdateKeepVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void CanBeInteractedWithWhenTamed(bool& bCanInteract); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.CanBeInteractedWithWhenTamed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void NPC PickupGrabbed_Destroyed(struct AActor* ActorGrabbed); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.NPC PickupGrabbed_Destroyed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetTamingEnabled(bool EnableTaming); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.SetTamingEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void NPC CanBeInteractedWith(bool& CanInteract); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.NPC CanBeInteractedWith // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void AttachAndApplyVocalFX(struct FSoundLibraryPlaySoundResult& SoundLibraryResult); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.AttachAndApplyVocalFX // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Play Water Splash at Water Surface(struct AFortWaterBodyActor* Water Body, bool Enter Water); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.Play Water Splash at Water Surface // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	bool IsValidAutoFireTarget(struct AActor* Attacker); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.IsValidAutoFireTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xd67374
	void Play Sound Lib(struct FGameplayTag Event Name); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.Play Sound Lib // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateTamingIndicator(); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.UpdateTamingIndicator // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnRep_LeaderTeam(); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnRep_LeaderTeam // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnLoaded_9DC5FDA543FAF13BB29E95AA78B28A06(struct UObject* Loaded); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnLoaded_9DC5FDA543FAF13BB29E95AA78B28A06 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ReceiveBeginPlay(); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void LinkAnimationLayers(); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.LinkAnimationLayers // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void AsyncLinkAnimationLayer(struct TSoftClassPtr<UObject> AnimationLayer); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.AsyncLinkAnimationLayer // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnCustomizationsLoaded_BP(); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnCustomizationsLoaded_BP // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void On NPC PawnInteractedWith(struct AActor* AIPawn, struct AFortPlayerPawn* InteractingPlayerPawn); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.On NPC PawnInteractedWith // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BndEvt__ConvertComponent_K2Node_ComponentBoundEvent_0_ConvertedEvent__DelegateSignature(struct AFortPawn* InstigatorPawn, struct AFortPawn* ConvertedPawn); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.BndEvt__ConvertComponent_K2Node_ComponentBoundEvent_0_ConvertedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__ConvertComponent_K2Node_ComponentBoundEvent_1_UnconvertedEvent__DelegateSignature(struct AFortPawn* UnconvertedPawn, enum class EUnconvertReason UnconvertReason); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.BndEvt__ConvertComponent_K2Node_ComponentBoundEvent_1_UnconvertedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void NPC AlertLevelChangedServer(enum class Enum_NPC_AlertLevel NPCAlertLevel); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.NPC AlertLevelChangedServer // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnDeathServer(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnDeathServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void NPC LeaderSet(bool Success?, struct AActor* Leader, enum class EUnconvertReason UnconvertReason); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.NPC LeaderSet // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BndEvt__SoundLibrary_Component_K2Node_ComponentBoundEvent_2_OnSoundLibraryPlayEvent__DelegateSignature(struct FSoundLibraryPlaySoundResult& Results, struct USoundLibraryContext* Context); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.BndEvt__SoundLibrary_Component_K2Node_ComponentBoundEvent_2_OnSoundLibraryPlayEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnBeingControlledChanged(bool bControlled); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnBeingControlledChanged // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnApplyEffectOptimization(int32_t NewBudgetValue); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnApplyEffectOptimization // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnDamagePlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AFortPawn* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnDamagePlayEffects // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void NPC SetupHealthBarOnDeath(); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.NPC SetupHealthBarOnDeath // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void (); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C. // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void On Pawn Focused(struct AFortPawn* FocusedPawn); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.On Pawn Focused // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HideStatus(); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.HideStatus // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnSlidingStateChanged(bool bNewSlidingState); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnSlidingStateChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AFortPawn* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnDeathPlayEffects // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnLanded(struct FHitResult& Hit); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnLanded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnLandedMulticast(); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnLandedMulticast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnTamedMulticast(); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnTamedMulticast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_NPC_Pawn_Wildlife_Parent(int32_t EntryPoint); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.ExecuteUbergraph_NPC_Pawn_Wildlife_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
	void OnModifiedDamageReceived__DelegateSignature(); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnModifiedDamageReceived__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ConvertedDispatcher__DelegateSignature(bool Converted, struct AFortPawn* InstigatorPawn); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.ConvertedDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnPickupGrabbed_Destroyed__DelegateSignature(struct ANPC_Pawn_Wildlife_Parent_C* WildlifePawn, struct AActor* ActorGrabbed); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnPickupGrabbed_Destroyed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

