// Enum CustomizableObject.ECustomizableObjectRelevancy
enum class ECustomizableObjectRelevancy : uint8 {
	All = 0,
	ClientOnly = 1,
	ECustomizableObjectRelevancy_MAX = 2
};

// Enum CustomizableObject.ECustomizableObjectCompilationState
enum class ECustomizableObjectCompilationState : uint8 {
	None = 0,
	InProgress = 1,
	Completed = 2,
	Failed = 3,
	ECustomizableObjectCompilationState_MAX = 4
};

// Enum CustomizableObject.EMutableParameterType
enum class EMutableParameterType : uint8 {
	None = 0,
	Bool = 1,
	Int = 2,
	Float = 3,
	Color = 4,
	Projector = 5,
	Texture = 6,
	EMutableParameterType_MAX = 7
};

// Enum CustomizableObject.ECustomizableObjectGroupType
enum class ECustomizableObjectGroupType : uint8 {
	COGT_TOGGLE = 0,
	COGT_ALL = 1,
	COGT_ONE = 2,
	COGT_ONE_OR_NONE = 3,
	COGT_MAX = 4
};

// Enum CustomizableObject.EMutableCompileMeshType
enum class EMutableCompileMeshType : uint8 {
	Full = 0,
	Local = 1,
	LocalAndChildren = 2,
	AddWorkingSetNoChildren = 3,
	AddWorkingSetAndChildren = 4,
	EMutableCompileMeshType_MAX = 5
};

// Enum CustomizableObject.ECustomizableObjectProjectorType
enum class ECustomizableObjectProjectorType : uint8 {
	Planar = 0,
	Cylindrical = 1,
	Wrapping = 2,
	ECustomizableObjectProjectorType_MAX = 3
};

// ScriptStruct CustomizableObject.GeneratedTexture
// Size: 0x20 (Inherited: 0x00)
struct FGeneratedTexture {
	int32_t ID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString Name; // 0x08(0x10)
	struct UTexture2D* Texture; // 0x18(0x08)
};

// ScriptStruct CustomizableObject.GeneratedMaterial
// Size: 0x10 (Inherited: 0x00)
struct FGeneratedMaterial {
	struct TArray<struct FGeneratedTexture> Textures; // 0x00(0x10)
};

// ScriptStruct CustomizableObject.ParameterDecorations
// Size: 0x10 (Inherited: 0x00)
struct FParameterDecorations {
	struct TArray<struct UTexture2D*> Images; // 0x00(0x10)
};

// ScriptStruct CustomizableObject.ReferencedPhysicsAssets
// Size: 0x20 (Inherited: 0x00)
struct FReferencedPhysicsAssets {
	char pad_0[0x10]; // 0x00(0x10)
	struct TArray<struct UPhysicsAsset*> PhysicsAssetsToMerge; // 0x10(0x10)
};

// ScriptStruct CustomizableObject.ReferencedSkeletons
// Size: 0x20 (Inherited: 0x00)
struct FReferencedSkeletons {
	struct TArray<int32_t> SkeletonsToLoad; // 0x00(0x10)
	struct TArray<struct USkeleton*> SkeletonsToMerge; // 0x10(0x10)
};

// ScriptStruct CustomizableObject.CustomizableInstanceComponentData
// Size: 0xb8 (Inherited: 0x00)
struct FCustomizableInstanceComponentData {
	char pad_0[0x8]; // 0x00(0x08)
	struct TMap<int32_t, struct TSoftClassPtr<UObject>> AnimSlotToBP; // 0x08(0x50)
	struct FReferencedSkeletons Skeletons; // 0x58(0x20)
	struct FReferencedPhysicsAssets PhysicsAssets; // 0x78(0x20)
	char pad_98[0x20]; // 0x98(0x20)
};

// ScriptStruct CustomizableObject.FParameterOptionsTags
// Size: 0x10 (Inherited: 0x00)
struct FFParameterOptionsTags {
	struct TArray<struct FString> Tags; // 0x00(0x10)
};

// ScriptStruct CustomizableObject.ParameterTags
// Size: 0x60 (Inherited: 0x00)
struct FParameterTags {
	struct TArray<struct FString> Tags; // 0x00(0x10)
	struct TMap<struct FString, struct FFParameterOptionsTags> ParameterOptions; // 0x10(0x50)
};

