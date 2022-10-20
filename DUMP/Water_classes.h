// Class Water.BuoyancyComponent
// Size: 0x208 (Inherited: 0xa0)
struct UBuoyancyComponent : UActorComponent {
	struct TArray<struct FSphericalPontoon> Pontoons; // 0xa0(0x10)
	struct FMulticastInlineDelegate OnEnteredWaterDelegate; // 0xb0(0x10)
	struct FMulticastInlineDelegate OnExitedWaterDelegate; // 0xc0(0x10)
	struct FBuoyancyData BuoyancyData; // 0xd0(0x90)
	struct TArray<struct UWaterBodyComponent*> CurrentWaterBodyComponents; // 0x160(0x10)
	struct UPrimitiveComponent* SimulatingComponent; // 0x170(0x08)
	char pad_178[0x90]; // 0x178(0x90)

	void OnPontoonExitedWater(struct FSphericalPontoon& Pontoon); // Function Water.BuoyancyComponent.OnPontoonExitedWater // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x640f6e8
	void OnPontoonEnteredWater(struct FSphericalPontoon& Pontoon); // Function Water.BuoyancyComponent.OnPontoonEnteredWater // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x640f5ec
	bool IsOverlappingWaterBody(); // Function Water.BuoyancyComponent.IsOverlappingWaterBody // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x47e858c
	bool IsInWaterBody(); // Function Water.BuoyancyComponent.IsInWaterBody // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x640f5d0
	void GetLastWaterSurfaceInfo(struct FVector& OutWaterPlaneLocation, struct FVector& OutWaterPlaneNormal, struct FVector& OutWaterSurfacePosition, float& OutWaterDepth, int32_t& OutWaterBodyIdx, struct FVector& OutWaterVelocity); // Function Water.BuoyancyComponent.GetLastWaterSurfaceInfo // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x640ec80
	struct TArray<struct UWaterBodyComponent*> GetCurrentWaterBodyComponents(); // Function Water.BuoyancyComponent.GetCurrentWaterBodyComponents // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x640e9d0
};

// Class Water.BuoyancyManager
// Size: 0x350 (Inherited: 0x288)
struct ABuoyancyManager : AActor {
	char pad_288[0x50]; // 0x288(0x50)
	struct TArray<struct UBuoyancyComponent*> BuoyancyComponents; // 0x2d8(0x10)
	char pad_2E8[0x68]; // 0x2e8(0x68)

	bool GetBuoyancyComponentManager(struct UObject* WorldContextObject, struct ABuoyancyManager*& Manager); // Function Water.BuoyancyManager.GetBuoyancyComponentManager // (Final|Native|Static|Public|HasOutParms) // @ game+0x640e7fc
};

// Class Water.EnvQueryTest_InsideWaterBody
// Size: 0x200 (Inherited: 0x1f8)
struct UEnvQueryTest_InsideWaterBody : UEnvQueryTest {
	bool bIncludeWaves; // 0x1f8(0x01)
	bool bSimpleWaves; // 0x1f9(0x01)
	bool bIgnoreExclusionVolumes; // 0x1fa(0x01)
	char pad_1FB[0x5]; // 0x1fb(0x05)
};

// Class Water.GerstnerWaterWaveGeneratorBase
// Size: 0x28 (Inherited: 0x28)
struct UGerstnerWaterWaveGeneratorBase : UObject {

	void GenerateGerstnerWaves(struct TArray<struct FGerstnerWave>& OutWaves); // Function Water.GerstnerWaterWaveGeneratorBase.GenerateGerstnerWaves // (Native|Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0x640e6c0
};

// Class Water.GerstnerWaterWaveGeneratorSimple
// Size: 0x60 (Inherited: 0x28)
struct UGerstnerWaterWaveGeneratorSimple : UGerstnerWaterWaveGeneratorBase {
	int32_t NumWaves; // 0x28(0x04)
	int32_t Seed; // 0x2c(0x04)
	float Randomness; // 0x30(0x04)
	float MinWavelength; // 0x34(0x04)
	float MaxWavelength; // 0x38(0x04)
	float WavelengthFalloff; // 0x3c(0x04)
	float MinAmplitude; // 0x40(0x04)
	float MaxAmplitude; // 0x44(0x04)
	float AmplitudeFalloff; // 0x48(0x04)
	float WindAngleDeg; // 0x4c(0x04)
	float DirectionAngularSpreadDeg; // 0x50(0x04)
	float SmallWaveSteepness; // 0x54(0x04)
	float LargeWaveSteepness; // 0x58(0x04)
	float SteepnessFalloff; // 0x5c(0x04)
};

