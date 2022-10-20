// Class Niagara.MovieSceneNiagaraTrack
// Size: 0xa8 (Inherited: 0x98)
struct UMovieSceneNiagaraTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0x98(0x10)
};

// Class Niagara.MovieSceneNiagaraParameterTrack
// Size: 0xc0 (Inherited: 0xa8)
struct UMovieSceneNiagaraParameterTrack : UMovieSceneNiagaraTrack {
	struct FNiagaraVariable Parameter; // 0xa8(0x18)
};

// Class Niagara.MovieSceneNiagaraBoolParameterTrack
// Size: 0xc8 (Inherited: 0xc0)
struct UMovieSceneNiagaraBoolParameterTrack : UMovieSceneNiagaraParameterTrack {
	char pad_C0[0x8]; // 0xc0(0x08)
};

// Class Niagara.MovieSceneNiagaraColorParameterTrack
// Size: 0xc8 (Inherited: 0xc0)
struct UMovieSceneNiagaraColorParameterTrack : UMovieSceneNiagaraParameterTrack {
	char pad_C0[0x8]; // 0xc0(0x08)
};

// Class Niagara.MovieSceneNiagaraFloatParameterTrack
// Size: 0xc8 (Inherited: 0xc0)
struct UMovieSceneNiagaraFloatParameterTrack : UMovieSceneNiagaraParameterTrack {
	char pad_C0[0x8]; // 0xc0(0x08)
};

// Class Niagara.MovieSceneNiagaraIntegerParameterTrack
// Size: 0xc8 (Inherited: 0xc0)
struct UMovieSceneNiagaraIntegerParameterTrack : UMovieSceneNiagaraParameterTrack {
	char pad_C0[0x8]; // 0xc0(0x08)
};

// Class Niagara.MovieSceneNiagaraSystemSpawnSection
// Size: 0x100 (Inherited: 0xf0)
struct UMovieSceneNiagaraSystemSpawnSection : UMovieSceneSection {
	enum class ENiagaraSystemSpawnSectionStartBehavior SectionStartBehavior; // 0xf0(0x04)
	enum class ENiagaraSystemSpawnSectionEvaluateBehavior SectionEvaluateBehavior; // 0xf4(0x04)
	enum class ENiagaraSystemSpawnSectionEndBehavior SectionEndBehavior; // 0xf8(0x04)
	enum class ENiagaraAgeUpdateMode AgeUpdateMode; // 0xfc(0x01)
	bool bAllowScalability; // 0xfd(0x01)
	char pad_FE[0x2]; // 0xfe(0x02)
};

// Class Niagara.MovieSceneNiagaraSystemTrack
// Size: 0xb0 (Inherited: 0xa8)
struct UMovieSceneNiagaraSystemTrack : UMovieSceneNiagaraTrack {
	char pad_A8[0x8]; // 0xa8(0x08)
};

// Class Niagara.MovieSceneNiagaraVectorParameterTrack
// Size: 0xd0 (Inherited: 0xc0)
struct UMovieSceneNiagaraVectorParameterTrack : UMovieSceneNiagaraParameterTrack {
	char pad_C0[0x8]; // 0xc0(0x08)
	int32_t ChannelsUsed; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
};

// Class Niagara.NiagaraActor
// Size: 0x298 (Inherited: 0x288)
struct ANiagaraActor : AActor {
	struct UNiagaraComponent* NiagaraComponent; // 0x288(0x08)
	char bDestroyOnSystemFinish : 1; // 0x290(0x01)
	char pad_290_1 : 7; // 0x290(0x01)
	char pad_291[0x7]; // 0x291(0x07)

	void SetDestroyOnSystemFinish(bool bShouldDestroyOnSystemFinish); // Function Niagara.NiagaraActor.SetDestroyOnSystemFinish // (Final|Native|Public|BlueprintCallable) // @ game+0x5cfee6c
	void OnNiagaraSystemFinished(struct UNiagaraComponent* FinishedComponent); // Function Niagara.NiagaraActor.OnNiagaraSystemFinished // (Final|Native|Private) // @ game+0x26467b8
};

// Class Niagara.NiagaraBakerOutput
// Size: 0x38 (Inherited: 0x28)
struct UNiagaraBakerOutput : UObject {
	struct FString OutputName; // 0x28(0x10)
};

// Class Niagara.NiagaraBakerOutputSimCache
// Size: 0x80 (Inherited: 0x38)
struct UNiagaraBakerOutputSimCache : UNiagaraBakerOutput {
	struct FString SimCacheAssetPathFormat; // 0x38(0x10)
	struct FNiagaraSimCacheCreateParameters CreateParameters; // 0x48(0x38)
};

// Class Niagara.NiagaraBakerOutputTexture2D
// Size: 0xa0 (Inherited: 0x38)
struct UNiagaraBakerOutputTexture2D : UNiagaraBakerOutput {
	struct FNiagaraBakerTextureSource SourceBinding; // 0x38(0x18)
	char bGenerateAtlas : 1; // 0x50(0x01)
	char bGenerateFrames : 1; // 0x50(0x01)
	char bExportFrames : 1; // 0x50(0x01)
	char bSetTextureAddressX : 1; // 0x50(0x01)
	char bSetTextureAddressY : 1; // 0x50(0x01)
	char pad_50_5 : 3; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	struct FIntPoint FrameSize; // 0x54(0x08)
	struct FIntPoint AtlasTextureSize; // 0x5c(0x08)
	char pad_64[0x8]; // 0x64(0x08)
	enum class TextureAddress TextureAddressX; // 0x6c(0x01)
	enum class TextureAddress TextureAddressY; // 0x6d(0x01)
	char pad_6E[0x2]; // 0x6e(0x02)
	struct FString AtlasAssetPathFormat; // 0x70(0x10)
	struct FString FramesAssetPathFormat; // 0x80(0x10)
	struct FString FramesExportPathFormat; // 0x90(0x10)
};

// Class Niagara.NiagaraBakerOutputVolumeTexture
// Size: 0x88 (Inherited: 0x38)
struct UNiagaraBakerOutputVolumeTexture : UNiagaraBakerOutput {
	struct FNiagaraBakerTextureSource SourceBinding; // 0x38(0x18)
	char bGenerateAtlas : 1; // 0x50(0x01)
	char bGenerateFrames : 1; // 0x50(0x01)
	char bExportFrames : 1; // 0x50(0x01)
	char pad_50_3 : 5; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct FString AtlasAssetPathFormat; // 0x58(0x10)
	struct FString FramesAssetPathFormat; // 0x68(0x10)
	struct FString FramesExportPathFormat; // 0x78(0x10)
};

// Class Niagara.NiagaraBakerSettings
// Size: 0x1f0 (Inherited: 0x28)
struct UNiagaraBakerSettings : UObject {
	float StartSeconds; // 0x28(0x04)
	float DurationSeconds; // 0x2c(0x04)
	int32_t FramesPerSecond; // 0x30(0x04)
	char bPreviewLooping : 1; // 0x34(0x01)
	char pad_34_1 : 7; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct FIntPoint FramesPerDimension; // 0x38(0x08)
	struct TArray<struct UNiagaraBakerOutput*> Outputs; // 0x40(0x10)
	struct TArray<struct FNiagaraBakerCameraSettings> CameraSettings; // 0x50(0x10)
	int32_t CurrentCameraIndex; // 0x60(0x04)
	struct FName BakeQualityLevel; // 0x64(0x04)
	char bRenderComponentOnly : 1; // 0x68(0x01)
	char pad_68_1 : 7; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct TArray<struct FNiagaraBakerTextureSettings> OutputTextures; // 0x70(0x10)
	enum class ENiagaraBakerViewMode CameraViewportMode; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
	struct FVector CameraViewportLocation[0x7]; // 0x88(0xa8)
	struct FRotator CameraViewportRotation[0x7]; // 0x130(0xa8)
	float CameraOrbitDistance; // 0x1d8(0x04)
	float CameraFOV; // 0x1dc(0x04)
	float CameraOrthoWidth; // 0x1e0(0x04)
	char bUseCameraAspectRatio : 1; // 0x1e4(0x01)
	char pad_1E4_1 : 7; // 0x1e4(0x01)
	char pad_1E5[0x3]; // 0x1e5(0x03)
	float CameraAspectRatio; // 0x1e8(0x04)
	char pad_1EC[0x4]; // 0x1ec(0x04)
};

// Class Niagara.NiagaraComponent
// Size: 0x7d0 (Inherited: 0x530)
struct UNiagaraComponent : UFXSystemComponent {
	struct UNiagaraSystem* Asset; // 0x530(0x08)
	enum class ENiagaraTickBehavior TickBehavior; // 0x538(0x01)
	char pad_539[0x3]; // 0x539(0x03)
	int32_t RandomSeedOffset; // 0x53c(0x04)
	struct FNiagaraUserRedirectionParameterStore OverrideParameters; // 0x540(0xd8)
	char bForceSolo : 1; // 0x618(0x01)
	char bEnableGpuComputeDebug : 1; // 0x618(0x01)
	char pad_618_2 : 6; // 0x618(0x01)
	char pad_619[0x37]; // 0x619(0x37)
	char bAutoDestroy : 1; // 0x650(0x01)
	char bRenderingEnabled : 1; // 0x650(0x01)
	char bAutoManageAttachment : 1; // 0x650(0x01)
	char bAutoAttachWeldSimulatedBodies : 1; // 0x650(0x01)
	char pad_650_4 : 4; // 0x650(0x01)
	char pad_651[0x3]; // 0x651(0x03)
	float MaxTimeBeforeForceUpdateTransform; // 0x654(0x04)
	char pad_658[0x8]; // 0x658(0x08)
	struct FMulticastInlineDelegate OnSystemFinished; // 0x660(0x10)
	struct TWeakObjectPtr<struct USceneComponent> AutoAttachParent; // 0x670(0x08)
	struct FName AutoAttachSocketName; // 0x678(0x04)
	enum class EAttachmentRule AutoAttachLocationRule; // 0x67c(0x01)
	enum class EAttachmentRule AutoAttachRotationRule; // 0x67d(0x01)
	enum class EAttachmentRule AutoAttachScaleRule; // 0x67e(0x01)
	char pad_67F[0x9]; // 0x67f(0x09)
	char pad_688_0 : 4; // 0x688(0x01)
	char bAllowScalability : 1; // 0x688(0x01)
	char pad_688_5 : 3; // 0x688(0x01)
	char pad_689[0x12f]; // 0x689(0x12f)
	struct UNiagaraSimCache* SimCache; // 0x7b8(0x08)
	struct UNiagaraCullProxyComponent* CullProxy; // 0x7c0(0x08)
	char pad_7C8[0x8]; // 0x7c8(0x08)

