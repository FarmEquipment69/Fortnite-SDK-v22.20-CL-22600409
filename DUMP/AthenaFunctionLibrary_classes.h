// BlueprintGeneratedClass AthenaFunctionLibrary.AthenaFunctionLibrary_C
// Size: 0x28 (Inherited: 0x28)
struct UAthenaFunctionLibrary_C : UBlueprintFunctionLibrary {

	void SpawnLootFromArray(struct TArray<struct FFortItemEntry>& Array, struct FVector Position, struct FVector Direction, int32_t OverrideMaxStackCount, bool bToss, bool bRandomRotation, bool bBlockedFromAutoPickup, int32_t PickupInstigatorHandle, enum class EFortPickupSourceTypeFlag SourceType, enum class EFortPickupSpawnSource Source, struct AFortPlayerController* OptionalOwnerPC, bool bPickupOnlyRelevantToOwner, struct UObject* __WorldContext, struct TArray<struct AFortPickup*>& ItemPickupsSpawned); // Function AthenaFunctionLibrary.AthenaFunctionLibrary_C.SpawnLootFromArray // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetPOITextWithContextTag(struct FGameplayTag POI_Tag, struct FGameplayTagContainer Context_Tags, struct UObject* __WorldContext); // Function AthenaFunctionLibrary.AthenaFunctionLibrary_C.SetPOITextWithContextTag // (Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void GetPlayerGroundedZ(struct AFortPlayerPawn* PlayerPawn, struct UObject* __WorldContext, double& Ground Z); // Function AthenaFunctionLibrary.AthenaFunctionLibrary_C.GetPlayerGroundedZ // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	bool ShouldAllowDeathEffects(struct FGameplayTagContainer Damage Or Death Tags, struct UObject* __WorldContext); // Function AthenaFunctionLibrary.AthenaFunctionLibrary_C.ShouldAllowDeathEffects // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void GetActorMeshExtents(struct AActor* Actor, struct UObject* __WorldContext, struct FVector& BoundingBoxExtents); // Function AthenaFunctionLibrary.AthenaFunctionLibrary_C.GetActorMeshExtents // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UnclampedLerp(double A, double B, double Alpha, struct UObject* __WorldContext, double& Return Value); // Function AthenaFunctionLibrary.AthenaFunctionLibrary_C.UnclampedLerp // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	struct FGameplayEffectContextHandle MakeSimpleFortEffectContext(struct AActor* Instigator, struct AActor* Damage Source, struct UObject* __WorldContext); // Function AthenaFunctionLibrary.AthenaFunctionLibrary_C.MakeSimpleFortEffectContext // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void SpawnLootFromTable(struct FName TierGroupName, int32_t WorldLevel, int32_t ForcedLootTier, struct FVector Position, struct FVector Direction, int32_t OverrideMaxStackCount, bool bToss, bool bRandomRotation, bool bBlockedFromAutoPickup, int32_t PickupInstigatorHandle, enum class EFortPickupSourceTypeFlag SourceType, enum class EFortPickupSpawnSource Source, struct AFortPlayerController* OptionalOwnerPC, bool bPickupOnlyRelevantToOwner, struct UObject* __WorldContext, struct TArray<struct AFortPickup*>& ItemPickupsSpawned); // Function AthenaFunctionLibrary.AthenaFunctionLibrary_C.SpawnLootFromTable // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	bool RowToBool(struct FScalableFloat& Input, double Level, struct UObject* __WorldContext); // Function AthenaFunctionLibrary.AthenaFunctionLibrary_C.RowToBool // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void AllOnSameTeam(struct AActor* Actor, struct TArray<struct AActor*>& ActorArray, struct UObject* __WorldContext, bool& Result); // Function AthenaFunctionLibrary.AthenaFunctionLibrary_C.AllOnSameTeam // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void CreateEnvironmentalKnockbackExplosion(struct FVector ExplosionSourcePoint, double ExplosionRadius, double Intensity, double MinKnockbackAngle, bool Reverse, struct AActor* SpecificActor, struct UObject* __WorldContext); // Function AthenaFunctionLibrary.AthenaFunctionLibrary_C.CreateEnvironmentalKnockbackExplosion // (Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

