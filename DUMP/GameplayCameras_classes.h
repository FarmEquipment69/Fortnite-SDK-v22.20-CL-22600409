// Class GameplayCameras.CameraAnimationCameraModifier
// Size: 0x60 (Inherited: 0x48)
struct UCameraAnimationCameraModifier : UCameraModifier {
	struct TArray<struct FActiveCameraAnimationInfo> ActiveAnimations; // 0x48(0x10)
	uint16_t NextInstanceSerialNumber; // 0x58(0x02)
	char pad_5A[0x6]; // 0x5a(0x06)

	void StopCameraAnimation(struct FCameraAnimationHandle& Handle, bool bImmediate); // Function GameplayCameras.CameraAnimationCameraModifier.StopCameraAnimation // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x647831c
	void StopAllCameraAnimationsOf(struct UCameraAnimationSequence* Sequence, bool bImmediate); // Function GameplayCameras.CameraAnimationCameraModifier.StopAllCameraAnimationsOf // (Final|Native|Public|BlueprintCallable) // @ game+0x6478140
	void StopAllCameraAnimations(bool bImmediate); // Function GameplayCameras.CameraAnimationCameraModifier.StopAllCameraAnimations // (Native|Public|BlueprintCallable) // @ game+0x6477fec
	struct FCameraAnimationHandle PlayCameraAnimation(struct UCameraAnimationSequence* Sequence, struct FCameraAnimationParams Params); // Function GameplayCameras.CameraAnimationCameraModifier.PlayCameraAnimation // (Final|Native|Public|BlueprintCallable) // @ game+0x64778d4
	bool IsCameraAnimationActive(struct FCameraAnimationHandle& Handle); // Function GameplayCameras.CameraAnimationCameraModifier.IsCameraAnimationActive // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x6477754
	struct UCameraAnimationCameraModifier* GetCameraAnimationCameraModifierFromPlayerController(struct APlayerController* PlayerController); // Function GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifierFromPlayerController // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x64776d4
	struct UCameraAnimationCameraModifier* GetCameraAnimationCameraModifierFromID(struct UObject* WorldContextObject, int32_t ControllerId); // Function GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifierFromID // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x6477608
	struct UCameraAnimationCameraModifier* GetCameraAnimationCameraModifier(struct UObject* WorldContextObject, int32_t PlayerIndex); // Function GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifier // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x647753c
};

// Class GameplayCameras.GameplayCamerasFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UGameplayCamerasFunctionLibrary : UBlueprintFunctionLibrary {

	enum class ECameraShakePlaySpace Conv_CameraShakePlaySpace(enum class ECameraAnimationPlaySpace CameraAnimationPlaySpace); // Function GameplayCameras.GameplayCamerasFunctionLibrary.Conv_CameraShakePlaySpace // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x64774b0
	enum class ECameraAnimationPlaySpace Conv_CameraAnimationPlaySpace(enum class ECameraShakePlaySpace CameraShakePlaySpace); // Function GameplayCameras.GameplayCamerasFunctionLibrary.Conv_CameraAnimationPlaySpace // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x64774b0
	struct UCameraAnimationCameraModifier* Conv_CameraAnimationCameraModifier(struct APlayerCameraManager* PlayerCameraManager); // Function GameplayCameras.GameplayCamerasFunctionLibrary.Conv_CameraAnimationCameraModifier // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x64773fc
};

// Class GameplayCameras.TestCameraShake
// Size: 0xf0 (Inherited: 0xf0)
struct UTestCameraShake : UCameraShakeBase {
};