// Class Water.GerstnerWaterWaveGeneratorSpectrum
// Size: 0x40 (Inherited: 0x28)
struct UGerstnerWaterWaveGeneratorSpectrum : UGerstnerWaterWaveGeneratorBase {
	enum class EWaveSpectrumType SpectrumType; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct TArray<struct FGerstnerWaveOctave> Octaves; // 0x30(0x10)
};

// Class Water.WaterWavesBase
// Size: 0x28 (Inherited: 0x28)
struct UWaterWavesBase : UObject {
};

// Class Water.WaterWaves
// Size: 0x28 (Inherited: 0x28)
struct UWaterWaves : UWaterWavesBase {
};

// Class Water.GerstnerWaterWaves
// Size: 0x48 (Inherited: 0x28)
struct UGerstnerWaterWaves : UWaterWaves {
	struct UGerstnerWaterWaveGeneratorBase* GerstnerWaveGenerator; // 0x28(0x08)
	struct TArray<struct FGerstnerWave> GerstnerWaves; // 0x30(0x10)
	float MaxWaveHeight; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class Water.GerstnerWaterWaveSubsystem
// Size: 0x48 (Inherited: 0x30)
struct UGerstnerWaterWaveSubsystem : UEngineSubsystem {
	char pad_30[0x18]; // 0x30(0x18)
};

// Class Water.LakeCollisionComponent
// Size: 0x550 (Inherited: 0x530)
struct ULakeCollisionComponent : UPrimitiveComponent {
	struct UBodySetup* CachedBodySetup; // 0x530(0x08)
	struct FVector BoxExtent; // 0x538(0x18)
};

// Class Water.NiagaraDataInterfaceWater
// Size: 0x40 (Inherited: 0x38)
struct UNiagaraDataInterfaceWater : UNiagaraDataInterface {
	struct UWaterBodyComponent* SourceBodyComponent; // 0x38(0x08)
};

// Class Water.NiagaraWaterFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraWaterFunctionLibrary : UBlueprintFunctionLibrary {

	void SetWaterBodyComponent(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct UWaterBodyComponent* WaterBodyComponent); // Function Water.NiagaraWaterFunctionLibrary.SetWaterBodyComponent // (Final|Native|Static|Private|BlueprintCallable) // @ game+0x640fc00
	void SetWaterBody(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct AWaterBody* WaterBody); // Function Water.NiagaraWaterFunctionLibrary.SetWaterBody // (Final|Native|Static|Private|BlueprintCallable) // @ game+0x640fa4c
};

// Class Water.OceanCollisionComponent
// Size: 0x570 (Inherited: 0x530)
struct UOceanCollisionComponent : UPrimitiveComponent {
	struct UBodySetup* CachedBodySetup; // 0x530(0x08)
	char pad_538[0x38]; // 0x538(0x38)
};

// Class Water.OceanBoxCollisionComponent
// Size: 0x570 (Inherited: 0x570)
struct UOceanBoxCollisionComponent : UBoxComponent {
};

// Class Water.WaterBody
// Size: 0x2b8 (Inherited: 0x288)
struct AWaterBody : AActor {
	char pad_288[0x8]; // 0x288(0x08)
	struct UWaterSplineComponent* SplineComp; // 0x290(0x08)
	struct UWaterSplineMetadata* WaterSplineMetadata; // 0x298(0x08)
	struct UWaterBodyComponent* WaterBodyComponent; // 0x2a0(0x08)
	int32_t WaterBodyIndex; // 0x2a8(0x04)
	enum class EWaterBodyType WaterBodyType; // 0x2ac(0x01)
	char pad_2AD[0x3]; // 0x2ad(0x03)
	struct UWaterWavesBase* WaterWaves; // 0x2b0(0x08)