	void SetVariableVec4(struct FName InVariableName, struct FVector4& InValue); // Function Niagara.NiagaraComponent.SetVariableVec4 // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x5d02730
	void SetVariableVec3(struct FName InVariableName, struct FVector InValue); // Function Niagara.NiagaraComponent.SetVariableVec3 // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x25c9184
	void SetVariableVec2(struct FName InVariableName, struct FVector2D InValue); // Function Niagara.NiagaraComponent.SetVariableVec2 // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x5d02668
	void SetVariableTextureRenderTarget(struct FName InVariableName, struct UTextureRenderTarget* TextureRenderTarget); // Function Niagara.NiagaraComponent.SetVariableTextureRenderTarget // (Final|Native|Public|BlueprintCallable) // @ game+0x5d025a4
	void SetVariableTexture(struct FName InVariableName, struct UTexture* Texture); // Function Niagara.NiagaraComponent.SetVariableTexture // (Final|Native|Public|BlueprintCallable) // @ game+0x5d024e0
	void SetVariableStaticMesh(struct FName InVariableName, struct UStaticMesh* InValue); // Function Niagara.NiagaraComponent.SetVariableStaticMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x5d0241c
	void SetVariableQuat(struct FName InVariableName, struct FQuat& InValue); // Function Niagara.NiagaraComponent.SetVariableQuat // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x5d02354
	void SetVariablePosition(struct FName InVariableName, struct FVector InValue); // Function Niagara.NiagaraComponent.SetVariablePosition // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x5d02280
	void SetVariableObject(struct FName InVariableName, struct UObject* Object); // Function Niagara.NiagaraComponent.SetVariableObject // (Final|Native|Public|BlueprintCallable) // @ game+0x5d01f3c
	void SetVariableMatrix(struct FName InVariableName, struct FMatrix& InValue); // Function Niagara.NiagaraComponent.SetVariableMatrix // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x5d0218c
	void SetVariableMaterial(struct FName InVariableName, struct UMaterialInterface* Object); // Function Niagara.NiagaraComponent.SetVariableMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0x5d020c8
	void SetVariableLinearColor(struct FName InVariableName, struct FLinearColor& InValue); // Function Niagara.NiagaraComponent.SetVariableLinearColor // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x5d02000
	void SetVariableInt(struct FName InVariableName, int32_t InValue); // Function Niagara.NiagaraComponent.SetVariableInt // (Final|Native|Public|BlueprintCallable) // @ game+0x11e632c
	void SetVariableFloat(struct FName InVariableName, float InValue); // Function Niagara.NiagaraComponent.SetVariableFloat // (Final|Native|Public|BlueprintCallable) // @ game+0x11b9850
	void SetVariableBool(struct FName InVariableName, bool InValue); // Function Niagara.NiagaraComponent.SetVariableBool // (Final|Native|Public|BlueprintCallable) // @ game+0x2232ad0
	void SetVariableActor(struct FName InVariableName, struct AActor* Actor); // Function Niagara.NiagaraComponent.SetVariableActor // (Final|Native|Public|BlueprintCallable) // @ game+0x5d01f3c
	void SetTickBehavior(enum class ENiagaraTickBehavior NewTickBehavior); // Function Niagara.NiagaraComponent.SetTickBehavior // (Final|Native|Public|BlueprintCallable) // @ game+0x5d01ebc
	void SetSystemFixedBounds(struct FBox LocalBounds); // Function Niagara.NiagaraComponent.SetSystemFixedBounds // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x5d01df8
	void SetSimCache(struct UNiagaraSimCache* InSimCache); // Function Niagara.NiagaraComponent.SetSimCache // (Final|Native|Public|BlueprintCallable) // @ game+0x5d01d70
	void SetSeekDelta(float InSeekDelta); // Function Niagara.NiagaraComponent.SetSeekDelta // (Final|Native|Public|BlueprintCallable) // @ game+0x5d01cec
	void SetRenderingEnabled(bool bInRenderingEnabled); // Function Niagara.NiagaraComponent.SetRenderingEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x5d01c60
	void SetRandomSeedOffset(int32_t NewRandomSeedOffset); // Function Niagara.NiagaraComponent.SetRandomSeedOffset // (Final|Native|Public|BlueprintCallable) // @ game+0x5d01bd8
	void SetPreviewLODDistance(bool bEnablePreviewLODDistance, float PreviewLODDistance, float PreviewMaxDistance); // Function Niagara.NiagaraComponent.SetPreviewLODDistance // (Final|Native|Public|BlueprintCallable) // @ game+0x5d01ad8
	void SetPaused(bool bInPaused); // Function Niagara.NiagaraComponent.SetPaused // (Final|Native|Public|BlueprintCallable) // @ game+0x5d01a58
	void SetNiagaraVariableVec4(struct FString InVariableName, struct FVector4& InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableVec4 // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x5d01890
	void SetNiagaraVariableVec3(struct FString InVariableName, struct FVector InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableVec3 // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x5d016d0
	void SetNiagaraVariableVec2(struct FString InVariableName, struct FVector2D InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableVec2 // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x5d014f0
	void SetNiagaraVariableQuat(struct FString InVariableName, struct FQuat& InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableQuat // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x5d01318
	void SetNiagaraVariablePosition(struct FString InVariableName, struct FVector InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariablePosition // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x5d01120
	void SetNiagaraVariableObject(struct FString InVariableName, struct UObject* Object); // Function Niagara.NiagaraComponent.SetNiagaraVariableObject // (Final|Native|Public|BlueprintCallable) // @ game+0x2486108
	void SetNiagaraVariableMatrix(struct FString InVariableName, struct FMatrix& InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableMatrix // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x5d00f28
	void SetNiagaraVariableLinearColor(struct FString InVariableName, struct FLinearColor& InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableLinearColor // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x5d00d54
	void SetNiagaraVariableInt(struct FString InVariableName, int32_t InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableInt // (Final|Native|Public|BlueprintCallable) // @ game+0x5d00ba4
	void SetNiagaraVariableFloat(struct FString InVariableName, float InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableFloat // (Final|Native|Public|BlueprintCallable) // @ game+0x5d009f0
	void SetNiagaraVariableBool(struct FString InVariableName, bool InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableBool // (Final|Native|Public|BlueprintCallable) // @ game+0x5d00840
	void SetNiagaraVariableActor(struct FString InVariableName, struct AActor* Actor); // Function Niagara.NiagaraComponent.SetNiagaraVariableActor // (Final|Native|Public|BlueprintCallable) // @ game+0x5d00690
	void SetMaxSimTime(float InMaxTime); // Function Niagara.NiagaraComponent.SetMaxSimTime // (Final|Native|Public|BlueprintCallable) // @ game+0x5d0060c
	void SetLockDesiredAgeDeltaTimeToSeekDelta(bool bLock); // Function Niagara.NiagaraComponent.SetLockDesiredAgeDeltaTimeToSeekDelta // (Final|Native|Public|BlueprintCallable) // @ game+0x5d0058c
	void SetGpuComputeDebug(bool bEnableDebug); // Function Niagara.NiagaraComponent.SetGpuComputeDebug // (Final|Native|Public|BlueprintCallable) // @ game+0x5d004f0
	void SetForceSolo(bool bInForceSolo); // Function Niagara.NiagaraComponent.SetForceSolo // (Final|Native|Public|BlueprintCallable) // @ game+0x5d00470
	void SetForceLocalPlayerEffect(bool bIsPlayerEffect); // Function Niagara.NiagaraComponent.SetForceLocalPlayerEffect // (Final|Native|Public|BlueprintCallable) // @ game+0x5d003f0
	void SetEmitterFixedBounds(struct FName EmitterName, struct FBox LocalBounds); // Function Niagara.NiagaraComponent.SetEmitterFixedBounds // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x5d00304
	void SetDesiredAge(float InDesiredAge); // Function Niagara.NiagaraComponent.SetDesiredAge // (Final|Native|Public|BlueprintCallable) // @ game+0x5d00280
	void SetCustomTimeDilation(float Dilation); // Function Niagara.NiagaraComponent.SetCustomTimeDilation // (Final|Native|Public|BlueprintCallable) // @ game+0x27ea110
	void SetCanRenderWhileSeeking(bool bInCanRenderWhileSeeking); // Function Niagara.NiagaraComponent.SetCanRenderWhileSeeking // (Final|Native|Public|BlueprintCallable) // @ game+0x5d00200
	void SetAutoDestroy(bool bInAutoDestroy); // Function Niagara.NiagaraComponent.SetAutoDestroy // (Final|Native|Public|BlueprintCallable) // @ game+0x5d00180
	void SetAsset(struct UNiagaraSystem* InAsset, bool bResetExistingOverrideParameters); // Function Niagara.NiagaraComponent.SetAsset // (Final|Native|Public|BlueprintCallable) // @ game+0x21e590c
	void SetAllowScalability(bool bAllow); // Function Niagara.NiagaraComponent.SetAllowScalability // (Final|Native|Public|BlueprintCallable) // @ game+0x5d00100
	void SetAgeUpdateMode(enum class ENiagaraAgeUpdateMode InAgeUpdateMode); // Function Niagara.NiagaraComponent.SetAgeUpdateMode // (Final|Native|Public|BlueprintCallable) // @ game+0x5d00084
	void SeekToDesiredAge(float InDesiredAge); // Function Niagara.NiagaraComponent.SeekToDesiredAge // (Final|Native|Public|BlueprintCallable) // @ game+0x5cffff8
	void ResetSystem(); // Function Niagara.NiagaraComponent.ResetSystem // (Final|Native|Public|BlueprintCallable) // @ game+0x5cfffdc
	void ReinitializeSystem(); // Function Niagara.NiagaraComponent.ReinitializeSystem // (Final|Native|Public|BlueprintCallable) // @ game+0x5cfffc8
	bool IsPaused(); // Function Niagara.NiagaraComponent.IsPaused // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cfff94
	void InitForPerformanceBaseline(); // Function Niagara.NiagaraComponent.InitForPerformanceBaseline // (Final|Native|Public|BlueprintCallable) // @ game+0x5cfff58
	enum class ENiagaraTickBehavior GetTickBehavior(); // Function Niagara.NiagaraComponent.GetTickBehavior // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cfff40
	struct FBox GetSystemFixedBounds(); // Function Niagara.NiagaraComponent.GetSystemFixedBounds // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cfff00
	struct UNiagaraSimCache* GetSimCache(); // Function Niagara.NiagaraComponent.GetSimCache // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cffee8
	float GetSeekDelta(); // Function Niagara.NiagaraComponent.GetSeekDelta // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cffed0
	int32_t GetRandomSeedOffset(); // Function Niagara.NiagaraComponent.GetRandomSeedOffset // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cffeb8
	bool GetPreviewLODDistanceEnabled(); // Function Niagara.NiagaraComponent.GetPreviewLODDistanceEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cffe9c
	float GetPreviewLODDistance(); // Function Niagara.NiagaraComponent.GetPreviewLODDistance // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cffe70
	struct TArray<struct FVector> GetNiagaraParticleValueVec3_DebugOnly(struct FString InEmitterName, struct FString InValueName); // Function Niagara.NiagaraComponent.GetNiagaraParticleValueVec3_DebugOnly // (Final|Native|Public|BlueprintCallable) // @ game+0x5cff8ec
	struct TArray<float> GetNiagaraParticleValues_DebugOnly(struct FString InEmitterName, struct FString InValueName); // Function Niagara.NiagaraComponent.GetNiagaraParticleValues_DebugOnly // (Final|Native|Public|BlueprintCallable) // @ game+0x5cffbac
	struct TArray<struct FVector> GetNiagaraParticlePositions_DebugOnly(struct FString InEmitterName); // Function Niagara.NiagaraComponent.GetNiagaraParticlePositions_DebugOnly // (Final|Native|Public|BlueprintCallable) // @ game+0x5cff750
	float GetMaxSimTime(); // Function Niagara.NiagaraComponent.GetMaxSimTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cff738
	bool GetLockDesiredAgeDeltaTimeToSeekDelta(); // Function Niagara.NiagaraComponent.GetLockDesiredAgeDeltaTimeToSeekDelta // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cff720
	bool GetForceSolo(); // Function Niagara.NiagaraComponent.GetForceSolo // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cff704
	bool GetForceLocalPlayerEffect(); // Function Niagara.NiagaraComponent.GetForceLocalPlayerEffect // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cff6e8
	struct FBox GetEmitterFixedBounds(struct FName EmitterName); // Function Niagara.NiagaraComponent.GetEmitterFixedBounds // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cff638
	float GetDesiredAge(); // Function Niagara.NiagaraComponent.GetDesiredAge // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cff620
	struct UNiagaraDataInterface* GetDataInterface(struct FString Name); // Function Niagara.NiagaraComponent.GetDataInterface // (Final|Native|Public|BlueprintCallable) // @ game+0x5cff480
	float GetCustomTimeDilation(); // Function Niagara.NiagaraComponent.GetCustomTimeDilation // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cff468
	struct UNiagaraSystem* GetAsset(); // Function Niagara.NiagaraComponent.GetAsset // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x27ccf5c
	bool GetAllowScalability(); // Function Niagara.NiagaraComponent.GetAllowScalability // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cff44c
	enum class ENiagaraAgeUpdateMode GetAgeUpdateMode(); // Function Niagara.NiagaraComponent.GetAgeUpdateMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cff434
	void ClearSystemFixedBounds(); // Function Niagara.NiagaraComponent.ClearSystemFixedBounds // (Final|Native|Public|BlueprintCallable) // @ game+0x5cff420
	void ClearEmitterFixedBounds(struct FName EmitterName); // Function Niagara.NiagaraComponent.ClearEmitterFixedBounds // (Final|Native|Public|BlueprintCallable) // @ game+0x5cff3a0
	void AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds); // Function Niagara.NiagaraComponent.AdvanceSimulationByTime // (Final|Native|Public|BlueprintCallable) // @ game+0x5cff2c4
	void AdvanceSimulation(int32_t TickCount, float TickDeltaSeconds); // Function Niagara.NiagaraComponent.AdvanceSimulation // (Final|Native|Public|BlueprintCallable) // @ game+0x5cff124
};

// Class Niagara.NiagaraComponentPool
// Size: 0x80 (Inherited: 0x28)
struct UNiagaraComponentPool : UObject {
	struct TMap<struct UNiagaraSystem*, struct FNCPool> WorldParticleSystemPools; // 0x28(0x50)
	char pad_78[0x8]; // 0x78(0x08)
};

// Class Niagara.NiagaraRendererProperties
// Size: 0xc8 (Inherited: 0x28)
struct UNiagaraRendererProperties : UNiagaraMergeable {
	struct FNiagaraPlatformSet Platforms; // 0x28(0x30)
	int32_t SortOrderHint; // 0x58(0x04)
	enum class ENiagaraRendererMotionVectorSetting MotionVectorSetting; // 0x5c(0x04)
	struct FNiagaraVariableAttributeBinding RendererEnabledBinding; // 0x60(0x40)
	bool bIsEnabled; // 0xa0(0x01)
	bool bAllowInCullProxies; // 0xa1(0x01)
	char pad_A2[0x2]; // 0xa2(0x02)
	struct FGuid OuterEmitterVersion; // 0xa4(0x10)
	bool bMotionBlurEnabled; // 0xb4(0x01)
	char pad_B5[0x13]; // 0xb5(0x13)
};

// Class Niagara.NiagaraComponentRendererProperties
// Size: 0x1e8 (Inherited: 0xc8)
struct UNiagaraComponentRendererProperties : UNiagaraRendererProperties {
	struct USceneComponent* ComponentType; // 0xc8(0x08)
	uint32_t ComponentCountLimit; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct FNiagaraVariableAttributeBinding EnabledBinding; // 0xd8(0x40)
	struct FNiagaraVariableAttributeBinding RendererVisibilityTagBinding; // 0x118(0x40)
	bool bAssignComponentsOnParticleID; // 0x158(0x01)
	bool bCreateComponentFirstParticleFrame; // 0x159(0x01)
	bool bOnlyActivateNewlyAquiredComponents; // 0x15a(0x01)
	char pad_15B[0x1]; // 0x15b(0x01)
	int32_t RendererVisibility; // 0x15c(0x04)
	struct USceneComponent* TemplateComponent; // 0x160(0x08)
	struct TArray<struct FNiagaraComponentPropertyBinding> PropertyBindings; // 0x168(0x10)
	char pad_178[0x70]; // 0x178(0x70)
};

// Class Niagara.NiagaraComponentSettings
// Size: 0x1b8 (Inherited: 0x28)
struct UNiagaraComponentSettings : UObject {
	struct TSet<struct FName> SuppressActivationList; // 0x28(0x50)
	struct TSet<struct FName> ForceAutoPooolingList; // 0x78(0x50)
	struct TSet<struct FNiagaraEmitterNameSettingsRef> SuppressEmitterList; // 0xc8(0x50)
	struct TSet<struct FNiagaraEmitterNameSettingsRef> GPUEmitterAllowList; // 0x118(0x50)
	struct TSet<struct FName> GpuDataInterfaceDenyList; // 0x168(0x50)
};

// Class Niagara.NiagaraConvertInPlaceUtilityBase
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraConvertInPlaceUtilityBase : UObject {
};

// Class Niagara.NiagaraCullProxyComponent
// Size: 0x7e0 (Inherited: 0x7d0)
struct UNiagaraCullProxyComponent : UNiagaraComponent {
	struct TArray<struct FNiagaraCulledComponentInfo> Instances; // 0x7c8(0x10)
};

// Class Niagara.NiagaraDataInterface
// Size: 0x38 (Inherited: 0x28)
struct UNiagaraDataInterface : UNiagaraDataInterfaceBase {
	char pad_28[0x10]; // 0x28(0x10)
};

// Class Niagara.NiagaraDataInterface2DArrayTexture
// Size: 0x58 (Inherited: 0x38)
struct UNiagaraDataInterface2DArrayTexture : UNiagaraDataInterface {
	struct UTexture* Texture; // 0x38(0x08)
	struct FNiagaraUserParameterBinding TextureUserParameter; // 0x40(0x18)
};

// Class Niagara.NiagaraDataInterfaceActorComponent
// Size: 0x70 (Inherited: 0x38)
struct UNiagaraDataInterfaceActorComponent : UNiagaraDataInterface {
	bool bRequireCurrentFrameData; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	LazyObjectProperty SourceActor; // 0x3c(0x1c)
	struct FNiagaraUserParameterBinding ActorOrComponentParameter; // 0x58(0x18)
};

// Class Niagara.NiagaraDataInterfaceRWBase
// Size: 0x38 (Inherited: 0x38)
struct UNiagaraDataInterfaceRWBase : UNiagaraDataInterface {
};

// Class Niagara.NiagaraDataInterfaceArray
// Size: 0x48 (Inherited: 0x38)
struct UNiagaraDataInterfaceArray : UNiagaraDataInterfaceRWBase {
	char pad_38[0x8]; // 0x38(0x08)
	enum class ENiagaraGpuSyncMode GpuSyncMode; // 0x40(0x04)
	int32_t MaxElements; // 0x44(0x04)
};

// Class Niagara.NiagaraDataInterfaceArrayFloat
// Size: 0x58 (Inherited: 0x48)
struct UNiagaraDataInterfaceArrayFloat : UNiagaraDataInterfaceArray {
	struct TArray<float> FloatData; // 0x48(0x10)
};

// Class Niagara.NiagaraDataInterfaceArrayFloat2
// Size: 0x58 (Inherited: 0x48)
struct UNiagaraDataInterfaceArrayFloat2 : UNiagaraDataInterfaceArray {
	struct TArray<struct FVector2D> FloatData; // 0x48(0x10)
};

// Class Niagara.NiagaraDataInterfaceArrayFloat3
// Size: 0x58 (Inherited: 0x48)
struct UNiagaraDataInterfaceArrayFloat3 : UNiagaraDataInterfaceArray {
	struct TArray<struct FVector> FloatData; // 0x48(0x10)
};

// Class Niagara.NiagaraDataInterfaceArrayPosition
// Size: 0x58 (Inherited: 0x48)
struct UNiagaraDataInterfaceArrayPosition : UNiagaraDataInterfaceArray {
	struct TArray<struct FNiagaraPosition> PositionData; // 0x48(0x10)
};

// Class Niagara.NiagaraDataInterfaceArrayFloat4
// Size: 0x58 (Inherited: 0x48)
struct UNiagaraDataInterfaceArrayFloat4 : UNiagaraDataInterfaceArray {
	struct TArray<struct FVector4> FloatData; // 0x48(0x10)
};

// Class Niagara.NiagaraDataInterfaceArrayColor
// Size: 0x58 (Inherited: 0x48)
struct UNiagaraDataInterfaceArrayColor : UNiagaraDataInterfaceArray {
	struct TArray<struct FLinearColor> ColorData; // 0x48(0x10)
};

// Class Niagara.NiagaraDataInterfaceArrayQuat
// Size: 0x58 (Inherited: 0x48)
struct UNiagaraDataInterfaceArrayQuat : UNiagaraDataInterfaceArray {
	struct TArray<struct FQuat> QuatData; // 0x48(0x10)
};

// Class Niagara.NiagaraDataInterfaceArrayFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraDataInterfaceArrayFunctionLibrary : UBlueprintFunctionLibrary {

	void SetNiagaraArrayVectorValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index, struct FVector& Value, bool bSizeToFit); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVectorValue // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x5d05320
	void SetNiagaraArrayVector4Value(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index, struct FVector4& Value, bool bSizeToFit); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector4Value // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x5d05044
	void SetNiagaraArrayVector4(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<struct FVector4>& ArrayData); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector4 // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5d04f14
	void SetNiagaraArrayVector2DValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index, struct FVector2D& Value, bool bSizeToFit); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector2DValue // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x5d04d70
	void SetNiagaraArrayVector2D(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<struct FVector2D>& ArrayData); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector2D // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5d04c40
	void SetNiagaraArrayVector(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<struct FVector>& ArrayData); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5d051fc
	void SetNiagaraArrayQuatValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index, struct FQuat& Value, bool bSizeToFit); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayQuatValue // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x5d04a9c
	void SetNiagaraArrayQuat(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<struct FQuat>& ArrayData); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayQuat // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5d0496c
	void SetNiagaraArrayPositionValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index, struct FVector& Value, bool bSizeToFit); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayPositionValue // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x5d047e8
	void SetNiagaraArrayPosition(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<struct FVector>& ArrayData); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayPosition // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5d046c4
	void SetNiagaraArrayInt32Value(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index, int32_t Value, bool bSizeToFit); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayInt32Value // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d04538
	void SetNiagaraArrayInt32(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<int32_t>& ArrayData); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayInt32 // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5d04414
	void SetNiagaraArrayFloatValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index, float Value, bool bSizeToFit); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayFloatValue // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d04274
	void SetNiagaraArrayFloat(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<float>& ArrayData); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayFloat // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5d04150
	void SetNiagaraArrayColorValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index, struct FLinearColor& Value, bool bSizeToFit); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayColorValue // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x5d03fac
	void SetNiagaraArrayColor(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<struct FLinearColor>& ArrayData); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayColor // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5d03e7c
	void SetNiagaraArrayBoolValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index, bool& Value, bool bSizeToFit); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayBoolValue // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5d03cd4
	void SetNiagaraArrayBool(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<bool>& ArrayData); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayBool // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5d03bb0
	struct FVector GetNiagaraArrayVectorValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVectorValue // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x5d03a9c
	struct FVector4 GetNiagaraArrayVector4Value(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector4Value // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x5d03878
	struct TArray<struct FVector4> GetNiagaraArrayVector4(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector4 // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d0374c
	struct FVector2D GetNiagaraArrayVector2DValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector2DValue // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x5d03640
	struct TArray<struct FVector2D> GetNiagaraArrayVector2D(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector2D // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d0353c
	struct TArray<struct FVector> GetNiagaraArrayVector(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d03998
	struct FQuat GetNiagaraArrayQuatValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayQuatValue // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x5d03428
	struct TArray<struct FQuat> GetNiagaraArrayQuat(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayQuat // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d03324
	struct FVector GetNiagaraArrayPositionValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayPositionValue // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x5d031d4
	struct TArray<struct FVector> GetNiagaraArrayPosition(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayPosition // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d030ec
	int32_t GetNiagaraArrayInt32Value(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayInt32Value // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d02fe4
	struct TArray<int32_t> GetNiagaraArrayInt32(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayInt32 // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d02ee0
	float GetNiagaraArrayFloatValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayFloatValue // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d02dd8
	struct TArray<float> GetNiagaraArrayFloat(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayFloat // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d02cd4
	struct FLinearColor GetNiagaraArrayColorValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayColorValue // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x5d02bc8
	struct TArray<struct FLinearColor> GetNiagaraArrayColor(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayColor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d02ac4
	bool GetNiagaraArrayBoolValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayBoolValue // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d029b8
	struct TArray<bool> GetNiagaraArrayBool(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayBool // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d028b4
};

// Class Niagara.NiagaraDataInterfaceArrayInt32
// Size: 0x58 (Inherited: 0x48)
struct UNiagaraDataInterfaceArrayInt32 : UNiagaraDataInterfaceArray {
	struct TArray<int32_t> IntData; // 0x48(0x10)
};

// Class Niagara.NiagaraDataInterfaceArrayBool
// Size: 0x58 (Inherited: 0x48)
struct UNiagaraDataInterfaceArrayBool : UNiagaraDataInterfaceArray {
	struct TArray<bool> BoolData; // 0x48(0x10)
};

// Class Niagara.NiagaraDataInterfaceArrayNiagaraID
// Size: 0x58 (Inherited: 0x48)
struct UNiagaraDataInterfaceArrayNiagaraID : UNiagaraDataInterfaceArray {
	struct TArray<struct FNiagaraID> IntData; // 0x48(0x10)
};

// Class Niagara.NiagaraDataInterfaceAsyncGpuTrace
// Size: 0x48 (Inherited: 0x38)
struct UNiagaraDataInterfaceAsyncGpuTrace : UNiagaraDataInterface {
	int32_t MaxTracesPerParticle; // 0x38(0x04)
	int32_t MaxRetraces; // 0x3c(0x04)
	enum class ENDICollisionQuery_AsyncGpuTraceProvider TraceProvider; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// Class Niagara.NiagaraDataInterfaceAudioSubmix
// Size: 0x40 (Inherited: 0x38)
struct UNiagaraDataInterfaceAudioSubmix : UNiagaraDataInterface {
	struct USoundSubmix* Submix; // 0x38(0x08)
};

// Class Niagara.NiagaraDataInterfaceAudioOscilloscope
// Size: 0x48 (Inherited: 0x38)
struct UNiagaraDataInterfaceAudioOscilloscope : UNiagaraDataInterface {
	struct USoundSubmix* Submix; // 0x38(0x08)
	int32_t Resolution; // 0x40(0x04)
	float ScopeInMilliseconds; // 0x44(0x04)
};

// Class Niagara.NiagaraDataInterfaceAudioPlayer
// Size: 0x70 (Inherited: 0x38)
struct UNiagaraDataInterfaceAudioPlayer : UNiagaraDataInterface {
	struct USoundBase* SoundToPlay; // 0x38(0x08)
	struct USoundAttenuation* Attenuation; // 0x40(0x08)
	struct USoundConcurrency* Concurrency; // 0x48(0x08)
	struct TArray<struct FName> ParameterNames; // 0x50(0x10)
	bool bLimitPlaysPerTick; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	int32_t MaxPlaysPerTick; // 0x64(0x04)
	bool bStopWhenComponentIsDestroyed; // 0x68(0x01)
	bool bAllowLoopingOneShotSounds; // 0x69(0x01)
	char pad_6A[0x6]; // 0x6a(0x06)
};

// Class Niagara.NiagaraDataInterfaceAudioSpectrum
// Size: 0x50 (Inherited: 0x40)
struct UNiagaraDataInterfaceAudioSpectrum : UNiagaraDataInterfaceAudioSubmix {
	int32_t Resolution; // 0x40(0x04)
	float MinimumFrequency; // 0x44(0x04)
	float MaximumFrequency; // 0x48(0x04)
	float NoiseFloorDb; // 0x4c(0x04)
};

// Class Niagara.NiagaraDataInterfaceCamera
// Size: 0x40 (Inherited: 0x38)
struct UNiagaraDataInterfaceCamera : UNiagaraDataInterface {
	int32_t PlayerControllerIndex; // 0x38(0x04)
	bool bRequireCurrentFrameData; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
};

// Class Niagara.NiagaraDataInterfaceCollisionQuery
// Size: 0x40 (Inherited: 0x38)
struct UNiagaraDataInterfaceCollisionQuery : UNiagaraDataInterface {
	char pad_38[0x8]; // 0x38(0x08)
};

// Class Niagara.NiagaraDataInterfaceCurveBase
// Size: 0x70 (Inherited: 0x38)
struct UNiagaraDataInterfaceCurveBase : UNiagaraDataInterface {
	struct TArray<float> ShaderLUT; // 0x38(0x10)
	float LUTMinTime; // 0x48(0x04)
	float LUTMaxTime; // 0x4c(0x04)
	float LUTInvTimeRange; // 0x50(0x04)
	float LUTNumSamplesMinusOne; // 0x54(0x04)
	char pad_58[0x4]; // 0x58(0x04)
	char bUseLUT : 1; // 0x5c(0x01)
	char bExposeCurve : 1; // 0x5c(0x01)
	char pad_5C_2 : 6; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	struct FName ExposedName; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct UTexture2D* ExposedTexture; // 0x68(0x08)
};

// Class Niagara.NiagaraDataInterfaceColorCurve
// Size: 0x270 (Inherited: 0x70)
struct UNiagaraDataInterfaceColorCurve : UNiagaraDataInterfaceCurveBase {
	struct FRichCurve RedCurve; // 0x70(0x80)
	struct FRichCurve GreenCurve; // 0xf0(0x80)
	struct FRichCurve BlueCurve; // 0x170(0x80)
	struct FRichCurve AlphaCurve; // 0x1f0(0x80)
};

// Class Niagara.NiagaraDataInterfaceCubeTexture
// Size: 0x58 (Inherited: 0x38)
struct UNiagaraDataInterfaceCubeTexture : UNiagaraDataInterface {
	struct UTexture* Texture; // 0x38(0x08)
	struct FNiagaraUserParameterBinding TextureUserParameter; // 0x40(0x18)
};

// Class Niagara.NiagaraDataInterfaceCurlNoise
// Size: 0x58 (Inherited: 0x38)
struct UNiagaraDataInterfaceCurlNoise : UNiagaraDataInterface {
	uint32_t Seed; // 0x38(0x04)
	char pad_3C[0x1c]; // 0x3c(0x1c)
};

// Class Niagara.NiagaraDataInterfaceCurve
// Size: 0xf0 (Inherited: 0x70)
struct UNiagaraDataInterfaceCurve : UNiagaraDataInterfaceCurveBase {
	struct FRichCurve Curve; // 0x70(0x80)
};

// Class Niagara.NiagaraDataInterfaceDebugDraw
// Size: 0x40 (Inherited: 0x38)
struct UNiagaraDataInterfaceDebugDraw : UNiagaraDataInterface {
	uint32_t OverrideMaxLineInstances; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class Niagara.NiagaraDataInterfaceEmitterProperties
// Size: 0x40 (Inherited: 0x38)
struct UNiagaraDataInterfaceEmitterProperties : UNiagaraDataInterface {
	struct FNiagaraDataInterfaceEmitterBinding EmitterBinding; // 0x38(0x08)
};

// Class Niagara.NiagaraParticleCallbackHandler
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraParticleCallbackHandler : UInterface {

	void ReceiveParticleData(struct TArray<struct FBasicParticleData>& Data, struct UNiagaraSystem* NiagaraSystem, struct FVector& SimulationPositionOffset); // Function Niagara.NiagaraParticleCallbackHandler.ReceiveParticleData // (Native|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x5d069b0
};

// Class Niagara.NiagaraDataInterfaceExport
// Size: 0x60 (Inherited: 0x38)
struct UNiagaraDataInterfaceExport : UNiagaraDataInterface {
	struct FNiagaraUserParameterBinding CallbackHandlerParameter; // 0x38(0x18)
	enum class ENDIExport_GPUAllocationMode GPUAllocationMode; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	int32_t GPUAllocationFixedSize; // 0x54(0x04)
	float GPUAllocationPerParticleSize; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// Class Niagara.NiagaraDataInterfaceGBuffer
// Size: 0x38 (Inherited: 0x38)
struct UNiagaraDataInterfaceGBuffer : UNiagaraDataInterface {
};

// Class Niagara.NiagaraDataInterfaceGrid2D
// Size: 0x60 (Inherited: 0x38)
struct UNiagaraDataInterfaceGrid2D : UNiagaraDataInterfaceRWBase {
	int32_t NumCellsX; // 0x38(0x04)
	int32_t NumCellsY; // 0x3c(0x04)
	int32_t NumCellsMaxAxis; // 0x40(0x04)
	int32_t NumAttributes; // 0x44(0x04)
	bool SetGridFromMaxAxis; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct FVector2D WorldBBoxSize; // 0x50(0x10)
};

// Class Niagara.NiagaraDataInterfaceGrid2DCollection
// Size: 0x120 (Inherited: 0x60)
struct UNiagaraDataInterfaceGrid2DCollection : UNiagaraDataInterfaceGrid2D {
	struct FNiagaraUserParameterBinding RenderTargetUserParameter; // 0x60(0x18)
	enum class ENiagaraGpuBufferFormat OverrideBufferFormat; // 0x78(0x01)
	char bOverrideFormat : 1; // 0x79(0x01)
	char pad_79_1 : 7; // 0x79(0x01)
	char pad_7A[0x56]; // 0x7a(0x56)
	struct TMap<uint64_t, struct UTextureRenderTarget2DArray*> ManagedRenderTargets; // 0xd0(0x50)

	void GetTextureSize(struct UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY); // Function Niagara.NiagaraDataInterfaceGrid2DCollection.GetTextureSize // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5d06728
	void GetRawTextureSize(struct UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY); // Function Niagara.NiagaraDataInterfaceGrid2DCollection.GetRawTextureSize // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5d064a0
	bool FillTexture2D(struct UNiagaraComponent* Component, struct UTextureRenderTarget2D* Dest, int32_t AttributeIndex); // Function Niagara.NiagaraDataInterfaceGrid2DCollection.FillTexture2D // (Native|Public|BlueprintCallable) // @ game+0x5d063a0
	bool FillRawTexture2D(struct UNiagaraComponent* Component, struct UTextureRenderTarget2D* Dest, int32_t& TilesX, int32_t& TilesY); // Function Niagara.NiagaraDataInterfaceGrid2DCollection.FillRawTexture2D // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5d06084
};

// Class Niagara.NiagaraDataInterfaceGrid2DCollectionReader
// Size: 0x140 (Inherited: 0x120)
struct UNiagaraDataInterfaceGrid2DCollectionReader : UNiagaraDataInterfaceGrid2DCollection {
	struct FString EmitterName; // 0x120(0x10)
	struct FString DIName; // 0x130(0x10)
};

// Class Niagara.NiagaraDataInterfaceGrid3D
// Size: 0x68 (Inherited: 0x38)
struct UNiagaraDataInterfaceGrid3D : UNiagaraDataInterfaceRWBase {
	struct FIntVector NumCells; // 0x38(0x0c)
	float CellSize; // 0x44(0x04)
	int32_t NumCellsMaxAxis; // 0x48(0x04)
	enum class ESetResolutionMethod SetResolutionMethod; // 0x4c(0x04)
	struct FVector WorldBBoxSize; // 0x50(0x18)
};

// Class Niagara.NiagaraDataInterfaceGrid3DCollection
// Size: 0xe0 (Inherited: 0x68)
struct UNiagaraDataInterfaceGrid3DCollection : UNiagaraDataInterfaceGrid3D {
	int32_t NumAttributes; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct FNiagaraUserParameterBinding RenderTargetUserParameter; // 0x70(0x18)
	enum class ENiagaraGpuBufferFormat OverrideBufferFormat; // 0x88(0x01)
	char bOverrideFormat : 1; // 0x89(0x01)
	char pad_89_1 : 7; // 0x89(0x01)
	char pad_8A[0x56]; // 0x8a(0x56)

	void GetTextureSize(struct UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY, int32_t& SizeZ); // Function Niagara.NiagaraDataInterfaceGrid3DCollection.GetTextureSize // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5d0683c
	void GetRawTextureSize(struct UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY, int32_t& SizeZ); // Function Niagara.NiagaraDataInterfaceGrid3DCollection.GetRawTextureSize // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5d065b4
	bool FillVolumeTexture(struct UNiagaraComponent* Component, struct UVolumeTexture* Dest, int32_t AttributeIndex); // Function Niagara.NiagaraDataInterfaceGrid3DCollection.FillVolumeTexture // (Native|Public|BlueprintCallable) // @ game+0x5d063a0
	bool FillRawVolumeTexture(struct UNiagaraComponent* Component, struct UVolumeTexture* Dest, int32_t& TilesX, int32_t& TilesY, int32_t& TileZ); // Function Niagara.NiagaraDataInterfaceGrid3DCollection.FillRawVolumeTexture // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5d061e8
};

// Class Niagara.NiagaraDataInterfaceGrid3DCollectionReader
// Size: 0x100 (Inherited: 0xe0)
struct UNiagaraDataInterfaceGrid3DCollectionReader : UNiagaraDataInterfaceGrid3DCollection {
	struct FString EmitterName; // 0xe0(0x10)
	struct FString DIName; // 0xf0(0x10)
};

// Class Niagara.NiagaraDataInterfaceIntRenderTarget2D
// Size: 0xa8 (Inherited: 0x38)
struct UNiagaraDataInterfaceIntRenderTarget2D : UNiagaraDataInterfaceRWBase {
	struct FIntPoint Size; // 0x38(0x08)
	struct FNiagaraUserParameterBinding RenderTargetUserParameter; // 0x40(0x18)
	struct TMap<uint64_t, struct UTextureRenderTarget2D*> ManagedRenderTargets; // 0x58(0x50)
};

// Class Niagara.NiagaraDataInterfaceLandscape
// Size: 0x58 (Inherited: 0x38)
struct UNiagaraDataInterfaceLandscape : UNiagaraDataInterface {
	struct AActor* SourceLandscape; // 0x38(0x08)
	enum class ENDILandscape_SourceMode SourceMode; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct TArray<struct UPhysicalMaterial*> PhysicalMaterials; // 0x48(0x10)
};

// Class Niagara.NiagaraDataInterfaceMeshRendererInfo
// Size: 0x50 (Inherited: 0x38)
struct UNiagaraDataInterfaceMeshRendererInfo : UNiagaraDataInterface {
	struct UNiagaraMeshRendererProperties* MeshRenderer; // 0x38(0x08)
	char pad_40[0x10]; // 0x40(0x10)
};

// Class Niagara.NiagaraDataInterfaceNeighborGrid3D
// Size: 0x70 (Inherited: 0x68)
struct UNiagaraDataInterfaceNeighborGrid3D : UNiagaraDataInterfaceGrid3D {
	uint32_t MaxNeighborsPerCell; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// Class Niagara.NiagaraDataInterfaceOcclusion
// Size: 0x38 (Inherited: 0x38)
struct UNiagaraDataInterfaceOcclusion : UNiagaraDataInterface {
};

// Class Niagara.NiagaraDataInterfaceParticleRead
// Size: 0x48 (Inherited: 0x38)
struct UNiagaraDataInterfaceParticleRead : UNiagaraDataInterfaceRWBase {
	struct FString EmitterName; // 0x38(0x10)
};

// Class Niagara.NiagaraDataInterfacePlatformSet
// Size: 0x68 (Inherited: 0x38)
struct UNiagaraDataInterfacePlatformSet : UNiagaraDataInterface {
	struct FNiagaraPlatformSet Platforms; // 0x38(0x30)
};

// Class Niagara.NiagaraDataInterfaceRasterizationGrid3D
// Size: 0x78 (Inherited: 0x68)
struct UNiagaraDataInterfaceRasterizationGrid3D : UNiagaraDataInterfaceGrid3D {
	int32_t NumAttributes; // 0x68(0x04)
	float Precision; // 0x6c(0x04)
	int32_t ResetValue; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// Class Niagara.NiagaraDataInterfaceRenderTarget2D
// Size: 0x100 (Inherited: 0x38)
struct UNiagaraDataInterfaceRenderTarget2D : UNiagaraDataInterfaceRWBase {
	struct FIntPoint Size; // 0x38(0x08)
	enum class ENiagaraMipMapGeneration MipMapGeneration; // 0x40(0x01)
	enum class ENiagaraMipMapGenerationType MipMapGenerationType; // 0x41(0x01)
	enum class ETextureRenderTargetFormat OverrideRenderTargetFormat; // 0x42(0x01)
	char bInheritUserParameterSettings : 1; // 0x43(0x01)
	char bOverrideFormat : 1; // 0x43(0x01)
	char pad_43_2 : 6; // 0x43(0x01)
	char pad_44[0x4]; // 0x44(0x04)
	struct FNiagaraUserParameterBinding RenderTargetUserParameter; // 0x48(0x18)
	char pad_60[0x50]; // 0x60(0x50)
	struct TMap<uint64_t, struct UTextureRenderTarget2D*> ManagedRenderTargets; // 0xb0(0x50)
};

// Class Niagara.NiagaraDataInterfaceRenderTarget2DArray
// Size: 0xb0 (Inherited: 0x38)
struct UNiagaraDataInterfaceRenderTarget2DArray : UNiagaraDataInterfaceRWBase {
	struct FIntVector Size; // 0x38(0x0c)
	enum class ETextureRenderTargetFormat OverrideRenderTargetFormat; // 0x44(0x01)
	char bInheritUserParameterSettings : 1; // 0x45(0x01)
	char bOverrideFormat : 1; // 0x45(0x01)
	char pad_45_2 : 6; // 0x45(0x01)
	char pad_46[0x2]; // 0x46(0x02)
	struct FNiagaraUserParameterBinding RenderTargetUserParameter; // 0x48(0x18)
	struct TMap<uint64_t, struct UTextureRenderTarget2DArray*> ManagedRenderTargets; // 0x60(0x50)
};

// Class Niagara.NiagaraDataInterfaceRenderTargetCube
// Size: 0xa8 (Inherited: 0x38)
struct UNiagaraDataInterfaceRenderTargetCube : UNiagaraDataInterfaceRWBase {
	int32_t Size; // 0x38(0x04)
	enum class ETextureRenderTargetFormat OverrideRenderTargetFormat; // 0x3c(0x01)
	char bInheritUserParameterSettings : 1; // 0x3d(0x01)
	char bOverrideFormat : 1; // 0x3d(0x01)
	char pad_3D_2 : 6; // 0x3d(0x01)
	char pad_3E[0x2]; // 0x3e(0x02)
	struct FNiagaraUserParameterBinding RenderTargetUserParameter; // 0x40(0x18)
	struct TMap<uint64_t, struct UTextureRenderTargetCube*> ManagedRenderTargets; // 0x58(0x50)
};

// Class Niagara.NiagaraDataInterfaceRenderTargetVolume
// Size: 0xb0 (Inherited: 0x38)
struct UNiagaraDataInterfaceRenderTargetVolume : UNiagaraDataInterfaceRWBase {
	struct FIntVector Size; // 0x38(0x0c)
	enum class ETextureRenderTargetFormat OverrideRenderTargetFormat; // 0x44(0x01)
	char bInheritUserParameterSettings : 1; // 0x45(0x01)
	char bOverrideFormat : 1; // 0x45(0x01)
	char pad_45_2 : 6; // 0x45(0x01)
	char pad_46[0x2]; // 0x46(0x02)
	struct FNiagaraUserParameterBinding RenderTargetUserParameter; // 0x48(0x18)
	struct TMap<uint64_t, struct UTextureRenderTargetVolume*> ManagedRenderTargets; // 0x60(0x50)
};

// Class Niagara.NiagaraDataInterfaceRigidMeshCollisionQuery
// Size: 0x70 (Inherited: 0x38)
struct UNiagaraDataInterfaceRigidMeshCollisionQuery : UNiagaraDataInterface {
	struct TArray<struct FName> ActorTags; // 0x38(0x10)
	struct TArray<struct FName> ComponentTags; // 0x48(0x10)
	struct TArray<struct TSoftObjectPtr<AActor>> SourceActors; // 0x58(0x10)
	bool OnlyUseMoveable; // 0x68(0x01)
	bool GlobalSearchAllowed; // 0x69(0x01)
	bool GlobalSearchForced; // 0x6a(0x01)
	bool GlobalSearchFallback_Unscripted; // 0x6b(0x01)
	int32_t MaxNumPrimitives; // 0x6c(0x04)
};

// Class Niagara.NiagaraDIRigidMeshCollisionFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraDIRigidMeshCollisionFunctionLibrary : UBlueprintFunctionLibrary {

	void SetSourceActors(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<struct AActor*>& SourceActors); // Function Niagara.NiagaraDIRigidMeshCollisionFunctionLibrary.SetSourceActors // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5d07290
};

// Class Niagara.NiagaraDataInterfaceSimpleCounter
// Size: 0x40 (Inherited: 0x38)
struct UNiagaraDataInterfaceSimpleCounter : UNiagaraDataInterface {
	enum class ENiagaraGpuSyncMode GpuSyncMode; // 0x38(0x04)
	int32_t InitialValue; // 0x3c(0x04)
};

// Class Niagara.NiagaraDataInterfaceSkeletalMesh
// Size: 0xe0 (Inherited: 0x38)
struct UNiagaraDataInterfaceSkeletalMesh : UNiagaraDataInterface {
	enum class ENDISkeletalMesh_SourceMode SourceMode; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct TSoftObjectPtr<AActor> SoftSourceActor; // 0x40(0x28)
	struct USkeletalMeshComponent* SourceComponent; // 0x68(0x08)
	struct FNiagaraUserParameterBinding MeshUserParameter; // 0x70(0x18)
	enum class ENDISkeletalMesh_SkinningMode SkinningMode; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
	struct TArray<struct FName> SamplingRegions; // 0x90(0x10)
	int32_t WholeMeshLOD; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct TArray<struct FName> FilteredBones; // 0xa8(0x10)
	struct TArray<struct FName> FilteredSockets; // 0xb8(0x10)
	struct FName ExcludeBoneName; // 0xc8(0x04)
	char bExcludeBone : 1; // 0xcc(0x01)
	char pad_CC_1 : 7; // 0xcc(0x01)
	char pad_CD[0x3]; // 0xcd(0x03)
	int32_t UvSetIndex; // 0xd0(0x04)
	bool bRequireCurrentFrameData; // 0xd4(0x01)
	char pad_D5[0xb]; // 0xd5(0x0b)

	void OnSourceEndPlay(struct AActor* InSource, enum class EEndPlayReason Reason); // Function Niagara.NiagaraDataInterfaceSkeletalMesh.OnSourceEndPlay // (Final|Native|Protected) // @ game+0x2531b70
};

// Class Niagara.NiagaraDataInterfaceSpline
// Size: 0xb0 (Inherited: 0x38)
struct UNiagaraDataInterfaceSpline : UNiagaraDataInterface {
	struct AActor* Source; // 0x38(0x08)
	struct FNiagaraUserParameterBinding SplineUserParameter; // 0x40(0x18)
	bool bUseLUT; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	int32_t NumLUTSteps; // 0x5c(0x04)
	char pad_60[0x50]; // 0x60(0x50)
};

// Class Niagara.NiagaraDataInterfaceStaticMesh
// Size: 0xa8 (Inherited: 0x38)
struct UNiagaraDataInterfaceStaticMesh : UNiagaraDataInterface {
	enum class ENDIStaticMesh_SourceMode SourceMode; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct UStaticMesh* DefaultMesh; // 0x40(0x08)
	struct TSoftObjectPtr<AActor> SoftSourceActor; // 0x48(0x28)
	struct UStaticMeshComponent* SourceComponent; // 0x70(0x08)
	struct FNDIStaticMeshSectionFilter SectionFilter; // 0x78(0x10)
	bool bUsePhysicsBodyVelocity; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
	struct TArray<struct FName> FilteredSockets; // 0x90(0x10)
	char pad_A0[0x8]; // 0xa0(0x08)

	void OnSourceEndPlay(struct AActor* InSource, enum class EEndPlayReason Reason); // Function Niagara.NiagaraDataInterfaceStaticMesh.OnSourceEndPlay // (Final|Native|Protected) // @ game+0x5d071cc
};

// Class Niagara.NiagaraDataInterfaceTexture
// Size: 0x58 (Inherited: 0x38)
struct UNiagaraDataInterfaceTexture : UNiagaraDataInterface {
	struct UTexture* Texture; // 0x38(0x08)
	struct FNiagaraUserParameterBinding TextureUserParameter; // 0x40(0x18)
};

// Class Niagara.NiagaraDataInterfaceUObjectPropertyReader
// Size: 0x98 (Inherited: 0x38)
struct UNiagaraDataInterfaceUObjectPropertyReader : UNiagaraDataInterface {
	struct FNiagaraUserParameterBinding UObjectParameterBinding; // 0x38(0x18)
	struct TArray<struct FNiagaraUObjectPropertyReaderRemap> PropertyRemap; // 0x50(0x10)
	struct TSoftObjectPtr<AActor> SourceActor; // 0x60(0x28)
	ClassPtrProperty SourceActorComponentClass; // 0x88(0x08)
	char pad_90[0x8]; // 0x90(0x08)

	void SetUObjectReaderPropertyRemap(struct UNiagaraComponent* NiagaraComponent, struct FName UserParameterName, struct FName GraphName, struct FName RemapName); // Function Niagara.NiagaraDataInterfaceUObjectPropertyReader.SetUObjectReaderPropertyRemap // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d073b4
};

// Class Niagara.NiagaraDataInterfaceVector2DCurve
// Size: 0x170 (Inherited: 0x70)
struct UNiagaraDataInterfaceVector2DCurve : UNiagaraDataInterfaceCurveBase {
	struct FRichCurve XCurve; // 0x70(0x80)
	struct FRichCurve YCurve; // 0xf0(0x80)
};

// Class Niagara.NiagaraDataInterfaceVector4Curve
// Size: 0x270 (Inherited: 0x70)
struct UNiagaraDataInterfaceVector4Curve : UNiagaraDataInterfaceCurveBase {
	struct FRichCurve XCurve; // 0x70(0x80)
	struct FRichCurve YCurve; // 0xf0(0x80)
	struct FRichCurve ZCurve; // 0x170(0x80)
	struct FRichCurve WCurve; // 0x1f0(0x80)
};

// Class Niagara.NiagaraDataInterfaceVectorCurve
// Size: 0x1f0 (Inherited: 0x70)
struct UNiagaraDataInterfaceVectorCurve : UNiagaraDataInterfaceCurveBase {
	struct FRichCurve XCurve; // 0x70(0x80)
	struct FRichCurve YCurve; // 0xf0(0x80)
	struct FRichCurve ZCurve; // 0x170(0x80)
};

// Class Niagara.NiagaraDataInterfaceVectorField
// Size: 0x48 (Inherited: 0x38)
struct UNiagaraDataInterfaceVectorField : UNiagaraDataInterface {
	struct UVectorField* Field; // 0x38(0x08)
	bool bTileX; // 0x40(0x01)
	bool bTileY; // 0x41(0x01)
	bool bTileZ; // 0x42(0x01)
	char pad_43[0x5]; // 0x43(0x05)
};

// Class Niagara.NiagaraDataInterfaceVolumeCache
// Size: 0x90 (Inherited: 0x38)
struct UNiagaraDataInterfaceVolumeCache : UNiagaraDataInterface {
	struct UVolumeCache* VolumeCache; // 0x38(0x08)
	char pad_40[0x50]; // 0x40(0x50)
};

// Class Niagara.NiagaraDataInterfaceVolumeTexture
// Size: 0x58 (Inherited: 0x38)
struct UNiagaraDataInterfaceVolumeTexture : UNiagaraDataInterface {
	struct UTexture* Texture; // 0x38(0x08)
	struct FNiagaraUserParameterBinding TextureUserParameter; // 0x40(0x18)
};

// Class Niagara.NiagaraDebugHUDSettings
// Size: 0x278 (Inherited: 0x28)
struct UNiagaraDebugHUDSettings : UObject {
	char pad_28[0x20]; // 0x28(0x20)
	struct FNiagaraDebugHUDSettingsData Data; // 0x48(0x230)
};

// Class Niagara.NiagaraEditorDataBase
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraEditorDataBase : UObject {
};

// Class Niagara.NiagaraEditorParametersAdapterBase
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraEditorParametersAdapterBase : UObject {
};

// Class Niagara.NiagaraSignificanceHandler
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraSignificanceHandler : UObject {
};

// Class Niagara.NiagaraSignificanceHandlerDistance
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraSignificanceHandlerDistance : UNiagaraSignificanceHandler {
};

// Class Niagara.NiagaraSignificanceHandlerAge
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraSignificanceHandlerAge : UNiagaraSignificanceHandler {
};

// Class Niagara.NiagaraEffectType
// Size: 0xb0 (Inherited: 0x28)
struct UNiagaraEffectType : UObject {
	bool bAllowCullingForLocalPlayers; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	enum class ENiagaraScalabilityUpdateFrequency UpdateFrequency; // 0x2c(0x04)
	enum class ENiagaraCullReaction CullReaction; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct UNiagaraSignificanceHandler* SignificanceHandler; // 0x38(0x08)
	struct TArray<struct FNiagaraSystemScalabilitySettings> DetailLevelScalabilitySettings; // 0x40(0x10)
	struct FNiagaraSystemScalabilitySettingsArray SystemScalabilitySettings; // 0x50(0x10)
	struct FNiagaraEmitterScalabilitySettingsArray EmitterScalabilitySettings; // 0x60(0x10)
	struct TArray<struct UNiagaraValidationRule*> ValidationRules; // 0x70(0x10)
	char pad_80[0x8]; // 0x80(0x08)
	struct UNiagaraBaselineController* PerformanceBaselineController; // 0x88(0x08)
	struct FNiagaraPerfBaselineStats PerfBaselineStats; // 0x90(0x10)
	struct FGuid PerfBaselineVersion; // 0xa0(0x10)
};

// Class Niagara.NiagaraEmitter
// Size: 0xb8 (Inherited: 0x28)
struct UNiagaraEmitter : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FGuid ExposedVersion; // 0x30(0x10)
	bool bVersioningEnabled; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct TArray<struct FVersionedNiagaraEmitterData> VersionData; // 0x48(0x10)
	char pad_58[0x8]; // 0x58(0x08)
	struct FString UniqueEmitterName; // 0x60(0x10)
	struct TArray<struct UNiagaraRendererProperties*> RendererProperties; // 0x70(0x10)
	struct TArray<struct FNiagaraEventScriptProperties> EventHandlerScriptProps; // 0x80(0x10)
	struct TArray<struct UNiagaraSimulationStageBase*> SimulationStages; // 0x90(0x10)
	struct UNiagaraScript* GPUComputeScript; // 0xa0(0x08)
	struct TArray<struct FName> SharedEventGeneratorIds; // 0xa8(0x10)
};

// Class Niagara.NiagaraEventReceiverEmitterAction
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraEventReceiverEmitterAction : UObject {
};

// Class Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles
// Size: 0x30 (Inherited: 0x28)
struct UNiagaraEventReceiverEmitterAction_SpawnParticles : UNiagaraEventReceiverEmitterAction {
	uint32_t NumParticles; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class Niagara.NiagaraFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraFunctionLibrary : UBlueprintFunctionLibrary {

	struct UNiagaraComponent* SpawnSystemAttachedWithParams(struct FFXSystemSpawnParameters& SpawnParams); // Function Niagara.NiagaraFunctionLibrary.SpawnSystemAttachedWithParams // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5d0be68
	struct UNiagaraComponent* SpawnSystemAttached(struct UNiagaraSystem* SystemTemplate, struct USceneComponent* AttachToComponent, struct FName AttachPointName, struct FVector Location, struct FRotator Rotation, enum class EAttachLocation LocationType, bool bAutoDestroy, bool bAutoActivate, enum class ENCPoolMethod PoolingMethod, bool bPreCullCheck); // Function Niagara.NiagaraFunctionLibrary.SpawnSystemAttached // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xf9f3d8
	struct UNiagaraComponent* SpawnSystemAtLocationWithParams(struct FFXSystemSpawnParameters& SpawnParams); // Function Niagara.NiagaraFunctionLibrary.SpawnSystemAtLocationWithParams // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5d0bdd0
	struct UNiagaraComponent* SpawnSystemAtLocation(struct UObject* WorldContextObject, struct UNiagaraSystem* SystemTemplate, struct FVector Location, struct FRotator Rotation, struct FVector Scale, bool bAutoDestroy, bool bAutoActivate, enum class ENCPoolMethod PoolingMethod, bool bPreCullCheck); // Function Niagara.NiagaraFunctionLibrary.SpawnSystemAtLocation // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x129c850
	void SetVolumeTextureObject(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct UVolumeTexture* Texture); // Function Niagara.NiagaraFunctionLibrary.SetVolumeTextureObject // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d0bbf8
	void SetTextureObject(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct UTexture* Texture); // Function Niagara.NiagaraFunctionLibrary.SetTextureObject // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d0bbf8
	void SetTexture2DArrayObject(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct UTexture2DArray* Texture); // Function Niagara.NiagaraFunctionLibrary.SetTexture2DArrayObject // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d0bbf8
	void SetSkeletalMeshDataInterfaceSamplingRegions(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct TArray<struct FName>& SamplingRegions); // Function Niagara.NiagaraFunctionLibrary.SetSkeletalMeshDataInterfaceSamplingRegions // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5d0b65c
	void SetSkeletalMeshDataInterfaceFilteredSockets(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct TArray<struct FName>& FilteredSockets); // Function Niagara.NiagaraFunctionLibrary.SetSkeletalMeshDataInterfaceFilteredSockets // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5d0b0c0
	void SetSkeletalMeshDataInterfaceFilteredBones(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct TArray<struct FName>& FilteredBones); // Function Niagara.NiagaraFunctionLibrary.SetSkeletalMeshDataInterfaceFilteredBones // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5d0ab24
	void SetComponentNiagaraGPURayTracedCollisionGroup(struct UObject* WorldContextObject, struct UPrimitiveComponent* Primitive, int32_t CollisionGroup); // Function Niagara.NiagaraFunctionLibrary.SetComponentNiagaraGPURayTracedCollisionGroup // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d0a964
	void SetActorNiagaraGPURayTracedCollisionGroup(struct UObject* WorldContextObject, struct AActor* Actor, int32_t CollisionGroup); // Function Niagara.NiagaraFunctionLibrary.SetActorNiagaraGPURayTracedCollisionGroup // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d0a824
	void ReleaseNiagaraGPURayTracedCollisionGroup(struct UObject* WorldContextObject, int32_t CollisionGroup); // Function Niagara.NiagaraFunctionLibrary.ReleaseNiagaraGPURayTracedCollisionGroup // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d0a71c
	void OverrideSystemUserVariableStaticMeshComponent(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct UStaticMeshComponent* StaticMeshComponent); // Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMeshComponent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x2a68cd4
	void OverrideSystemUserVariableStaticMesh(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct UStaticMesh* StaticMesh); // Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMesh // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d0a544
	void OverrideSystemUserVariableSkeletalMeshComponent(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct USkeletalMeshComponent* SkeletalMeshComponent); // Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableSkeletalMeshComponent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x153ce40
	struct UNiagaraParameterCollectionInstance* GetNiagaraParameterCollection(struct UObject* WorldContextObject, struct UNiagaraParameterCollection* Collection); // Function Niagara.NiagaraFunctionLibrary.GetNiagaraParameterCollection // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d0a3f0
	int32_t AcquireNiagaraGPURayTracedCollisionGroup(struct UObject* WorldContextObject); // Function Niagara.NiagaraFunctionLibrary.AcquireNiagaraGPURayTracedCollisionGroup // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d0a348
};

// Class Niagara.NiagaraLensEffectBase
// Size: 0x320 (Inherited: 0x298)
struct ANiagaraLensEffectBase : ANiagaraActor {
	char pad_298[0x8]; // 0x298(0x08)
	struct FTransform DesiredRelativeTransform; // 0x2a0(0x60)
	float BaseAuthoredFOV; // 0x300(0x04)
	char bAllowMultipleInstances : 1; // 0x304(0x01)
	char bResetWhenRetriggered : 1; // 0x304(0x01)
	char pad_304_2 : 6; // 0x304(0x01)
	char pad_305[0x3]; // 0x305(0x03)
	struct TArray<struct AActor*> EmittersToTreatAsSame; // 0x308(0x10)
	struct APlayerCameraManager* OwningCameraManager; // 0x318(0x08)
};

// Class Niagara.NiagaraLightRendererProperties
// Size: 0x2e8 (Inherited: 0xc8)
struct UNiagaraLightRendererProperties : UNiagaraRendererProperties {
	char bUseInverseSquaredFalloff : 1; // 0xc8(0x01)
	char bAffectsTranslucency : 1; // 0xc8(0x01)
	char bAlphaScalesBrightness : 1; // 0xc8(0x01)
	char pad_C8_3 : 5; // 0xc8(0x01)
	char pad_C9[0x3]; // 0xc9(0x03)
	float RadiusScale; // 0xcc(0x04)
	float DefaultExponent; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct FVector ColorAdd; // 0xd8(0x18)
	int32_t RendererVisibility; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
	struct FNiagaraVariableAttributeBinding LightRenderingEnabledBinding; // 0xf8(0x40)
	struct FNiagaraVariableAttributeBinding LightExponentBinding; // 0x138(0x40)
	struct FNiagaraVariableAttributeBinding PositionBinding; // 0x178(0x40)
	struct FNiagaraVariableAttributeBinding ColorBinding; // 0x1b8(0x40)
	struct FNiagaraVariableAttributeBinding RadiusBinding; // 0x1f8(0x40)
	struct FNiagaraVariableAttributeBinding VolumetricScatteringBinding; // 0x238(0x40)
	struct FNiagaraVariableAttributeBinding RendererVisibilityTagBinding; // 0x278(0x40)
	char pad_2B8[0x30]; // 0x2b8(0x30)
};

// Class Niagara.NiagaraMeshRendererProperties
// Size: 0x748 (Inherited: 0xc8)
struct UNiagaraMeshRendererProperties : UNiagaraRendererProperties {
	struct TArray<struct FNiagaraMeshRendererMeshProperties> Meshes; // 0xc8(0x10)
	enum class ENiagaraRendererSourceDataMode SourceMode; // 0xd8(0x01)
	enum class ENiagaraSortMode SortMode; // 0xd9(0x01)
	char pad_DA[0x2]; // 0xda(0x02)
	char bOverrideMaterials : 1; // 0xdc(0x01)
	char bSortOnlyWhenTranslucent : 1; // 0xdc(0x01)
	char pad_DC_2 : 6; // 0xdc(0x01)
	char pad_DD[0x3]; // 0xdd(0x03)
	enum class ENiagaraRendererSortPrecision SortPrecision; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	char bGpuLowLatencyTranslucency : 1; // 0xe4(0x01)
	char bSubImageBlend : 1; // 0xe4(0x01)
	char bEnableFrustumCulling : 1; // 0xe4(0x01)
	char bEnableCameraDistanceCulling : 1; // 0xe4(0x01)
	char bEnableMeshFlipbook : 1; // 0xe4(0x01)
	char pad_E4_5 : 3; // 0xe4(0x01)
	char pad_E5[0x3]; // 0xe5(0x03)
	struct TArray<struct FNiagaraMeshMaterialOverride> OverrideMaterials; // 0xe8(0x10)
	struct FVector2D SubImageSize; // 0xf8(0x10)
	enum class ENiagaraMeshFacingMode FacingMode; // 0x108(0x01)
	char pad_109[0x3]; // 0x109(0x03)
	char bLockedAxisEnable : 1; // 0x10c(0x01)
	char pad_10C_1 : 7; // 0x10c(0x01)
	char pad_10D[0x3]; // 0x10d(0x03)
	struct FVector LockedAxis; // 0x110(0x18)
	enum class ENiagaraMeshLockedAxisSpace LockedAxisSpace; // 0x128(0x01)
	char pad_129[0x3]; // 0x129(0x03)
	float MinCameraDistance; // 0x12c(0x04)
	float MaxCameraDistance; // 0x130(0x04)
	uint32_t RendererVisibility; // 0x134(0x04)
	struct FNiagaraVariableAttributeBinding PositionBinding; // 0x138(0x40)
	struct FNiagaraVariableAttributeBinding ColorBinding; // 0x178(0x40)
	struct FNiagaraVariableAttributeBinding VelocityBinding; // 0x1b8(0x40)
	struct FNiagaraVariableAttributeBinding MeshOrientationBinding; // 0x1f8(0x40)
	struct FNiagaraVariableAttributeBinding ScaleBinding; // 0x238(0x40)
	struct FNiagaraVariableAttributeBinding SubImageIndexBinding; // 0x278(0x40)
	struct FNiagaraVariableAttributeBinding DynamicMaterialBinding; // 0x2b8(0x40)
	struct FNiagaraVariableAttributeBinding DynamicMaterial1Binding; // 0x2f8(0x40)
	struct FNiagaraVariableAttributeBinding DynamicMaterial2Binding; // 0x338(0x40)
	struct FNiagaraVariableAttributeBinding DynamicMaterial3Binding; // 0x378(0x40)
	struct FNiagaraVariableAttributeBinding MaterialRandomBinding; // 0x3b8(0x40)
	struct FNiagaraVariableAttributeBinding CustomSortingBinding; // 0x3f8(0x40)
	struct FNiagaraVariableAttributeBinding NormalizedAgeBinding; // 0x438(0x40)
	struct FNiagaraVariableAttributeBinding CameraOffsetBinding; // 0x478(0x40)
	struct FNiagaraVariableAttributeBinding RendererVisibilityTagBinding; // 0x4b8(0x40)
	struct FNiagaraVariableAttributeBinding MeshIndexBinding; // 0x4f8(0x40)
	struct FNiagaraRendererMaterialParameters MaterialParameters; // 0x538(0x40)
	struct FNiagaraVariableAttributeBinding PrevPositionBinding; // 0x578(0x40)
	struct FNiagaraVariableAttributeBinding PrevScaleBinding; // 0x5b8(0x40)
	struct FNiagaraVariableAttributeBinding PrevMeshOrientationBinding; // 0x5f8(0x40)
	struct FNiagaraVariableAttributeBinding PrevCameraOffsetBinding; // 0x638(0x40)
	struct FNiagaraVariableAttributeBinding PrevVelocityBinding; // 0x678(0x40)
	char pad_6B8[0x68]; // 0x6b8(0x68)
	struct UStaticMesh* ParticleMesh; // 0x720(0x08)
	struct FVector PivotOffset; // 0x728(0x18)
	enum class ENiagaraMeshPivotOffsetSpace PivotOffsetSpace; // 0x740(0x01)
	char pad_741[0x7]; // 0x741(0x07)
};

// Class Niagara.NiagaraMessageDataBase
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraMessageDataBase : UObject {
};

// Class Niagara.NiagaraParameterCollectionInstance
// Size: 0xf0 (Inherited: 0x28)
struct UNiagaraParameterCollectionInstance : UObject {
	struct UNiagaraParameterCollection* Collection; // 0x28(0x08)
	struct TArray<struct FNiagaraVariable> OverridenParameters; // 0x30(0x10)
	struct FNiagaraParameterStore ParameterStorage; // 0x40(0x88)
	char pad_C8[0x28]; // 0xc8(0x28)

	void SetVectorParameter(struct FString InVariableName, struct FVector InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetVectorParameter // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x5d0db28
	void SetVector4Parameter(struct FString InVariableName, struct FVector4& InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetVector4Parameter // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x5d0d960
	void SetVector2DParameter(struct FString InVariableName, struct FVector2D InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetVector2DParameter // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x5d0d7ac
	void SetQuatParameter(struct FString InVariableName, struct FQuat& InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetQuatParameter // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x5d0d5fc
	void SetIntParameter(struct FString InVariableName, int32_t InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetIntParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x5d0d44c
	void SetFloatParameter(struct FString InVariableName, float InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetFloatParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x5d0d298
	void SetColorParameter(struct FString InVariableName, struct FLinearColor InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetColorParameter // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x5d0d0e4
	void SetBoolParameter(struct FString InVariableName, bool InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetBoolParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x5d0cf34
	struct FVector GetVectorParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetVectorParameter // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x5d0cc6c
	struct FVector4 GetVector4Parameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetVector4Parameter // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x5d0cae4
	struct FVector2D GetVector2DParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetVector2DParameter // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x5d0c964
	struct FQuat GetQuatParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetQuatParameter // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x5d0c7c8
	int32_t GetIntParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetIntParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x5d0c654
	float GetFloatParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetFloatParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x5d0c4dc
	struct FLinearColor GetColorParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetColorParameter // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x5d0c35c
	bool GetBoolParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetBoolParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x5d0c1e8
};

// Class Niagara.NiagaraParameterCollection
// Size: 0x60 (Inherited: 0x28)
struct UNiagaraParameterCollection : UObject {
	struct FName Namespace; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct FNiagaraVariable> Parameters; // 0x30(0x10)
	struct UMaterialParameterCollection* SourceMaterialCollection; // 0x40(0x08)
	struct UNiagaraParameterCollectionInstance* DefaultInstance; // 0x48(0x08)
	struct FGuid CompileId; // 0x50(0x10)
};

// Class Niagara.NiagaraParameterDefinitionsBase
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraParameterDefinitionsBase : UObject {
};

// Class Niagara.NiagaraBaselineController
// Size: 0x68 (Inherited: 0x28)
struct UNiagaraBaselineController : UObject {
	float TestDuration; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct UNiagaraEffectType* EffectType; // 0x30(0x08)
	struct ANiagaraPerfBaselineActor* Owner; // 0x38(0x08)
	struct TSoftObjectPtr<UNiagaraSystem> System; // 0x40(0x28)

	bool OnTickTest(); // Function Niagara.NiagaraBaselineController.OnTickTest // (Native|Event|Public|BlueprintEvent) // @ game+0x5d0cf0c
	void OnOwnerTick(float DeltaTime); // Function Niagara.NiagaraBaselineController.OnOwnerTick // (Native|Event|Public|BlueprintEvent) // @ game+0x5d0ce84
	void OnEndTest(struct FNiagaraPerfBaselineStats Stats); // Function Niagara.NiagaraBaselineController.OnEndTest // (Native|Event|Public|BlueprintEvent) // @ game+0x5d0cdf4
	void OnBeginTest(); // Function Niagara.NiagaraBaselineController.OnBeginTest // (Native|Event|Public|BlueprintEvent) // @ game+0x26d2f98
	struct UNiagaraSystem* GetSystem(); // Function Niagara.NiagaraBaselineController.GetSystem // (Final|Native|Public|BlueprintCallable) // @ game+0x5d0c950
};

// Class Niagara.NiagaraBaselineController_Basic
// Size: 0x80 (Inherited: 0x68)
struct UNiagaraBaselineController_Basic : UNiagaraBaselineController {
	int32_t NumInstances; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct TArray<struct UNiagaraComponent*> SpawnedComponents; // 0x70(0x10)
};

// Class Niagara.NiagaraPerfBaselineActor
// Size: 0x298 (Inherited: 0x288)
struct ANiagaraPerfBaselineActor : AActor {
	struct UNiagaraBaselineController* Controller; // 0x288(0x08)
	struct UTextRenderComponent* Label; // 0x290(0x08)
};

// Class Niagara.NiagaraPrecompileContainer
// Size: 0x40 (Inherited: 0x28)
struct UNiagaraPrecompileContainer : UObject {
	struct TArray<struct UNiagaraScript*> Scripts; // 0x28(0x10)
	struct UNiagaraSystem* System; // 0x38(0x08)
};

// Class Niagara.NiagaraPreviewBase
// Size: 0x288 (Inherited: 0x288)
struct ANiagaraPreviewBase : AActor {

	void SetSystem(struct UNiagaraSystem* InSystem); // Function Niagara.NiagaraPreviewBase.SetSystem // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetLabelText(struct FText& InXAxisText, struct FText& InYAxisText); // Function Niagara.NiagaraPreviewBase.SetLabelText // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

// Class Niagara.NiagaraPreviewAxis
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraPreviewAxis : UObject {

	int32_t Num(); // Function Niagara.NiagaraPreviewAxis.Num // (Native|Event|Public|BlueprintEvent) // @ game+0x5d0ea64
	void ApplyToPreview(struct UNiagaraComponent* PreviewComponent, int32_t PreviewIndex, bool bIsXAxis, struct FString& OutLabelText); // Function Niagara.NiagaraPreviewAxis.ApplyToPreview // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x5d0e76c
};

// Class Niagara.NiagaraPreviewAxis_InterpParamBase
// Size: 0x30 (Inherited: 0x28)
struct UNiagaraPreviewAxis_InterpParamBase : UNiagaraPreviewAxis {
	struct FName Param; // 0x28(0x04)
	int32_t Count; // 0x2c(0x04)
};

// Class Niagara.NiagaraPreviewAxis_InterpParamInt32
// Size: 0x38 (Inherited: 0x30)
struct UNiagaraPreviewAxis_InterpParamInt32 : UNiagaraPreviewAxis_InterpParamBase {
	int32_t min; // 0x30(0x04)
	int32_t max; // 0x34(0x04)
};

// Class Niagara.NiagaraPreviewAxis_InterpParamFloat
// Size: 0x38 (Inherited: 0x30)
struct UNiagaraPreviewAxis_InterpParamFloat : UNiagaraPreviewAxis_InterpParamBase {
	float min; // 0x30(0x04)
	float max; // 0x34(0x04)
};

// Class Niagara.NiagaraPreviewAxis_InterpParamVector2D
// Size: 0x50 (Inherited: 0x30)
struct UNiagaraPreviewAxis_InterpParamVector2D : UNiagaraPreviewAxis_InterpParamBase {
	struct FVector2D min; // 0x30(0x10)
	struct FVector2D max; // 0x40(0x10)
};

// Class Niagara.NiagaraPreviewAxis_InterpParamVector
// Size: 0x60 (Inherited: 0x30)
struct UNiagaraPreviewAxis_InterpParamVector : UNiagaraPreviewAxis_InterpParamBase {
	struct FVector min; // 0x30(0x18)
	struct FVector max; // 0x48(0x18)
};

// Class Niagara.NiagaraPreviewAxis_InterpParamVector4
// Size: 0x70 (Inherited: 0x30)
struct UNiagaraPreviewAxis_InterpParamVector4 : UNiagaraPreviewAxis_InterpParamBase {
	struct FVector4 min; // 0x30(0x20)
	struct FVector4 max; // 0x50(0x20)
};

// Class Niagara.NiagaraPreviewAxis_InterpParamLinearColor
// Size: 0x50 (Inherited: 0x30)
struct UNiagaraPreviewAxis_InterpParamLinearColor : UNiagaraPreviewAxis_InterpParamBase {
	struct FLinearColor min; // 0x30(0x10)
	struct FLinearColor max; // 0x40(0x10)
};

// Class Niagara.NiagaraPreviewGrid
// Size: 0x2d8 (Inherited: 0x288)
struct ANiagaraPreviewGrid : AActor {
	struct UNiagaraSystem* System; // 0x288(0x08)
	enum class ENiagaraPreviewGridResetMode ResetMode; // 0x290(0x01)
	char pad_291[0x7]; // 0x291(0x07)
	struct UNiagaraPreviewAxis* PreviewAxisX; // 0x298(0x08)
	struct UNiagaraPreviewAxis* PreviewAxisY; // 0x2a0(0x08)
	struct ANiagaraPreviewBase* PreviewClass; // 0x2a8(0x08)
	float SpacingX; // 0x2b0(0x04)
	float SpacingY; // 0x2b4(0x04)
	int32_t NumX; // 0x2b8(0x04)
	int32_t NumY; // 0x2bc(0x04)
	struct TArray<struct UChildActorComponent*> PreviewComponents; // 0x2c0(0x10)
	char pad_2D0[0x8]; // 0x2d0(0x08)

	void SetPaused(bool bPaused); // Function Niagara.NiagaraPreviewGrid.SetPaused // (Final|Native|Public|BlueprintCallable) // @ game+0x5d0ea8c
	void GetPreviews(struct TArray<struct UNiagaraComponent*>& OutPreviews); // Function Niagara.NiagaraPreviewGrid.GetPreviews // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5d0e9b8
	void DeactivatePreviews(); // Function Niagara.NiagaraPreviewGrid.DeactivatePreviews // (Final|Native|Public|BlueprintCallable) // @ game+0x5d0e9a4
	void ActivatePreviews(bool bReset); // Function Niagara.NiagaraPreviewGrid.ActivatePreviews // (Final|Native|Public|BlueprintCallable) // @ game+0x5d0e6f0
};

// Class Niagara.NiagaraRibbonRendererProperties
// Size: 0x848 (Inherited: 0xc8)
struct UNiagaraRibbonRendererProperties : UNiagaraRendererProperties {
	struct UMaterialInterface* Material; // 0xc8(0x08)
	struct FNiagaraUserParameterBinding MaterialUserParamBinding; // 0xd0(0x18)
	enum class ENiagaraRibbonFacingMode FacingMode; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
	struct FNiagaraRibbonUVSettings UV0Settings; // 0xf0(0x38)
	struct FNiagaraRibbonUVSettings UV1Settings; // 0x128(0x38)
	int32_t MaxNumRibbons; // 0x160(0x04)
	bool bUseGPUInit; // 0x164(0x01)
	enum class ENiagaraRibbonDrawDirection DrawDirection; // 0x165(0x01)
	enum class ENiagaraRibbonShapeMode Shape; // 0x166(0x01)
	bool bEnableAccurateGeometry; // 0x167(0x01)
	int32_t WidthSegmentationCount; // 0x168(0x04)
	int32_t MultiPlaneCount; // 0x16c(0x04)
	int32_t TubeSubdivisions; // 0x170(0x04)
	char pad_174[0x4]; // 0x174(0x04)
	struct TArray<struct FNiagaraRibbonShapeCustomVertex> CustomVertices; // 0x178(0x10)
	float CurveTension; // 0x188(0x04)
	enum class ENiagaraRibbonTessellationMode TessellationMode; // 0x18c(0x01)
	char pad_18D[0x3]; // 0x18d(0x03)
	int32_t TessellationFactor; // 0x190(0x04)
	bool bUseConstantFactor; // 0x194(0x01)
	char pad_195[0x3]; // 0x195(0x03)
	float TessellationAngle; // 0x198(0x04)
	bool bScreenSpaceTessellation; // 0x19c(0x01)
	char pad_19D[0x3]; // 0x19d(0x03)
	struct FNiagaraVariableAttributeBinding PositionBinding; // 0x1a0(0x40)
	struct FNiagaraVariableAttributeBinding ColorBinding; // 0x1e0(0x40)
	struct FNiagaraVariableAttributeBinding VelocityBinding; // 0x220(0x40)
	struct FNiagaraVariableAttributeBinding NormalizedAgeBinding; // 0x260(0x40)
	struct FNiagaraVariableAttributeBinding RibbonTwistBinding; // 0x2a0(0x40)
	struct FNiagaraVariableAttributeBinding RibbonWidthBinding; // 0x2e0(0x40)
	struct FNiagaraVariableAttributeBinding RibbonFacingBinding; // 0x320(0x40)
	struct FNiagaraVariableAttributeBinding RibbonIdBinding; // 0x360(0x40)
	struct FNiagaraVariableAttributeBinding RibbonLinkOrderBinding; // 0x3a0(0x40)
	struct FNiagaraVariableAttributeBinding MaterialRandomBinding; // 0x3e0(0x40)
	struct FNiagaraVariableAttributeBinding DynamicMaterialBinding; // 0x420(0x40)
	struct FNiagaraVariableAttributeBinding DynamicMaterial1Binding; // 0x460(0x40)
	struct FNiagaraVariableAttributeBinding DynamicMaterial2Binding; // 0x4a0(0x40)
	struct FNiagaraVariableAttributeBinding DynamicMaterial3Binding; // 0x4e0(0x40)
	struct FNiagaraVariableAttributeBinding RibbonUVDistance; // 0x520(0x40)
	struct FNiagaraVariableAttributeBinding U0OverrideBinding; // 0x560(0x40)
	struct FNiagaraVariableAttributeBinding V0RangeOverrideBinding; // 0x5a0(0x40)
	struct FNiagaraVariableAttributeBinding U1OverrideBinding; // 0x5e0(0x40)
	struct FNiagaraVariableAttributeBinding V1RangeOverrideBinding; // 0x620(0x40)
	struct FNiagaraRendererMaterialParameters MaterialParameters; // 0x660(0x40)
	struct FNiagaraVariableAttributeBinding PrevPositionBinding; // 0x6a0(0x40)
	struct FNiagaraVariableAttributeBinding PrevRibbonWidthBinding; // 0x6e0(0x40)
	struct FNiagaraVariableAttributeBinding PrevRibbonFacingBinding; // 0x720(0x40)
	struct FNiagaraVariableAttributeBinding PrevRibbonTwistBinding; // 0x760(0x40)
	char pad_7A0[0xa8]; // 0x7a0(0xa8)
};

// Class Niagara.NiagaraScratchPadContainer
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraScratchPadContainer : UObject {
};

// Class Niagara.NiagaraScript
// Size: 0x398 (Inherited: 0x28)
struct UNiagaraScript : UNiagaraScriptBase {
	char pad_28[0x8]; // 0x28(0x08)
	enum class ENiagaraScriptUsage Usage; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	struct FGuid UsageId; // 0x34(0x10)
	char pad_44[0x4]; // 0x44(0x04)
	struct FNiagaraParameterStore RapidIterationParameters; // 0x48(0x88)
	struct FNiagaraScriptExecutionParameterStore ScriptExecutionParamStore; // 0xd0(0xa8)
	struct TArray<struct FNiagaraBoundParameter> ScriptExecutionBoundParameters; // 0x178(0x10)
	struct FNiagaraVMExecutableDataId CachedScriptVMId; // 0x188(0x58)
	char pad_1E0[0x10]; // 0x1e0(0x10)
	struct FNiagaraVMExecutableData CachedScriptVM; // 0x1f0(0x180)
	struct TArray<struct UNiagaraParameterCollection*> CachedParameterCollectionReferences; // 0x370(0x10)
	struct TArray<struct FNiagaraScriptDataInterfaceInfo> CachedDefaultDataInterfaces; // 0x380(0x10)
	char pad_390[0x8]; // 0x390(0x08)

	void RaiseOnGPUCompilationComplete(); // Function Niagara.NiagaraScript.RaiseOnGPUCompilationComplete // (Final|Native|Public) // @ game+0x24841e4
};

// Class Niagara.NiagaraScriptSourceBase
// Size: 0x48 (Inherited: 0x28)
struct UNiagaraScriptSourceBase : UObject {
	char pad_28[0x20]; // 0x28(0x20)
};

// Class Niagara.NiagaraSettings
// Size: 0xf0 (Inherited: 0x30)
struct UNiagaraSettings : UDeveloperSettings {
	bool bSystemsSupportLargeWorldCoordinates; // 0x30(0x01)
	bool bEnforceStrictStackTypes; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
	struct FSoftObjectPath DefaultEffectType; // 0x38(0x18)
	struct FLinearColor PositionPinTypeColor; // 0x50(0x10)
	struct TArray<struct FText> QualityLevels; // 0x60(0x10)
	struct TMap<struct FString, struct FText> ComponentRendererWarningsPerClass; // 0x70(0x50)
	enum class ETextureRenderTargetFormat DefaultRenderTargetFormat; // 0xc0(0x01)
	enum class ENiagaraGpuBufferFormat DefaultGridFormat; // 0xc1(0x01)
	char pad_C2[0x2]; // 0xc2(0x02)
	enum class ENiagaraDefaultRendererMotionVectorSetting DefaultRendererMotionVectorSetting; // 0xc4(0x04)
	enum class ENiagaraDefaultRendererPixelCoverageMode DefaultPixelCoverageMode; // 0xc8(0x01)
	enum class ENiagaraDefaultSortPrecision DefaultSortPrecision; // 0xc9(0x01)
	enum class ENDISkelMesh_GpuMaxInfluences NDISkelMesh_GpuMaxInfluences; // 0xca(0x01)
	enum class ENDISkelMesh_GpuUniformSamplingFormat NDISkelMesh_GpuUniformSamplingFormat; // 0xcb(0x01)
	enum class ENDISkelMesh_AdjacencyTriangleIndexFormat NDISkelMesh_AdjacencyTriangleIndexFormat; // 0xcc(0x01)
	bool NDIStaticMesh_AllowDistanceFields; // 0xcd(0x01)
	char pad_CE[0x2]; // 0xce(0x02)
	struct TArray<enum class ENDICollisionQuery_AsyncGpuTraceProvider> NDICollisionQuery_AsyncGpuTraceProviderOrder; // 0xd0(0x10)
	struct TArray<struct FNiagaraPlatformSetRedirect> PlatformSetRedirects; // 0xe0(0x10)
};

// Class Niagara.NiagaraSimCache
// Size: 0x170 (Inherited: 0x28)
struct UNiagaraSimCache : UObject {
	struct TSoftObjectPtr<UNiagaraSystem> SoftNiagaraSystem; // 0x28(0x28)
	float StartSeconds; // 0x50(0x04)
	float DurationSeconds; // 0x54(0x04)
	struct FNiagaraSimCacheCreateParameters CreateParameters; // 0x58(0x38)
	bool bNeedsReadComponentMappingRecache; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	struct FNiagaraSimCacheLayout CacheLayout; // 0x98(0x70)
	struct TArray<struct FNiagaraSimCacheFrame> CacheFrames; // 0x108(0x10)
	struct TMap<struct FNiagaraVariableBase, struct UObject*> DataInterfaceStorage; // 0x118(0x50)
	char pad_168[0x8]; // 0x168(0x08)

	void ReadVectorAttribute(struct TArray<struct FVector>& OutValues, struct FName AttributeName, struct FName EmitterName, int32_t FrameIndex); // Function Niagara.NiagaraSimCache.ReadVectorAttribute // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x5d11f94
	void ReadVector4Attribute(struct TArray<struct FVector4>& OutValues, struct FName AttributeName, struct FName EmitterName, int32_t FrameIndex); // Function Niagara.NiagaraSimCache.ReadVector4Attribute // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x5d11e18
	void ReadVector2Attribute(struct TArray<struct FVector2D>& OutValues, struct FName AttributeName, struct FName EmitterName, int32_t FrameIndex); // Function Niagara.NiagaraSimCache.ReadVector2Attribute // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x5d11c9c
	void ReadQuatAttributeWithRebase(struct TArray<struct FQuat>& OutValues, struct FName AttributeName, struct FName EmitterName, struct FQuat Quat, int32_t FrameIndex); // Function Niagara.NiagaraSimCache.ReadQuatAttributeWithRebase // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x5d11ac8
	void ReadQuatAttribute(struct TArray<struct FQuat>& OutValues, struct FName AttributeName, struct FName EmitterName, bool bLocalSpaceToWorld, int32_t FrameIndex); // Function Niagara.NiagaraSimCache.ReadQuatAttribute // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x5d11908
	void ReadPositionAttributeWithRebase(struct TArray<struct FVector>& OutValues, struct FName AttributeName, struct FName EmitterName, struct FTransform Transform, int32_t FrameIndex); // Function Niagara.NiagaraSimCache.ReadPositionAttributeWithRebase // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x5d1169c
	void ReadPositionAttribute(struct TArray<struct FVector>& OutValues, struct FName AttributeName, struct FName EmitterName, bool bLocalSpaceToWorld, int32_t FrameIndex); // Function Niagara.NiagaraSimCache.ReadPositionAttribute // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x5d114dc
	void ReadIntAttribute(struct TArray<int32_t>& OutValues, struct FName AttributeName, struct FName EmitterName, int32_t FrameIndex); // Function Niagara.NiagaraSimCache.ReadIntAttribute // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x5d11360
	void ReadFloatAttribute(struct TArray<float>& OutValues, struct FName AttributeName, struct FName EmitterName, int32_t FrameIndex); // Function Niagara.NiagaraSimCache.ReadFloatAttribute // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x5d111e4
	void ReadColorAttribute(struct TArray<struct FLinearColor>& OutValues, struct FName AttributeName, struct FName EmitterName, int32_t FrameIndex); // Function Niagara.NiagaraSimCache.ReadColorAttribute // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x5d11068
	bool IsCacheValid(); // Function Niagara.NiagaraSimCache.IsCacheValid // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5d11050
	float GetStartSeconds(); // Function Niagara.NiagaraSimCache.GetStartSeconds // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x21f0244
	int32_t GetNumFrames(); // Function Niagara.NiagaraSimCache.GetNumFrames // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5d11038
	int32_t GetNumEmitters(); // Function Niagara.NiagaraSimCache.GetNumEmitters // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5c3e664
	struct TArray<struct FName> GetEmitterNames(); // Function Niagara.NiagaraSimCache.GetEmitterNames // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5d10fb8
	struct FName GetEmitterName(int32_t EmitterIndex); // Function Niagara.NiagaraSimCache.GetEmitterName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5d10f10
};

// Class Niagara.AsyncNiagaraCaptureSimCache
// Size: 0x70 (Inherited: 0x30)
struct UAsyncNiagaraCaptureSimCache : UBlueprintAsyncActionBase {
	struct UNiagaraSimCache* CaptureSimCache; // 0x30(0x08)
	struct UNiagaraComponent* CaptureComponent; // 0x38(0x08)
	int32_t CaptureNumFrames; // 0x40(0x04)
	int32_t CaptureFrameRate; // 0x44(0x04)
	int32_t CaptureFrameCounter; // 0x48(0x04)
	int32_t TimeOutCounter; // 0x4c(0x04)
	struct FMulticastInlineDelegate CaptureComplete; // 0x50(0x10)
	char pad_60[0x10]; // 0x60(0x10)

	void OnCaptureComplete__DelegateSignature(); // DelegateFunction Niagara.AsyncNiagaraCaptureSimCache.OnCaptureComplete__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xd67374
	struct UAsyncNiagaraCaptureSimCache* CaptureNiagaraSimCacheUntilComplete(struct UNiagaraSimCache* SimCache, struct FNiagaraSimCacheCreateParameters CreateParameters, struct UNiagaraComponent* NiagaraComponent, int32_t CaptureRate); // Function Niagara.AsyncNiagaraCaptureSimCache.CaptureNiagaraSimCacheUntilComplete // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d12ebc
	struct UAsyncNiagaraCaptureSimCache* CaptureNiagaraSimCacheMultiFrame(struct UNiagaraSimCache* SimCache, struct FNiagaraSimCacheCreateParameters CreateParameters, struct UNiagaraComponent* NiagaraComponent, int32_t NumFrames, int32_t CaptureRate); // Function Niagara.AsyncNiagaraCaptureSimCache.CaptureNiagaraSimCacheMultiFrame // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d12c58
};

// Class Niagara.NiagaraSimCacheFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraSimCacheFunctionLibrary : UBlueprintFunctionLibrary {

	bool CaptureNiagaraSimCacheImmediate(struct UNiagaraSimCache* SimCache, struct FNiagaraSimCacheCreateParameters CreateParameters, struct UNiagaraComponent* NiagaraComponent); // Function Niagara.NiagaraSimCacheFunctionLibrary.CaptureNiagaraSimCacheImmediate // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5d12a8c
};

// Class Niagara.NiagaraSimulationStageBase
// Size: 0x38 (Inherited: 0x28)
struct UNiagaraSimulationStageBase : UNiagaraMergeable {
	struct UNiagaraScript* Script; // 0x28(0x08)
	struct FName SimulationStageName; // 0x30(0x04)
	char bEnabled : 1; // 0x34(0x01)
	char pad_34_1 : 7; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
};

// Class Niagara.NiagaraSimulationStageGeneric
// Size: 0x188 (Inherited: 0x38)
struct UNiagaraSimulationStageGeneric : UNiagaraSimulationStageBase {
	struct FNiagaraVariableAttributeBinding EnabledBinding; // 0x38(0x40)
	struct FNiagaraVariableAttributeBinding ElementCountBinding; // 0x78(0x40)
	enum class ENiagaraIterationSource IterationSource; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	int32_t Iterations; // 0xbc(0x04)
	struct FNiagaraVariableAttributeBinding NumIterationsBinding; // 0xc0(0x40)
	char bSpawnOnly : 1; // 0x100(0x01)
	char pad_100_1 : 7; // 0x100(0x01)
	char pad_101[0x3]; // 0x101(0x03)
	enum class ENiagaraSimStageExecuteBehavior ExecuteBehavior; // 0x104(0x01)
	char pad_105[0x3]; // 0x105(0x03)
	char bDisablePartialParticleUpdate : 1; // 0x108(0x01)
	char pad_108_1 : 7; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
	struct FNiagaraVariableDataInterfaceBinding DataInterface; // 0x110(0x18)
	char bParticleIterationStateEnabled : 1; // 0x128(0x01)
	char pad_128_1 : 7; // 0x128(0x01)
	char pad_129[0x7]; // 0x129(0x07)
	struct FNiagaraVariableAttributeBinding ParticleIterationStateBinding; // 0x130(0x40)
	struct FIntPoint ParticleIterationStateRange; // 0x170(0x08)
	char bGpuDispatchForceLinear : 1; // 0x178(0x01)
	char bOverrideGpuDispatchNumThreads : 1; // 0x178(0x01)
	char pad_178_2 : 6; // 0x178(0x01)
	char pad_179[0x3]; // 0x179(0x03)
	struct FIntVector OverrideGpuDispatchNumThreads; // 0x17c(0x0c)
};

// Class Niagara.NiagaraSpriteRendererProperties
// Size: 0x8c8 (Inherited: 0xc8)
struct UNiagaraSpriteRendererProperties : UNiagaraRendererProperties {
	struct UMaterialInterface* Material; // 0xc8(0x08)
	enum class ENiagaraRendererSourceDataMode SourceMode; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
	struct FNiagaraUserParameterBinding MaterialUserParamBinding; // 0xd8(0x18)
	enum class ENiagaraSpriteAlignment Alignment; // 0xf0(0x01)
	enum class ENiagaraSpriteFacingMode FacingMode; // 0xf1(0x01)
	char pad_F2[0x6]; // 0xf2(0x06)
	struct FVector2D PivotInUVSpace; // 0xf8(0x10)
	float MacroUVRadius; // 0x108(0x04)
	enum class ENiagaraSortMode SortMode; // 0x10c(0x01)
	char pad_10D[0x3]; // 0x10d(0x03)
	struct FVector2D SubImageSize; // 0x110(0x10)
	char bSubImageBlend : 1; // 0x120(0x01)
	char bRemoveHMDRollInVR : 1; // 0x120(0x01)
	char bSortOnlyWhenTranslucent : 1; // 0x120(0x01)
	char pad_120_3 : 5; // 0x120(0x01)
	char pad_121[0x3]; // 0x121(0x03)
	enum class ENiagaraRendererSortPrecision SortPrecision; // 0x124(0x01)
	char pad_125[0x3]; // 0x125(0x03)
	char bGpuLowLatencyTranslucency : 1; // 0x128(0x01)
	char pad_128_1 : 7; // 0x128(0x01)
	char pad_129[0x3]; // 0x129(0x03)
	enum class ENiagaraRendererPixelCoverageMode PixelCoverageMode; // 0x12c(0x01)
	char pad_12D[0x3]; // 0x12d(0x03)
	float PixelCoverageBlend; // 0x130(0x04)
	float MinFacingCameraBlendDistance; // 0x134(0x04)
	float MaxFacingCameraBlendDistance; // 0x138(0x04)
	char bEnableCameraDistanceCulling : 1; // 0x13c(0x01)
	char pad_13C_1 : 7; // 0x13c(0x01)
	char pad_13D[0x3]; // 0x13d(0x03)
	float MinCameraDistance; // 0x140(0x04)
	float MaxCameraDistance; // 0x144(0x04)
	uint32_t RendererVisibility; // 0x148(0x04)
	char pad_14C[0x4]; // 0x14c(0x04)
	struct FNiagaraVariableAttributeBinding PositionBinding; // 0x150(0x40)
	struct FNiagaraVariableAttributeBinding ColorBinding; // 0x190(0x40)
	struct FNiagaraVariableAttributeBinding VelocityBinding; // 0x1d0(0x40)
	struct FNiagaraVariableAttributeBinding SpriteRotationBinding; // 0x210(0x40)
	struct FNiagaraVariableAttributeBinding SpriteSizeBinding; // 0x250(0x40)
	struct FNiagaraVariableAttributeBinding SpriteFacingBinding; // 0x290(0x40)
	struct FNiagaraVariableAttributeBinding SpriteAlignmentBinding; // 0x2d0(0x40)
	struct FNiagaraVariableAttributeBinding SubImageIndexBinding; // 0x310(0x40)
	struct FNiagaraVariableAttributeBinding DynamicMaterialBinding; // 0x350(0x40)
	struct FNiagaraVariableAttributeBinding DynamicMaterial1Binding; // 0x390(0x40)
	struct FNiagaraVariableAttributeBinding DynamicMaterial2Binding; // 0x3d0(0x40)
	struct FNiagaraVariableAttributeBinding DynamicMaterial3Binding; // 0x410(0x40)
	struct FNiagaraVariableAttributeBinding CameraOffsetBinding; // 0x450(0x40)
	struct FNiagaraVariableAttributeBinding UVScaleBinding; // 0x490(0x40)
	struct FNiagaraVariableAttributeBinding PivotOffsetBinding; // 0x4d0(0x40)
	struct FNiagaraVariableAttributeBinding MaterialRandomBinding; // 0x510(0x40)
	struct FNiagaraVariableAttributeBinding CustomSortingBinding; // 0x550(0x40)
	struct FNiagaraVariableAttributeBinding NormalizedAgeBinding; // 0x590(0x40)
	struct FNiagaraVariableAttributeBinding RendererVisibilityTagBinding; // 0x5d0(0x40)
	struct FNiagaraRendererMaterialParameters MaterialParameters; // 0x610(0x40)
	struct FNiagaraVariableAttributeBinding PrevPositionBinding; // 0x650(0x40)
	struct FNiagaraVariableAttributeBinding PrevVelocityBinding; // 0x690(0x40)
	struct FNiagaraVariableAttributeBinding PrevSpriteRotationBinding; // 0x6d0(0x40)
	struct FNiagaraVariableAttributeBinding PrevSpriteSizeBinding; // 0x710(0x40)
	struct FNiagaraVariableAttributeBinding PrevSpriteFacingBinding; // 0x750(0x40)
	struct FNiagaraVariableAttributeBinding PrevSpriteAlignmentBinding; // 0x790(0x40)
	struct FNiagaraVariableAttributeBinding PrevCameraOffsetBinding; // 0x7d0(0x40)
	struct FNiagaraVariableAttributeBinding PrevPivotOffsetBinding; // 0x810(0x40)
	char pad_850[0x78]; // 0x850(0x78)
};

// Class Niagara.NiagaraSystem
// Size: 0x558 (Inherited: 0x30)
struct UNiagaraSystem : UFXSystemAsset {
	char bSupportLargeWorldCoordinates : 1; // 0x30(0x01)
	char bOverrideCastShadow : 1; // 0x30(0x01)
	char bOverrideReceivesDecals : 1; // 0x30(0x01)
	char bOverrideRenderCustomDepth : 1; // 0x30(0x01)
	char bOverrideCustomDepthStencilValue : 1; // 0x30(0x01)
	char bOverrideCustomDepthStencilWriteMask : 1; // 0x30(0x01)
	char bOverrideTranslucencySortPriority : 1; // 0x30(0x01)
	char bOverrideTranslucencySortDistanceOffset : 1; // 0x30(0x01)
	char bCastShadow : 1; // 0x31(0x01)
	char bReceivesDecals : 1; // 0x31(0x01)
	char bRenderCustomDepth : 1; // 0x31(0x01)
	char bDisableExperimentalVM : 1; // 0x31(0x01)
	char pad_31_4 : 4; // 0x31(0x01)
	enum class ERendererStencilMask CustomDepthStencilWriteMask; // 0x32(0x01)
	char pad_33[0x1]; // 0x33(0x01)
	int32_t CustomDepthStencilValue; // 0x34(0x04)
	int32_t TranslucencySortPriority; // 0x38(0x04)
	float TranslucencySortDistanceOffset; // 0x3c(0x04)
	bool bDumpDebugSystemInfo; // 0x40(0x01)
	bool bDumpDebugEmitterInfo; // 0x41(0x01)
	char pad_42[0x1]; // 0x42(0x01)
	bool bRequireCurrentFrameData; // 0x43(0x01)
	char bFixedBounds : 1; // 0x44(0x01)
	char pad_44_1 : 7; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	struct UNiagaraEffectType* EffectType; // 0x48(0x08)
	bool bOverrideScalabilitySettings; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	char bOverrideAllowCullingForLocalPlayers : 1; // 0x54(0x01)
	char bAllowCullingForLocalPlayersOverride : 1; // 0x54(0x01)
	char pad_54_2 : 6; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	struct TArray<struct FNiagaraSystemScalabilityOverride> ScalabilityOverrides; // 0x58(0x10)
	struct FNiagaraSystemScalabilityOverrides SystemScalabilityOverrides; // 0x68(0x10)
	struct TArray<struct FNiagaraEmitterHandle> EmitterHandles; // 0x78(0x10)
	struct TArray<struct UNiagaraParameterCollectionInstance*> ParameterCollectionOverrides; // 0x88(0x10)
	struct UNiagaraScript* SystemSpawnScript; // 0x98(0x08)
	struct UNiagaraScript* SystemUpdateScript; // 0xa0(0x08)
	char pad_A8[0x10]; // 0xa8(0x10)
	struct FNiagaraSystemCompiledData SystemCompiledData; // 0xb8(0x228)
	struct FNiagaraUserRedirectionParameterStore ExposedParameters; // 0x2e0(0xd8)
	struct FBox FixedBounds; // 0x3b8(0x38)
	bool bAutoDeactivate; // 0x3f0(0x01)
	bool bDeterminism; // 0x3f1(0x01)
	char pad_3F2[0x2]; // 0x3f2(0x02)
	int32_t RandomSeed; // 0x3f4(0x04)
	float WarmupTime; // 0x3f8(0x04)
	int32_t WarmupTickCount; // 0x3fc(0x04)
	float WarmupTickDelta; // 0x400(0x04)
	bool bFixedTickDelta; // 0x404(0x01)
	char pad_405[0x3]; // 0x405(0x03)
	float FixedTickDeltaTime; // 0x408(0x04)
	bool bHasSystemScriptDIsWithPerInstanceData; // 0x40c(0x01)
	bool bNeedsGPUContextInitForDataInterfaces; // 0x40d(0x01)
	char pad_40E[0x2]; // 0x40e(0x02)
	struct TArray<struct FName> UserDINamesReadInSystemScripts; // 0x410(0x10)
	char pad_420[0x138]; // 0x420(0x138)
};

// Class Niagara.NiagaraValidationRule
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraValidationRule : UObject {
};

// Class Niagara.VolumeCache
// Size: 0x60 (Inherited: 0x28)
struct UVolumeCache : UObject {
	struct FString FilePath; // 0x28(0x10)
	enum class EVolumeCacheType CacheType; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct FIntVector Resolution; // 0x3c(0x0c)
	int32_t FrameRangeStart; // 0x48(0x04)
	int32_t FrameRangeEnd; // 0x4c(0x04)
	char pad_50[0x10]; // 0x50(0x10)
};

