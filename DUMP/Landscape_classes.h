// Class Landscape.LandscapeBlueprintBrushBase
// Size: 0x288 (Inherited: 0x288)
struct ALandscapeBlueprintBrushBase : AActor {

	void RequestLandscapeUpdate(); // Function Landscape.LandscapeBlueprintBrushBase.RequestLandscapeUpdate // (Final|Native|Public|BlueprintCallable) // @ game+0x24841e4
	struct UTextureRenderTarget2D* Render(bool InIsHeightmap, struct UTextureRenderTarget2D* InCombinedResult, struct FName& InWeightmapLayerName); // Function Landscape.LandscapeBlueprintBrushBase.Render // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x8f75e94
	void Initialize(struct FTransform& InLandscapeTransform, struct FIntPoint& InLandscapeSize, struct FIntPoint& InLandscapeRenderTargetSize); // Function Landscape.LandscapeBlueprintBrushBase.Initialize // (Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent) // @ game+0x8f75d04
	void GetBlueprintRenderDependencies(struct TArray<struct UObject*>& OutStreamableAssets); // Function Landscape.LandscapeBlueprintBrushBase.GetBlueprintRenderDependencies // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
};

// Class Landscape.ControlPointMeshActor
// Size: 0x290 (Inherited: 0x288)
struct AControlPointMeshActor : AActor {
	struct UControlPointMeshComponent* ControlPointMeshComponent; // 0x288(0x08)
};

// Class Landscape.ControlPointMeshComponent
// Size: 0x600 (Inherited: 0x5f0)
struct UControlPointMeshComponent : UStaticMeshComponent {
	float VirtualTextureMainPassMaxDrawDistance; // 0x5f0(0x04)
	char pad_5F4[0xc]; // 0x5f4(0x0c)
};

// Class Landscape.LandscapeSplineInterface
// Size: 0x28 (Inherited: 0x28)
struct ULandscapeSplineInterface : UInterface {
};

