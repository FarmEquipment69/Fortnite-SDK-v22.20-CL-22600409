// Class Procedural.HISMBuilderSettings
// Size: 0x200 (Inherited: 0x28)
struct UHISMBuilderSettings : UObject {
	enum class EComponentMobility Mobility; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	struct FInt32Interval CullDistance; // 0x2c(0x08)
	char bCastShadow : 1; // 0x34(0x01)
	char bAffectDynamicIndirectLighting : 1; // 0x34(0x01)
	char bAffectDistanceFieldLighting : 1; // 0x34(0x01)
	char bCastDynamicShadow : 1; // 0x34(0x01)
	char bCastStaticShadow : 1; // 0x34(0x01)
	char bCastShadowAsTwoSided : 1; // 0x34(0x01)
	char bReceivesDecals : 1; // 0x34(0x01)
	char bOverrideLightMapRes : 1; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	int32_t OverriddenLightMapRes; // 0x38(0x04)
	enum class ELightmapType LightmapType; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	char bUseAsOccluder : 1; // 0x40(0x01)
	char pad_40_1 : 7; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct FBodyInstance BodyInstance; // 0x48(0x188)
	enum class EHasCustomNavigableGeometry CustomNavigableGeometry; // 0x1d0(0x01)
	struct FLightingChannels LightingChannels; // 0x1d1(0x01)
	char pad_1D2[0x2]; // 0x1d2(0x02)
	char bRenderCustomDepth : 1; // 0x1d4(0x01)
	char pad_1D4_1 : 7; // 0x1d4(0x01)
	char pad_1D5[0x3]; // 0x1d5(0x03)
	enum class ERendererStencilMask CustomDepthStencilWriteMask; // 0x1d8(0x01)
	char pad_1D9[0x3]; // 0x1d9(0x03)
	int32_t CustomDepthStencilValue; // 0x1dc(0x04)
	int32_t TranslucencySortPriority; // 0x1e0(0x04)
	char bEnableDensityScaling : 1; // 0x1e4(0x01)
	char pad_1E4_1 : 7; // 0x1e4(0x01)
	char pad_1E5[0x3]; // 0x1e5(0x03)
	struct TArray<struct URuntimeVirtualTexture*> RuntimeVirtualTextures; // 0x1e8(0x10)
	int32_t VirtualTextureCullMips; // 0x1f8(0x04)
	enum class ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; // 0x1fc(0x01)
	char pad_1FD[0x3]; // 0x1fd(0x03)

	void SetOverriddenLightMapRes(int32_t Value); // Function Procedural.HISMBuilderSettings.SetOverriddenLightMapRes // (Final|Native|Public|BlueprintCallable) // @ game+0x7137174
	int32_t GetOverriddenLightMapRes(); // Function Procedural.HISMBuilderSettings.GetOverriddenLightMapRes // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5f34a3c
};

// Class Procedural.ProceduralParameterModifier
// Size: 0x38 (Inherited: 0x28)
struct UProceduralParameterModifier : UObject {
	bool bEnabled; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float Contribution; // 0x2c(0x04)
	enum class EProceduralParameterModifierBlendMode BlendMode; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)

	float GetContribution(); // Function Procedural.ProceduralParameterModifier.GetContribution // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7136dcc
};

// Class Procedural.ProceduralContentVariationsWeightsModifier
// Size: 0x38 (Inherited: 0x38)
struct UProceduralContentVariationsWeightsModifier : UProceduralParameterModifier {
};

// Class Procedural.ProceduralContentVariationsWeightsMapModifier
// Size: 0x48 (Inherited: 0x38)
struct UProceduralContentVariationsWeightsMapModifier : UProceduralContentVariationsWeightsModifier {
	struct TArray<struct FProceduralContentVariationMap> VariationsMaps; // 0x38(0x10)
};

