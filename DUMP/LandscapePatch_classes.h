// Class LandscapePatch.LandscapePatchComponent
// Size: 0x320 (Inherited: 0x2a0)
struct ULandscapePatchComponent : USceneComponent {
	struct TSoftObjectPtr<ALandscape> Landscape; // 0x2a0(0x28)
	struct TSoftObjectPtr<ALandscapePatchManager> PatchManager; // 0x2c8(0x28)
	bool bIsEnabled; // 0x2f0(0x01)
	char pad_2F1[0x2]; // 0x2f1(0x02)
	bool bPropertiesCopiedIndicator; // 0x2f3(0x01)
	char pad_2F4[0x4]; // 0x2f4(0x04)
	struct TSoftObjectPtr<ALandscapePatchManager> PreviousPatchManager; // 0x2f8(0x28)

	void SetPatchManager(struct ALandscapePatchManager* NewPatchManager); // Function LandscapePatch.LandscapePatchComponent.SetPatchManager // (Native|Public|BlueprintCallable) // @ game+0x7257a78
	void SetLandscape(struct ALandscape* NewLandscape); // Function LandscapePatch.LandscapePatchComponent.SetLandscape // (Native|Public|BlueprintCallable) // @ game+0x72579f4
	void SetIsEnabled(bool bEnabledIn); // Function LandscapePatch.LandscapePatchComponent.SetIsEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x725796c
	void RequestLandscapeUpdate(); // Function LandscapePatch.LandscapePatchComponent.RequestLandscapeUpdate // (Final|Native|Public|BlueprintCallable) // @ game+0x24841e4
	void MoveToTop(); // Function LandscapePatch.LandscapePatchComponent.MoveToTop // (Final|Native|Protected) // @ game+0x7257458
	bool IsEnabled(); // Function LandscapePatch.LandscapePatchComponent.IsEnabled // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x293141c
	struct ALandscapePatchManager* GetPatchManager(); // Function LandscapePatch.LandscapePatchComponent.GetPatchManager // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7257208
	struct FTransform GetLandscapeHeightmapCoordsToWorld(); // Function LandscapePatch.LandscapePatchComponent.GetLandscapeHeightmapCoordsToWorld // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x725718c
};

// Class LandscapePatch.LandscapeCircleHeightPatch
// Size: 0x330 (Inherited: 0x320)
struct ULandscapeCircleHeightPatch : ULandscapePatchComponent {
	float Radius; // 0x320(0x04)
	float Falloff; // 0x324(0x04)
	bool bExclusiveRadius; // 0x328(0x01)
	char pad_329[0x7]; // 0x329(0x07)
};

// Class LandscapePatch.LandscapePatchManager
// Size: 0x300 (Inherited: 0x288)
struct ALandscapePatchManager : ALandscapeBlueprintBrushBase {
	struct TArray<struct TSoftObjectPtr<ULandscapePatchComponent>> PatchComponents; // 0x288(0x10)
	char pad_298[0x8]; // 0x298(0x08)
	struct FTransform HeightmapCoordsToWorld; // 0x2a0(0x60)
};

