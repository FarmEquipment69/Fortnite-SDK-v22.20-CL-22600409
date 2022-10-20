// BlueprintGeneratedClass NPC_Pawn_Parent.NPC_Pawn_Parent_C
// Size: 0x3970 (Inherited: 0x31d0)
struct ANPC_Pawn_Parent_C : AFortAIPawn {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x31d0(0x08)
	struct UFortPawnComponent_CustomDepth* FortPawnComponent_CustomDepth; // 0x31d8(0x08)
	struct UCapsuleComponent* WeaponCapsuleCollision; // 0x31e0(0x08)
	struct UFortTaggedNavFiltersComponent* FortTaggedNavFilters; // 0x31e8(0x08)
	struct UFortActorComponent_Affiliation* FortActorComponent_Affiliation; // 0x31f0(0x08)
	struct USoundLibraryComponent* SoundLibrary_Component; // 0x31f8(0x08)
	struct UAudioComponent* MovementAudioComponent; // 0x3200(0x08)
	struct UNPC_VoiceComponent_C* NPC_VoiceComponent; // 0x3208(0x08)
	struct UAudioComponent* VOAudioComponent; // 0x3210(0x08)
	struct UFortWidgetComponent* NPCStatusWidget; // 0x3218(0x08)
	float Timeline_ScaleMeshInOrOut_MeshScaleAlpha_9DAAC0B243D26E4160CEC3A458AE0E86; // 0x3220(0x04)
	enum class ETimelineDirection Timeline_ScaleMeshInOrOut__Direction_9DAAC0B243D26E4160CEC3A458AE0E86; // 0x3224(0x01)
	char pad_3225[0x3]; // 0x3225(0x03)
	struct UTimelineComponent* Timeline_ScaleMeshInOrOut; // 0x3228(0x08)
	struct UGameplayEffect* GE_NPC_RecentlyDamaged; // 0x3230(0x08)
	enum class Enum_NPC_AlertLevel NPC_AlertLevel; // 0x3238(0x01)
	enum class Enum_NPC_AlertLevel NPC_AlertLevelPrevious; // 0x3239(0x01)
	char pad_323A[0x6]; // 0x323a(0x06)
	struct TMap<enum class Enum_NPC_AlertLevel, struct FGameplayTag> NPC AlertLevelToTagMap; // 0x3240(0x50)
	bool NPC StatusWidgetHealthBarDisabled; // 0x3290(0x01)
	char pad_3291[0x3]; // 0x3291(0x03)
	struct FGameplayTag GameplayCue_PickupGrabbed; // 0x3294(0x04)
	enum class EFortRarity NPC BestLootRarityInInventory; // 0x3298(0x01)
	bool NPC DebugPawn; // 0x3299(0x01)
	bool NPC ShowInventoryRarityVisuals; // 0x329a(0x01)
	char pad_329B[0x5]; // 0x329b(0x05)
	double InventoryGlowDelay; // 0x32a0(0x08)
	struct FScalableFloat NPC NumberOfInventoryItemsToDeliverHF; // 0x32a8(0x28)
	bool NPC SpawnInvisible; // 0x32d0(0x01)
	bool NPC ScaleMeshInOnSpawn; // 0x32d1(0x01)
	char pad_32D2[0x6]; // 0x32d2(0x06)
	struct FGameplayTagContainer TC_NPC SpawnAbilityTag; // 0x32d8(0x20)
	struct FGameplayTagContainer TC_NPC AlternateSpawnAbilityTag; // 0x32f8(0x20)
	bool NPC IsSpawning; // 0x3318(0x01)
	char pad_3319[0x7]; // 0x3319(0x07)
	double NPC OriginalGravityScale; // 0x3320(0x08)
	struct FRotator NPC OriginalRotationRate; // 0x3328(0x18)
	bool NPC HasPawnGoal; // 0x3340(0x01)
	char pad_3341[0x7]; // 0x3341(0x07)
	struct AActor* NPC PawnGoalActor; // 0x3348(0x08)
	struct FScalableFloat NPC NumberOfInventoryItemsToConsumeBeforeFullHF; // 0x3350(0x28)
	bool NPC PawnIsDestroyingBuildingForNavigation; // 0x3378(0x01)
	char pad_3379[0x7]; // 0x3379(0x07)
	struct FScalableFloat MaxIdleVODelay; // 0x3380(0x28)
	struct FScalableFloat MinIdleVODelay; // 0x33a8(0x28)
	struct FScalableFloat NPC DeathDropLootDelay; // 0x33d0(0x28)
	struct FName NPC DeathDropLootTierGroupName; // 0x33f8(0x04)
	char pad_33FC[0x4]; // 0x33fc(0x04)
	struct FGameplayTagContainer NPC DeathDropLootRequiredDamageTags; // 0x3400(0x20)
	struct FGameplayTagContainer NPC DeathDropLootForbiddenDamageTags; // 0x3420(0x20)
	struct FGameplayTagContainer GrantStartingItemsAbilityTC; // 0x3440(0x20)
	bool NPC HasItemInInventory; // 0x3460(0x01)
	char pad_3461[0x3]; // 0x3461(0x03)
	struct FGameplayTag VoiceTag_FullAlertIdle; // 0x3464(0x04)
	struct FGameplayTag VoiceTag_Idle; // 0x3468(0x04)
	struct FGameplayTag VoiceTag_ReturnToIdle; // 0x346c(0x04)
	struct FGameplayTag VoiceTag_LostTarget; // 0x3470(0x04)
	struct FGameplayTag VoiceTag_Suspicious; // 0x3474(0x04)
	struct FGameplayTag VoiceTag_FullAlert; // 0x3478(0x04)
	char pad_347C[0x4]; // 0x347c(0x04)
	struct TArray<struct FStruct_NPC_TargetSlots> NPC TargetSlotsHF; // 0x3480(0x10)
	bool NPC DamageCanCancelIntroPhase; // 0x3490(0x01)
	char pad_3491[0x7]; // 0x3491(0x07)
	struct FGameplayTagQuery TQ_NPC DamageTagsThatCanCancelIntroPhase; // 0x3498(0x48)
	struct UGameplayEffect* GE_NPC_IntroPhaseBehaviorCooldown; // 0x34e0(0x08)
	struct FGameplayTagContainer TC_IntroBehaviorActive; // 0x34e8(0x20)
	bool Debug_NPC_AlertLevelForced; // 0x3508(0x01)
	bool NPC PawnCanInteractInternal; // 0x3509(0x01)
	char pad_350A[0x6]; // 0x350a(0x06)
	struct FScalableFloat NPC PrimtiveDataFloatSetRandomlyInRange; // 0x3510(0x28)
	struct FScalableFloat NPC PrimtiveDataFloatIndexHF; // 0x3538(0x28)
	struct FScalableFloat NPC PrimtiveDataFloatMinRangeHF; // 0x3560(0x28)
	struct FScalableFloat NPC PrimtiveDataFloatMaxRangeHF; // 0x3588(0x28)
	struct AActor* NPC Leader; // 0x35b0(0x08)
	struct FGameplayTag GameplayCue_LeaderSet; // 0x35b8(0x04)
	char pad_35BC[0x4]; // 0x35bc(0x04)
	double NPC Skeletal Mesh Index; // 0x35c0(0x08)
	struct USoundBase* TamedSound; // 0x35c8(0x08)
	struct UAudioComponent* StateChangeSound; // 0x35d0(0x08)
	struct FScalableFloat NPC ShouldDespawnFromStormHF; // 0x35d8(0x28)
	struct FScalableFloat NPC DespawnTimerHF; // 0x3600(0x28)
	struct FGameplayTag NPC DespawnGameplayTag; // 0x3628(0x04)
	char pad_362C[0x4]; // 0x362c(0x04)
	struct FTimerHandle NPC TestIsInSafeZoneTimer; // 0x3630(0x08)
	struct FTimerHandle NPC DespawnFromStormTimer; // 0x3638(0x08)
	bool NPC isTryingToDespawn; // 0x3640(0x01)
	char pad_3641[0x3]; // 0x3641(0x03)
	struct FGameplayTag NPC ResetIntroGameplayTags; // 0x3644(0x04)
	double SelectedPrimitiveDataFloat; // 0x3648(0x08)
	struct FGameplayTag GameplayCue_Death; // 0x3650(0x04)
	char pad_3654[0x4]; // 0x3654(0x04)
	struct TArray<struct UMaterialInterface*> OG Materials; // 0x3658(0x10)
	bool NPC Apply GE for Swimming; // 0x3668(0x01)
	char pad_3669[0x7]; // 0x3669(0x07)
	struct UGameplayEffect* NPC GE_ClassToApplyForSwimming; // 0x3670(0x08)
	bool Exit Burst GC; // 0x3678(0x01)
	char pad_3679[0x3]; // 0x3679(0x03)
	struct FActiveGameplayEffectHandle NPC GE_AppliedForSwimming; // 0x367c(0x08)
	struct FName GoalActorBBKey; // 0x3684(0x04)
	struct FGameplayTag GameplayCueLureInterest; // 0x3688(0x04)
	char pad_368C[0x4]; // 0x368c(0x04)
	struct UObject* NPC PreviousLureGoal; // 0x3690(0x08)
	struct FGameplayTag Exit Water; // 0x3698(0x04)
	struct FGameplayTag Enter Water; // 0x369c(0x04)
	struct FScalableFloat NPC MaxDistanceFromDamagedNPCToDrawHeallthBarHF; // 0x36a0(0x28)
	struct FScalableFloat NPC HealthBarHideTimeAfterDeathHF; // 0x36c8(0x28)
	struct FScalableFloat NPC PlayEffectWhenLuredHF; // 0x36f0(0x28)
	struct FScalableFloat NPC PawnCanInteractHF; // 0x3718(0x28)
	struct FScalableFloat NPC AllowInteractOnlyWhenUnawareHF; // 0x3740(0x28)
	struct FScalableFloat NPC AllowInteractWhenHasLeaderHF; // 0x3768(0x28)
	struct FScalableFloat NPC AllowDrownInShallowWaterHF; // 0x3790(0x28)
	bool NPC_IsInventoryInitialized; // 0x37b8(0x01)
	char pad_37B9[0x3]; // 0x37b9(0x03)
	float LeaderClearedCueDelay; // 0x37bc(0x04)
	struct FGameplayTag GameplayCue_LeaderCleared; // 0x37c0(0x04)
	bool isGCForLeaderSetLooping; // 0x37c4(0x01)
	char pad_37C5[0x3]; // 0x37c5(0x03)
	struct FGameplayTag NPC DeathByStormTag; // 0x37c8(0x04)
	bool NPC TryDespawnAbility; // 0x37cc(0x01)
	char pad_37CD[0x3]; // 0x37cd(0x03)
	struct FActiveGameplayEffectHandle GeOutsideSafeZoneDamageHandle; // 0x37d0(0x08)
	bool IsGEStormDamageInit; // 0x37d8(0x01)
	bool NPC MeshScalingInProgress; // 0x37d9(0x01)
	bool NPC DisableCapsuleOverlapsWhenScalingOut; // 0x37da(0x01)
	char pad_37DB[0x5]; // 0x37db(0x05)
	struct FVector NPC OriginalMeshScale; // 0x37e0(0x18)
	struct FMulticastInlineDelegate NPCScaleMeshInCompleted; // 0x37f8(0x10)
	struct FMulticastInlineDelegate NPCScaleMeshOutCompleted; // 0x3808(0x10)
	bool NPC_CanDropLoot; // 0x3818(0x01)
	char pad_3819[0x7]; // 0x3819(0x07)
	struct FScalableFloat NPC StaleDespawnTestDistance HF; // 0x3820(0x28)
	struct FScalableFloat NPC StaleDespawnTimeThreshold HF; // 0x3848(0x28)
	double NPC LastNonStaleCheckTime; // 0x3870(0x08)
	bool bCanBeDamagedByNullInstigator; // 0x3878(0x01)
	bool IsEnteringWater; // 0x3879(0x01)
	char pad_387A[0x6]; // 0x387a(0x06)
	struct FMulticastInlineDelegate NPCPawnInteractWithDispatcher; // 0x3880(0x10)
	bool NPCDynamicBlockConversionOnInteract; // 0x3890(0x01)
	bool NPC TempInteractOverride; // 0x3891(0x01)
	char pad_3892[0x6]; // 0x3892(0x06)
	struct USoundBase* HeadShot_Sound; // 0x3898(0x08)
	struct FName Headshot FX Socket; // 0x38a0(0x04)
	bool UseHeadShotFX; // 0x38a4(0x01)
	char pad_38A5[0x3]; // 0x38a5(0x03)
	struct FGameplayTagContainer TC_WeaponTypesAllowedForHeadshotFX; // 0x38a8(0x20)
	bool AllowHeadshot; // 0x38c8(0x01)
	char pad_38C9[0x7]; // 0x38c9(0x07)
	double AdditiveHitReactRetriggerDelay; // 0x38d0(0x08)
	struct UAnimMontage* Additive Hit React Montage; // 0x38d8(0x08)
	struct USoundBase* Death Normal Sound; // 0x38e0(0x08)
	struct UParticleSystem* HeadshotFXEmitterTemplate; // 0x38e8(0x08)
	struct TArray<struct USoundLibrary*> SoundLibs_Default; // 0x38f0(0x10)
	struct TArray<struct USoundLibrary*> SoundLibs_Alert; // 0x3900(0x10)
	struct USoundLibrary* CurrentSoundLib; // 0x3910(0x08)
	struct TArray<struct USoundLibrary*> SoundLibs_Aggressive; // 0x3918(0x10)
	struct TArray<struct USoundLibrary*> SoundLibs_Foley; // 0x3928(0x10)
	struct TArray<struct USoundLibrary*> SoundLibs_Foley_Water; // 0x3938(0x10)
	struct USoundLibrary* CurrentFoleyLib; // 0x3948(0x08)
	double Custom Depth Update Rate; // 0x3950(0x08)
	struct USoundLibraryContext* Class; // 0x3958(0x08)
	struct UGameplayEffect* GE_Converted; // 0x3960(0x08)
	struct FActiveGameplayEffectHandle GE_Converted_Handle; // 0x3968(0x08)