// Class Landscape.LandscapeProxy
// Size: 0x5d8 (Inherited: 0x288)
struct ALandscapeProxy : APartitionActor {
	char pad_288[0x8]; // 0x288(0x08)
	struct ULandscapeSplinesComponent* SplineComponent; // 0x290(0x08)
	struct FGuid LandscapeGuid; // 0x298(0x10)
	struct TArray<struct FLandscapePerLODMaterialOverride> PerLODOverrideMaterials; // 0x2a8(0x10)
	struct FIntPoint LandscapeSectionOffset; // 0x2b8(0x08)
	int32_t MaxLODLevel; // 0x2c0(0x04)
	float ComponentScreenSizeToUseSubSections; // 0x2c4(0x04)
	float Lod0ScreenSize; // 0x2c8(0x04)
	float LOD0DistributionSetting; // 0x2cc(0x04)
	float LODDistributionSetting; // 0x2d0(0x04)
	int32_t StaticLightingLOD; // 0x2d4(0x04)
	struct UPhysicalMaterial* DefaultPhysMaterial; // 0x2d8(0x08)
	float StreamingDistanceMultiplier; // 0x2e0(0x04)
	char pad_2E4[0x4]; // 0x2e4(0x04)
	struct UMaterialInterface* LandscapeMaterial; // 0x2e8(0x08)
	char pad_2F0[0x20]; // 0x2f0(0x20)
	struct UMaterialInterface* LandscapeHoleMaterial; // 0x310(0x08)
	bool bMeshHoles; // 0x318(0x01)
	char MeshHolesMaxLod; // 0x319(0x01)
	char pad_31A[0x6]; // 0x31a(0x06)
	struct TArray<struct URuntimeVirtualTexture*> RuntimeVirtualTextures; // 0x320(0x10)
	bool bSetCreateRuntimeVirtualTextureVolumes; // 0x330(0x01)
	char pad_331[0x3]; // 0x331(0x03)
	int32_t VirtualTextureNumLods; // 0x334(0x04)
	int32_t VirtualTextureLodBias; // 0x338(0x04)
	enum class ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; // 0x33c(0x01)
	char pad_33D[0x3]; // 0x33d(0x03)
	float NegativeZBoundsExtension; // 0x340(0x04)
	float PositiveZBoundsExtension; // 0x344(0x04)
	struct TArray<struct ULandscapeComponent*> LandscapeComponents; // 0x348(0x10)
	struct TArray<struct ULandscapeHeightfieldCollisionComponent*> CollisionComponents; // 0x358(0x10)
	struct TArray<struct UHierarchicalInstancedStaticMeshComponent*> FoliageComponents; // 0x368(0x10)
	struct ULandscapeNaniteComponent* NaniteComponent; // 0x378(0x08)
	char pad_380[0x64]; // 0x380(0x64)
	bool bHasLandscapeGrass; // 0x3e4(0x01)
	char pad_3E5[0x3]; // 0x3e5(0x03)
	float StaticLightingResolution; // 0x3e8(0x04)
	char CastShadow : 1; // 0x3ec(0x01)
	char bCastDynamicShadow : 1; // 0x3ec(0x01)
	char bCastStaticShadow : 1; // 0x3ec(0x01)
	char bCastContactShadow : 1; // 0x3ec(0x01)
	char pad_3EC_4 : 4; // 0x3ec(0x01)
	char pad_3ED[0x3]; // 0x3ed(0x03)
	char bCastFarShadow : 1; // 0x3f0(0x01)
	char pad_3F0_1 : 7; // 0x3f0(0x01)
	char pad_3F1[0x3]; // 0x3f1(0x03)
	char bCastHiddenShadow : 1; // 0x3f4(0x01)
	char pad_3F4_1 : 7; // 0x3f4(0x01)
	char pad_3F5[0x3]; // 0x3f5(0x03)
	char bCastShadowAsTwoSided : 1; // 0x3f8(0x01)
	char pad_3F8_1 : 7; // 0x3f8(0x01)
	char pad_3F9[0x3]; // 0x3f9(0x03)
	char bAffectDistanceFieldLighting : 1; // 0x3fc(0x01)
	char pad_3FC_1 : 7; // 0x3fc(0x01)
	struct FLightingChannels LightingChannels; // 0x3fd(0x01)
	char pad_3FE[0x2]; // 0x3fe(0x02)
	char bUseMaterialPositionOffsetInStaticLighting : 1; // 0x400(0x01)
	char bRenderCustomDepth : 1; // 0x400(0x01)
	char pad_400_2 : 6; // 0x400(0x01)
	char pad_401[0x3]; // 0x401(0x03)
	enum class ERendererStencilMask CustomDepthStencilWriteMask; // 0x404(0x01)
	char pad_405[0x3]; // 0x405(0x03)
	int32_t CustomDepthStencilValue; // 0x408(0x04)
	float LDMaxDrawDistance; // 0x40c(0x04)
	struct FLightmassPrimitiveSettings LightmassSettings; // 0x410(0x18)
	int32_t CollisionMipLevel; // 0x428(0x04)
	int32_t SimpleCollisionMipLevel; // 0x42c(0x04)
	float CollisionThickness; // 0x430(0x04)
	char pad_434[0x4]; // 0x434(0x04)
	struct FBodyInstance BodyInstance; // 0x438(0x188)
	char bGenerateOverlapEvents : 1; // 0x5c0(0x01)
	char bBakeMaterialPositionOffsetIntoCollision : 1; // 0x5c0(0x01)
	char pad_5C0_2 : 6; // 0x5c0(0x01)
	char pad_5C1[0x3]; // 0x5c1(0x03)
	int32_t ComponentSizeQuads; // 0x5c4(0x04)
	int32_t SubsectionSizeQuads; // 0x5c8(0x04)
	int32_t NumSubsections; // 0x5cc(0x04)
	char bUsedForNavigation : 1; // 0x5d0(0x01)
	char bFillCollisionUnderLandscapeForNavmesh : 1; // 0x5d0(0x01)
	char pad_5D0_2 : 6; // 0x5d0(0x01)
	char pad_5D1[0x3]; // 0x5d1(0x03)
	bool bUseDynamicMaterialInstance; // 0x5d4(0x01)
	enum class ENavDataGatheringMode NavigationGeometryGatheringMode; // 0x5d5(0x01)
	bool bUseLandscapeForCullingInvisibleHLODVertices; // 0x5d6(0x01)
	bool bHasLayersContent; // 0x5d7(0x01)

