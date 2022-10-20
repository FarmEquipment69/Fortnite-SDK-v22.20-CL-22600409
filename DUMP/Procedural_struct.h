// Enum Procedural.EProceduralParameterModifierBlendMode
enum class EProceduralParameterModifierBlendMode : uint8 {
	Min = 0,
	Max = 1,
	Additive = 2,
	Subtractive = 3,
	Multiply = 4,
	Interpolate = 5
};

// Enum Procedural.EProceduralRotationFormat
enum class EProceduralRotationFormat : uint8 {
	VectorXAxis = 0,
	VectorXAxisNegative = 1,
	VectorYAxis = 2,
	VectorYAxisNegative = 3,
	VectorZAxis = 4,
	VectorZAxisNegative = 5,
	Vector2DXAxis = 6,
	Vector2DXAxisNegative = 7,
	Vector2DYAxis = 8,
	Vector2DYAxisNegative = 9,
	Vector2DZAxis = 10,
	Vector2DZAxisNegative = 11,
	RangedRotator = 12,
	EProceduralRotationFormat_MAX = 13
};

// Enum Procedural.EProceduralScatterContentPivotMode
enum class EProceduralScatterContentPivotMode : uint8 {
	UsePivot = 0,
	UseBoundingBoxCenter = 1,
	UseBoundingBoxBottomCenter = 2,
	UseFootprintBoundingBoxBottomCenter = 3,
	EProceduralScatterContentPivotMode_MAX = 4
};

// Enum Procedural.EProceduralScatterTileRandomGenerator
enum class EProceduralScatterTileRandomGenerator : uint8 {
	PseudoRandom = 0,
	HaltonSequence = 1,
	EProceduralScatterTileRandomGenerator_MAX = 2
};

// Enum Procedural.EProceduralScatterMethod
enum class EProceduralScatterMethod : uint8 {
	Density = 0,
	SourcePoints = 1,
	Grid = 2,
	EProceduralScatterMethod_MAX = 3
};

// Enum Procedural.EProceduralScatterStaticMeshMode
enum class EProceduralScatterStaticMeshMode : uint8 {
	FromStaticMesh = 0,
	FromActor = 1,
	EProceduralScatterStaticMeshMode_MAX = 2
};

// Enum Procedural.EProceduralTextureColorChannel
enum class EProceduralTextureColorChannel : uint8 {
	Red = 0,
	Green = 1,
	Blue = 2,
	Alpha = 3,
	EProceduralTextureColorChannel_MAX = 4
};