	void SetWaterWaves(struct UWaterWavesBase* InWaterWaves); // Function Water.WaterBody.SetWaterWaves // (Final|Native|Public|BlueprintCallable) // @ game+0x640fe54
	void SetWaterMaterial(struct UMaterialInterface* InMaterial); // Function Water.WaterBody.SetWaterMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0x640fdc4
	void OnWaterBodyChanged(bool bShapeOrPositionChanged, bool bWeightmapSettingsChanged); // Function Water.WaterBody.OnWaterBodyChanged // (Final|Native|Public|BlueprintCallable) // @ game+0x640f7e4
	struct FVector GetWaterVelocityVectorAtSplineInputKey(float InKey); // Function Water.WaterBody.GetWaterVelocityVectorAtSplineInputKey // (Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x640f4fc
	float GetWaterVelocityAtSplineInputKey(float InKey); // Function Water.WaterBody.GetWaterVelocityAtSplineInputKey // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x640f3c4
	struct UWaterSplineComponent* GetWaterSpline(); // Function Water.WaterBody.GetWaterSpline // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x640f164
	struct UMaterialInstanceDynamic* GetWaterMaterialInstance(); // Function Water.WaterBody.GetWaterMaterialInstance // (Final|Native|Public|BlueprintCallable) // @ game+0x640f0e4
	enum class EWaterBodyType GetWaterBodyType(); // Function Water.WaterBody.GetWaterBodyType // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x640f034
	struct UWaterBodyComponent* GetWaterBodyComponent(); // Function Water.WaterBody.GetWaterBodyComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2605140
	struct UMaterialInstanceDynamic* GetRiverToOceanTransitionMaterialInstance(); // Function Water.WaterBody.GetRiverToOceanTransitionMaterialInstance // (Final|Native|Public|BlueprintCallable) // @ game+0x640ef2c
	struct UMaterialInstanceDynamic* GetRiverToLakeTransitionMaterialInstance(); // Function Water.WaterBody.GetRiverToLakeTransitionMaterialInstance // (Final|Native|Public|BlueprintCallable) // @ game+0x640eed4
	struct TArray<struct AWaterBodyIsland*> GetIslands(); // Function Water.WaterBody.GetIslands // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x640ead0
	struct TArray<struct AWaterBodyExclusionVolume*> GetExclusionVolumes(); // Function Water.WaterBody.GetExclusionVolumes // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x640e9ec
	float GetAudioIntensityAtSplineInputKey(float InKey); // Function Water.WaterBody.GetAudioIntensityAtSplineInputKey // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x640e760
};

// Class Water.WaterBodyGenerator
// Size: 0x28 (Inherited: 0x28)
struct UWaterBodyGenerator : UObject {
};

// Class Water.WaterBodyComponent
// Size: 0x14a0 (Inherited: 0x530)
struct UWaterBodyComponent : UPrimitiveComponent {
	struct UPhysicalMaterial* PhysicalMaterial; // 0x530(0x08)
	float TargetWaveMaskDepth; // 0x538(0x04)
	float MaxWaveHeightOffset; // 0x53c(0x04)
	struct FUnderwaterPostProcessSettings UnderwaterPostProcessSettings; // 0x540(0x6f0)
	struct FWaterCurveSettings CurveSettings; // 0xc30(0x20)
	struct UMaterialInterface* WaterMaterial; // 0xc50(0x08)
	struct UMaterialInterface* WaterHLODMaterial; // 0xc58(0x08)
	struct UMaterialInterface* WaterLODMaterial; // 0xc60(0x08)
	struct UMaterialInterface* UnderwaterPostProcessMaterial; // 0xc68(0x08)
	struct UMaterialInterface* WaterInfoMaterial; // 0xc70(0x08)
	struct FWaterBodyHeightmapSettings WaterHeightmapSettings; // 0xc78(0x80)
	float ShapeDilation; // 0xcf8(0x04)
	float CollisionHeightOffset; // 0xcfc(0x04)
	bool bAffectsLandscape; // 0xd00(0x01)
	char pad_D01[0x3]; // 0xd01(0x03)
	int32_t WaterBodyIndex; // 0xd04(0x04)
	struct UStaticMesh* WaterMeshOverride; // 0xd08(0x08)
	bool bAlwaysGenerateWaterMeshTiles; // 0xd10(0x01)
	char pad_D11[0x3]; // 0xd11(0x03)
	int32_t OverlapMaterialPriority; // 0xd14(0x04)
	struct UWaterSplineMetadata* WaterSplineMetadata; // 0xd18(0x08)
	struct UMaterialInstanceDynamic* WaterMID; // 0xd20(0x08)
	struct UMaterialInstanceDynamic* WaterLODMID; // 0xd28(0x08)
	struct UMaterialInstanceDynamic* UnderwaterPostProcessMID; // 0xd30(0x08)
	struct UMaterialInstanceDynamic* WaterInfoMID; // 0xd38(0x08)
	struct TArray<LazyObjectProperty> Islands; // 0xd40(0x10)
	struct TArray<LazyObjectProperty> ExclusionVolumes; // 0xd50(0x10)
	struct TWeakObjectPtr<struct ALandscapeProxy> Landscape; // 0xd60(0x08)
	struct AWaterZone* OwningWaterZone; // 0xd68(0x08)
	struct FPostProcessSettings CurrentPostProcessSettings; // 0xd70(0x6d0)
	struct UNavAreaBase* WaterNavAreaClass; // 0x1440(0x08)
	char pad_1448[0x58]; // 0x1448(0x58)