	void SetVirtualTextureRenderPassType(enum class ERuntimeVirtualTextureMainPassType InType); // Function Landscape.LandscapeProxy.SetVirtualTextureRenderPassType // (Final|Native|Public|BlueprintCallable) // @ game+0x8f76db4
	void SetLandscapeMaterialVectorParameterValue(struct FName ParameterName, struct FLinearColor Value); // Function Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x8f76cec
	void SetLandscapeMaterialTextureParameterValue(struct FName ParameterName, struct UTexture* Value); // Function Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x8f76c28
	void SetLandscapeMaterialScalarParameterValue(struct FName ParameterName, float Value); // Function Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x8f76b60
	bool LandscapeExportHeightmapToRenderTarget(struct UTextureRenderTarget2D* InRenderTarget, bool InExportHeightIntoRGChannel, bool InExportLandscapeProxies); // Function Landscape.LandscapeProxy.LandscapeExportHeightmapToRenderTarget // (Final|Native|Public|BlueprintCallable) // @ game+0x8f76a7c
	struct ALandscape* GetLandscapeActor(); // Function Landscape.LandscapeProxy.GetLandscapeActor // (Native|Public|BlueprintCallable) // @ game+0x8f768a8
	void EditorSetLandscapeMaterial(struct UMaterialInterface* NewLandscapeMaterial); // Function Landscape.LandscapeProxy.EditorSetLandscapeMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0x64a2a4c
	void EditorApplySpline(struct USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int32_t NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, struct ULandscapeLayerInfoObject* PaintLayer, struct FName EditLayerName); // Function Landscape.LandscapeProxy.EditorApplySpline // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x8f765ac
	void ChangeLODDistanceFactor(float InLODDistanceFactor); // Function Landscape.LandscapeProxy.ChangeLODDistanceFactor // (Native|Public|BlueprintCallable) // @ game+0x6a083ac
	void ChangeComponentScreenSizeToUseSubSections(float InComponentScreenSizeToUseSubSections); // Function Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections // (Native|Public|BlueprintCallable) // @ game+0x8f76524
};

// Class Landscape.Landscape
// Size: 0x5d8 (Inherited: 0x5d8)
struct ALandscape : ALandscapeProxy {

	void RenderHeightmap(struct FTransform& InWorldTransform, struct FBox2D& InExtents, struct UTextureRenderTarget2D* OutRenderTarget); // Function Landscape.Landscape.RenderHeightmap // (Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x8f75fb0
};

// Class Landscape.LandscapeLODStreamingProxy
// Size: 0xd8 (Inherited: 0xd0)
struct ULandscapeLODStreamingProxy : UStreamableRenderAsset {
	char pad_D0[0x8]; // 0xd0(0x08)
};