// Class Procedural.ProceduralGenerator
// Size: 0x38 (Inherited: 0x28)
struct UProceduralGenerator : UObject {
	struct FProceduralDebugSettings DebugSettings; // 0x28(0x0c)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class Procedural.ProceduralCustomGenerator
// Size: 0x48 (Inherited: 0x38)
struct UProceduralCustomGenerator : UProceduralGenerator {
	struct UProceduralGeneratorContext* GeneratorContextClass; // 0x38(0x08)
	struct UProceduralGeneratorContext* GeneratorContext; // 0x40(0x08)
};

// Class Procedural.ProceduralDataMap
// Size: 0x30 (Inherited: 0x28)
struct UProceduralDataMap : UObject {
	bool bUseRemapCurve; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// Class Procedural.ProceduralFloatDataMap
// Size: 0xb8 (Inherited: 0x30)
struct UProceduralFloatDataMap : UProceduralDataMap {
	struct FProceduralRemapFloatCurve RemapCurve; // 0x30(0x88)
};

// Class Procedural.ProceduralVectorDataMap
// Size: 0x238 (Inherited: 0x30)
struct UProceduralVectorDataMap : UProceduralDataMap {
	struct FProceduralRemapVectorCurve RemapCurve; // 0x30(0x208)
};

// Class Procedural.ProceduralDensityModifier
// Size: 0x38 (Inherited: 0x38)
struct UProceduralDensityModifier : UProceduralParameterModifier {
};

// Class Procedural.ProceduralDensityMapModifier
// Size: 0x40 (Inherited: 0x38)
struct UProceduralDensityMapModifier : UProceduralDensityModifier {
	struct UProceduralFloatDataMap* Map; // 0x38(0x08)
};

// Class Procedural.ProceduralGenerationBlockingVolume
// Size: 0x2d0 (Inherited: 0x2c0)
struct AProceduralGenerationBlockingVolume : AVolume {
	struct TArray<struct AProceduralGenerationVolume*> BlockedVolumes; // 0x2c0(0x10)
};

// Class Procedural.ProceduralGenerationComponent
// Size: 0xd0 (Inherited: 0xa0)
struct UProceduralGenerationComponent : UActorComponent {
	struct UProceduralGenerator* Generator; // 0xa0(0x08)
	bool bShowDebugVisualization; // 0xa8(0x01)
	char pad_A9[0x3]; // 0xa9(0x03)
	struct FGuid ProceduralGenerationGuid; // 0xac(0x10)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct AVolume* GenerationVolume; // 0xc0(0x08)
	struct UProceduralGenerationContext* GenerationContext; // 0xc8(0x08)
};

// Class Procedural.ProceduralGenerationContext
// Size: 0xf0 (Inherited: 0x28)
struct UProceduralGenerationContext : UObject {
	struct UProceduralGeneratorContext* GeneratorContext; // 0x28(0x08)
	struct TArray<struct UProceduralGeneratorContext*> GeneratedContexts; // 0x30(0x10)
	struct TArray<struct UProceduralGeneratorContext*> RegisteredContexts; // 0x40(0x10)
	struct TMap<struct FGuid, struct UProceduralGeneratorContext*> GeneratorContexts; // 0x50(0x50)
	char pad_A0[0x50]; // 0xa0(0x50)

	struct AVolume* GetGenerationVolume(); // Function Procedural.ProceduralGenerationContext.GetGenerationVolume // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7136ed4
	struct UProceduralGenerationComponent* GetGenerationComponent(); // Function Procedural.ProceduralGenerationContext.GetGenerationComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7136e8c
};

// Class Procedural.ProceduralGenerationVolume
// Size: 0x2c8 (Inherited: 0x2c0)
struct AProceduralGenerationVolume : AVolume {
	struct UProceduralGenerationComponent* ProceduralComponent; // 0x2c0(0x08)

