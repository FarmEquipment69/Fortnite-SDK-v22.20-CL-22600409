// BlueprintGeneratedClass GA_NPC_Parent.GA_NPC_Parent_C
// Size: 0xe58 (Inherited: 0xb20)
struct UGA_NPC_Parent_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct AFortAIPawn* NPC ActivatingFortAIPawn; // 0xb28(0x08)
	enum class EFortMovementUrgency NPC InitialMovementUrgency; // 0xb30(0x01)
	bool NPC DebugAbility; // 0xb31(0x01)
	char pad_B32[0x6]; // 0xb32(0x06)
	struct FGameplayTagContainer NPC IgnoreDamageAndOnlyDoKnockbackIfTheseAbilitiesAreActive; // 0xb38(0x20)
	bool NPC DebugFreezeFrameEnabled; // 0xb58(0x01)
	bool NPC DebugFreezeFrameOnlyWhenAbilityTargetHit; // 0xb59(0x01)
	bool NPC DebugFreezeFrameOnlyWhenWeHaveSomeTarget; // 0xb5a(0x01)
	bool NPC DamageHitAbilityTargetDuringThisAbilityActivation; // 0xb5b(0x01)
	char pad_B5C[0x4]; // 0xb5c(0x04)
	struct TArray<struct AActor*> NPC DamageActorsWeHaveHitDuringThisAbilityActivation; // 0xb60(0x10)
	double NPC CanActivateAbility MaxTargetZDistanceBelow; // 0xb70(0x08)
	double NPC CanActivateAbility MaxTargetZDistanceAbove; // 0xb78(0x08)
	double NPC CanActivateAbility MaxTargetZDistanceAbove ForIntentionalFailedAttack; // 0xb80(0x08)
	struct TArray<struct AActor*> BuildingTargetingHitActors; // 0xb88(0x10)
	struct FGameplayTagContainer TC_NPC_FrustrationTagsToClearForGoals; // 0xb98(0x20)
	enum class Enum_NPC_AlertLevel NPC AlertLevelGoalIsFortPawn; // 0xbb8(0x01)
	enum class Enum_NPC_AlertLevel NPC AlertLevelGoalIsOther; // 0xbb9(0x01)
	enum class Enum_NPC_AlertLevel NPC AlertLevelGoalIsNotValid; // 0xbba(0x01)
	char pad_BBB[0x5]; // 0xbbb(0x05)
	struct FScalableFloat NPC DamageKnockbackVelocityHF; // 0xbc0(0x28)
	struct FScalableFloat NPC DamageKnockbackVerticalAngleHF; // 0xbe8(0x28)
	struct FScalableFloat NPC DamageKnockbackMinimumYawValueHF; // 0xc10(0x28)
	struct FScalableFloat NPC DamageCanAttackDBNOPlayersHF; // 0xc38(0x28)
	struct FScalableFloat NPC DamageKnockbackVelocityVehicleHF; // 0xc60(0x28)
	struct FScalableFloat NPC DamageKnockbackVerticalAngleVehicleHF; // 0xc88(0x28)
	struct FScalableFloat NPC DamageKnockbackMinimumYawValueVehicleHF; // 0xcb0(0x28)
	struct FScalableFloat NPC DamageChanceToEjectFromVehicleHF; // 0xcd8(0x28)
	struct FGameplayTag DestroyBuildingGC; // 0xd00(0x04)
	char pad_D04[0x4]; // 0xd04(0x04)
	struct UGameplayEffect* DestroyBuildingGE; // 0xd08(0x08)
	struct FGameplayTagContainer TC_NPC_FrustrationTagsToClearForMovement; // 0xd10(0x20)
	struct FGameplayTag TC_NPC_FrustrationBuildDueToGoal; // 0xd30(0x04)
	struct FGameplayTag TC_NPC_FrustrationBuildDueToMovement; // 0xd34(0x04)
	struct FGameplayTagQuery TQ_NPC_RequirementsToBuildFrustrationDueToGoal; // 0xd38(0x48)
	struct FGameplayTagQuery TQ_NPC_RequirementsToBuildFrustrationDueToMovement; // 0xd80(0x48)
	struct FScalableFloat NPC BodyBumpBuildingsWhenBuildingMovementFrustrationHF; // 0xdc8(0x28)
	struct FScalableFloat NPC_FrustrationBodyBumpOnlyDestroyPlayerBuildingsHF; // 0xdf0(0x28)
	struct FGameplayTag TC_NPC_EffectContainer_BodyBumpBuildingsWhenBuildingMovementFrustration; // 0xe18(0x04)
	char pad_E1C[0x4]; // 0xe1c(0x04)
	struct FGameplayAbilityTargetDataHandle BuildingTargetingTargetData; // 0xe20(0x28)
	struct FGameplayTag BuildingTargetingApplicationTag; // 0xe48(0x04)
	struct FGameplayTag TC_BuildingTypePlayer; // 0xe4c(0x04)
	struct UGameplayEffect* GE_NPC_MMR_Scaling_AbilityCooldown; // 0xe50(0x08)

	void NPC ResetRotationRate(); // Function GA_NPC_Parent.GA_NPC_Parent_C.NPC ResetRotationRate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void NPC OverrideRotationRate(struct FScalableFloat RotationRate); // Function GA_NPC_Parent.GA_NPC_Parent_C.NPC OverrideRotationRate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	struct UObject* NPC GetGoalActor(); // Function GA_NPC_Parent.GA_NPC_Parent_C.NPC GetGoalActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void NPC AbilityTargetIsBuildingWeAreDestroyingToNavigate(bool& IsNavigationBuildingWeAreDestroying, struct ABuildingActor*& BuildingWeAreDestroying, double& HealthOfBuildingWeAreDestroying); // Function GA_NPC_Parent.GA_NPC_Parent_C.NPC AbilityTargetIsBuildingWeAreDestroyingToNavigate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void NPC ApplyGameplayEffectWithMMRScaling(struct UGameplayEffect* GameplayEffectClass, struct AActor* Actor); // Function GA_NPC_Parent.GA_NPC_Parent_C.NPC ApplyGameplayEffectWithMMRScaling // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void NPC ApplyGameplayAbilityCooldownWithMMRScaling(); // Function GA_NPC_Parent.GA_NPC_Parent_C.NPC ApplyGameplayAbilityCooldownWithMMRScaling // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void NPC ScalableFloatIsValid(struct FScalableFloat& ScalableFloat, bool& Valid); // Function GA_NPC_Parent.GA_NPC_Parent_C.NPC ScalableFloatIsValid // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void NPC GetScalableFloatHotfixValue(struct FScalableFloat ScalableFloatHotfix, double AtLevel, bool& AsBool, int32_t& AsIntRounded, double& AsFloat); // Function GA_NPC_Parent.GA_NPC_Parent_C.NPC GetScalableFloatHotfixValue // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void NPC SetAlertLevelByAIAbilityTargetType(); // Function GA_NPC_Parent.GA_NPC_Parent_C.NPC SetAlertLevelByAIAbilityTargetType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void NPC SetAlertLevel(enum class Enum_NPC_AlertLevel NPC_AlertLevel); // Function GA_NPC_Parent.GA_NPC_Parent_C.NPC SetAlertLevel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void NPC DoIntentionalFailedAttack(bool& DoIntentionalFailedAttack); // Function GA_NPC_Parent.GA_NPC_Parent_C.NPC DoIntentionalFailedAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void NPC AttemptBuildFrustrationDueToMovement(struct FString Reason); // Function GA_NPC_Parent.GA_NPC_Parent_C.NPC AttemptBuildFrustrationDueToMovement // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void NPC AttemptBuildFrustrationDueToGoal(struct FString Reason); // Function GA_NPC_Parent.GA_NPC_Parent_C.NPC AttemptBuildFrustrationDueToGoal // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void NPC ClearFrustrationTagsForMovement(struct FString Reason); // Function GA_NPC_Parent.GA_NPC_Parent_C.NPC ClearFrustrationTagsForMovement // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void NPC ClearFrustrationTagsForGoals(struct FString Reason); // Function GA_NPC_Parent.GA_NPC_Parent_C.NPC ClearFrustrationTagsForGoals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void DestroyBuilding(struct AActor* BuildingActor); // Function GA_NPC_Parent.GA_NPC_Parent_C.DestroyBuilding // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void NPC GenerateLaunchVelocityWithMinimumAngle(struct AActor* ActorWeWantToLaunch, bool Vehicle, struct FVector& LaunchVelocity, struct AActor*& LaunchActor, bool& LaunchingVehicle); // Function GA_NPC_Parent.GA_NPC_Parent_C.NPC GenerateLaunchVelocityWithMinimumAngle // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	bool K2_CanActivateAbility(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayAbilitySpecHandle Handle, struct FGameplayTagContainer& RelevantTags); // Function GA_NPC_Parent.GA_NPC_Parent_C.K2_CanActivateAbility // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xd67374
	void NPC TryResetMovementUrgency(); // Function GA_NPC_Parent.GA_NPC_Parent_C.NPC TryResetMovementUrgency // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void NPC TrySetMovementUrgency(enum class EFortMovementUrgency MovementUrgency, bool TryResetUrgencyIfInvalid); // Function GA_NPC_Parent.GA_NPC_Parent_C.NPC TrySetMovementUrgency // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void NPC EQS Results(struct UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus, enum class EEnvQueryRunMode EQS RunMode, bool NumReturnedItemsIsImportant, struct TArray<struct AActor*>& ResultActors, int32_t& NumValidActorsGenerated, bool& ResultActorsSuccess, struct TArray<struct FVector>& ResultLocations, int32_t& NumValidLocationsGenerated, bool& ResultLocationsSuccess, struct UEnvQueryInstanceBlueprintWrapper*& QueryInstanceOut, enum class EEnvQueryStatus& QueryStatusOut); // Function GA_NPC_Parent.GA_NPC_Parent_C.NPC EQS Results // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void NPC DebugFreezeFrame(bool ForceDebugFreezeFrame, bool HitAbilityTargetRightNow, bool HitAbilityTargetDuringThisAbilityActivation, struct TArray<struct AActor*>& ActorsWeHaveHitDuringThisAbilityActivation, struct TArray<struct AActor*>& ActorsHitWithThisSpecificTargetSelection); // Function GA_NPC_Parent.GA_NPC_Parent_C.NPC DebugFreezeFrame // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void NPC ApplyGameplayEffectContainerAndLaunchTargets(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag, int32_t GameplayEffectLevel, bool AbilityTargetCanBeHitMultipleTimesByThisSelection, bool ForceDebugFreezeFrameForThisSpecificTargeting, bool& HitAbilityTargetRightNow, bool& HitAbilityTargetDuringThisAbilityActivation, struct TArray<struct AActor*>& ActorsWeHaveHitDuringThisAbilityActivation, struct TArray<struct AActor*>& ActorsHitWithThisSpecificTargetSelection); // Function GA_NPC_Parent.GA_NPC_Parent_C.NPC ApplyGameplayEffectContainerAndLaunchTargets // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void NPC AbilityTargetIsWithinAngleThreshold(double AngleThreshold, bool& IsWithinAngle); // Function GA_NPC_Parent.GA_NPC_Parent_C.NPC AbilityTargetIsWithinAngleThreshold // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void NPC IsMontageInfoValid(struct FFortGameplayAbilityMontageInfo MontageInfo, bool& IsValid?); // Function GA_NPC_Parent.GA_NPC_Parent_C.NPC IsMontageInfoValid // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void NPC AbilityDebugMessage(struct FString String, bool OnlyWhenDebug); // Function GA_NPC_Parent.GA_NPC_Parent_C.NPC AbilityDebugMessage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void NPC SetupAbility(); // Function GA_NPC_Parent.GA_NPC_Parent_C.NPC SetupAbility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Cancelled_4BB5000E4F2C1DAB20E4FFAAA97E1368(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_NPC_Parent.GA_NPC_Parent_C.Cancelled_4BB5000E4F2C1DAB20E4FFAAA97E1368 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Targeted_4BB5000E4F2C1DAB20E4FFAAA97E1368(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_NPC_Parent.GA_NPC_Parent_C.Targeted_4BB5000E4F2C1DAB20E4FFAAA97E1368 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Cancelled_13B12ED64A3570FC1E117FAC4E3F7961(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_NPC_Parent.GA_NPC_Parent_C.Cancelled_13B12ED64A3570FC1E117FAC4E3F7961 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Targeted_13B12ED64A3570FC1E117FAC4E3F7961(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_NPC_Parent.GA_NPC_Parent_C.Targeted_13B12ED64A3570FC1E117FAC4E3F7961 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BeginDestroyBuildings(struct FGameplayTag TargetSelectionApplicationTag, bool DoContinuousTargetSelection); // Function GA_NPC_Parent.GA_NPC_Parent_C.BeginDestroyBuildings // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GA_NPC_Parent(int32_t EntryPoint); // Function GA_NPC_Parent.GA_NPC_Parent_C.ExecuteUbergraph_GA_NPC_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

