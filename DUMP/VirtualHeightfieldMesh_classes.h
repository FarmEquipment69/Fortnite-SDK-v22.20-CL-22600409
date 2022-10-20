// Class VirtualHeightfieldMesh.HeightfieldMinMaxTexture
// Size: 0x70 (Inherited: 0x28)
struct UHeightfieldMinMaxTexture : UObject {
	struct UTexture2D* Texture; // 0x28(0x08)
	struct UTexture2D* LodBiasTexture; // 0x30(0x08)
	struct UTexture2D* LodBiasMinMaxTexture; // 0x38(0x08)
	int32_t MaxCPULevels; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct TArray<struct FVector2D> TextureData; // 0x48(0x10)
	struct FIntPoint TextureDataSize; // 0x58(0x08)
	struct TArray<int32_t> TextureDataMips; // 0x60(0x10)
};

// Class VirtualHeightfieldMesh.MaterialExpressionHeightfieldMinMaxTexture
// Size: 0xc0 (Inherited: 0xb0)
struct UMaterialExpressionHeightfieldMinMaxTexture : UMaterialExpression {
	struct UHeightfieldMinMaxTexture* MinMaxTexture; // 0xb0(0x08)
	enum class EMaterialSamplerType SamplerType; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
};

// Class VirtualHeightfieldMesh.VirtualHeightfieldMesh
// Size: 0x290 (Inherited: 0x288)
struct AVirtualHeightfieldMesh : AActor {
	struct UVirtualHeightfieldMeshComponent* VirtualHeightfieldMeshComponent; // 0x288(0x08)
};

// Class VirtualHeightfieldMesh.VirtualHeightfieldMeshComponent
// Size: 0x5b0 (Inherited: 0x530)
struct UVirtualHeightfieldMeshComponent : UPrimitiveComponent {
	struct TSoftObjectPtr<ARuntimeVirtualTextureVolume> VirtualTexture; // 0x530(0x28)
	struct ARuntimeVirtualTextureVolume* VirtualTextureRef; // 0x558(0x08)
	struct UObject* VirtualTextureThumbnail; // 0x560(0x08)
	bool bCopyBoundsButton; // 0x568(0x01)
	char pad_569[0x7]; // 0x569(0x07)
	struct UHeightfieldMinMaxTexture* MinMaxTexture; // 0x570(0x08)
	int32_t NumMinMaxTextureBuildLevels; // 0x578(0x04)
	bool bBuildMinMaxTextureButton; // 0x57c(0x01)
	char pad_57D[0x3]; // 0x57d(0x03)
	struct UMaterialInterface* Material; // 0x580(0x08)
	float Lod0ScreenSize; // 0x588(0x04)
	float Lod0Distribution; // 0x58c(0x04)
	float LodDistribution; // 0x590(0x04)
	float LodBiasScale; // 0x594(0x04)
	int32_t NumForceLoadLods; // 0x598(0x04)
	int32_t NumOcclusionLods; // 0x59c(0x04)
	bool bHiddenInEditor; // 0x5a0(0x01)
	char pad_5A1[0xf]; // 0x5a1(0x0f)

	void GatherHideFlags(bool& InOutHidePrimitivesInEditor, bool& InOutHidePrimitivesInGame); // Function VirtualHeightfieldMesh.VirtualHeightfieldMeshComponent.GatherHideFlags // (Final|Native|Protected|HasOutParms|Const) // @ game+0x716c0e8
};