	void Generate(); // Function Procedural.ProceduralGenerationVolume.Generate // (Final|Native|Public|BlueprintCallable) // @ game+0x7136d8c
	void ClearGeneratedContent(); // Function Procedural.ProceduralGenerationVolume.ClearGeneratedContent // (Final|Native|Public|BlueprintCallable) // @ game+0x7136cd8
};

// Class Procedural.ProceduralGeneratorContext
// Size: 0x58 (Inherited: 0x28)
struct UProceduralGeneratorContext : UObject {
	struct UProceduralGenerator* Generator; // 0x28(0x08)
	struct UProceduralGenerationContext* GenerationContext; // 0x30(0x08)
	struct UProceduralGeneratorContext* OwnerContext; // 0x38(0x08)
	struct TArray<struct UObject*> GeneratedObjects; // 0x40(0x10)
	struct UProceduralPointCloud* ExportedPointCloud; // 0x50(0x08)

	bool OnGenerate(); // Function Procedural.ProceduralGeneratorContext.OnGenerate // (Native|Event|Public|BlueprintEvent) // @ game+0x2ad6f68
	void OnDrawVisualization(); // Function Procedural.ProceduralGeneratorContext.OnDrawVisualization // (Event|Public|BlueprintEvent|Const) // @ game+0xd67374
	void OnClearGeneratedContent(); // Function Procedural.ProceduralGeneratorContext.OnClearGeneratedContent // (Native|Event|Public|BlueprintEvent) // @ game+0x12fee80
	void GetOrCreateGeneratorContext(struct UProceduralGenerator* Generator, struct UProceduralGeneratorContext*& Context); // Function Procedural.ProceduralGeneratorContext.GetOrCreateGeneratorContext // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7136f30
	struct TArray<struct UProceduralGeneratorContext*> GetGeneratedContexts(); // Function Procedural.ProceduralGeneratorContext.GetGeneratedContexts // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7136dec
	bool Generate(); // Function Procedural.ProceduralGeneratorContext.Generate // (Final|Native|Public|BlueprintCallable) // @ game+0x7136da8
	void ClearGeneratedContent(); // Function Procedural.ProceduralGeneratorContext.ClearGeneratedContent // (Final|Native|Public|BlueprintCallable) // @ game+0x7136d08
};

// Class Procedural.ProceduralGeneratorStack
// Size: 0x48 (Inherited: 0x38)
struct UProceduralGeneratorStack : UProceduralGenerator {
	struct TArray<struct FProceduralGenerationStackElement> Generators; // 0x38(0x10)
};

// Class Procedural.ProceduralGeneratorStackContext
// Size: 0x58 (Inherited: 0x58)
struct UProceduralGeneratorStackContext : UProceduralGeneratorContext {
};

// Class Procedural.ProceduralLandscapeLayerMap
// Size: 0xc0 (Inherited: 0xb8)
struct UProceduralLandscapeLayerMap : UProceduralFloatDataMap {
	struct FName LandscapeLayerName; // 0xb8(0x04)
	struct FName LandscapeEditLayerName; // 0xbc(0x04)
};

// Class Procedural.ProceduralPointCloud
// Size: 0x38 (Inherited: 0x28)
struct UProceduralPointCloud : UObject {
	struct TArray<struct FProceduralPointCloudPoint> Points; // 0x28(0x10)

	struct TArray<struct FProceduralPointCloudPoint> GetPointsByTag(struct FName InTag); // Function Procedural.ProceduralPointCloud.GetPointsByTag // (Final|Native|Public|BlueprintCallable) // @ game+0x7137004
	void Empty(); // Function Procedural.ProceduralPointCloud.Empty // (Final|Native|Public|BlueprintCallable) // @ game+0x7136d1c
};

// Class Procedural.ProceduralRotationModifier
// Size: 0x38 (Inherited: 0x38)
struct UProceduralRotationModifier : UProceduralParameterModifier {
};

// Class Procedural.ProceduralRotationMapModifier
// Size: 0x60 (Inherited: 0x38)
struct UProceduralRotationMapModifier : UProceduralRotationModifier {
	struct UProceduralVectorDataMap* Map; // 0x38(0x08)
	enum class EProceduralRotationFormat RotationFormat; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	struct FFloatInterval Roll; // 0x44(0x08)
	struct FFloatInterval Pitch; // 0x4c(0x08)
	struct FFloatInterval Yaw; // 0x54(0x08)
	char pad_5C[0x4]; // 0x5c(0x04)