	void SetWaterAndUnderWaterPostProcessMaterial(struct UMaterialInterface* InWaterMaterial, struct UMaterialInterface* InUnderWaterPostProcessMaterial); // Function Water.WaterBodyComponent.SetWaterAndUnderWaterPostProcessMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0x640f960
	void OnWaterBodyChanged(bool bShapeOrPositionChanged, bool bWeightmapSettingsChanged); // Function Water.WaterBodyComponent.OnWaterBodyChanged // (Final|Native|Public|BlueprintCallable) // @ game+0x640f8a4
	struct UWaterWavesBase* GetWaterWaves(); // Function Water.WaterBodyComponent.GetWaterWaves // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x640f5a8
	float GetWaterVelocityAtSplineInputKey(float InKey); // Function Water.WaterBodyComponent.GetWaterVelocityAtSplineInputKey // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x640f460
	void GetWaterSurfaceInfoAtLocation(struct FVector& InLocation, struct FVector& OutWaterSurfaceLocation, struct FVector& OutWaterSurfaceNormal, struct FVector& OutWaterVelocity, float& OutWaterDepth, bool bIncludeDepth); // Function Water.WaterBodyComponent.GetWaterSurfaceInfoAtLocation // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x640f1a4
	struct UWaterSplineComponent* GetWaterSpline(); // Function Water.WaterBodyComponent.GetWaterSpline // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x640f17c
	struct UMaterialInstanceDynamic* GetWaterMaterialInstance(); // Function Water.WaterBodyComponent.GetWaterMaterialInstance // (Final|Native|Public|BlueprintCallable) // @ game+0x640f128
	struct UMaterialInterface* GetWaterMaterial(); // Function Water.WaterBodyComponent.GetWaterMaterial // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x640f0cc
	struct UMaterialInstanceDynamic* GetWaterLODMaterialInstance(); // Function Water.WaterBodyComponent.GetWaterLODMaterialInstance // (Final|Native|Public|BlueprintCallable) // @ game+0x640f094
	struct UMaterialInstanceDynamic* GetWaterInfoMaterialInstance(); // Function Water.WaterBodyComponent.GetWaterInfoMaterialInstance // (Final|Native|Public|BlueprintCallable) // @ game+0x640f05c
	struct AWaterBody* GetWaterBodyActor(); // Function Water.WaterBodyComponent.GetWaterBodyActor // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1c7ea00
	struct UMaterialInstanceDynamic* GetUnderwaterPostProcessMaterialInstance(); // Function Water.WaterBodyComponent.GetUnderwaterPostProcessMaterialInstance // (Final|Native|Public|BlueprintCallable) // @ game+0x640effc
	struct TArray<struct UPrimitiveComponent*> GetStandardRenderableComponents(); // Function Water.WaterBodyComponent.GetStandardRenderableComponents // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x640ef84
	struct UMaterialInstanceDynamic* GetRiverToOceanTransitionMaterialInstance(); // Function Water.WaterBodyComponent.GetRiverToOceanTransitionMaterialInstance // (Native|Public|BlueprintCallable) // @ game+0x640ef5c
	struct UMaterialInstanceDynamic* GetRiverToLakeTransitionMaterialInstance(); // Function Water.WaterBodyComponent.GetRiverToLakeTransitionMaterialInstance // (Native|Public|BlueprintCallable) // @ game+0x640ef04
	float GetMaxWaveHeight(); // Function Water.WaterBodyComponent.GetMaxWaveHeight // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x640eeac
	struct TArray<struct AWaterBodyIsland*> GetIslands(); // Function Water.WaterBodyComponent.GetIslands // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x640ec0c
	struct TArray<struct AWaterBodyExclusionVolume*> GetExclusionVolumes(); // Function Water.WaterBodyComponent.GetExclusionVolumes // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x640ea5c
	struct TArray<struct UPrimitiveComponent*> GetCollisionComponents(bool bInOnlyEnabledComponents); // Function Water.WaterBodyComponent.GetCollisionComponents // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x640e8fc
};