// Class Landscape.LandscapeComponent
// Size: 0x790 (Inherited: 0x530)
struct ULandscapeComponent : UPrimitiveComponent {
	int32_t SectionBaseX; // 0x530(0x04)
	int32_t SectionBaseY; // 0x534(0x04)
	int32_t ComponentSizeQuads; // 0x538(0x04)
	int32_t SubsectionSizeQuads; // 0x53c(0x04)
	int32_t NumSubsections; // 0x540(0x04)
	char pad_544[0x4]; // 0x544(0x04)
	struct UMaterialInterface* OverrideMaterial; // 0x548(0x08)
	struct UMaterialInterface* OverrideHoleMaterial; // 0x550(0x08)
	struct TArray<struct UMaterialInstanceConstant*> MaterialInstances; // 0x558(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> MaterialInstancesDynamic; // 0x568(0x10)
	struct TArray<int8_t> LODIndexToMaterialIndex; // 0x578(0x10)
	struct UTexture2D* XYOffsetmapTexture; // 0x588(0x08)
	struct FVector4 WeightmapScaleBias; // 0x590(0x20)
	float WeightmapSubsectionOffset; // 0x5b0(0x04)
	char pad_5B4[0xc]; // 0x5b4(0x0c)
	struct FVector4 HeightmapScaleBias; // 0x5c0(0x20)
	struct FBox CachedLocalBox; // 0x5e0(0x38)
	LazyObjectProperty CollisionComponent; // 0x618(0x1c)
	bool bNaniteActive; // 0x634(0x01)
	char pad_635[0x3]; // 0x635(0x03)
	struct UTexture2D* HeightmapTexture; // 0x638(0x08)
	struct TArray<struct FWeightmapLayerAllocationInfo> WeightmapLayerAllocations; // 0x640(0x10)
	struct TArray<struct UTexture2D*> WeightmapTextures; // 0x650(0x10)
	struct ULandscapeLODStreamingProxy* LODStreamingProxy; // 0x660(0x08)
	struct TArray<struct FLandscapePerLODMaterialOverride> PerLODOverrideMaterials; // 0x668(0x10)
	struct FGuid MapBuildDataId; // 0x678(0x10)
	struct TArray<struct FGuid> IrrelevantLights; // 0x688(0x10)
	int32_t CollisionMipLevel; // 0x698(0x04)
	int32_t SimpleCollisionMipLevel; // 0x69c(0x04)
	float NegativeZBoundsExtension; // 0x6a0(0x04)
	float PositiveZBoundsExtension; // 0x6a4(0x04)
	float StaticLightingResolution; // 0x6a8(0x04)
	int32_t ForcedLOD; // 0x6ac(0x04)
	int32_t LODBias; // 0x6b0(0x04)
	struct FGuid StateId; // 0x6b4(0x10)
	struct FGuid BakedTextureMaterialGuid; // 0x6c4(0x10)
	struct FGuid LastBakedTextureMaterialGuid; // 0x6d4(0x10)
	char pad_6E4[0x4]; // 0x6e4(0x04)
	struct UTexture2D* GIBakedBaseColorTexture; // 0x6e8(0x08)
	char MobileBlendableLayerMask; // 0x6f0(0x01)
	char pad_6F1[0x7]; // 0x6f1(0x07)
	struct UMaterialInterface* MobileMaterialInterface; // 0x6f8(0x08)
	struct TArray<struct UMaterialInterface*> MobileMaterialInterfaces; // 0x700(0x10)
	struct TArray<struct UTexture2D*> MobileWeightmapTextures; // 0x710(0x10)
	char pad_720[0x70]; // 0x720(0x70)

	void SetLODBias(int32_t InLODBias); // Function Landscape.LandscapeComponent.SetLODBias // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x8f761b4
	void SetForcedLOD(int32_t InForcedLOD); // Function Landscape.LandscapeComponent.SetForcedLOD // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x8f76134
	struct UMaterialInstanceDynamic* GetMaterialInstanceDynamic(int32_t InIndex); // Function Landscape.LandscapeComponent.GetMaterialInstanceDynamic // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8f75c50
	float EditorGetPaintLayerWeightByNameAtLocation(struct FVector& InLocation, struct FName InPaintLayerName); // Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightByNameAtLocation // (Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x8f75ba4
	float EditorGetPaintLayerWeightAtLocation(struct FVector& InLocation, struct ULandscapeLayerInfoObject* PaintLayer); // Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightAtLocation // (Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x8f75af8
};

// Class Landscape.LandscapeGizmoActor
// Size: 0x288 (Inherited: 0x288)
struct ALandscapeGizmoActor : AActor {
};

// Class Landscape.LandscapeGizmoActiveActor
// Size: 0x2d8 (Inherited: 0x288)
struct ALandscapeGizmoActiveActor : ALandscapeGizmoActor {
	char pad_288[0x50]; // 0x288(0x50)
};

// Class Landscape.LandscapeGizmoRenderComponent
// Size: 0x530 (Inherited: 0x530)
struct ULandscapeGizmoRenderComponent : UPrimitiveComponent {
};

// Class Landscape.LandscapeGrassType
// Size: 0x60 (Inherited: 0x28)
struct ULandscapeGrassType : UObject {
	struct TArray<struct FGrassVariety> GrassVarieties; // 0x28(0x10)
	char bEnableDensityScaling : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct UStaticMesh* GrassMesh; // 0x40(0x08)
	float GrassDensity; // 0x48(0x04)
	float PlacementJitter; // 0x4c(0x04)
	int32_t StartCullDistance; // 0x50(0x04)
	int32_t EndCullDistance; // 0x54(0x04)
	bool RandomRotation; // 0x58(0x01)
	bool AlignToSurface; // 0x59(0x01)
	char pad_5A[0x6]; // 0x5a(0x06)
};