	void SetYawMin(float InValue); // Function Procedural.ProceduralRotationMapModifier.SetYawMin // (Final|Native|Public|BlueprintCallable) // @ game+0x71375ec
	void SetYawMax(float InValue); // Function Procedural.ProceduralRotationMapModifier.SetYawMax // (Final|Native|Public|BlueprintCallable) // @ game+0x713755c
	void SetRollMin(float InValue); // Function Procedural.ProceduralRotationMapModifier.SetRollMin // (Final|Native|Public|BlueprintCallable) // @ game+0x713770c
	void SetRollMax(float InValue); // Function Procedural.ProceduralRotationMapModifier.SetRollMax // (Final|Native|Public|BlueprintCallable) // @ game+0x713767c
	void SetPitchMin(float InValue); // Function Procedural.ProceduralRotationMapModifier.SetPitchMin // (Final|Native|Public|BlueprintCallable) // @ game+0x713728c
	void SetPitchMax(float InValue); // Function Procedural.ProceduralRotationMapModifier.SetPitchMax // (Final|Native|Public|BlueprintCallable) // @ game+0x71371fc
	float GetYawMin(); // Function Procedural.ProceduralRotationMapModifier.GetYawMin // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x713714c
	float GetYawMax(); // Function Procedural.ProceduralRotationMapModifier.GetYawMax // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7137138
	float GetRollMin(); // Function Procedural.ProceduralRotationMapModifier.GetRollMin // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7137160
	float GetRollMax(); // Function Procedural.ProceduralRotationMapModifier.GetRollMax // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x29ee8e4
	float GetPitchMin(); // Function Procedural.ProceduralRotationMapModifier.GetPitchMin // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x29ee8d0
	float GetPitchMax(); // Function Procedural.ProceduralRotationMapModifier.GetPitchMax // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x21f0244
};

// Class Procedural.ProceduralRotationNoiseModifier
// Size: 0x60 (Inherited: 0x38)
struct UProceduralRotationNoiseModifier : UProceduralRotationModifier {
	char bRandomRoll : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct FFloatInterval RandomRoll; // 0x3c(0x08)
	char bRandomPitch : 1; // 0x44(0x01)
	char pad_44_1 : 7; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	struct FFloatInterval RandomPitch; // 0x48(0x08)
	char bRandomYaw : 1; // 0x50(0x01)
	char pad_50_1 : 7; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	struct FFloatInterval RandomYaw; // 0x54(0x08)
	char pad_5C[0x4]; // 0x5c(0x04)

	void SetRandomYawMin(float InValue); // Function Procedural.ProceduralRotationNoiseModifier.SetRandomYawMin // (Final|Native|Public|BlueprintCallable) // @ game+0x71375ec
	void SetRandomYawMax(float InValue); // Function Procedural.ProceduralRotationNoiseModifier.SetRandomYawMax // (Final|Native|Public|BlueprintCallable) // @ game+0x713755c
	void SetRandomRollMin(float InValue); // Function Procedural.ProceduralRotationNoiseModifier.SetRandomRollMin // (Final|Native|Public|BlueprintCallable) // @ game+0x71374cc
	void SetRandomRollMax(float InValue); // Function Procedural.ProceduralRotationNoiseModifier.SetRandomRollMax // (Final|Native|Public|BlueprintCallable) // @ game+0x713743c
	void SetRandomPitchMin(float InValue); // Function Procedural.ProceduralRotationNoiseModifier.SetRandomPitchMin // (Final|Native|Public|BlueprintCallable) // @ game+0x71373ac
	void SetRandomPitchMax(float InValue); // Function Procedural.ProceduralRotationNoiseModifier.SetRandomPitchMax // (Final|Native|Public|BlueprintCallable) // @ game+0x713731c
	float GetRandomYawMin(); // Function Procedural.ProceduralRotationNoiseModifier.GetRandomYawMin // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x713714c
	float GetRandomYawMax(); // Function Procedural.ProceduralRotationNoiseModifier.GetRandomYawMax // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7137138
	float GetRandomRollMin(); // Function Procedural.ProceduralRotationNoiseModifier.GetRandomRollMin // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x267a9e8
	float GetRandomRollMax(); // Function Procedural.ProceduralRotationNoiseModifier.GetRandomRollMax // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7137124
	float GetRandomPitchMin(); // Function Procedural.ProceduralRotationNoiseModifier.GetRandomPitchMin // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x29ee8e4
	float GetRandomPitchMax(); // Function Procedural.ProceduralRotationNoiseModifier.GetRandomPitchMax // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x29ee8d0
};

// Class Procedural.ProceduralScaleModifier
// Size: 0x38 (Inherited: 0x38)
struct UProceduralScaleModifier : UProceduralParameterModifier {
};

// Class Procedural.ProceduralScaleMapModifier
// Size: 0x50 (Inherited: 0x38)
struct UProceduralScaleMapModifier : UProceduralScaleModifier {
	bool bRemapScale; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct FFloatInterval RemapScale; // 0x3c(0x08)
	char pad_44[0x4]; // 0x44(0x04)
	struct UProceduralFloatDataMap* Map; // 0x48(0x08)