// ScriptStruct CustomizableObject.ProfileParameterDat
// Size: 0x70 (Inherited: 0x00)
struct FProfileParameterDat {
	struct FString ProfileName; // 0x00(0x10)
	struct TArray<struct FCustomizableObjectBoolParameterValue> BoolParameters; // 0x10(0x10)
	struct TArray<struct FCustomizableObjectIntParameterValue> IntParameters; // 0x20(0x10)
	struct TArray<struct FCustomizableObjectFloatParameterValue> FloatParameters; // 0x30(0x10)
	struct TArray<struct FCustomizableObjectTextureParameterValue> TextureParameters; // 0x40(0x10)
	struct TArray<struct FCustomizableObjectVectorParameterValue> VectorParameters; // 0x50(0x10)
	struct TArray<struct FCustomizableObjectProjectorParameterValue> ProjectorParameters; // 0x60(0x10)
};

// ScriptStruct CustomizableObject.CustomizableObjectProjectorParameterValue
// Size: 0x68 (Inherited: 0x00)
struct FCustomizableObjectProjectorParameterValue {
	struct FString ParameterName; // 0x00(0x10)
	struct FCustomizableObjectProjector Value; // 0x10(0x38)
	struct FString UID; // 0x48(0x10)
	struct TArray<struct FCustomizableObjectProjector> RangeValues; // 0x58(0x10)
};

// ScriptStruct CustomizableObject.CustomizableObjectProjector
// Size: 0x38 (Inherited: 0x00)
struct FCustomizableObjectProjector {
	struct FVector3f Position; // 0x00(0x0c)
	struct FVector3f Direction; // 0x0c(0x0c)
	struct FVector3f Up; // 0x18(0x0c)
	struct FVector3f Scale; // 0x24(0x0c)
	enum class ECustomizableObjectProjectorType ProjectionType; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float Angle; // 0x34(0x04)
};

// ScriptStruct CustomizableObject.CustomizableObjectVectorParameterValue
// Size: 0x30 (Inherited: 0x00)
struct FCustomizableObjectVectorParameterValue {
	struct FString ParameterName; // 0x00(0x10)
	struct FLinearColor ParameterValue; // 0x10(0x10)
	struct FString UID; // 0x20(0x10)
};

// ScriptStruct CustomizableObject.CustomizableObjectTextureParameterValue
// Size: 0x28 (Inherited: 0x00)
struct FCustomizableObjectTextureParameterValue {
	struct FString ParameterName; // 0x00(0x10)
	uint64_t ParameterValue; // 0x10(0x08)
	struct FString UID; // 0x18(0x10)
};

// ScriptStruct CustomizableObject.CustomizableObjectFloatParameterValue
// Size: 0x38 (Inherited: 0x00)
struct FCustomizableObjectFloatParameterValue {
	struct FString ParameterName; // 0x00(0x10)
	float ParameterValue; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString UID; // 0x18(0x10)
	struct TArray<float> ParameterRangeValues; // 0x28(0x10)
};

// ScriptStruct CustomizableObject.CustomizableObjectIntParameterValue
// Size: 0x40 (Inherited: 0x00)
struct FCustomizableObjectIntParameterValue {
	struct FString ParameterName; // 0x00(0x10)
	struct FString ParameterValueName; // 0x10(0x10)
	struct FString UID; // 0x20(0x10)
	struct TArray<struct FString> ParameterRangeValueNames; // 0x30(0x10)
};

// ScriptStruct CustomizableObject.CustomizableObjectBoolParameterValue
// Size: 0x28 (Inherited: 0x00)
struct FCustomizableObjectBoolParameterValue {
	struct FString ParameterName; // 0x00(0x10)
	bool ParameterValue; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString UID; // 0x18(0x10)
};

// ScriptStruct CustomizableObject.CompilationOptions
// Size: 0x20 (Inherited: 0x00)
struct FCompilationOptions {
	bool bTextureCompression; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t OptimizationLevel; // 0x04(0x04)
	bool bUseParallelCompilation; // 0x08(0x01)
	bool bUseDiskCompilation; // 0x09(0x01)
	char pad_A[0x16]; // 0x0a(0x16)
};

// ScriptStruct CustomizableObject.MutableModelImageProperties
// Size: 0x20 (Inherited: 0x00)
struct FMutableModelImageProperties {
	struct FString TextureParameterName; // 0x00(0x10)
	enum class TextureFilter Filter; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	char SRGB : 1; // 0x14(0x01)
	char FlipGreenChannel : 1; // 0x14(0x01)
	char pad_14_2 : 6; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	int32_t LODBias; // 0x18(0x04)
	enum class TextureGroup LODGroup; // 0x1c(0x01)
	enum class TextureAddress AddressX; // 0x1d(0x01)
	enum class TextureAddress AddressY; // 0x1e(0x01)
	char pad_1F[0x1]; // 0x1f(0x01)
};