// Class Landscape.LandscapeHeightfieldCollisionComponent
// Size: 0x630 (Inherited: 0x530)
struct ULandscapeHeightfieldCollisionComponent : UPrimitiveComponent {
	struct TArray<struct ULandscapeLayerInfoObject*> ComponentLayerInfos; // 0x530(0x10)
	int32_t SectionBaseX; // 0x540(0x04)
	int32_t SectionBaseY; // 0x544(0x04)
	int32_t CollisionSizeQuads; // 0x548(0x04)
	float CollisionScale; // 0x54c(0x04)
	int32_t SimpleCollisionSizeQuads; // 0x550(0x04)
	char pad_554[0x4]; // 0x554(0x04)
	struct TArray<char> CollisionQuadFlags; // 0x558(0x10)
	struct FGuid HeightfieldGuid; // 0x568(0x10)
	struct FBox CachedLocalBox; // 0x578(0x38)
	LazyObjectProperty RenderComponent; // 0x5b0(0x1c)
	char pad_5CC[0x14]; // 0x5cc(0x14)
	struct TArray<struct UPhysicalMaterial*> CookedPhysicalMaterials; // 0x5e0(0x10)
	char pad_5F0[0x40]; // 0x5f0(0x40)

	struct ULandscapeComponent* GetRenderComponent(); // Function Landscape.LandscapeHeightfieldCollisionComponent.GetRenderComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8f768d0
};

// Class Landscape.LandscapeHLODBuilder
// Size: 0x28 (Inherited: 0x28)
struct ULandscapeHLODBuilder : UHLODBuilder {
};

// Class Landscape.LandscapeInfo
// Size: 0x228 (Inherited: 0x28)
struct ULandscapeInfo : UObject {
	LazyObjectProperty LandscapeActor; // 0x28(0x1c)
	struct FGuid LandscapeGuid; // 0x44(0x10)
	int32_t ComponentSizeQuads; // 0x54(0x04)
	int32_t SubsectionSizeQuads; // 0x58(0x04)
	int32_t ComponentNumSubsections; // 0x5c(0x04)
	struct FVector DrawScale; // 0x60(0x18)
	char pad_78[0xa0]; // 0x78(0xa0)
	struct TArray<struct ALandscapeStreamingProxy*> Proxies; // 0x118(0x10)
	char pad_128[0x100]; // 0x128(0x100)
};

// Class Landscape.LandscapeInfoMap
// Size: 0x80 (Inherited: 0x28)
struct ULandscapeInfoMap : UObject {
	char pad_28[0x58]; // 0x28(0x58)
};