	void SetRemapScaleMin(float InValue); // Function Procedural.ProceduralScaleMapModifier.SetRemapScaleMin // (Final|Native|Public|BlueprintCallable) // @ game+0x71374cc
	void SetRemapScaleMax(float InValue); // Function Procedural.ProceduralScaleMapModifier.SetRemapScaleMax // (Final|Native|Public|BlueprintCallable) // @ game+0x713743c
	float GetRemapScaleMin(); // Function Procedural.ProceduralScaleMapModifier.GetRemapScaleMin // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x267a9e8
	float GetRemapScaleMax(); // Function Procedural.ProceduralScaleMapModifier.GetRemapScaleMax // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7137124
};

// Class Procedural.ProceduralScaleNoiseModifier
// Size: 0x40 (Inherited: 0x38)
struct UProceduralScaleNoiseModifier : UProceduralScaleModifier {
	struct FFloatInterval Scale; // 0x38(0x08)

	void SetScaleMin(float InValue); // Function Procedural.ProceduralScaleNoiseModifier.SetScaleMin // (Final|Native|Public|BlueprintCallable) // @ game+0x7137ef4
	void SetScaleMax(float InValue); // Function Procedural.ProceduralScaleNoiseModifier.SetScaleMax // (Final|Native|Public|BlueprintCallable) // @ game+0x7137e64
	float GetScaleMin(); // Function Procedural.ProceduralScaleNoiseModifier.GetScaleMin // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5f34a3c
	float GetScaleMax(); // Function Procedural.ProceduralScaleNoiseModifier.GetScaleMax // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x267a9e8
};

// Class Procedural.ProceduralScatterContentVariation
// Size: 0xe8 (Inherited: 0x28)
struct UProceduralScatterContentVariation : UObject {
	float Weight; // 0x28(0x04)
	enum class EProceduralScatterContentPivotMode PivotMode; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	struct FVector AdditionalPivotOffset; // 0x30(0x18)
	float FootprintBoundingBoxRatio; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct TArray<struct FName> SetActorTags; // 0x50(0x10)
	char pad_60[0x88]; // 0x60(0x88)
};

// Class Procedural.ProceduralScatterActorContentVariation
// Size: 0xf0 (Inherited: 0xe8)
struct UProceduralScatterActorContentVariation : UProceduralScatterContentVariation {
	struct AActor* ActorClass; // 0xe8(0x08)
};

// Class Procedural.ProceduralScatterContentSettings
// Size: 0x68 (Inherited: 0x28)
struct UProceduralScatterContentSettings : UObject {
	struct TArray<struct FName> SetActorTags; // 0x28(0x10)
	struct TArray<struct UProceduralScatterContentVariation*> Variations; // 0x38(0x10)
	char pad_48[0x20]; // 0x48(0x20)
};

// Class Procedural.ProceduralScatterActorContentSettings
// Size: 0x70 (Inherited: 0x68)
struct UProceduralScatterActorContentSettings : UProceduralScatterContentSettings {
	bool bHideFromWorldOutliner; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class Procedural.ProceduralScatterGenerator
// Size: 0xd8 (Inherited: 0x38)
struct UProceduralScatterGenerator : UProceduralGenerator {
	enum class EProceduralScatterMethod ScatterMethod; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct FProceduralScatterTileSettings TileSettings; // 0x3c(0x14)
	int32_t RandomSeed; // 0x50(0x04)
	int32_t NumUniqueSourcePointPatterns; // 0x54(0x04)
	struct FVector2D GridSize; // 0x58(0x10)
	struct FVector2D GridJitter; // 0x68(0x10)
	float GridRotation; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct FVector2D GridOffset; // 0x80(0x10)
	struct TArray<struct FProceduralScatterSettingsElement> ScatterSettingsElements; // 0x90(0x10)
	struct TArray<struct FName> BlockingActorTags; // 0xa0(0x10)
	bool bAllScatterPointsBlocking; // 0xb0(0x01)
	bool bLocalDistribution; // 0xb1(0x01)
	char pad_B2[0x6]; // 0xb2(0x06)
	struct TArray<struct FName> BlockingScatterPointTags; // 0xb8(0x10)
	struct FProceduralScatterDebugSettings ScatterDebugSettings; // 0xc8(0x0c)
	char pad_D4[0x4]; // 0xd4(0x04)
};

// Class Procedural.ProceduralScatterGeneratorContext
// Size: 0x380 (Inherited: 0x58)
struct UProceduralScatterGeneratorContext : UProceduralGeneratorContext {
	struct FScatteredPointCloud ScatteredPointCloud; // 0x58(0x10)
	struct TArray<struct UProceduralScatterGeneratorTile*> UniqueTiles; // 0x68(0x10)
	struct TArray<struct FSourcePointGenerator> SourcePointGenerators; // 0x78(0x10)
	struct TArray<struct FProceduralScatterProjectionPoint> ProjectionPointCloud; // 0x88(0x10)
	struct UProceduralPointCloud* SourcePointCloud; // 0x98(0x08)
	struct UProceduralPointCloud* BlockerPointCloud; // 0xa0(0x08)
	struct UMaterialInstanceDynamic* ProjectionVectorMaterial; // 0xa8(0x08)
	char pad_B0[0x2d0]; // 0xb0(0x2d0)
};

// Class Procedural.ProceduralScatterGeneratorTile
// Size: 0x168 (Inherited: 0x28)
struct UProceduralScatterGeneratorTile : UObject {
	struct UProceduralScatterGenerator* Generator; // 0x28(0x08)
	struct TArray<struct FProceduralScatter2DPoint> GeneratedPoints; // 0x30(0x10)
	char pad_40[0x128]; // 0x40(0x128)
};

// Class Procedural.ProceduralScatterSettings
// Size: 0x1d8 (Inherited: 0x28)
struct UProceduralScatterSettings : UObject {
	struct UProceduralScatterContentSettings* Content; // 0x28(0x08)
	char bContentVariationsModifiersEnabled : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FProceduralContentVariationsModifiers ContentVariationsModifiers; // 0x38(0x10)
	struct TArray<struct FName> SetPointTags; // 0x48(0x10)
	float CollisionRadius; // 0x58(0x04)
	char bAutomaticCollisionRadius : 1; // 0x5c(0x01)
	char bUseSphericalBoundsForAutomaticCollisionRadius : 1; // 0x5c(0x01)
	char pad_5C_2 : 6; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	float AutomaticCollisionRadiusScaleFactor; // 0x60(0x04)
	int32_t DistributionSeed; // 0x64(0x04)
	char bDensityModifiersEnabled : 1; // 0x68(0x01)
	char pad_68_1 : 7; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct FProceduralDensityModifiers DensityModifiers; // 0x70(0x10)
	float Density; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
	struct TArray<struct FName> SourcePointTagIncludes; // 0x88(0x10)
	struct TArray<struct FName> SourcePointTagExcludes; // 0x98(0x10)
	struct TArray<struct FName> SourceActorTagIncludes; // 0xa8(0x10)
	struct TArray<struct FName> SourceActorTagExcludes; // 0xb8(0x10)
	struct TArray<struct FName> SourceComponentTagIncludes; // 0xc8(0x10)
	struct TArray<struct FName> SourceComponentTagExcludes; // 0xd8(0x10)
	struct FFloatInterval SourcePointDistance; // 0xe8(0x08)
	char bUseSourcePointExactNumber : 1; // 0xf0(0x01)
	char pad_F0_1 : 7; // 0xf0(0x01)
	char pad_F1[0x3]; // 0xf1(0x03)
	int32_t SourcePointExactNumber; // 0xf4(0x04)
	char bScaleModifiersEnabled : 1; // 0xf8(0x01)
	char pad_F8_1 : 7; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
	struct FProceduralScaleModifiers ScaleModifiers; // 0x100(0x20)
	char bRotationModifiersEnabled : 1; // 0x120(0x01)
	char pad_120_1 : 7; // 0x120(0x01)
	char pad_121[0x7]; // 0x121(0x07)
	struct FProceduralRotationModifiers RotationModifiers; // 0x128(0x10)
	char bAlignToNormal : 1; // 0x138(0x01)
	char pad_138_1 : 7; // 0x138(0x01)
	char pad_139[0x3]; // 0x139(0x03)
	float AlignMaxAngle; // 0x13c(0x04)
	struct FProceduralScatterTargetSurface TargetSurface; // 0x140(0x48)
	char bDetectOverhangingLedge : 1; // 0x188(0x01)
	char pad_188_1 : 7; // 0x188(0x01)
	char pad_189[0x3]; // 0x189(0x03)
	int32_t OverhangingLedgeDetectionRayCount; // 0x18c(0x04)
	float OverhangingLedgeDetectionLength; // 0x190(0x04)
	float OverhangingLedgeDetectionVerticalThreshold; // 0x194(0x04)
	float OverhangingLedgeDetectionRadiusScale; // 0x198(0x04)
	float FilterMinimumScale; // 0x19c(0x04)
	float OverlapPriority; // 0x1a0(0x04)
	char bCollisionWithWorld : 1; // 0x1a4(0x01)
	char pad_1A4_1 : 7; // 0x1a4(0x01)
	char pad_1A5[0x3]; // 0x1a5(0x03)
	struct FVector CollisionScale; // 0x1a8(0x18)
	struct FColor DebugColor; // 0x1c0(0x04)
	char pad_1C4[0x14]; // 0x1c4(0x14)