// Class LandscapePatch.LandscapeTextureBackedRenderTargetBase
// Size: 0x50 (Inherited: 0x28)
struct ULandscapeTextureBackedRenderTargetBase : UObject {
	struct UTextureRenderTarget2D* PostLoadRT; // 0x28(0x08)
	struct UTexture2D* InternalTexture; // 0x30(0x08)
	struct UTextureRenderTarget2D* RenderTarget; // 0x38(0x08)
	int32_t SizeX; // 0x40(0x04)
	int32_t SizeY; // 0x44(0x04)
	bool bUseInternalTextureOnly; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// Class LandscapePatch.LandscapeWeightTextureBackedRenderTarget
// Size: 0x58 (Inherited: 0x50)
struct ULandscapeWeightTextureBackedRenderTarget : ULandscapeTextureBackedRenderTargetBase {
	bool bUseAlphaChannel; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// Class LandscapePatch.LandscapeHeightTextureBackedRenderTarget
// Size: 0x60 (Inherited: 0x50)
struct ULandscapeHeightTextureBackedRenderTarget : ULandscapeTextureBackedRenderTargetBase {
	struct FLandscapeHeightPatchConvertToNativeParams ConversionParams; // 0x50(0x0c)
	enum class ETextureRenderTargetFormat RenderTargetFormat; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
};

// Class LandscapePatch.LandscapeWeightPatchTextureInfo
// Size: 0x58 (Inherited: 0x28)
struct ULandscapeWeightPatchTextureInfo : UObject {
	struct FName WeightmapLayerName; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct UTexture* TextureAsset; // 0x30(0x08)
	struct ULandscapeWeightTextureBackedRenderTarget* InternalData; // 0x38(0x08)
	enum class ELandscapeTexturePatchSourceMode SourceMode; // 0x40(0x01)
	enum class ELandscapeTexturePatchSourceMode DetailPanelSourceMode; // 0x41(0x01)
	bool bUseAlphaChannel; // 0x42(0x01)
	bool bOverrideBlendMode; // 0x43(0x01)
	enum class ELandscapeTexturePatchBlendMode OverrideBlendMode; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	struct ULandscapeTexturePatch* OwningPatch; // 0x48(0x08)
	char pad_50[0x8]; // 0x50(0x08)
};

// Class LandscapePatch.LandscapeTexturePatch
// Size: 0x3a0 (Inherited: 0x320)
struct ULandscapeTexturePatch : ULandscapePatchComponent {
	int32_t ResolutionX; // 0x320(0x04)
	int32_t ResolutionY; // 0x324(0x04)
	struct FVector2D UnscaledPatchCoverage; // 0x328(0x10)
	enum class ELandscapeTexturePatchBlendMode BlendMode; // 0x338(0x01)
	enum class ELandscapeTexturePatchFalloffMode FalloffMode; // 0x339(0x01)
	char pad_33A[0x2]; // 0x33a(0x02)
	float Falloff; // 0x33c(0x04)
	enum class ELandscapeTexturePatchSourceMode HeightSourceMode; // 0x340(0x01)
	enum class ELandscapeTexturePatchSourceMode DetailPanelHeightSourceMode; // 0x341(0x01)
	char pad_342[0x6]; // 0x342(0x06)
	struct ULandscapeHeightTextureBackedRenderTarget* HeightInternalData; // 0x348(0x08)
	struct UTexture* HeightTextureAsset; // 0x350(0x08)
	bool bUseTextureAlphaForHeight; // 0x358(0x01)
	enum class ELandscapeTextureHeightPatchEncoding HeightEncoding; // 0x359(0x01)
	char pad_35A[0x6]; // 0x35a(0x06)
	struct FLandscapeTexturePatchEncodingSettings HeightEncodingSettings; // 0x360(0x10)
	enum class ELandscapeTextureHeightPatchZeroHeightMeaning ZeroHeightMeaning; // 0x370(0x01)
	bool bApplyComponentZScale; // 0x371(0x01)
	char pad_372[0x6]; // 0x372(0x06)
	struct TArray<struct ULandscapeWeightPatchTextureInfo*> WeightPatches; // 0x378(0x10)
	int32_t NumWeightPatches; // 0x388(0x04)
	char pad_38C[0x1]; // 0x38c(0x01)
	bool bBaseResolutionOffLandscape; // 0x38d(0x01)
	char pad_38E[0x2]; // 0x38e(0x02)
	float ResolutionMultiplier; // 0x390(0x04)
	int32_t InitTextureSizeX; // 0x394(0x04)
	int32_t InitTextureSizeY; // 0x398(0x04)
	enum class ETextureRenderTargetFormat HeightRenderTargetFormat; // 0x39c(0x01)
	char pad_39D[0x3]; // 0x39d(0x03)