// Class GameplayCameras.SimpleCameraShakePattern
// Size: 0x38 (Inherited: 0x28)
struct USimpleCameraShakePattern : UCameraShakePattern {
	float Duration; // 0x28(0x04)
	float BlendInTime; // 0x2c(0x04)
	float BlendOutTime; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class GameplayCameras.ConstantCameraShakePattern
// Size: 0x68 (Inherited: 0x38)
struct UConstantCameraShakePattern : USimpleCameraShakePattern {
	struct FVector LocationOffset; // 0x38(0x18)
	struct FRotator RotationOffset; // 0x50(0x18)
};

// Class GameplayCameras.CompositeCameraShakePattern
// Size: 0x48 (Inherited: 0x28)
struct UCompositeCameraShakePattern : UCameraShakePattern {
	struct TArray<struct UCameraShakePattern*> ChildPatterns; // 0x28(0x10)
	char pad_38[0x10]; // 0x38(0x10)
};

// Class GameplayCameras.DefaultCameraShakeBase
// Size: 0xf0 (Inherited: 0xf0)
struct UDefaultCameraShakeBase : UCameraShakeBase {
};

// Class GameplayCameras.GameplayCamerasSubsystem
// Size: 0x30 (Inherited: 0x30)
struct UGameplayCamerasSubsystem : UWorldSubsystem {

	void StopCameraAnimation(struct APlayerController* PlayerController, struct FCameraAnimationHandle& Handle, bool bImmediate); // Function GameplayCameras.GameplayCamerasSubsystem.StopCameraAnimation // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x64783f0
	void StopAllCameraAnimationsOf(struct APlayerController* PlayerController, struct UCameraAnimationSequence* Sequence, bool bImmediate); // Function GameplayCameras.GameplayCamerasSubsystem.StopAllCameraAnimationsOf // (Final|Native|Public|BlueprintCallable) // @ game+0x6478208
	void StopAllCameraAnimations(struct APlayerController* PlayerController, bool bImmediate); // Function GameplayCameras.GameplayCamerasSubsystem.StopAllCameraAnimations // (Final|Native|Public|BlueprintCallable) // @ game+0x6478070
	struct FCameraAnimationHandle PlayCameraAnimation(struct APlayerController* PlayerController, struct UCameraAnimationSequence* Sequence, struct FCameraAnimationParams Params); // Function GameplayCameras.GameplayCamerasSubsystem.PlayCameraAnimation // (Final|Native|Public|BlueprintCallable) // @ game+0x6477a08
	bool IsCameraAnimationActive(struct APlayerController* PlayerController, struct FCameraAnimationHandle& Handle); // Function GameplayCameras.GameplayCamerasSubsystem.IsCameraAnimationActive // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x64777f0
};

// Class GameplayCameras.LegacyCameraShake
// Size: 0x210 (Inherited: 0xf0)
struct ULegacyCameraShake : UCameraShakeBase {
	float OscillationDuration; // 0xe8(0x04)
	float OscillationBlendInTime; // 0xec(0x04)
	float OscillationBlendOutTime; // 0xf0(0x04)
	struct FROscillator RotOscillation; // 0xf4(0x24)
	struct FVOscillator LocOscillation; // 0x118(0x24)
	struct FFOscillator FOVOscillation; // 0x13c(0x0c)
	float AnimPlayRate; // 0x148(0x04)
	float AnimScale; // 0x14c(0x04)
	float AnimBlendInTime; // 0x150(0x04)
	float AnimBlendOutTime; // 0x154(0x04)
	float RandomAnimSegmentDuration; // 0x158(0x04)
	struct UCameraAnimationSequence* AnimSequence; // 0x160(0x08)
	char bRandomAnimSegment : 1; // 0x168(0x01)
	float OscillatorTimeRemaining; // 0x16c(0x04)
	char pad_170_1 : 7; // 0x170(0x01)
	char pad_171[0x6f]; // 0x171(0x6f)
	struct USequenceCameraShakePattern* SequenceShakePattern; // 0x1e0(0x08)
	char pad_1E8[0x28]; // 0x1e8(0x28)