	void SetSourcePointDistanceMin(float InValue); // Function Procedural.ProceduralScatterSettings.SetSourcePointDistanceMin // (Final|Native|Public|BlueprintCallable) // @ game+0x713801c
	void SetSourcePointDistanceMax(float InValue); // Function Procedural.ProceduralScatterSettings.SetSourcePointDistanceMax // (Final|Native|Public|BlueprintCallable) // @ game+0x7137f84
	float GetSourcePointDistanceMin(); // Function Procedural.ProceduralScatterSettings.GetSourcePointDistanceMin // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7137e4c
	float GetSourcePointDistanceMax(); // Function Procedural.ProceduralScatterSettings.GetSourcePointDistanceMax // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7137e34
};

// Class Procedural.ProceduralScatterStaticMeshContentVariation
// Size: 0x168 (Inherited: 0xe8)
struct UProceduralScatterStaticMeshContentVariation : UProceduralScatterContentVariation {
	enum class EProceduralScatterStaticMeshMode StaticMeshMode; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
	struct UStaticMesh* Mesh; // 0xf0(0x08)
	struct AActor* ActorClass; // 0xf8(0x08)
	struct TArray<struct UMaterialInterface*> OverrideMaterials; // 0x100(0x10)
	struct UHISMBuilderSettings* OverrideInstancingSettings; // 0x110(0x08)
	char pad_118[0x50]; // 0x118(0x50)
};

// Class Procedural.ProceduralScatterStaticMeshContentSettings
// Size: 0x80 (Inherited: 0x68)
struct UProceduralScatterStaticMeshContentSettings : UProceduralScatterContentSettings {
	struct UFoliageInstancedStaticMeshComponent* ComponentClass; // 0x68(0x08)
	struct FName ComponentTag; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct UHISMBuilderSettings* VariationsInstancingSettings; // 0x78(0x08)
};

// Class Procedural.ProceduralSurfaceHeightMap
// Size: 0xc8 (Inherited: 0xb8)
struct UProceduralSurfaceHeightMap : UProceduralFloatDataMap {
	bool bNormalizedHeight; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	struct FFloatInterval HeightRange; // 0xbc(0x08)
	char pad_C4[0x4]; // 0xc4(0x04)

