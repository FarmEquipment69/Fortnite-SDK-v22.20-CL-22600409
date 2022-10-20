// Enum LiveLinkInterface.ELiveLinkCameraProjectionMode
enum class ELiveLinkCameraProjectionMode : uint8 {
	Perspective = 0,
	Orthographic = 1,
	ELiveLinkCameraProjectionMode_MAX = 2
};

// Enum LiveLinkInterface.ELiveLinkSourceMode
enum class ELiveLinkSourceMode : uint8 {
	Latest = 0,
	EngineTime = 1,
	Timecode = 2,
	ELiveLinkSourceMode_MAX = 3
};

// ScriptStruct LiveLinkInterface.LiveLinkSubjectPreset
// Size: 0x38 (Inherited: 0x00)
struct FLiveLinkSubjectPreset {
	struct FLiveLinkSubjectKey Key; // 0x00(0x14)
	char pad_14[0x4]; // 0x14(0x04)
	struct ULiveLinkRole* Role; // 0x18(0x08)
	struct ULiveLinkSubjectSettings* Settings; // 0x20(0x08)
	struct ULiveLinkVirtualSubject* VirtualSubject; // 0x28(0x08)
	bool bEnabled; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct LiveLinkInterface.LiveLinkSubjectKey
// Size: 0x14 (Inherited: 0x00)
struct FLiveLinkSubjectKey {
	struct FGuid Source; // 0x00(0x10)
	struct FLiveLinkSubjectName SubjectName; // 0x10(0x04)
};

// ScriptStruct LiveLinkInterface.LiveLinkSubjectName
// Size: 0x04 (Inherited: 0x00)
struct FLiveLinkSubjectName {
	struct FName Name; // 0x00(0x04)
};

// ScriptStruct LiveLinkInterface.LiveLinkSourceHandle
// Size: 0x18 (Inherited: 0x00)
struct FLiveLinkSourceHandle {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct LiveLinkInterface.SubjectMetadata
// Size: 0x70 (Inherited: 0x00)
struct FSubjectMetadata {
	struct TMap<struct FName, struct FString> StringMetadata; // 0x00(0x50)
	struct FTimecode SceneTimecode; // 0x50(0x14)
	struct FFrameRate SceneFramerate; // 0x64(0x08)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// ScriptStruct LiveLinkInterface.CachedSubjectFrame
// Size: 0x160 (Inherited: 0x00)
struct FCachedSubjectFrame {
	char pad_0[0x160]; // 0x00(0x160)
};

// ScriptStruct LiveLinkInterface.LiveLinkTransform
// Size: 0x20 (Inherited: 0x00)
struct FLiveLinkTransform {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct LiveLinkInterface.LiveLinkBaseBlueprintData
// Size: 0x08 (Inherited: 0x00)
struct FLiveLinkBaseBlueprintData {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct LiveLinkInterface.SubjectFrameHandle
// Size: 0x18 (Inherited: 0x08)
struct FSubjectFrameHandle : FLiveLinkBaseBlueprintData {
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct LiveLinkInterface.LiveLinkBaseStaticData
// Size: 0x10 (Inherited: 0x00)
struct FLiveLinkBaseStaticData {
	struct TArray<struct FName> PropertyNames; // 0x00(0x10)
};

// ScriptStruct LiveLinkInterface.LiveLinkSkeletonStaticData
// Size: 0x30 (Inherited: 0x10)
struct FLiveLinkSkeletonStaticData : FLiveLinkBaseStaticData {
	struct TArray<struct FName> BoneNames; // 0x10(0x10)
	struct TArray<int32_t> BoneParents; // 0x20(0x10)
};

// ScriptStruct LiveLinkInterface.LiveLinkBaseFrameData
// Size: 0xa0 (Inherited: 0x00)
struct FLiveLinkBaseFrameData {
	struct FLiveLinkWorldTime WorldTime; // 0x00(0x10)
	struct FLiveLinkMetaData MetaData; // 0x10(0x60)
	struct TArray<float> PropertyValues; // 0x70(0x10)
	char pad_80[0x20]; // 0x80(0x20)
};

// ScriptStruct LiveLinkInterface.LiveLinkMetaData
// Size: 0x60 (Inherited: 0x00)
struct FLiveLinkMetaData {
	struct TMap<struct FName, struct FString> StringMetadata; // 0x00(0x50)
	struct FQualifiedFrameTime SceneTime; // 0x50(0x10)
};

// ScriptStruct LiveLinkInterface.LiveLinkWorldTime
// Size: 0x10 (Inherited: 0x00)
struct FLiveLinkWorldTime {
	double Time; // 0x00(0x08)
	double Offset; // 0x08(0x08)
};

// ScriptStruct LiveLinkInterface.LiveLinkAnimationFrameData
// Size: 0xb0 (Inherited: 0xa0)
struct FLiveLinkAnimationFrameData : FLiveLinkBaseFrameData {
	struct TArray<struct FTransform> Transforms; // 0xa0(0x10)
};

// ScriptStruct LiveLinkInterface.LiveLinkBasicBlueprintData
// Size: 0xb8 (Inherited: 0x08)
struct FLiveLinkBasicBlueprintData : FLiveLinkBaseBlueprintData {
	struct FLiveLinkBaseStaticData StaticData; // 0x08(0x10)
	struct FLiveLinkBaseFrameData FrameData; // 0x18(0xa0)
};

// ScriptStruct LiveLinkInterface.LiveLinkTransformStaticData
// Size: 0x18 (Inherited: 0x10)
struct FLiveLinkTransformStaticData : FLiveLinkBaseStaticData {
	bool bIsLocationSupported; // 0x10(0x01)
	bool bIsRotationSupported; // 0x11(0x01)
	bool bIsScaleSupported; // 0x12(0x01)
	char pad_13[0x5]; // 0x13(0x05)
};

// ScriptStruct LiveLinkInterface.LiveLinkCameraStaticData
// Size: 0x28 (Inherited: 0x18)
struct FLiveLinkCameraStaticData : FLiveLinkTransformStaticData {
	bool bIsFieldOfViewSupported; // 0x18(0x01)
	bool bIsAspectRatioSupported; // 0x19(0x01)
	bool bIsFocalLengthSupported; // 0x1a(0x01)
	bool bIsProjectionModeSupported; // 0x1b(0x01)
	float FilmBackWidth; // 0x1c(0x04)
	float FilmBackHeight; // 0x20(0x04)
	bool bIsApertureSupported; // 0x24(0x01)
	bool bIsFocusDistanceSupported; // 0x25(0x01)
	char pad_26[0x2]; // 0x26(0x02)
};

// ScriptStruct LiveLinkInterface.LiveLinkTransformFrameData
// Size: 0x100 (Inherited: 0xa0)
struct FLiveLinkTransformFrameData : FLiveLinkBaseFrameData {
	struct FTransform Transform; // 0xa0(0x60)
};

// ScriptStruct LiveLinkInterface.LiveLinkCameraFrameData
// Size: 0x120 (Inherited: 0x100)
struct FLiveLinkCameraFrameData : FLiveLinkTransformFrameData {
	float FieldOfView; // 0x100(0x04)
	float AspectRatio; // 0x104(0x04)
	float FocalLength; // 0x108(0x04)
	float Aperture; // 0x10c(0x04)
	float FocusDistance; // 0x110(0x04)
	enum class ELiveLinkCameraProjectionMode ProjectionMode; // 0x114(0x01)
	char pad_115[0xb]; // 0x115(0x0b)
};

// ScriptStruct LiveLinkInterface.LiveLinkCameraBlueprintData
// Size: 0x150 (Inherited: 0x08)
struct FLiveLinkCameraBlueprintData : FLiveLinkBaseBlueprintData {
	struct FLiveLinkCameraStaticData StaticData; // 0x08(0x28)
	struct FLiveLinkCameraFrameData FrameData; // 0x30(0x120)
};

// ScriptStruct LiveLinkInterface.LiveLinkCurveConversionSettings
// Size: 0x50 (Inherited: 0x00)
struct FLiveLinkCurveConversionSettings {
	struct TMap<struct FString, struct FSoftObjectPath> CurveConversionAssetMap; // 0x00(0x50)
};

// ScriptStruct LiveLinkInterface.LiveLinkLightStaticData
// Size: 0x28 (Inherited: 0x18)
struct FLiveLinkLightStaticData : FLiveLinkTransformStaticData {
	bool bIsTemperatureSupported; // 0x18(0x01)
	bool bIsIntensitySupported; // 0x19(0x01)
	bool bIsLightColorSupported; // 0x1a(0x01)
	bool bIsInnerConeAngleSupported; // 0x1b(0x01)
	bool bIsOuterConeAngleSupported; // 0x1c(0x01)
	bool bIsAttenuationRadiusSupported; // 0x1d(0x01)
	bool bIsSourceLenghtSupported; // 0x1e(0x01)
	bool bIsSourceRadiusSupported; // 0x1f(0x01)
	bool bIsSoftSourceRadiusSupported; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct LiveLinkInterface.LiveLinkLightFrameData
// Size: 0x130 (Inherited: 0x100)
struct FLiveLinkLightFrameData : FLiveLinkTransformFrameData {
	float Temperature; // 0x100(0x04)
	float Intensity; // 0x104(0x04)
	struct FColor LightColor; // 0x108(0x04)
	float InnerConeAngle; // 0x10c(0x04)
	float OuterConeAngle; // 0x110(0x04)
	float AttenuationRadius; // 0x114(0x04)
	float SourceRadius; // 0x118(0x04)
	float SoftSourceRadius; // 0x11c(0x04)
	float SourceLength; // 0x120(0x04)
	char pad_124[0xc]; // 0x124(0x0c)
};

// ScriptStruct LiveLinkInterface.LiveLinkLightBlueprintData
// Size: 0x160 (Inherited: 0x08)
struct FLiveLinkLightBlueprintData : FLiveLinkBaseBlueprintData {
	struct FLiveLinkLightStaticData StaticData; // 0x08(0x28)
	struct FLiveLinkLightFrameData FrameData; // 0x30(0x130)
};

// ScriptStruct LiveLinkInterface.LiveLinkSourcePreset
// Size: 0x30 (Inherited: 0x00)
struct FLiveLinkSourcePreset {
	struct FGuid Guid; // 0x00(0x10)
	struct ULiveLinkSourceSettings* Settings; // 0x10(0x08)
	struct FText SourceType; // 0x18(0x18)
};

// ScriptStruct LiveLinkInterface.LiveLinkRefSkeleton
// Size: 0x20 (Inherited: 0x00)
struct FLiveLinkRefSkeleton {
	struct TArray<struct FName> BoneNames; // 0x00(0x10)
	struct TArray<int32_t> BoneParents; // 0x10(0x10)
};

// ScriptStruct LiveLinkInterface.LiveLinkSubjectRepresentation
// Size: 0x10 (Inherited: 0x00)
struct FLiveLinkSubjectRepresentation {
	struct FLiveLinkSubjectName Subject; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct ULiveLinkRole* Role; // 0x08(0x08)
};

// ScriptStruct LiveLinkInterface.LiveLinkSourceBufferManagementSettings
// Size: 0x60 (Inherited: 0x00)
struct FLiveLinkSourceBufferManagementSettings {
	bool bValidEngineTimeEnabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float ValidEngineTime; // 0x04(0x04)
	float EngineTimeOffset; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	double EngineTimeClockOffset; // 0x10(0x08)
	double SmoothEngineTimeOffset; // 0x18(0x08)
	bool bGenerateSubFrame; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	struct FFrameRate DetectedFrameRate; // 0x24(0x08)
	bool bUseTimecodeSmoothLatest; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	struct FFrameRate SourceTimecodeFrameRate; // 0x30(0x08)
	bool bValidTimecodeFrameEnabled; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	int32_t ValidTimecodeFrame; // 0x3c(0x04)
	float TimecodeFrameOffset; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	double TimecodeClockOffset; // 0x48(0x08)
	int32_t LatestOffset; // 0x50(0x04)
	int32_t MaxNumberOfFrameToBuffered; // 0x54(0x04)
	bool bKeepAtLeastOneFrame; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
};

// ScriptStruct LiveLinkInterface.LiveLinkSourceDebugInfo
// Size: 0x0c (Inherited: 0x00)
struct FLiveLinkSourceDebugInfo {
	struct FLiveLinkSubjectName SubjectName; // 0x00(0x04)
	int32_t SnapshotIndex; // 0x04(0x04)
	int32_t NumberOfBufferAtSnapshot; // 0x08(0x04)
};

// ScriptStruct LiveLinkInterface.LiveLinkTimeSynchronizationSettings
// Size: 0x0c (Inherited: 0x00)
struct FLiveLinkTimeSynchronizationSettings {
	struct FFrameRate FrameRate; // 0x00(0x08)
	struct FFrameNumber FrameOffset; // 0x08(0x04)
};

// ScriptStruct LiveLinkInterface.LiveLinkInterpolationSettings
// Size: 0x08 (Inherited: 0x00)
struct FLiveLinkInterpolationSettings {
	bool bUseInterpolation; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float InterpolationOffset; // 0x04(0x04)
};

// ScriptStruct LiveLinkInterface.LiveLinkTransformBlueprintData
// Size: 0x120 (Inherited: 0x08)
struct FLiveLinkTransformBlueprintData : FLiveLinkBaseBlueprintData {
	struct FLiveLinkTransformStaticData StaticData; // 0x08(0x18)
	struct FLiveLinkTransformFrameData FrameData; // 0x20(0x100)
};

// ScriptStruct LiveLinkInterface.LiveLinkTime
// Size: 0x18 (Inherited: 0x00)
struct FLiveLinkTime {
	double WorldTime; // 0x00(0x08)
	struct FQualifiedFrameTime SceneTime; // 0x08(0x10)
};

// ScriptStruct LiveLinkInterface.LiveLinkFrameRate
// Size: 0x08 (Inherited: 0x08)
struct FLiveLinkFrameRate : FFrameRate {
};

// ScriptStruct LiveLinkInterface.LiveLinkTimeCode_Base_DEPRECATED
// Size: 0x10 (Inherited: 0x00)
struct FLiveLinkTimeCode_Base_DEPRECATED {
	int32_t Seconds; // 0x00(0x04)
	int32_t Frames; // 0x04(0x04)
	struct FLiveLinkFrameRate FrameRate; // 0x08(0x08)
};

// ScriptStruct LiveLinkInterface.LiveLinkTimeCode
// Size: 0x10 (Inherited: 0x10)
struct FLiveLinkTimeCode : FLiveLinkTimeCode_Base_DEPRECATED {
};

// ScriptStruct LiveLinkInterface.LiveLinkCurveElement
// Size: 0x08 (Inherited: 0x00)
struct FLiveLinkCurveElement {
	struct FName CurveName; // 0x00(0x04)
	float CurveValue; // 0x04(0x04)
};

// ScriptStruct LiveLinkInterface.LiveLinkFrameData
// Size: 0x90 (Inherited: 0x00)
struct FLiveLinkFrameData {
	struct TArray<struct FTransform> Transforms; // 0x00(0x10)
	struct TArray<struct FLiveLinkCurveElement> CurveElements; // 0x10(0x10)
	struct FLiveLinkWorldTime WorldTime; // 0x20(0x10)
	struct FLiveLinkMetaData MetaData; // 0x30(0x60)
};