// Class Water.CustomMeshGenerator
// Size: 0x30 (Inherited: 0x28)
struct UCustomMeshGenerator : UWaterBodyGenerator {
	struct UStaticMeshComponent* MeshComp; // 0x28(0x08)
};

// Class Water.WaterBodyCustom
// Size: 0x2b8 (Inherited: 0x2b8)
struct AWaterBodyCustom : AWaterBody {
};

// Class Water.WaterBodyCustomComponent
// Size: 0x14a0 (Inherited: 0x14a0)
struct UWaterBodyCustomComponent : UWaterBodyComponent {
	struct UStaticMeshComponent* MeshComp; // 0x1498(0x08)
};

// Class Water.WaterBodyExclusionVolume
// Size: 0x2e8 (Inherited: 0x2d0)
struct AWaterBodyExclusionVolume : APhysicsVolume {
	bool bExcludeAllOverlappingWaterBodies; // 0x2d0(0x01)
	char pad_2D1[0x7]; // 0x2d1(0x07)
	struct TArray<struct AWaterBody*> WaterBodiesToExclude; // 0x2d8(0x10)
};

// Class Water.WaterBodyHLODBuilder
// Size: 0x28 (Inherited: 0x28)
struct UWaterBodyHLODBuilder : UHLODBuilder {
};

// Class Water.WaterBodyIsland
// Size: 0x298 (Inherited: 0x288)
struct AWaterBodyIsland : AActor {
	char pad_288[0x8]; // 0x288(0x08)
	struct UWaterSplineComponent* SplineComp; // 0x290(0x08)

	struct UWaterSplineComponent* GetWaterSpline(); // Function Water.WaterBodyIsland.GetWaterSpline // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x640f164
};

// Class Water.LakeGenerator
// Size: 0x40 (Inherited: 0x28)
struct ULakeGenerator : UWaterBodyGenerator {
	struct UStaticMeshComponent* LakeMeshComp; // 0x28(0x08)
	struct UBoxComponent* LakeCollisionComp; // 0x30(0x08)
	struct ULakeCollisionComponent* LakeCollision; // 0x38(0x08)
};

// Class Water.WaterBodyLake
// Size: 0x2b8 (Inherited: 0x2b8)
struct AWaterBodyLake : AWaterBody {
};

// Class Water.WaterBodyLakeComponent
// Size: 0x14b0 (Inherited: 0x14a0)
struct UWaterBodyLakeComponent : UWaterBodyComponent {
	struct UStaticMeshComponent* LakeMeshComp; // 0x1498(0x08)
	struct ULakeCollisionComponent* LakeCollision; // 0x14a0(0x08)
};

// Class Water.OceanGenerator
// Size: 0x48 (Inherited: 0x28)
struct UOceanGenerator : UWaterBodyGenerator {
	struct TArray<struct UOceanBoxCollisionComponent*> CollisionBoxes; // 0x28(0x10)
	struct TArray<struct UOceanCollisionComponent*> CollisionHullSets; // 0x38(0x10)
};

// Class Water.WaterBodyOcean
// Size: 0x2b8 (Inherited: 0x2b8)
struct AWaterBodyOcean : AWaterBody {
};

// Class Water.WaterBodyOceanComponent
// Size: 0x14f0 (Inherited: 0x14a0)
struct UWaterBodyOceanComponent : UWaterBodyComponent {
	struct TArray<struct UOceanBoxCollisionComponent*> CollisionBoxes; // 0x1498(0x10)
	struct TArray<struct UOceanCollisionComponent*> CollisionHullSets; // 0x14a8(0x10)
	struct FVector2D VisualExtents; // 0x14b8(0x10)
	struct FVector CollisionExtents; // 0x14c8(0x18)
	float HeightOffset; // 0x14e0(0x04)
	char pad_14EC[0x4]; // 0x14ec(0x04)
};

// Class Water.RiverGenerator
// Size: 0x38 (Inherited: 0x28)
struct URiverGenerator : UWaterBodyGenerator {
	struct TArray<struct USplineMeshComponent*> SplineMeshComponents; // 0x28(0x10)
};