	void SetHeightRangeMin(float InValue); // Function Procedural.ProceduralSurfaceHeightMap.SetHeightRangeMin // (Final|Native|Public|BlueprintCallable) // @ game+0x7158c84
	void SetHeightRangeMax(float InValue); // Function Procedural.ProceduralSurfaceHeightMap.SetHeightRangeMax // (Final|Native|Public|BlueprintCallable) // @ game+0x7158bec
	float GetValue(float InHeight); // Function Procedural.ProceduralSurfaceHeightMap.GetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7158b58
	float GetHeightRangeMin(); // Function Procedural.ProceduralSurfaceHeightMap.GetHeightRangeMin // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6410088
	float GetHeightRangeMax(); // Function Procedural.ProceduralSurfaceHeightMap.GetHeightRangeMax // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x63d8708
};

// Class Procedural.ProceduralSurfaceSlopeAngleMap
// Size: 0xc8 (Inherited: 0xb8)
struct UProceduralSurfaceSlopeAngleMap : UProceduralFloatDataMap {
	bool bNormalizedSlopeAngle; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	struct FFloatInterval SlopeAngleRange; // 0xbc(0x08)
	char pad_C4[0x4]; // 0xc4(0x04)

	void SetSlopeAngleRangeMin(float InValue); // Function Procedural.ProceduralSurfaceSlopeAngleMap.SetSlopeAngleRangeMin // (Final|Native|Public|BlueprintCallable) // @ game+0x7158c84
	void SetSlopeAngleRangeMax(float InValue); // Function Procedural.ProceduralSurfaceSlopeAngleMap.SetSlopeAngleRangeMax // (Final|Native|Public|BlueprintCallable) // @ game+0x7158bec
	float GetValue(float InSlopeAngle); // Function Procedural.ProceduralSurfaceSlopeAngleMap.GetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7158b58
	float GetSlopeAngleRangeMin(); // Function Procedural.ProceduralSurfaceSlopeAngleMap.GetSlopeAngleRangeMin // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6410088
	float GetSlopeAngleRangeMax(); // Function Procedural.ProceduralSurfaceSlopeAngleMap.GetSlopeAngleRangeMax // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x63d8708
};

// Class Procedural.ProceduralTextureFloatMap
// Size: 0xf8 (Inherited: 0xb8)
struct UProceduralTextureFloatMap : UProceduralFloatDataMap {
	enum class EProceduralTextureColorChannel Channel; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
	struct FProceduralTextureSource Source; // 0xc0(0x38)
};

// Class Procedural.ProceduralTextureVectorMap
// Size: 0x270 (Inherited: 0x238)
struct UProceduralTextureVectorMap : UProceduralVectorDataMap {
	struct FProceduralTextureSource Source; // 0x238(0x38)
};

// Class Procedural.ProceduralVertexColorMap
// Size: 0xc0 (Inherited: 0xb8)
struct UProceduralVertexColorMap : UProceduralFloatDataMap {
	enum class EProceduralTextureColorChannel Channel; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
};