	void Orphaned(bool& IsOrphaned, struct AFortPawn*& AttachedPawn); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.Orphaned // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PlayStateChangeAudio(enum class Enum_NPC_AlertLevel Index); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.PlayStateChangeAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void IsConverted(bool& IsConverted); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.IsConverted // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void NPC GhostCollisionSettings(bool NoCollisionForRanged, bool NoCollisionForMelee, bool NoCollisionForProjectiles, bool OnlyOverlapCollisionForPawns); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC GhostCollisionSettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	bool CanUpdateSoundLib(struct TArray<struct USoundLibrary*>& TargetArray); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.CanUpdateSoundLib // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void PlayAdditiveHitReacts(struct FVector& Hit Direction, struct UAnimMontage* Anim Montage); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.PlayAdditiveHitReacts // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void NPC DamageRemovesIdlePhaseTagGE(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC DamageRemovesIdlePhaseTagGE // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void GetSoundFoleyLibrary(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.GetSoundFoleyLibrary // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void NPC CanBeInteractedWith(bool& CanInteract); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC CanBeInteractedWith // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void NPC CheckForDespawnIfStaleToPlayers(struct AFortPlayerPawn* ClosestFortPlayerPawn); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC CheckForDespawnIfStaleToPlayers // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void NPC SetCanDropLoot(bool CanDropLoot); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC SetCanDropLoot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void NPC GetSafeZonePhase(int32_t& SafeZonePhase); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC GetSafeZonePhase // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnRep_NPC Leader(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnRep_NPC Leader // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Play Water Splash at Water Surface(struct AFortWaterBodyActor* Water Body, bool Enter Water); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.Play Water Splash at Water Surface // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ResetMaterialFromDeath(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.ResetMaterialFromDeath // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnRep_SelectedPrimitiveDataFloat(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnRep_SelectedPrimitiveDataFloat // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void CheckSoundLibraryRemoved(struct TArray<struct USoundLibrary*>& Libraries); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.CheckSoundLibraryRemoved // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void CheckSoundLibraryAdded(struct TArray<struct USoundLibrary*>& Libraries); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.CheckSoundLibraryAdded // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateSoundLibrary(enum class Enum_NPC_AlertLevel Alert Level); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.UpdateSoundLibrary // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void NPC ClearOutTargetSlots(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC ClearOutTargetSlots // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void NPC UpdateInteract(bool CanInteract, bool& EnabledInteract); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC UpdateInteract // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void NPC HasLeader?(bool& HasLeader?, struct AActor*& Leader); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC HasLeader? // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void NPC SetLeader(struct AActor* Leader, bool& Success?, struct AActor*& LeaderSet); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC SetLeader // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void NPC AttemptToSetLeader(struct AActor* PossibleLeader, enum class EUnconvertReason UnconvertReason); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC AttemptToSetLeader // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetPrimitiveDataFloat(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.SetPrimitiveDataFloat // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SelectPrimitiveDataFloat(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.SelectPrimitiveDataFloat // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void StoreOriginalGravityAndRotation(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.StoreOriginalGravityAndRotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void NPC DisableIntroPhaseBehavior(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC DisableIntroPhaseBehavior // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void NPC DamageAttemptDisableIntroPhaseBehavior(struct FGameplayTagContainer DamageTags); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC DamageAttemptDisableIntroPhaseBehavior // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void NPC TargetSlotIsUsingOverride(enum class Enum_NPC_TargetSlots TargetSlotType, struct AActor* TargetWeWantToSlotOnto, bool& Override); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC TargetSlotIsUsingOverride // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void NPC TargetSlotInfo(enum class Enum_NPC_TargetSlots TargetSlotType, struct AActor* TargetWeWantToSlotOnto, int32_t& TargetSlotCount, int32_t& TargetSlotMax, int32_t& NPC TargetSlotsRequired, bool& TargetSlotsMaxOrMore, bool& TargetSlotCountIsExactlyMax, bool& NPC IsTargetSlotOwner, bool& NPC HasSpaceToSlotOnTarget, enum class Enum_NPC_TargetSlots& TargetSlotTypeOut, struct UGameplayEffect*& TargetSlotCountingGE, struct FScalableFloat& AI TargetSlotSizeHF, struct FScalableFloat& AI TargetSlotDurationHF, struct UGameplayEffect*& TargetSlotOverrideGE, struct UGameplayEffect*& TargetSlotOwnerGE, struct UGameplayEffect*& TargetSlotCountingMaxedGE); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC TargetSlotInfo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void NPC CheckIsInSafeZone(bool& TestSucceeded, bool& isInSafeZone); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC CheckIsInSafeZone // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void NPC HandleAlertLevelVoice(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC HandleAlertLevelVoice // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void NPC TryToDropLootOnDeath(struct FGameplayTagContainer DamageTags, bool& CanDropLoot); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC TryToDropLootOnDeath // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void NPC ApplyGameplayEffectWithMMRScaling(struct AActor* Actor, struct UGameplayEffect* GE Class); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC ApplyGameplayEffectWithMMRScaling // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void NPC SetLootCollectionPhaseCompleteToBlackboard(bool LootCollectionPhaseComplete); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC SetLootCollectionPhaseCompleteToBlackboard // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void NPC ResetOriginalRotationRate(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC ResetOriginalRotationRate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void NPC ResetOriginalGravityScale(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC ResetOriginalGravityScale // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void NPC SetReturnGatheredLootToBlackboard(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC SetReturnGatheredLootToBlackboard // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void NPC GetScalableFloatHotfixValue(struct FScalableFloat& ScalableFloatHotfix, double AtLevel, bool& AsBool, int32_t& AsIntRounded, double& AsFloat); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC GetScalableFloatHotfixValue // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void NPC ScalableFloatIsValid(struct FScalableFloat& ScalableFloat, bool& Valid); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC ScalableFloatIsValid // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void NPC PickupDropped(struct AFortPickup* FortPickupDropped); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC PickupDropped // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void NPC PickupGrabbed_Destroyed(struct AActor* ActorGrabbed); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC PickupGrabbed_Destroyed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void NPC PickupGrabbed(struct AFortPickup* FortPickupGrabbed); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC PickupGrabbed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnRep_NPC BestLootRarityInInventory(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnRep_NPC BestLootRarityInInventory // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void NPC SendGameplayCuePickupGrabbed(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC SendGameplayCuePickupGrabbed // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void NPC PawnDebugMessage(struct FString String, bool OnlyWhenDebug); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC PawnDebugMessage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void NPC GetInventoryInformation(bool& HasItemInInventory, int32_t& TotalNumberOfInventoryItems, int32_t& LastInventoryItemIndex, bool& HasEnoughItemsToDeliver, bool& ConsumedEnoughItemsToBeConsideredFull); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC GetInventoryInformation // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void NPC SetBestLootRarityInInventory(enum class EFortRarity& NPC BestLootRarityInInventory); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC SetBestLootRarityInInventory // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnRep_NPC_AlertLevel(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnRep_NPC_AlertLevel // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void NPC GetAlertLevelInfo(enum class Enum_NPC_AlertLevel& AlertLevel, struct FGameplayTag& AlertLevelTag, bool& ValidDataFound); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC GetAlertLevelInfo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void NPC ApplyRecentlyDamagedTagGE(struct UGameplayEffect* RecentlyDamagedOverride); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC ApplyRecentlyDamagedTagGE // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	bool ShouldUpdateSkeletalMesh(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.ShouldUpdateSkeletalMesh // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UserConstructionScript(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Timeline_ScaleMeshInOrOut__FinishedFunc(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.Timeline_ScaleMeshInOrOut__FinishedFunc // (BlueprintEvent) // @ game+0xd67374
	void Timeline_ScaleMeshInOrOut__UpdateFunc(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.Timeline_ScaleMeshInOrOut__UpdateFunc // (BlueprintEvent) // @ game+0xd67374
	void TriggerDeathFX(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.TriggerDeathFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnDamageServer(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnDamageServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void ReceiveBeginPlay(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void GrantStartingItems(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.GrantStartingItems // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void WidgetVisibilityChanged(bool bVisible); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.WidgetVisibilityChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void NPC ParentLaunchVehicle(struct AActor* Vehicle, struct FVector Velocity); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC ParentLaunchVehicle // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void TestLoot(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.TestLoot // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AFortPawn* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnDeathPlayEffects // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void NPC SetupHealthBarOnDeath(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC SetupHealthBarOnDeath // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ReceivePossessed(struct AController* NewController); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.ReceivePossessed // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0xd67374
	void RequestUpdateNPCAlertLevel(enum class Enum_NPC_AlertLevel NPC_AlertLevel); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.RequestUpdateNPCAlertLevel // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void NPCAlertLevelChangedClient(enum class Enum_NPC_AlertLevel NPC_AlertLevel); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPCAlertLevelChangedClient // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void NPC InitializeIdleVO(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC InitializeIdleVO // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void TriggerIdleVO(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.TriggerIdleVO // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnDeathServer(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnDeathServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void NPCEnableHealthBars(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPCEnableHealthBars // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void NPCDisableHealthBars(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPCDisableHealthBars // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Debug_AlertLevel_ForceLevel(enum class Enum_NPC_AlertLevel NewNPC_AlertLevel); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.Debug_AlertLevel_ForceLevel // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Debug_AlertLevel_ClearDebug(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.Debug_AlertLevel_ClearDebug // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Debug_ForceAlertLevel_Invalid(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.Debug_ForceAlertLevel_Invalid // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Debug_ForceAlertLevel_Unaware(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.Debug_ForceAlertLevel_Unaware // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Debug_ForceAlertLevel_NA(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.Debug_ForceAlertLevel_NA // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Debug_ForceAlertLevel_Alerted(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.Debug_ForceAlertLevel_Alerted // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Debug_ForceAlertLevel_Aggressive(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.Debug_ForceAlertLevel_Aggressive // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleInteracts(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.HandleInteracts // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void NPC Pawn Interact(struct AFortAIPawn* AI, struct AFortPlayerController* InteractingPlayerController, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC Pawn Interact // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void On NPC PawnInteractedWith(struct AActor* AIPawn, struct AFortPlayerPawn* InteractingPlayerPawn); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.On NPC PawnInteractedWith // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnBeginDeepWaterInteraction(struct FVector WaterSurfaceLocation, float WaterDepth); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnBeginDeepWaterInteraction // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void NPC LeaderSet(bool Success?, struct AActor* Leader, enum class EUnconvertReason UnconvertReason); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC LeaderSet // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void TestIsInSafeZone(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.TestIsInSafeZone // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void TryToDespawnDueToStorm(bool Reset Timer); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.TryToDespawnDueToStorm // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void InitializeTestInSafeZone(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.InitializeTestInSafeZone // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void DespawnDueToStorm(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.DespawnDueToStorm // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void End Music Tracker(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.End Music Tracker // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BeginMusicTracker(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.BeginMusicTracker // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void StopUpdatingHealthBarWidget(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.StopUpdatingHealthBarWidget // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void RemoveSoundSystemLibraries(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.RemoveSoundSystemLibraries // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void AddSoundSystemLibraries(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.AddSoundSystemLibraries // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void InitializeInventory(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.InitializeInventory // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void StartUpdatingHleathBarWidget(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.StartUpdatingHleathBarWidget // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void NPC AlertLevelChangedServer(enum class Enum_NPC_AlertLevel NPCAlertLevel); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC AlertLevelChangedServer // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void (); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C. // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnEnteredWaterBody(struct AFortWaterBodyActor* WaterBody, bool bIsFirstBody); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnEnteredWaterBody // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnExitedWaterBody(struct AFortWaterBodyActor* WaterBody, bool bIsLastBody); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnExitedWaterBody // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnEndDance(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnEndDance // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnBeginDance(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnBeginDance // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void LuredOnServer(enum class Enum_NPC_AlertLevel AlertLevel); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.LuredOnServer // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void LuredInterest(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.LuredInterest // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PlayEnterWaterSplash(struct AFortWaterBodyActor* Water Body); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.PlayEnterWaterSplash // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PlayExitWaterSplash(struct AFortWaterBodyActor* Water Body); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.PlayExitWaterSplash // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void TryWaterInteractionDrown(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.TryWaterInteractionDrown // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void StopTestingIsInSafeZone(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.StopTestingIsInSafeZone // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void NPCScaleMeshIn(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPCScaleMeshIn // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void NPCScaleMeshOut(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPCScaleMeshOut // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void TriggerDespawnAbility(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.TriggerDespawnAbility // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void NPC MulticastGameplayCueDeath(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC MulticastGameplayCueDeath // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateSoundLibFoley(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.UpdateSoundLibFoley // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnDamagePlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AFortPawn* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnDamagePlayEffects // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void AdditiveHitReactDelay(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.AdditiveHitReactDelay // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateCustomDepth(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.UpdateCustomDepth // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_NPC_Pawn_Parent(int32_t EntryPoint); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.ExecuteUbergraph_NPC_Pawn_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
	void NPCPawnInteractWithDispatcher__DelegateSignature(struct AActor* AIPawn, struct AFortPlayerPawn* InteractingPlayerPawn); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPCPawnInteractWithDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void NPCScaleMeshOutCompleted__DelegateSignature(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPCScaleMeshOutCompleted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void NPCScaleMeshInCompleted__DelegateSignature(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPCScaleMeshInCompleted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

