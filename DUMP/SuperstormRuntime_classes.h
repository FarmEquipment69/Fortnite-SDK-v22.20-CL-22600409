// Class SuperstormRuntime.TempestLightningComponent
// Size: 0x418 (Inherited: 0xa0)
struct UTempestLightningComponent : UGameFrameworkComponent {
	struct AFortGameplayEffectDeliveryActor* LightningBoltClass; // 0xa0(0x08)
	struct TArray<struct FTempestLightningBoltEffectContainer> LightningBoltTargetEffectContainers; // 0xa8(0x10)
	struct UTargetingPreset* LightningBoltTargetingPreset; // 0xb8(0x08)
	struct UEnvQuery* FindTargetablePawnsQuery; // 0xc0(0x08)
	struct UEnvQuery* FindTargetableLocationQuery; // 0xc8(0x08)
	struct FName EnvironmentQueryParamName_LightningRadius; // 0xd0(0x04)
	struct FName EnvironmentQueryParamName_MinLightningTargetDistance; // 0xd4(0x04)
	struct FScalableFloat LightningCloudHeight; // 0xd8(0x28)
	struct FScalableFloat LightningRadius; // 0x100(0x28)
	struct FScalableFloat MinLightningTargetDistance; // 0x128(0x28)
	struct FScalableFloat LightningFrequencyMin; // 0x150(0x28)
	struct FScalableFloat LightningFrequencyMax; // 0x178(0x28)
	struct FScalableFloat LightningBoltsMin; // 0x1a0(0x28)
	struct FScalableFloat LightningBoltsMax; // 0x1c8(0x28)
	struct FScalableFloat LightningBoltIntervalMin; // 0x1f0(0x28)
	struct FScalableFloat LightningBoltIntervalMax; // 0x218(0x28)
	struct FScalableFloat LightningBoltSeparationDistance; // 0x240(0x28)
	struct FScalableFloat LightningStruckPawnReselectionInterval; // 0x268(0x28)
	struct FScalableFloat LightningBoltTelegraphDuration; // 0x290(0x28)
	struct FScalableFloat LightningBoltImpactIgnitionRadius; // 0x2b8(0x28)
	struct FScalableFloat LightningBoltGrassIgnitionRadius; // 0x2e0(0x28)
	struct FScalableFloat LightningBoltGrassFirePropagationFuel; // 0x308(0x28)
	struct FGameplayTag LightningAreaTargetTelegraphCue; // 0x330(0x04)
	struct FGameplayTag LightningBoltTargetTelegraphCue; // 0x334(0x04)
	struct TArray<struct FTempestLightningBoltData> LightningBoltData; // 0x338(0x10)
	char pad_348[0xd0]; // 0x348(0xd0)

	float GetLightningRadius(); // Function SuperstormRuntime.TempestLightningComponent.GetLightningRadius // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x685579c
	float GetCloudHeight(); // Function SuperstormRuntime.TempestLightningComponent.GetCloudHeight // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6855768
};

// Class SuperstormRuntime.TempestTornadoForcesComponent
// Size: 0x528 (Inherited: 0xa0)
struct UTempestTornadoForcesComponent : UGameFrameworkComponent {
	struct FMulticastInlineDelegate OnActorAddedToTornadoForces; // 0xa0(0x10)
	struct FMulticastInlineDelegate OnActorRemovedFromTornadoForces; // 0xb0(0x10)
	struct FDataTableRowHandle ConfigHandle; // 0xc0(0x10)
	struct TArray<struct FGameplayTag> PhysicsPresetTagsAngularDampingToOverride; // 0xd0(0x10)
	struct FScalableFloat AngularDampingOverride; // 0xe0(0x28)
	struct UGameplayEffect* PawnInGE; // 0x108(0x08)
	struct TMap<enum class EFortPhysicsObjectType, struct FScalableFloat> ObjectTypeToMaxCapCount; // 0x110(0x50)
	struct FGameplayTagContainer TagsToIgnore; // 0x160(0x20)
	struct UGameplayEffect* RecentlyRemovedGE; // 0x180(0x08)
	struct UTargetingPreset* TargetingPreset; // 0x188(0x08)
	struct FGameplayTag DamageSetByCallerTag; // 0x190(0x04)
	char pad_194[0x4]; // 0x194(0x04)
	struct UGameplayEffect* PeriodicDamageGE; // 0x198(0x08)
	struct UGameplayEffect* BurstDamageGE; // 0x1a0(0x08)
	struct FGameplayTag TornadoActiveCue; // 0x1a8(0x04)
	struct FGameplayTag PlayerNearCue; // 0x1ac(0x04)
	struct FGameplayTag PawnInCue; // 0x1b0(0x04)
	char pad_1B4[0x4]; // 0x1b4(0x04)
	struct FScalableFloat PlayerNearRange; // 0x1b8(0x28)
	struct FGameplayTagContainer BlockAbilitiesWithTag; // 0x1e0(0x20)
	struct FTornadoClientSimulationArray ActorsToClientSimulate; // 0x200(0x118)
	char pad_318[0x110]; // 0x318(0x110)
	struct FTargetingRequestHandle AsyncTargetingHandle; // 0x428(0x04)
	char pad_42C[0x4]; // 0x42c(0x04)
	struct TSet<struct AFortPlayerPawn*> PreviouslyNearPlayers; // 0x430(0x50)
	char pad_480[0xa8]; // 0x480(0xa8)

	void OnVehicleInTornadoPlayerExit(struct AFortPlayerControllerAthena* PlayerController, struct AFortAthenaVehicle* Vehicle); // Function SuperstormRuntime.TempestTornadoForcesComponent.OnVehicleInTornadoPlayerExit // (Final|Native|Private) // @ game+0x68558e4
	bool IsActorInTornado(struct AActor* Actor); // Function SuperstormRuntime.TempestTornadoForcesComponent.IsActorInTornado // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68557d0
};

// Class SuperstormRuntime.TornadoRadialForce
// Size: 0x2c8 (Inherited: 0x290)
struct ATornadoRadialForce : AFieldSystemActor {
	float Radius; // 0x290(0x04)
	float Strength; // 0x294(0x04)
	float StartTime; // 0x298(0x04)
	float StopTime; // 0x29c(0x04)
	float IncomingDuration; // 0x2a0(0x04)
	float OutgoingDuration; // 0x2a4(0x04)
	char pad_2A8[0x8]; // 0x2a8(0x08)
	struct URadialVector* RadialVector; // 0x2b0(0x08)
	struct URadialFalloff* RadialFalloff; // 0x2b8(0x08)
	struct UOperatorField* OperatorField; // 0x2c0(0x08)
};