// Class Water.WaterBodyRiver
// Size: 0x2b8 (Inherited: 0x2b8)
struct AWaterBodyRiver : AWaterBody {
};

// Class Water.WaterBodyRiverComponent
// Size: 0x14d0 (Inherited: 0x14a0)
struct UWaterBodyRiverComponent : UWaterBodyComponent {
	struct TArray<struct USplineMeshComponent*> SplineMeshComponents; // 0x1498(0x10)
	struct UMaterialInterface* LakeTransitionMaterial; // 0x14a8(0x08)
	struct UMaterialInstanceDynamic* LakeTransitionMID; // 0x14b0(0x08)
	struct UMaterialInterface* OceanTransitionMaterial; // 0x14b8(0x08)
	struct UMaterialInstanceDynamic* OceanTransitionMID; // 0x14c0(0x08)
};

// Class Water.WaterBrushActorInterface
// Size: 0x28 (Inherited: 0x28)
struct UWaterBrushActorInterface : UInterface {
};

// Class Water.WaterMeshComponent
// Size: 0x6a0 (Inherited: 0x580)
struct UWaterMeshComponent : UMeshComponent {
	int32_t ForceCollapseDensityLevel; // 0x578(0x04)
	struct UMaterialInterface* FarDistanceMaterial; // 0x580(0x08)
	float FarDistanceMeshExtent; // 0x588(0x04)
	float TileSize; // 0x58c(0x04)
	struct FIntPoint ExtentInTiles; // 0x590(0x08)
	char pad_59C[0x94]; // 0x59c(0x94)
	struct TSet<struct UMaterialInterface*> UsedMaterials; // 0x630(0x50)
	char pad_680[0x10]; // 0x680(0x10)
	int32_t TessellationFactor; // 0x690(0x04)
	float LODScale; // 0x694(0x04)
	char pad_698[0x8]; // 0x698(0x08)

	bool IsEnabled(); // Function Water.WaterMeshComponent.IsEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x64101bc
};

// Class Water.WaterRuntimeSettings
// Size: 0xb0 (Inherited: 0x30)
struct UWaterRuntimeSettings : UDeveloperSettings {
	enum class ECollisionChannel CollisionChannelForWaterTraces; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct TSoftObjectPtr<UMaterialParameterCollection> MaterialParameterCollection; // 0x38(0x28)
	float WaterBodyIconWorldZOffset; // 0x60(0x04)
	struct FName DefaultWaterCollisionProfileName; // 0x64(0x04)
	struct TSoftObjectPtr<UMaterialInterface> DefaultWaterInfoMaterial; // 0x68(0x28)
	struct UWaterBodyRiverComponent* WaterBodyRiverComponentClass; // 0x90(0x08)
	struct UWaterBodyLakeComponent* WaterBodyLakeComponentClass; // 0x98(0x08)
	struct UWaterBodyOceanComponent* WaterBodyOceanComponentClass; // 0xa0(0x08)
	struct UWaterBodyCustomComponent* WaterBodyCustomComponentClass; // 0xa8(0x08)
};

// Class Water.WaterSplineComponent
// Size: 0x650 (Inherited: 0x630)
struct UWaterSplineComponent : USplineComponent {
	struct FWaterSplineCurveDefaults WaterSplineDefaults; // 0x630(0x10)
	struct FWaterSplineCurveDefaults PreviousWaterSplineDefaults; // 0x640(0x10)
};

// Class Water.WaterSplineMetadata
// Size: 0xa0 (Inherited: 0x28)
struct UWaterSplineMetadata : USplineMetadata {
	struct FInterpCurveFloat Depth; // 0x28(0x18)
	struct FInterpCurveFloat WaterVelocityScalar; // 0x40(0x18)
	struct FInterpCurveFloat RiverWidth; // 0x58(0x18)
	struct FInterpCurveFloat AudioIntensity; // 0x70(0x18)
	struct FInterpCurveVector WaterVelocity; // 0x88(0x18)
};