// Class Landscape.LandscapeLayerInfoObject
// Size: 0x50 (Inherited: 0x28)
struct ULandscapeLayerInfoObject : UObject {
	struct FName LayerName; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct UPhysicalMaterial* PhysMaterial; // 0x30(0x08)
	float Hardness; // 0x38(0x04)
	struct FLinearColor LayerUsageDebugColor; // 0x3c(0x10)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class Landscape.LandscapeMaterialInstanceConstant
// Size: 0x1d8 (Inherited: 0x1c0)
struct ULandscapeMaterialInstanceConstant : UMaterialInstanceConstant {
	struct TArray<struct FLandscapeMaterialTextureStreamingInfo> TextureStreamingInfo; // 0x1c0(0x10)
	char bIsLayerThumbnail : 1; // 0x1d0(0x01)
	char bDisableTessellation : 1; // 0x1d0(0x01)
	char bMobile : 1; // 0x1d0(0x01)
	char bEditorToolUsage : 1; // 0x1d0(0x01)
	char pad_1D0_4 : 4; // 0x1d0(0x01)
	char pad_1D1[0x7]; // 0x1d1(0x07)
};

// Class Landscape.LandscapeMeshCollisionComponent
// Size: 0x650 (Inherited: 0x630)
struct ULandscapeMeshCollisionComponent : ULandscapeHeightfieldCollisionComponent {
	struct FGuid MeshGuid; // 0x630(0x10)
	char pad_640[0x10]; // 0x640(0x10)
};

// Class Landscape.LandscapeMeshProxyActor
// Size: 0x290 (Inherited: 0x288)
struct ALandscapeMeshProxyActor : AActor {
	struct ULandscapeMeshProxyComponent* LandscapeMeshProxyComponent; // 0x288(0x08)
};

// Class Landscape.LandscapeMeshProxyComponent
// Size: 0x620 (Inherited: 0x5f0)
struct ULandscapeMeshProxyComponent : UStaticMeshComponent {
	struct FGuid LandscapeGuid; // 0x5f0(0x10)
	struct TArray<struct FIntPoint> ProxyComponentBases; // 0x600(0x10)
	int8_t ProxyLOD; // 0x610(0x01)
	char pad_611[0xf]; // 0x611(0x0f)
};

// Class Landscape.LandscapeNaniteComponent
// Size: 0x610 (Inherited: 0x5f0)
struct ULandscapeNaniteComponent : UStaticMeshComponent {
	struct FGuid ProxyContentId; // 0x5f0(0x10)
	bool bEnabled; // 0x600(0x01)
	char pad_601[0xf]; // 0x601(0x0f)
};

// Class Landscape.LandscapeSettings
// Size: 0x90 (Inherited: 0x30)
struct ULandscapeSettings : UDeveloperSettings {
	int32_t MaxNumberOfLayers; // 0x30(0x04)
	int32_t SideResolutionLimit; // 0x34(0x04)
	struct TSoftObjectPtr<UMaterialInterface> DefaultLandscapeMaterial; // 0x38(0x28)
	struct TSoftObjectPtr<ULandscapeLayerInfoObject> DefaultLayerInfoObject; // 0x60(0x28)
	bool bRestrictiveMode; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
};

// Class Landscape.LandscapeSplineActor
// Size: 0x2a0 (Inherited: 0x288)
struct ALandscapeSplineActor : AActor {
	char pad_288[0x8]; // 0x288(0x08)
	struct FGuid LandscapeGuid; // 0x290(0x10)
};

// Class Landscape.LandscapeSplinesComponent
// Size: 0x560 (Inherited: 0x530)
struct ULandscapeSplinesComponent : UPrimitiveComponent {
	struct TArray<struct ULandscapeSplineControlPoint*> ControlPoints; // 0x530(0x10)
	struct TArray<struct ULandscapeSplineSegment*> Segments; // 0x540(0x10)
	struct TArray<struct UMeshComponent*> CookedForeignMeshComponents; // 0x550(0x10)