	void SnapToLandscape(); // Function LandscapePatch.LandscapeTexturePatch.SnapToLandscape // (Final|Native|Protected|BlueprintCallable) // @ game+0x24841e4
	void SetZeroHeightMeaning(enum class ELandscapeTextureHeightPatchZeroHeightMeaning ZeroHeightMeaningIn); // Function LandscapePatch.LandscapeTexturePatch.SetZeroHeightMeaning // (Final|Native|Public|BlueprintCallable) // @ game+0x7258054
	void SetWeightPatchTextureAsset(struct FName& InWeightmapLayerName, struct UTexture* TextureIn); // Function LandscapePatch.LandscapeTexturePatch.SetWeightPatchTextureAsset // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7257f10
	void SetWeightPatchSourceMode(struct FName& InWeightmapLayerName, enum class ELandscapeTexturePatchSourceMode NewMode); // Function LandscapePatch.LandscapeTexturePatch.SetWeightPatchSourceMode // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7257e3c
	void SetWeightPatchBlendModeOverride(struct FName& InWeightmapLayerName, enum class ELandscapeTexturePatchBlendMode BlendMode); // Function LandscapePatch.LandscapeTexturePatch.SetWeightPatchBlendModeOverride // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7257d68
	void SetUseAlphaChannelForWeightPatch(struct FName& InWeightmapLayerName, bool bUseAlphaChannel); // Function LandscapePatch.LandscapeTexturePatch.SetUseAlphaChannelForWeightPatch // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7257c94
	void SetUseAlphaChannelForHeight(bool bUse); // Function LandscapePatch.LandscapeTexturePatch.SetUseAlphaChannelForHeight // (Final|Native|Public|BlueprintCallable) // @ game+0x7257c14
	void SetUnscaledCoverage(struct FVector2D Coverage); // Function LandscapePatch.LandscapeTexturePatch.SetUnscaledCoverage // (Native|Public|HasDefaults|BlueprintCallable) // @ game+0x7257b88
	void SetResolution(struct FVector2D ResolutionIn); // Function LandscapePatch.LandscapeTexturePatch.SetResolution // (Native|Public|HasDefaults|BlueprintCallable) // @ game+0x7257afc
	void SetHeightTextureAsset(struct UTexture* TextureIn); // Function LandscapePatch.LandscapeTexturePatch.SetHeightTextureAsset // (Final|Native|Public|BlueprintCallable) // @ game+0x72578ec
	void SetHeightSourceMode(enum class ELandscapeTexturePatchSourceMode NewMode); // Function LandscapePatch.LandscapeTexturePatch.SetHeightSourceMode // (Native|Public|BlueprintCallable) // @ game+0x7257868
	void SetHeightRenderTargetFormat(enum class ETextureRenderTargetFormat Format); // Function LandscapePatch.LandscapeTexturePatch.SetHeightRenderTargetFormat // (Final|Native|Public|BlueprintCallable) // @ game+0x72577d4
	void SetHeightEncodingSettings(struct FLandscapeTexturePatchEncodingSettings& Settings); // Function LandscapePatch.LandscapeTexturePatch.SetHeightEncodingSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7257740
	void SetHeightEncodingMode(enum class ELandscapeTextureHeightPatchEncoding EncodingMode); // Function LandscapePatch.LandscapeTexturePatch.SetHeightEncodingMode // (Final|Native|Public|BlueprintCallable) // @ game+0x72576c4
	void SetFalloff(float FalloffIn); // Function LandscapePatch.LandscapeTexturePatch.SetFalloff // (Final|Native|Public|BlueprintCallable) // @ game+0x7257640
	void SetBlendMode(enum class ELandscapeTexturePatchBlendMode BlendModeIn); // Function LandscapePatch.LandscapeTexturePatch.SetBlendMode // (Final|Native|Public|BlueprintCallable) // @ game+0x72575c4
	void ResetHeightEncodingMode(enum class ELandscapeTextureHeightPatchEncoding EncodingMode); // Function LandscapePatch.LandscapeTexturePatch.ResetHeightEncodingMode // (Final|Native|Public|BlueprintCallable) // @ game+0x7257514
	void RemoveWeightPatch(struct FName& InWeightmapLayerName); // Function LandscapePatch.LandscapeTexturePatch.RemoveWeightPatch // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7257484
	void RemoveAllWeightPatches(); // Function LandscapePatch.LandscapeTexturePatch.RemoveAllWeightPatches // (Native|Public|BlueprintCallable) // @ game+0x725746c
	void ReinitializeWeights(); // Function LandscapePatch.LandscapeTexturePatch.ReinitializeWeights // (Final|Native|Protected) // @ game+0x24841e4
	void ReinitializeHeight(); // Function LandscapePatch.LandscapeTexturePatch.ReinitializeHeight // (Final|Native|Protected) // @ game+0x24841e4
	enum class ELandscapeTexturePatchSourceMode GetWeightPatchSourceMode(struct FName& InWeightmapLayerName); // Function LandscapePatch.LandscapeTexturePatch.GetWeightPatchSourceMode // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x72573b8
	struct UTextureRenderTarget2D* GetWeightPatchRenderTarget(struct FName& InWeightmapLayerName); // Function LandscapePatch.LandscapeTexturePatch.GetWeightPatchRenderTarget // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7257318
	struct FVector2D GetUnscaledCoverage(); // Function LandscapePatch.LandscapeTexturePatch.GetUnscaledCoverage // (Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x72572e4
	struct FVector2D GetResolution(); // Function LandscapePatch.LandscapeTexturePatch.GetResolution // (Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x72572b0
	struct FTransform GetPatchToWorldTransform(); // Function LandscapePatch.LandscapeTexturePatch.GetPatchToWorldTransform // (Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x7257230
	bool GetInitResolutionFromLandscape(float ResolutionMultiplier, struct FVector2D& ResolutionOut); // Function LandscapePatch.LandscapeTexturePatch.GetInitResolutionFromLandscape // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x72570a8
	enum class ELandscapeTexturePatchSourceMode GetHeightSourceMode(); // Function LandscapePatch.LandscapeTexturePatch.GetHeightSourceMode // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7257080
	struct UTextureRenderTarget2D* GetHeightRenderTarget(); // Function LandscapePatch.LandscapeTexturePatch.GetHeightRenderTarget // (Native|Public|BlueprintCallable) // @ game+0x7257058
	struct FVector2D GetFullUnscaledWorldSize(); // Function LandscapePatch.LandscapeTexturePatch.GetFullUnscaledWorldSize // (Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x7257024
	struct TArray<struct FName> GetAllWeightPatchLayerNames(); // Function LandscapePatch.LandscapeTexturePatch.GetAllWeightPatchLayerNames // (Final|Native|Public|BlueprintCallable) // @ game+0x7256fb0
	void DisableAllWeightPatches(); // Function LandscapePatch.LandscapeTexturePatch.DisableAllWeightPatches // (Native|Public|BlueprintCallable) // @ game+0x7256f98
	void ClearWeightPatchBlendModeOverride(struct FName& InWeightmapLayerName); // Function LandscapePatch.LandscapeTexturePatch.ClearWeightPatchBlendModeOverride // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7256f08
	void AddWeightPatch(struct FName& InWeightmapLayerName, enum class ELandscapeTexturePatchSourceMode SourceMode, bool bUseAlphaChannel); // Function LandscapePatch.LandscapeTexturePatch.AddWeightPatch // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7256dfc
};