// Class Water.WaterSubsystem
// Size: 0x110 (Inherited: 0x40)
struct UWaterSubsystem : UTickableWorldSubsystem {
	char pad_40[0x38]; // 0x40(0x38)
	struct ABuoyancyManager* BuoyancyManager; // 0x78(0x08)
	struct FMulticastInlineDelegate OnCameraUnderwaterStateChanged; // 0x80(0x10)
	struct FMulticastInlineDelegate OnWaterScalabilityChanged; // 0x90(0x10)
	struct UStaticMesh* DefaultRiverMesh; // 0xa0(0x08)
	struct UStaticMesh* DefaultLakeMesh; // 0xa8(0x08)
	char pad_B0[0x28]; // 0xb0(0x28)
	struct UMaterialParameterCollection* MaterialParameterCollection; // 0xd8(0x08)
	char pad_E0[0x30]; // 0xe0(0x30)

	void SetOceanFloodHeight(float InFloodHeight); // Function Water.WaterSubsystem.SetOceanFloodHeight // (Final|Native|Public|BlueprintCallable) // @ game+0x64103dc
	void PrintToWaterLog(struct FString message, bool bWarning); // Function Water.WaterSubsystem.PrintToWaterLog // (Final|Native|Public|BlueprintCallable) // @ game+0x6410210
	bool IsWaterRenderingEnabled(); // Function Water.WaterSubsystem.IsWaterRenderingEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x64101f0
	bool IsUnderwaterPostProcessEnabled(); // Function Water.WaterSubsystem.IsUnderwaterPostProcessEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x64101d4
	bool IsShallowWaterSimulationEnabled(); // Function Water.WaterSubsystem.IsShallowWaterSimulationEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2c10a44
	float GetWaterTimeSeconds(); // Function Water.WaterSubsystem.GetWaterTimeSeconds // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6410194
	float GetSmoothedWorldTimeSeconds(); // Function Water.WaterSubsystem.GetSmoothedWorldTimeSeconds // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6410164
	int32_t GetShallowWaterSimulationRenderTargetSize(); // Function Water.WaterSubsystem.GetShallowWaterSimulationRenderTargetSize // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x641014c
	int32_t GetShallowWaterMaxImpulseForces(); // Function Water.WaterSubsystem.GetShallowWaterMaxImpulseForces // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6410134
	int32_t GetShallowWaterMaxDynamicForces(); // Function Water.WaterSubsystem.GetShallowWaterMaxDynamicForces // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x641011c
	float GetOceanTotalHeight(); // Function Water.WaterSubsystem.GetOceanTotalHeight // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x64100e0
	float GetOceanFloodHeight(); // Function Water.WaterSubsystem.GetOceanFloodHeight // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x64100c8
	float GetOceanBaseHeight(); // Function Water.WaterSubsystem.GetOceanBaseHeight // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x64100a0
	float GetCameraUnderwaterDepth(); // Function Water.WaterSubsystem.GetCameraUnderwaterDepth // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6410088
};

// Class Water.WaterWavesAsset
// Size: 0x30 (Inherited: 0x28)
struct UWaterWavesAsset : UObject {
	struct UWaterWaves* WaterWaves; // 0x28(0x08)
};

// Class Water.WaterWavesAssetReference
// Size: 0x30 (Inherited: 0x28)
struct UWaterWavesAssetReference : UWaterWavesBase {
	struct UWaterWavesAsset* WaterWavesAsset; // 0x28(0x08)
};

// Class Water.WaterZone
// Size: 0x318 (Inherited: 0x288)
struct AWaterZone : AActor {
	struct UTextureRenderTarget2D* WaterInfoTexture; // 0x288(0x08)
	struct TArray<struct TWeakObjectPtr<struct UWaterBodyComponent>> OwnedWaterBodies; // 0x290(0x10)
	struct FIntPoint RenderTargetResolution; // 0x2a0(0x08)
	struct UWaterMeshComponent* WaterMesh; // 0x2a8(0x08)
	struct FVector2D ZoneExtent; // 0x2b0(0x10)
	float CaptureZOffset; // 0x2c0(0x04)
	bool bHalfPrecisionTexture; // 0x2c4(0x01)
	char pad_2C5[0x3]; // 0x2c5(0x03)
	int32_t VelocityBlurRadius; // 0x2c8(0x04)
	char pad_2CC[0x4]; // 0x2cc(0x04)
	struct FVector TessellatedWaterMeshExtent; // 0x2d0(0x18)
	uint32_t NonTessellatedLODSectionScale; // 0x2e8(0x04)
	bool bEnableNonTessellatedLODMesh; // 0x2ec(0x01)
	char pad_2ED[0x2b]; // 0x2ed(0x2b)
};