	struct TArray<struct USplineMeshComponent*> GetSplineMeshComponents(); // Function Landscape.LandscapeSplinesComponent.GetSplineMeshComponents // (Final|Native|Public|BlueprintCallable) // @ game+0x67520dc
};

// Class Landscape.LandscapeSplineControlPoint
// Size: 0xd8 (Inherited: 0x28)
struct ULandscapeSplineControlPoint : UObject {
	struct FVector Location; // 0x28(0x18)
	struct FRotator Rotation; // 0x40(0x18)
	float Width; // 0x58(0x04)
	float LayerWidthRatio; // 0x5c(0x04)
	float SideFalloff; // 0x60(0x04)
	float LeftSideFalloffFactor; // 0x64(0x04)
	float RightSideFalloffFactor; // 0x68(0x04)
	float LeftSideLayerFalloffFactor; // 0x6c(0x04)
	float RightSideLayerFalloffFactor; // 0x70(0x04)
	float EndFalloff; // 0x74(0x04)
	struct TArray<struct FLandscapeSplineConnection> ConnectedSegments; // 0x78(0x10)
	struct TArray<struct FLandscapeSplineInterpPoint> Points; // 0x88(0x10)
	struct FBox Bounds; // 0x98(0x38)
	struct UControlPointMeshComponent* LocalMeshComponent; // 0xd0(0x08)
};

// Class Landscape.LandscapeSplineMeshesActor
// Size: 0x298 (Inherited: 0x288)
struct ALandscapeSplineMeshesActor : APartitionActor {
	struct TArray<struct UStaticMeshComponent*> StaticMeshComponents; // 0x288(0x10)
};

// Class Landscape.LandscapeSplineSegment
// Size: 0xb8 (Inherited: 0x28)
struct ULandscapeSplineSegment : UObject {
	struct FLandscapeSplineSegmentConnection Connections[0x2]; // 0x28(0x20)
	struct FInterpCurveVector SplineInfo; // 0x48(0x18)
	struct TArray<struct FLandscapeSplineInterpPoint> Points; // 0x60(0x10)
	struct FBox Bounds; // 0x70(0x38)
	struct TArray<struct USplineMeshComponent*> LocalMeshComponents; // 0xa8(0x10)
};

// Class Landscape.LandscapeStreamingProxy
// Size: 0x5f8 (Inherited: 0x5d8)
struct ALandscapeStreamingProxy : ALandscapeProxy {
	LazyObjectProperty LandscapeActor; // 0x5d8(0x1c)
	char pad_5F4[0x4]; // 0x5f4(0x04)
};

// Class Landscape.LandscapeSubsystem
// Size: 0x50 (Inherited: 0x40)
struct ULandscapeSubsystem : UTickableWorldSubsystem {
	char pad_40[0x10]; // 0x40(0x10)
};

// Class Landscape.LandscapeWeightmapUsage
// Size: 0x58 (Inherited: 0x28)
struct ULandscapeWeightmapUsage : UObject {
	struct ULandscapeComponent* ChannelUsage[0x4]; // 0x28(0x20)
	struct FGuid LayerGuid; // 0x48(0x10)
};

// Class Landscape.MaterialExpressionLandscapeGrassOutput
// Size: 0xc0 (Inherited: 0xb0)
struct UMaterialExpressionLandscapeGrassOutput : UMaterialExpressionCustomOutput {
	struct TArray<struct FGrassInput> GrassTypes; // 0xb0(0x10)
};

// Class Landscape.MaterialExpressionLandscapeLayerBlend
// Size: 0xc0 (Inherited: 0xb0)
struct UMaterialExpressionLandscapeLayerBlend : UMaterialExpression {
	struct TArray<struct FLayerBlendInput> Layers; // 0xb0(0x10)
};

// Class Landscape.MaterialExpressionLandscapeLayerCoords
// Size: 0xc8 (Inherited: 0xb0)
struct UMaterialExpressionLandscapeLayerCoords : UMaterialExpression {
	enum class ETerrainCoordMappingType MappingType; // 0xb0(0x01)
	enum class ELandscapeCustomizedCoordType CustomUVType; // 0xb1(0x01)
	char pad_B2[0x2]; // 0xb2(0x02)
	float MappingScale; // 0xb4(0x04)
	float MappingRotation; // 0xb8(0x04)
	float MappingPanU; // 0xbc(0x04)
	float MappingPanV; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
};

// Class Landscape.MaterialExpressionLandscapeLayerSample
// Size: 0xb8 (Inherited: 0xb0)
struct UMaterialExpressionLandscapeLayerSample : UMaterialExpression {
	struct FName ParameterName; // 0xb0(0x04)
	float PreviewWeight; // 0xb4(0x04)
};

// Class Landscape.MaterialExpressionLandscapeLayerSwitch
// Size: 0x108 (Inherited: 0xb0)
struct UMaterialExpressionLandscapeLayerSwitch : UMaterialExpression {
	struct FExpressionInput LayerUsed; // 0xb0(0x28)
	struct FExpressionInput LayerNotUsed; // 0xd8(0x28)
	struct FName ParameterName; // 0x100(0x04)
	char PreviewUsed : 1; // 0x104(0x01)
	char pad_104_1 : 7; // 0x104(0x01)
	char pad_105[0x3]; // 0x105(0x03)
};

// Class Landscape.MaterialExpressionLandscapeLayerWeight
// Size: 0x120 (Inherited: 0xb0)
struct UMaterialExpressionLandscapeLayerWeight : UMaterialExpression {
	struct FExpressionInput Base; // 0xb0(0x28)
	struct FExpressionInput Layer; // 0xd8(0x28)
	struct FName ParameterName; // 0x100(0x04)
	float PreviewWeight; // 0x104(0x04)
	struct FVector ConstBase; // 0x108(0x18)
};

// Class Landscape.MaterialExpressionLandscapePhysicalMaterialOutput
// Size: 0xc0 (Inherited: 0xb0)
struct UMaterialExpressionLandscapePhysicalMaterialOutput : UMaterialExpressionCustomOutput {
	struct TArray<struct FPhysicalMaterialInput> Inputs; // 0xb0(0x10)
};

// Class Landscape.MaterialExpressionLandscapeVisibilityMask
// Size: 0xb0 (Inherited: 0xb0)
struct UMaterialExpressionLandscapeVisibilityMask : UMaterialExpression {
};