// ScriptStruct Procedural.ProceduralContentVariationMap
// Size: 0x18 (Inherited: 0x00)
struct FProceduralContentVariationMap {
	int32_t VariationIndex; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UProceduralFloatDataMap* Map; // 0x08(0x08)
	float Weight; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Procedural.ProceduralRemapFloatCurve
// Size: 0x88 (Inherited: 0x00)
struct FProceduralRemapFloatCurve {
	struct FRuntimeFloatCurve RemapCurve; // 0x00(0x88)
};

// ScriptStruct Procedural.ProceduralRemapVectorCurve
// Size: 0x208 (Inherited: 0x00)
struct FProceduralRemapVectorCurve {
	struct FRuntimeCurveLinearColor RemapCurve; // 0x00(0x208)
};

// ScriptStruct Procedural.ProceduralDebugSettings
// Size: 0x0c (Inherited: 0x00)
struct FProceduralDebugSettings {
	bool bShowDebugPointCloud; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FColor DebugPointColor; // 0x04(0x04)
	float DebugCullingDistance; // 0x08(0x04)
};

// ScriptStruct Procedural.ProceduralGenerationStackElement
// Size: 0x10 (Inherited: 0x00)
struct FProceduralGenerationStackElement {
	bool bEnabled; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UProceduralGenerator* Generator; // 0x08(0x08)
};

// ScriptStruct Procedural.ProceduralHitPoint
// Size: 0x40 (Inherited: 0x00)
struct FProceduralHitPoint {
	bool bIsTraceDone; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FVector Position; // 0x08(0x18)
	struct FVector Normal; // 0x20(0x18)
	struct TWeakObjectPtr<struct UPrimitiveComponent> Component; // 0x38(0x08)
};

// ScriptStruct Procedural.ProceduralPointCloudPoint
// Size: 0xb0 (Inherited: 0x00)
struct FProceduralPointCloudPoint {
	struct FTransform Transform; // 0x00(0x60)
	struct FVector SurfaceNormal; // 0x60(0x18)
	struct UObject* SurfaceObject; // 0x78(0x08)
	struct UObject* Object; // 0x80(0x08)
	int32_t ObjectVariation; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct TArray<struct FName> Tags; // 0x90(0x10)
	float CollisionRadius; // 0xa0(0x04)
	float SourcePointGeneratorIndex; // 0xa4(0x04)
	char pad_A8[0x8]; // 0xa8(0x08)
};

// ScriptStruct Procedural.ProceduralScatter2DPoint
// Size: 0x60 (Inherited: 0x00)
struct FProceduralScatter2DPoint {
	struct FVector Location; // 0x00(0x18)
	float Scale; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct UProceduralScatterSettings* ScatterSettings; // 0x20(0x08)
	struct FBox2D MaxAABB; // 0x28(0x28)
	float CollisionRadius; // 0x50(0x04)
	bool bBlocker; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	int32_t RandomNumber; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct Procedural.ProceduralScatterSettingsElement
// Size: 0x18 (Inherited: 0x00)
struct FProceduralScatterSettingsElement {
	bool bEnabled; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UProceduralScatterSettings* ScatterSettings; // 0x08(0x08)
	int32_t MaxPoints; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Procedural.ProceduralScatterDebugSettings
// Size: 0x0c (Inherited: 0x00)
struct FProceduralScatterDebugSettings {
	bool bShowDebugPlane; // 0x00(0x01)
	bool bShowDebugTrace; // 0x01(0x01)
	bool bShowDebugFootprint; // 0x02(0x01)
	bool bShowDebugHitNormal; // 0x03(0x01)
	bool bShowDebugPoints; // 0x04(0x01)
	bool bShowDebugPivots; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	float DebugMaxCullingDistance; // 0x08(0x04)
};

// ScriptStruct Procedural.ProceduralScatterTileSettings
// Size: 0x14 (Inherited: 0x00)
struct FProceduralScatterTileSettings {
	int32_t NumUniqueTiles; // 0x00(0x04)
	float TileSize; // 0x04(0x04)
	float TileOverlapPercentage; // 0x08(0x04)
	float MinimumQuadTreeSize; // 0x0c(0x04)
	enum class EProceduralScatterTileRandomGenerator RandomGenerator; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct Procedural.SourcePointGenerator
// Size: 0x18 (Inherited: 0x00)
struct FSourcePointGenerator {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Procedural.ScatteredPointCloud
// Size: 0x10 (Inherited: 0x00)
struct FScatteredPointCloud {
	struct TArray<struct FProceduralScatterPoint> Points; // 0x00(0x10)
};

// ScriptStruct Procedural.ProceduralScatterPoint
// Size: 0xa0 (Inherited: 0x00)
struct FProceduralScatterPoint {
	struct FVector Location; // 0x00(0x18)
	struct FRotator Rotation; // 0x18(0x18)
	float Scale; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct UProceduralScatterSettings* ScatterSettings; // 0x38(0x08)
	int32_t VariationIdx; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FVector GenerationLocation; // 0x48(0x18)
	struct FProceduralHitPoint HitPoint; // 0x60(0x40)
};

// ScriptStruct Procedural.ProceduralScatterProjectionPoint
// Size: 0xc0 (Inherited: 0x00)
struct FProceduralScatterProjectionPoint {
	struct FVector GenerationLocation; // 0x00(0x18)
	struct FRotator Rotation; // 0x18(0x18)
	float Scale; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct UProceduralScatterSettings* ScatterSettings; // 0x38(0x08)
	int32_t VariationIdx; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FVector StartTrace; // 0x48(0x18)
	struct FVector EndTrace; // 0x60(0x18)
	struct FProceduralHitPoint HitPoint; // 0x78(0x40)
	char pad_B8[0x8]; // 0xb8(0x08)
};

// ScriptStruct Procedural.ProceduralScatterTargetSurface
// Size: 0x48 (Inherited: 0x00)
struct FProceduralScatterTargetSurface {
	bool bAllowLandscape; // 0x00(0x01)
	bool bAllowBSP; // 0x01(0x01)
	bool bAllowStaticMesh; // 0x02(0x01)
	bool bAllowTranslucent; // 0x03(0x01)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FName> AllowedActorTags; // 0x08(0x10)
	struct TArray<struct FName> DisallowedActorTags; // 0x18(0x10)
	struct TArray<struct FName> AllowedComponentTags; // 0x28(0x10)
	struct TArray<struct FName> DisallowedComponentTags; // 0x38(0x10)
};

// ScriptStruct Procedural.ProceduralContentVariationsModifiers
// Size: 0x10 (Inherited: 0x00)
struct FProceduralContentVariationsModifiers {
	struct TArray<struct UProceduralContentVariationsWeightsModifier*> Modifiers; // 0x00(0x10)
};

// ScriptStruct Procedural.ProceduralDensityModifiers
// Size: 0x10 (Inherited: 0x00)
struct FProceduralDensityModifiers {
	struct TArray<struct UProceduralDensityModifier*> Modifiers; // 0x00(0x10)
};

// ScriptStruct Procedural.ProceduralScaleModifiers
// Size: 0x20 (Inherited: 0x00)
struct FProceduralScaleModifiers {
	bool bRandomScaleEnabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FFloatInterval RandomScale; // 0x04(0x08)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct UProceduralScaleModifier*> Modifiers; // 0x10(0x10)
};

// ScriptStruct Procedural.ProceduralRotationModifiers
// Size: 0x10 (Inherited: 0x00)
struct FProceduralRotationModifiers {
	struct TArray<struct UProceduralRotationModifier*> Modifiers; // 0x00(0x10)
};

// ScriptStruct Procedural.ProceduralTextureSource
// Size: 0x38 (Inherited: 0x00)
struct FProceduralTextureSource {
	bool bUseRenderTarget; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UTexture2D* Texture; // 0x08(0x08)
	struct UTextureRenderTarget2D* RenderTarget; // 0x10(0x08)
	struct UMaterialInterface* RenderTargetMaterial; // 0x18(0x08)
	bool bStretchToFit; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float TexelSize; // 0x24(0x04)
	float XOffset; // 0x28(0x04)
	float YOffset; // 0x2c(0x04)
	float Rotation; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