	struct ULegacyCameraShake* StartLegacyCameraShakeFromSource(struct APlayerCameraManager* PlayerCameraManager, struct ULegacyCameraShake* ShakeClass, struct UCameraShakeSourceComponent* SourceComponent, float Scale, enum class ECameraShakePlaySpace Playspace, struct FRotator UserPlaySpaceRot); // Function GameplayCameras.LegacyCameraShake.StartLegacyCameraShakeFromSource // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x6477d8c
	struct ULegacyCameraShake* StartLegacyCameraShake(struct APlayerCameraManager* PlayerCameraManager, struct ULegacyCameraShake* ShakeClass, float Scale, enum class ECameraShakePlaySpace Playspace, struct FRotator UserPlaySpaceRot); // Function GameplayCameras.LegacyCameraShake.StartLegacyCameraShake // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x6477b70
	void ReceiveStopShake(bool bImmediately); // Function GameplayCameras.LegacyCameraShake.ReceiveStopShake // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ReceivePlayShake(float Scale); // Function GameplayCameras.LegacyCameraShake.ReceivePlayShake // (Event|Public|BlueprintEvent) // @ game+0xd67374
	bool ReceiveIsFinished(); // Function GameplayCameras.LegacyCameraShake.ReceiveIsFinished // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x2ad8cc0
	void BlueprintUpdateCameraShake(float DeltaTime, float Alpha, struct FMinimalViewInfo& POV, struct FMinimalViewInfo& ModifiedPOV); // Function GameplayCameras.LegacyCameraShake.BlueprintUpdateCameraShake // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
};

// Class GameplayCameras.LegacyCameraShakePattern
// Size: 0x28 (Inherited: 0x28)
struct ULegacyCameraShakePattern : UCameraShakePattern {
};

// Class GameplayCameras.LegacyCameraShakeFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct ULegacyCameraShakeFunctionLibrary : UBlueprintFunctionLibrary {

	struct ULegacyCameraShake* Conv_LegacyCameraShake(struct UCameraShakeBase* CameraShake); // Function GameplayCameras.LegacyCameraShakeFunctionLibrary.Conv_LegacyCameraShake // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x26043dc
};

// Class GameplayCameras.PerlinNoiseCameraShakePattern
// Size: 0xb8 (Inherited: 0x38)
struct UPerlinNoiseCameraShakePattern : USimpleCameraShakePattern {
	float LocationAmplitudeMultiplier; // 0x38(0x04)
	float LocationFrequencyMultiplier; // 0x3c(0x04)
	struct FPerlinNoiseShaker X; // 0x40(0x08)
	struct FPerlinNoiseShaker Y; // 0x48(0x08)
	struct FPerlinNoiseShaker Z; // 0x50(0x08)
	float RotationAmplitudeMultiplier; // 0x58(0x04)
	float RotationFrequencyMultiplier; // 0x5c(0x04)
	struct FPerlinNoiseShaker Pitch; // 0x60(0x08)
	struct FPerlinNoiseShaker Yaw; // 0x68(0x08)
	struct FPerlinNoiseShaker Roll; // 0x70(0x08)
	struct FPerlinNoiseShaker FOV; // 0x78(0x08)
	char pad_80[0x38]; // 0x80(0x38)
};

// Class GameplayCameras.WaveOscillatorCameraShakePattern
// Size: 0xd8 (Inherited: 0x38)
struct UWaveOscillatorCameraShakePattern : USimpleCameraShakePattern {
	float LocationAmplitudeMultiplier; // 0x38(0x04)
	float LocationFrequencyMultiplier; // 0x3c(0x04)
	struct FWaveOscillator X; // 0x40(0x0c)
	struct FWaveOscillator Y; // 0x4c(0x0c)
	struct FWaveOscillator Z; // 0x58(0x0c)
	float RotationAmplitudeMultiplier; // 0x64(0x04)
	float RotationFrequencyMultiplier; // 0x68(0x04)
	struct FWaveOscillator Pitch; // 0x6c(0x0c)
	struct FWaveOscillator Yaw; // 0x78(0x0c)
	struct FWaveOscillator Roll; // 0x84(0x0c)
	struct FWaveOscillator FOV; // 0x90(0x0c)
	char pad_9C[0x3c]; // 0x9c(0x3c)
};