// ScriptStruct CustomizableObject.MutableModelParameterValue
// Size: 0x18 (Inherited: 0x00)
struct FMutableModelParameterValue {
	struct FString Name; // 0x00(0x10)
	int32_t Value; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct CustomizableObject.MutableModelParameterProperties
// Size: 0x28 (Inherited: 0x00)
struct FMutableModelParameterProperties {
	char pad_0[0x10]; // 0x00(0x10)
	enum class EMutableParameterType Type; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32_t ImageDescriptionCount; // 0x14(0x04)
	struct TArray<struct FMutableModelParameterValue> PossibleValues; // 0x18(0x10)
};

// ScriptStruct CustomizableObject.MaskOutTexture
// Size: 0x18 (Inherited: 0x00)
struct FMaskOutTexture {
	int32_t SizeX; // 0x00(0x04)
	int32_t SizeY; // 0x04(0x04)
	struct TArray<uint32_t> Data; // 0x08(0x10)
};

// ScriptStruct CustomizableObject.MorphTargetInfo
// Size: 0x08 (Inherited: 0x00)
struct FMorphTargetInfo {
	struct FName Name; // 0x00(0x04)
	int32_t LodNum; // 0x04(0x04)
};

// ScriptStruct CustomizableObject.MorphTargetVertexData
// Size: 0x20 (Inherited: 0x00)
struct FMorphTargetVertexData {
	struct FVector3f PositionDelta; // 0x00(0x0c)
	struct FVector3f TangentZDelta; // 0x0c(0x0c)
	int32_t MorphIndex; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct CustomizableObject.CustomizableObjectMeshToMeshVertData
// Size: 0x40 (Inherited: 0x00)
struct FCustomizableObjectMeshToMeshVertData {
	float PositionBaryCoordsAndDist[0x4]; // 0x00(0x10)
	float NormalBaryCoordsAndDist[0x4]; // 0x10(0x10)
	float TangentBaryCoordsAndDist[0x4]; // 0x20(0x10)
	uint16_t SourceMeshVertIndices[0x4]; // 0x30(0x08)
	float Weight; // 0x38(0x04)
	int16_t SourceAssetIndex; // 0x3c(0x02)
	int16_t SourceAssetLodIndex; // 0x3e(0x02)
};

// ScriptStruct CustomizableObject.MutableStreamableBlock
// Size: 0x18 (Inherited: 0x00)
struct FMutableStreamableBlock {
	uint16_t FileIndex; // 0x00(0x02)
	char pad_2[0x6]; // 0x02(0x06)
	uint64_t Offset; // 0x08(0x08)
	uint32_t Size; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct CustomizableObject.MutableRefSkeletalMeshData
// Size: 0x100 (Inherited: 0x00)
struct FMutableRefSkeletalMeshData {
	char pad_0[0x60]; // 0x00(0x60)
	struct TSoftObjectPtr<USkeleton> Skeleton; // 0x60(0x28)
	struct TSoftObjectPtr<UPhysicsAsset> PhysicsAsset; // 0x88(0x28)
	struct TSoftClassPtr<UObject> PostProcessAnimInst; // 0xb0(0x28)
	struct TSoftObjectPtr<UPhysicsAsset> ShadowPhysicsAsset; // 0xd8(0x28)
};

// ScriptStruct CustomizableObject.MutableLODSettings
// Size: 0x10 (Inherited: 0x00)
struct FMutableLODSettings {
	int32_t NumLODsInRoot; // 0x00(0x04)
	int32_t FirstLODAvailable; // 0x04(0x04)
	bool bLODStreamingEnabled; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	uint32_t NumLODsToStream; // 0x0c(0x04)
};

// ScriptStruct CustomizableObject.CustomizableObjectClothConfigData
// Size: 0x28 (Inherited: 0x00)
struct FCustomizableObjectClothConfigData {
	struct FString ClassPath; // 0x00(0x10)
	struct FName ConfigName; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<char> ConfigBytes; // 0x18(0x10)
};

// ScriptStruct CustomizableObject.CustomizableObjectClothingAssetData
// Size: 0x80 (Inherited: 0x00)
struct FCustomizableObjectClothingAssetData {
	struct TArray<struct FClothLODDataCommon> LodData; // 0x00(0x10)
	struct TArray<int32_t> LodMap; // 0x10(0x10)
	struct TArray<struct FName> UsedBoneNames; // 0x20(0x10)
	struct TArray<int32_t> UsedBoneIndices; // 0x30(0x10)
	int32_t ReferenceBoneIndex; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct TArray<struct FCustomizableObjectClothConfigData> ConfigsData; // 0x48(0x10)
	struct FString PhysicsAssetPath; // 0x58(0x10)
	struct FName Name; // 0x68(0x04)
	struct FGuid OriginalAssetGuid; // 0x6c(0x10)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// ScriptStruct CustomizableObject.CustomizableObjectIdPair
// Size: 0x20 (Inherited: 0x00)
struct FCustomizableObjectIdPair {
	struct FString CustomizableObjectGroupName; // 0x00(0x10)
	struct FString CustomizableObjectName; // 0x10(0x10)
};

// ScriptStruct CustomizableObject.CustomizableObjectIdentifier
// Size: 0x30 (Inherited: 0x00)
struct FCustomizableObjectIdentifier {
	struct FString CustomizableObjectGroupName; // 0x00(0x10)
	struct FString CustomizableObjectName; // 0x10(0x10)
	struct FString Guid; // 0x20(0x10)
};

// ScriptStruct CustomizableObject.CustomizedMaterialTexture2D
// Size: 0x10 (Inherited: 0x00)
struct FCustomizedMaterialTexture2D {
	struct FName Name; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UTexture2D* Texture; // 0x08(0x08)
};

// ScriptStruct CustomizableObject.PendingReleaseSkeletalMeshInfo
// Size: 0x10 (Inherited: 0x00)
struct FPendingReleaseSkeletalMeshInfo {
	struct USkeletalMesh* SkeletalMesh; // 0x00(0x08)
	double Timestamp; // 0x08(0x08)
};

// ScriptStruct CustomizableObject.MutableParamUIMetadata
// Size: 0xf8 (Inherited: 0x00)
struct FMutableParamUIMetadata {
	struct FString ObjectFriendlyName; // 0x00(0x10)
	struct FString UISectionName; // 0x10(0x10)
	int32_t UIOrder; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct TSoftObjectPtr<UTexture2D> UIThumbnail; // 0x28(0x28)
	struct TMap<struct FString, struct FString> ExtraInformation; // 0x50(0x50)
	struct TMap<struct FString, struct TSoftObjectPtr<UObject>> ExtraAssets; // 0xa0(0x50)
	float MinimumValue; // 0xf0(0x04)
	float MaximumValue; // 0xf4(0x04)
};

// ScriptStruct CustomizableObject.IntegerParameterUIData
// Size: 0x108 (Inherited: 0x00)
struct FIntegerParameterUIData {
	struct FString Name; // 0x00(0x10)
	struct FMutableParamUIMetadata ParamUIMetadata; // 0x10(0xf8)
};

// ScriptStruct CustomizableObject.ParameterUIData
// Size: 0x178 (Inherited: 0x00)
struct FParameterUIData {
	struct FString Name; // 0x00(0x10)
	struct FMutableParamUIMetadata ParamUIMetadata; // 0x10(0xf8)
	enum class EMutableParameterType Type; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
	struct TArray<struct FIntegerParameterUIData> ArrayIntegerParameterOption; // 0x110(0x10)
	enum class ECustomizableObjectGroupType IntegerParameterGroupType; // 0x120(0x01)
	bool bDontCompressRuntimeTextures; // 0x121(0x01)
	char pad_122[0x6]; // 0x122(0x06)
	struct TMap<struct FString, struct FString> ForcedParameterValues; // 0x128(0x50)
};

// ScriptStruct CustomizableObject.MultilayerProjectorLayer
// Size: 0x80 (Inherited: 0x00)
struct FMultilayerProjectorLayer {
	char pad_0[0x80]; // 0x00(0x80)
};

// ScriptStruct CustomizableObject.MultilayerProjectorVirtualLayer
// Size: 0x88 (Inherited: 0x80)
struct FMultilayerProjectorVirtualLayer : FMultilayerProjectorLayer {
	char pad_80[0x8]; // 0x80(0x08)
};

// ScriptStruct CustomizableObject.MultilayerProjector
// Size: 0x100 (Inherited: 0x00)
struct FMultilayerProjector {
	struct UCustomizableObjectInstance* Instance; // 0x00(0x08)
	struct FName ParamName; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TMap<struct FName, int32_t> VirtualLayersMapping; // 0x10(0x50)
	struct TMap<struct FName, int32_t> VirtualLayersOrder; // 0x60(0x50)
	struct TMap<struct FName, struct FMultilayerProjectorLayer> DisableVirtualLayers; // 0xb0(0x50)
};

