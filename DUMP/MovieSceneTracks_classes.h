// Class MovieSceneTracks.MovieSceneParameterSection
// Size: 0x158 (Inherited: 0xf0)
struct UMovieSceneParameterSection : UMovieSceneSection {
	char pad_F0[0x8]; // 0xf0(0x08)
	struct TArray<struct FBoolParameterNameAndCurve> BoolParameterNamesAndCurves; // 0xf8(0x10)
	struct TArray<struct FScalarParameterNameAndCurve> ScalarParameterNamesAndCurves; // 0x108(0x10)
	struct TArray<struct FVector2DParameterNameAndCurves> Vector2DParameterNamesAndCurves; // 0x118(0x10)
	struct TArray<struct FVectorParameterNameAndCurves> VectorParameterNamesAndCurves; // 0x128(0x10)
	struct TArray<struct FColorParameterNameAndCurves> ColorParameterNamesAndCurves; // 0x138(0x10)
	struct TArray<struct FTransformParameterNameAndCurves> TransformParameterNamesAndCurves; // 0x148(0x10)

	bool RemoveVectorParameter(struct FName InParameterName); // Function MovieSceneTracks.MovieSceneParameterSection.RemoveVectorParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x9096834
	bool RemoveVector2DParameter(struct FName InParameterName); // Function MovieSceneTracks.MovieSceneParameterSection.RemoveVector2DParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x909676c
	bool RemoveTransformParameter(struct FName InParameterName); // Function MovieSceneTracks.MovieSceneParameterSection.RemoveTransformParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x90966e0
	bool RemoveScalarParameter(struct FName InParameterName); // Function MovieSceneTracks.MovieSceneParameterSection.RemoveScalarParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x9096654
	bool RemoveColorParameter(struct FName InParameterName); // Function MovieSceneTracks.MovieSceneParameterSection.RemoveColorParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x90965c8
	bool RemoveBoolParameter(struct FName InParameterName); // Function MovieSceneTracks.MovieSceneParameterSection.RemoveBoolParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x909653c
	void GetParameterNames(struct TSet<struct FName>& ParameterNames); // Function MovieSceneTracks.MovieSceneParameterSection.GetParameterNames // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x9096440
	void AddVectorParameterKey(struct FName InParameterName, struct FFrameNumber InTime, struct FVector InValue); // Function MovieSceneTracks.MovieSceneParameterSection.AddVectorParameterKey // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x909631c
	void AddVector2DParameterKey(struct FName InParameterName, struct FFrameNumber InTime, struct FVector2D InValue); // Function MovieSceneTracks.MovieSceneParameterSection.AddVector2DParameterKey // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x9096220
	void AddTransformParameterKey(struct FName InParameterName, struct FFrameNumber InTime, struct FTransform& InValue); // Function MovieSceneTracks.MovieSceneParameterSection.AddTransformParameterKey // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x90960b4
	void AddScalarParameterKey(struct FName InParameterName, struct FFrameNumber InTime, float InValue); // Function MovieSceneTracks.MovieSceneParameterSection.AddScalarParameterKey // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x9095fb8
	void AddColorParameterKey(struct FName InParameterName, struct FFrameNumber InTime, struct FLinearColor InValue); // Function MovieSceneTracks.MovieSceneParameterSection.AddColorParameterKey // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x9095ebc
	void AddBoolParameterKey(struct FName InParameterName, struct FFrameNumber InTime, bool InValue); // Function MovieSceneTracks.MovieSceneParameterSection.AddBoolParameterKey // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x9095dc4
};

// Class MovieSceneTracks.MovieScenePropertyTrack
// Size: 0xc0 (Inherited: 0x98)
struct UMovieScenePropertyTrack : UMovieSceneNameableTrack {
	struct UMovieSceneSection* SectionToKey; // 0x98(0x08)
	struct FMovieScenePropertyBinding PropertyBinding; // 0xa0(0x0c)
	char pad_AC[0x4]; // 0xac(0x04)
	struct TArray<struct UMovieSceneSection*> Sections; // 0xb0(0x10)
};

// Class MovieSceneTracks.BoolChannelEvaluatorSystem
// Size: 0x40 (Inherited: 0x40)
struct UBoolChannelEvaluatorSystem : UMovieSceneEntitySystem {
};

// Class MovieSceneTracks.ByteChannelEvaluatorSystem
// Size: 0x40 (Inherited: 0x40)
struct UByteChannelEvaluatorSystem : UMovieSceneEntitySystem {
};

// Class MovieSceneTracks.DoubleChannelEvaluatorSystem
// Size: 0x40 (Inherited: 0x40)
struct UDoubleChannelEvaluatorSystem : UMovieSceneEntitySystem {
};

// Class MovieSceneTracks.DoublePerlinNoiseChannelEvaluatorSystem
// Size: 0x40 (Inherited: 0x40)
struct UDoublePerlinNoiseChannelEvaluatorSystem : UMovieSceneEntitySystem {
};

// Class MovieSceneTracks.FloatChannelEvaluatorSystem
// Size: 0x40 (Inherited: 0x40)
struct UFloatChannelEvaluatorSystem : UMovieSceneEntitySystem {
};

// Class MovieSceneTracks.FloatPerlinNoiseChannelEvaluatorSystem
// Size: 0x40 (Inherited: 0x40)
struct UFloatPerlinNoiseChannelEvaluatorSystem : UMovieSceneEntitySystem {
};

// Class MovieSceneTracks.MovieSceneTransformOrigin
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneTransformOrigin : UInterface {

	struct FTransform BP_GetTransformOrigin(); // Function MovieSceneTracks.MovieSceneTransformOrigin.BP_GetTransformOrigin // (Event|Protected|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xd67374
};

// Class MovieSceneTracks.IntegerChannelEvaluatorSystem
// Size: 0x40 (Inherited: 0x40)
struct UIntegerChannelEvaluatorSystem : UMovieSceneEntitySystem {
};

// Class MovieSceneTracks.MovieScene3DConstraintSection
// Size: 0x118 (Inherited: 0xf0)
struct UMovieScene3DConstraintSection : UMovieSceneSection {
	struct FGuid ConstraintId; // 0xf0(0x10)
	struct FMovieSceneObjectBindingID ConstraintBindingID; // 0x100(0x18)

	void SetConstraintBindingID(struct FMovieSceneObjectBindingID& InConstraintBindingID); // Function MovieSceneTracks.MovieScene3DConstraintSection.SetConstraintBindingID // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x9093860
	struct FMovieSceneObjectBindingID GetConstraintBindingID(); // Function MovieSceneTracks.MovieScene3DConstraintSection.GetConstraintBindingID // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x909378c
};

// Class MovieSceneTracks.MovieScene3DAttachSection
// Size: 0x130 (Inherited: 0x118)
struct UMovieScene3DAttachSection : UMovieScene3DConstraintSection {
	char pad_118[0x8]; // 0x118(0x08)
	struct FName AttachSocketName; // 0x120(0x04)
	struct FName AttachComponentName; // 0x124(0x04)
	enum class EAttachmentRule AttachmentLocationRule; // 0x128(0x01)
	enum class EAttachmentRule AttachmentRotationRule; // 0x129(0x01)
	enum class EAttachmentRule AttachmentScaleRule; // 0x12a(0x01)
	enum class EDetachmentRule DetachmentLocationRule; // 0x12b(0x01)
	enum class EDetachmentRule DetachmentRotationRule; // 0x12c(0x01)
	enum class EDetachmentRule DetachmentScaleRule; // 0x12d(0x01)
	char pad_12E[0x2]; // 0x12e(0x02)
};

// Class MovieSceneTracks.MovieScene3DConstraintTrack
// Size: 0xa8 (Inherited: 0x98)
struct UMovieScene3DConstraintTrack : UMovieSceneTrack {
	struct TArray<struct UMovieSceneSection*> ConstraintSections; // 0x98(0x10)
};

// Class MovieSceneTracks.MovieScene3DAttachTrack
// Size: 0xa8 (Inherited: 0xa8)
struct UMovieScene3DAttachTrack : UMovieScene3DConstraintTrack {
};

// Class MovieSceneTracks.MovieScene3DPathSection
// Size: 0x208 (Inherited: 0x118)
struct UMovieScene3DPathSection : UMovieScene3DConstraintSection {
	struct FMovieSceneFloatChannel TimingCurve; // 0x118(0xe8)
	enum class MovieScene3DPathSection_Axis FrontAxisEnum; // 0x200(0x01)
	enum class MovieScene3DPathSection_Axis UpAxisEnum; // 0x201(0x01)
	char pad_202[0x2]; // 0x202(0x02)
	char bFollow : 1; // 0x204(0x01)
	char bReverse : 1; // 0x204(0x01)
	char bForceUpright : 1; // 0x204(0x01)
	char pad_204_3 : 5; // 0x204(0x01)
	char pad_205[0x3]; // 0x205(0x03)
};

// Class MovieSceneTracks.MovieScene3DPathTrack
// Size: 0xb0 (Inherited: 0xa8)
struct UMovieScene3DPathTrack : UMovieScene3DConstraintTrack {
	char pad_A8[0x8]; // 0xa8(0x08)
};

// Class MovieSceneTracks.MovieScenePropertySystem
// Size: 0x58 (Inherited: 0x40)
struct UMovieScenePropertySystem : UMovieSceneEntitySystem {
	char pad_40[0x8]; // 0x40(0x08)
	struct UMovieScenePropertyInstantiatorSystem* InstantiatorSystem; // 0x48(0x08)
	char pad_50[0x8]; // 0x50(0x08)
};

// Class MovieSceneTracks.MovieScene3DTransformPropertySystem
// Size: 0x58 (Inherited: 0x58)
struct UMovieScene3DTransformPropertySystem : UMovieScenePropertySystem {
};

// Class MovieSceneTracks.MovieScene3dTransformSectionConstraints
// Size: 0x38 (Inherited: 0x28)
struct UMovieScene3dTransformSectionConstraints : UObject {
	struct TArray<struct FConstraintAndActiveChannel> ConstraintsChannels; // 0x28(0x10)
};

// Class MovieSceneTracks.MovieScene3DTransformSection
// Size: 0xa98 (Inherited: 0xf0)
struct UMovieScene3DTransformSection : UMovieSceneSection {
	char pad_F0[0x30]; // 0xf0(0x30)
	struct FMovieSceneTransformMask TransformMask; // 0x120(0x04)
	char pad_124[0x4]; // 0x124(0x04)
	struct FMovieSceneDoubleChannel Translation[0x3]; // 0x128(0x2d0)
	struct FMovieSceneDoubleChannel Rotation[0x3]; // 0x3f8(0x2d0)
	struct FMovieSceneDoubleChannel Scale[0x3]; // 0x6c8(0x2d0)
	struct FMovieSceneFloatChannel ManualWeight; // 0x998(0xe8)
	struct UMovieSceneSectionChannelOverrideRegistry* OverrideRegistry; // 0xa80(0x08)
	struct UMovieScene3dTransformSectionConstraints* Constraints; // 0xa88(0x08)
	bool bUseQuaternionInterpolation; // 0xa90(0x01)
	char pad_A91[0x7]; // 0xa91(0x07)
};

// Class MovieSceneTracks.MovieScene3DTransformTrack
// Size: 0xc0 (Inherited: 0xc0)
struct UMovieScene3DTransformTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneActorReferenceSection
// Size: 0x270 (Inherited: 0xf0)
struct UMovieSceneActorReferenceSection : UMovieSceneSection {
	struct FMovieSceneActorReferenceData ActorReferenceData; // 0xf0(0xf0)
	struct FIntegralCurve ActorGuidIndexCurve; // 0x1e0(0x80)
	struct TArray<struct FString> ActorGuidStrings; // 0x260(0x10)
};

// Class MovieSceneTracks.MovieSceneActorReferenceTrack
// Size: 0xc8 (Inherited: 0xc0)
struct UMovieSceneActorReferenceTrack : UMovieScenePropertyTrack {
	char pad_C0[0x8]; // 0xc0(0x08)
};

// Class MovieSceneTracks.MovieSceneAudioSection
// Size: 0x5a0 (Inherited: 0xf0)
struct UMovieSceneAudioSection : UMovieSceneSection {
	struct USoundBase* sound; // 0xf0(0x08)
	struct FFrameNumber StartFrameOffset; // 0xf8(0x04)
	float StartOffset; // 0xfc(0x04)
	float AudioStartTime; // 0x100(0x04)
	float AudioDilationFactor; // 0x104(0x04)
	float AudioVolume; // 0x108(0x04)
	char pad_10C[0x4]; // 0x10c(0x04)
	struct FMovieSceneFloatChannel SoundVolume; // 0x110(0xe8)
	struct FMovieSceneFloatChannel PitchMultiplier; // 0x1f8(0xe8)
	struct TMap<struct FName, struct FMovieSceneFloatChannel> Inputs_Float; // 0x2e0(0x50)
	struct TMap<struct FName, struct FMovieSceneStringChannel> Inputs_String; // 0x330(0x50)
	struct TMap<struct FName, struct FMovieSceneBoolChannel> Inputs_Bool; // 0x380(0x50)
	struct TMap<struct FName, struct FMovieSceneIntegerChannel> Inputs_Int; // 0x3d0(0x50)
	struct TMap<struct FName, struct FMovieSceneAudioTriggerChannel> Inputs_Trigger; // 0x420(0x50)
	struct FMovieSceneActorReferenceData AttachActorData; // 0x470(0xf0)
	bool bLooping; // 0x560(0x01)
	bool bSuppressSubtitles; // 0x561(0x01)
	bool bOverrideAttenuation; // 0x562(0x01)
	char pad_563[0x5]; // 0x563(0x05)
	struct USoundAttenuation* AttenuationSettings; // 0x568(0x08)
	struct FDelegate OnQueueSubtitles; // 0x570(0x0c)
	char pad_57C[0x4]; // 0x57c(0x04)
	struct FMulticastInlineDelegate OnAudioFinished; // 0x580(0x10)
	struct FMulticastInlineDelegate OnAudioPlaybackPercent; // 0x590(0x10)

	void SetStartOffset(struct FFrameNumber InStartOffset); // Function MovieSceneTracks.MovieSceneAudioSection.SetStartOffset // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x9093998
	void SetSound(struct USoundBase* InSound); // Function MovieSceneTracks.MovieSceneAudioSection.SetSound // (Final|Native|Public|BlueprintCallable) // @ game+0x909390c
	struct FFrameNumber GetStartOffset(); // Function MovieSceneTracks.MovieSceneAudioSection.GetStartOffset // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x733b318
	struct USoundBase* GetSound(); // Function MovieSceneTracks.MovieSceneAudioSection.GetSound // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x763874c
};

// Class MovieSceneTracks.MovieSceneAudioTrack
// Size: 0xb0 (Inherited: 0x98)
struct UMovieSceneAudioTrack : UMovieSceneNameableTrack {
	char pad_98[0x8]; // 0x98(0x08)
	struct TArray<struct UMovieSceneSection*> AudioSections; // 0xa0(0x10)
};

// Class MovieSceneTracks.MovieSceneBaseValueEvaluatorSystem
// Size: 0x40 (Inherited: 0x40)
struct UMovieSceneBaseValueEvaluatorSystem : UMovieSceneEntitySystem {
};

// Class MovieSceneTracks.MovieSceneBoolPropertySystem
// Size: 0x58 (Inherited: 0x58)
struct UMovieSceneBoolPropertySystem : UMovieScenePropertySystem {
};

// Class MovieSceneTracks.MovieSceneBoolTrack
// Size: 0xc8 (Inherited: 0xc0)
struct UMovieSceneBoolTrack : UMovieScenePropertyTrack {
	char pad_C0[0x8]; // 0xc0(0x08)
};

// Class MovieSceneTracks.MovieSceneBytePropertySystem
// Size: 0x58 (Inherited: 0x58)
struct UMovieSceneBytePropertySystem : UMovieScenePropertySystem {
};

// Class MovieSceneTracks.MovieSceneByteSection
// Size: 0x1d8 (Inherited: 0xf0)
struct UMovieSceneByteSection : UMovieSceneSection {
	char pad_F0[0x8]; // 0xf0(0x08)
	struct FMovieSceneByteChannel ByteCurve; // 0xf8(0xe0)
};

// Class MovieSceneTracks.MovieSceneByteTrack
// Size: 0xc8 (Inherited: 0xc0)
struct UMovieSceneByteTrack : UMovieScenePropertyTrack {
	struct UEnum* Enum; // 0xc0(0x08)
};

// Class MovieSceneTracks.MovieSceneCameraCutSection
// Size: 0x1a0 (Inherited: 0xf0)
struct UMovieSceneCameraCutSection : UMovieSceneSection {
	char pad_F0[0x8]; // 0xf0(0x08)
	bool bLockPreviousCamera; // 0xf8(0x01)
	char pad_F9[0x3]; // 0xf9(0x03)
	struct FGuid CameraGuid; // 0xfc(0x10)
	struct FMovieSceneObjectBindingID CameraBindingID; // 0x10c(0x18)
	char pad_124[0xc]; // 0x124(0x0c)
	struct FTransform InitialCameraCutTransform; // 0x130(0x60)
	bool bHasInitialCameraCutTransform; // 0x190(0x01)
	char pad_191[0xf]; // 0x191(0x0f)

	void SetCameraBindingID(struct FMovieSceneObjectBindingID& InCameraBindingID); // Function MovieSceneTracks.MovieSceneCameraCutSection.SetCameraBindingID // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x90937b4
	struct FMovieSceneObjectBindingID GetCameraBindingID(); // Function MovieSceneTracks.MovieSceneCameraCutSection.GetCameraBindingID // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9093764
};

// Class MovieSceneTracks.MovieSceneCameraCutTrack
// Size: 0xb0 (Inherited: 0x98)
struct UMovieSceneCameraCutTrack : UMovieSceneNameableTrack {
	bool bCanBlend; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
	struct TArray<struct UMovieSceneSection*> Sections; // 0xa0(0x10)
};

// Class MovieSceneTracks.MovieSceneCameraCutTrackInstance
// Size: 0xc8 (Inherited: 0x50)
struct UMovieSceneCameraCutTrackInstance : UMovieSceneTrackInstance {
	char pad_50[0x78]; // 0x50(0x78)
};

// Class MovieSceneTracks.MovieSceneCameraShakeSection
// Size: 0x140 (Inherited: 0xf0)
struct UMovieSceneCameraShakeSection : UMovieSceneSection {
	struct FMovieSceneCameraShakeSectionData ShakeData; // 0xf0(0x28)
	struct UCameraShakeBase* ShakeClass; // 0x118(0x08)
	float PlayScale; // 0x120(0x04)
	enum class ECameraShakePlaySpace Playspace; // 0x124(0x01)
	char pad_125[0x3]; // 0x125(0x03)
	struct FRotator UserDefinedPlaySpace; // 0x128(0x18)
};

// Class MovieSceneTracks.MovieSceneCameraShakeSourceShakeSection
// Size: 0x118 (Inherited: 0xf0)
struct UMovieSceneCameraShakeSourceShakeSection : UMovieSceneSection {
	struct FMovieSceneCameraShakeSectionData ShakeData; // 0xf0(0x28)
};

// Class MovieSceneTracks.MovieSceneCameraShakeSourceShakeTrack
// Size: 0xb0 (Inherited: 0x98)
struct UMovieSceneCameraShakeSourceShakeTrack : UMovieSceneNameableTrack {
	char pad_98[0x8]; // 0x98(0x08)
	struct TArray<struct UMovieSceneSection*> CameraShakeSections; // 0xa0(0x10)
};

// Class MovieSceneTracks.MovieSceneCameraShakeSourceTriggerSection
// Size: 0x1c0 (Inherited: 0xf0)
struct UMovieSceneCameraShakeSourceTriggerSection : UMovieSceneSection {
	struct FMovieSceneCameraShakeSourceTriggerChannel Channel; // 0xf0(0xd0)
};

// Class MovieSceneTracks.MovieSceneCameraShakeSourceTriggerTrack
// Size: 0xb0 (Inherited: 0x98)
struct UMovieSceneCameraShakeSourceTriggerTrack : UMovieSceneTrack {
	char pad_98[0x8]; // 0x98(0x08)
	struct TArray<struct UMovieSceneSection*> Sections; // 0xa0(0x10)
};

// Class MovieSceneTracks.MovieSceneCameraShakeEvaluator
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneCameraShakeEvaluator : UObject {
};

// Class MovieSceneTracks.MovieSceneCameraShakeTrack
// Size: 0xb0 (Inherited: 0x98)
struct UMovieSceneCameraShakeTrack : UMovieSceneNameableTrack {
	char pad_98[0x8]; // 0x98(0x08)
	struct TArray<struct UMovieSceneSection*> CameraShakeSections; // 0xa0(0x10)
};

// Class MovieSceneTracks.MovieSceneCinematicShotSection
// Size: 0x158 (Inherited: 0x130)
struct UMovieSceneCinematicShotSection : UMovieSceneSubSection {
	struct FString ShotDisplayName; // 0x130(0x10)
	struct FText DisplayName; // 0x140(0x18)

	void SetShotDisplayName(struct FString InShotDisplayName); // Function MovieSceneTracks.MovieSceneCinematicShotSection.SetShotDisplayName // (Final|Native|Public|BlueprintCallable) // @ game+0x9094a68
	struct FString GetShotDisplayName(); // Function MovieSceneTracks.MovieSceneCinematicShotSection.GetShotDisplayName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x90943ac
};

// Class MovieSceneTracks.MovieSceneCinematicShotTrack
// Size: 0xa8 (Inherited: 0xa8)
struct UMovieSceneCinematicShotTrack : UMovieSceneSubTrack {
};

// Class MovieSceneTracks.MovieSceneColorPropertySystem
// Size: 0x58 (Inherited: 0x58)
struct UMovieSceneColorPropertySystem : UMovieScenePropertySystem {
};

// Class MovieSceneTracks.MovieSceneColorSection
// Size: 0x498 (Inherited: 0xf0)
struct UMovieSceneColorSection : UMovieSceneSection {
	char pad_F0[0x8]; // 0xf0(0x08)
	struct FMovieSceneFloatChannel RedCurve; // 0xf8(0xe8)
	struct FMovieSceneFloatChannel GreenCurve; // 0x1e0(0xe8)
	struct FMovieSceneFloatChannel BlueCurve; // 0x2c8(0xe8)
	struct FMovieSceneFloatChannel AlphaCurve; // 0x3b0(0xe8)
};

// Class MovieSceneTracks.MovieSceneColorTrack
// Size: 0xc8 (Inherited: 0xc0)
struct UMovieSceneColorTrack : UMovieScenePropertyTrack {
	bool bIsSlateColor; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)
};

// Class MovieSceneTracks.MovieSceneComponentAttachmentInvalidatorSystem
// Size: 0x40 (Inherited: 0x40)
struct UMovieSceneComponentAttachmentInvalidatorSystem : UMovieSceneEntityInstantiatorSystem {
};

// Class MovieSceneTracks.MovieSceneComponentAttachmentSystem
// Size: 0x1d0 (Inherited: 0x40)
struct UMovieSceneComponentAttachmentSystem : UMovieSceneEntityInstantiatorSystem {
	char pad_40[0x190]; // 0x40(0x190)
};

// Class MovieSceneTracks.MovieSceneComponentMaterialSystem
// Size: 0x128 (Inherited: 0x40)
struct UMovieSceneComponentMaterialSystem : UMovieSceneEntitySystem {
	char pad_40[0xe8]; // 0x40(0xe8)
};

// Class MovieSceneTracks.MovieSceneComponentMobilitySystem
// Size: 0x230 (Inherited: 0x40)
struct UMovieSceneComponentMobilitySystem : UMovieSceneEntityInstantiatorSystem {
	char pad_40[0x1f0]; // 0x40(0x1f0)
};

// Class MovieSceneTracks.MovieSceneComponentTransformSystem
// Size: 0x58 (Inherited: 0x58)
struct UMovieSceneComponentTransformSystem : UMovieScenePropertySystem {
};

// Class MovieSceneTracks.MovieSceneConstrainedSection
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneConstrainedSection : UInterface {
};

// Class MovieSceneTracks.MovieSceneConstraintSystem
// Size: 0x50 (Inherited: 0x40)
struct UMovieSceneConstraintSystem : UMovieSceneEntitySystem {
	char pad_40[0x10]; // 0x40(0x10)
};

// Class MovieSceneTracks.MovieSceneCVarSection
// Size: 0x148 (Inherited: 0xf0)
struct UMovieSceneCVarSection : UMovieSceneSection {
	char pad_F0[0x8]; // 0xf0(0x08)
	struct FMovieSceneCVarOverrides ConsoleVariables; // 0xf8(0x50)

	void SetFromString(struct FString InString); // Function MovieSceneTracks.MovieSceneCVarSection.SetFromString // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x9094894
	struct FString GetString(); // Function MovieSceneTracks.MovieSceneCVarSection.GetString // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9094420
};

// Class MovieSceneTracks.MovieSceneCVarTrack
// Size: 0xa8 (Inherited: 0x98)
struct UMovieSceneCVarTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0x98(0x10)
};

// Class MovieSceneTracks.MovieSceneCVarTrackInstance
// Size: 0xa0 (Inherited: 0x50)
struct UMovieSceneCVarTrackInstance : UMovieSceneTrackInstance {
	char pad_50[0x50]; // 0x50(0x50)
};

// Class MovieSceneTracks.MovieSceneDataLayerSection
// Size: 0x120 (Inherited: 0xf0)
struct UMovieSceneDataLayerSection : UMovieSceneSection {
	char pad_F0[0x8]; // 0xf0(0x08)
	struct TArray<struct FActorDataLayer> DataLayers; // 0xf8(0x10)
	struct TArray<struct UDataLayerAsset*> DataLayerAssets; // 0x108(0x10)
	enum class EDataLayerRuntimeState DesiredState; // 0x118(0x01)
	enum class EDataLayerRuntimeState PrerollState; // 0x119(0x01)
	bool bFlushOnUnload; // 0x11a(0x01)
	char pad_11B[0x5]; // 0x11b(0x05)

	void SetPrerollState(enum class EDataLayerRuntimeState InPrerollState); // Function MovieSceneTracks.MovieSceneDataLayerSection.SetPrerollState // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x90949ec
	void SetFlushOnUnload(bool bFlushOnUnload); // Function MovieSceneTracks.MovieSceneDataLayerSection.SetFlushOnUnload // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x9094814
	void SetDesiredState(enum class EDataLayerRuntimeState InDesiredState); // Function MovieSceneTracks.MovieSceneDataLayerSection.SetDesiredState // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x9094798
	void SetDataLayers(struct TArray<struct FActorDataLayer>& InDataLayers); // Function MovieSceneTracks.MovieSceneDataLayerSection.SetDataLayers // (Final|Native|Private|HasOutParms|BlueprintCallable) // @ game+0x90946f8
	void SetDataLayerAssets(struct TArray<struct UDataLayerAsset*>& InDataLayerAssets); // Function MovieSceneTracks.MovieSceneDataLayerSection.SetDataLayerAssets // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x909455c
	enum class EDataLayerRuntimeState GetPrerollState(); // Function MovieSceneTracks.MovieSceneDataLayerSection.GetPrerollState // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9094394
	bool GetFlushOnUnload(); // Function MovieSceneTracks.MovieSceneDataLayerSection.GetFlushOnUnload // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x909437c
	enum class EDataLayerRuntimeState GetDesiredState(); // Function MovieSceneTracks.MovieSceneDataLayerSection.GetDesiredState // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8de39bc
	struct TArray<struct FActorDataLayer> GetDataLayers(); // Function MovieSceneTracks.MovieSceneDataLayerSection.GetDataLayers // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // @ game+0x9094360
	struct TArray<struct UDataLayerAsset*> GetDataLayerAssets(); // Function MovieSceneTracks.MovieSceneDataLayerSection.GetDataLayerAssets // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x90942ec
};

// Class MovieSceneTracks.MovieSceneDataLayerSystem
// Size: 0xd0 (Inherited: 0x40)
struct UMovieSceneDataLayerSystem : UMovieSceneEntitySystem {
	char pad_40[0x90]; // 0x40(0x90)
};

// Class MovieSceneTracks.MovieSceneDataLayerTrack
// Size: 0xa8 (Inherited: 0x98)
struct UMovieSceneDataLayerTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0x98(0x10)
};

// Class MovieSceneTracks.MovieSceneDeferredComponentMovementSystem
// Size: 0x58 (Inherited: 0x40)
struct UMovieSceneDeferredComponentMovementSystem : UMovieSceneEntitySystem {
	char pad_40[0x18]; // 0x40(0x18)
};

// Class MovieSceneTracks.MovieSceneDoublePerlinNoiseChannelContainer
// Size: 0x88 (Inherited: 0x28)
struct UMovieSceneDoublePerlinNoiseChannelContainer : UMovieSceneChannelOverrideContainer {
	struct FMovieSceneDoublePerlinNoiseChannel DoublePerlinNoiseChannel; // 0x28(0x60)
};

// Class MovieSceneTracks.MovieSceneDoublePropertySystem
// Size: 0x58 (Inherited: 0x58)
struct UMovieSceneDoublePropertySystem : UMovieScenePropertySystem {
};

// Class MovieSceneTracks.MovieSceneDoubleSection
// Size: 0x1e8 (Inherited: 0xf0)
struct UMovieSceneDoubleSection : UMovieSceneSection {
	char pad_F0[0x8]; // 0xf0(0x08)
	struct FMovieSceneDoubleChannel DoubleCurve; // 0xf8(0xf0)
};

// Class MovieSceneTracks.MovieSceneDoubleTrack
// Size: 0xc0 (Inherited: 0xc0)
struct UMovieSceneDoubleTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneEnumPropertySystem
// Size: 0x58 (Inherited: 0x58)
struct UMovieSceneEnumPropertySystem : UMovieScenePropertySystem {
};

// Class MovieSceneTracks.MovieSceneEnumSection
// Size: 0x1d8 (Inherited: 0xf0)
struct UMovieSceneEnumSection : UMovieSceneSection {
	char pad_F0[0x8]; // 0xf0(0x08)
	struct FMovieSceneByteChannel EnumCurve; // 0xf8(0xe0)
};

// Class MovieSceneTracks.MovieSceneEnumTrack
// Size: 0xc8 (Inherited: 0xc0)
struct UMovieSceneEnumTrack : UMovieScenePropertyTrack {
	struct UEnum* Enum; // 0xc0(0x08)
};

// Class MovieSceneTracks.MovieSceneEulerTransformPropertySystem
// Size: 0x58 (Inherited: 0x58)
struct UMovieSceneEulerTransformPropertySystem : UMovieScenePropertySystem {
};

// Class MovieSceneTracks.MovieSceneEulerTransformTrack
// Size: 0xc0 (Inherited: 0xc0)
struct UMovieSceneEulerTransformTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneEventSectionBase
// Size: 0xf0 (Inherited: 0xf0)
struct UMovieSceneEventSectionBase : UMovieSceneSection {
};

// Class MovieSceneTracks.MovieSceneEventRepeaterSection
// Size: 0x120 (Inherited: 0xf0)
struct UMovieSceneEventRepeaterSection : UMovieSceneEventSectionBase {
	char pad_F0[0x8]; // 0xf0(0x08)
	struct FMovieSceneEvent event; // 0xf8(0x28)
};

// Class MovieSceneTracks.MovieSceneEventSection
// Size: 0x238 (Inherited: 0xf0)
struct UMovieSceneEventSection : UMovieSceneSection {
	struct FNameCurve Events; // 0xf0(0x78)
	struct FMovieSceneEventSectionData EventData; // 0x168(0xd0)
};

// Class MovieSceneTracks.MovieSceneEventSystem
// Size: 0x90 (Inherited: 0x40)
struct UMovieSceneEventSystem : UMovieSceneEntitySystem {
	char pad_40[0x50]; // 0x40(0x50)
};

// Class MovieSceneTracks.MovieScenePreSpawnEventSystem
// Size: 0x90 (Inherited: 0x90)
struct UMovieScenePreSpawnEventSystem : UMovieSceneEventSystem {
};

// Class MovieSceneTracks.MovieScenePostSpawnEventSystem
// Size: 0x90 (Inherited: 0x90)
struct UMovieScenePostSpawnEventSystem : UMovieSceneEventSystem {
};

// Class MovieSceneTracks.MovieScenePostEvalEventSystem
// Size: 0x90 (Inherited: 0x90)
struct UMovieScenePostEvalEventSystem : UMovieSceneEventSystem {
};

// Class MovieSceneTracks.MovieSceneEventTrack
// Size: 0xc0 (Inherited: 0x98)
struct UMovieSceneEventTrack : UMovieSceneNameableTrack {
	char pad_98[0x10]; // 0x98(0x10)
	char bFireEventsWhenForwards : 1; // 0xa8(0x01)
	char bFireEventsWhenBackwards : 1; // 0xa8(0x01)
	char pad_A8_2 : 6; // 0xa8(0x01)
	char pad_A9[0x3]; // 0xa9(0x03)
	enum class EFireEventsAtPosition EventPosition; // 0xac(0x01)
	char pad_AD[0x3]; // 0xad(0x03)
	struct TArray<struct UMovieSceneSection*> Sections; // 0xb0(0x10)
};

// Class MovieSceneTracks.MovieSceneEventTriggerSection
// Size: 0x1c8 (Inherited: 0xf0)
struct UMovieSceneEventTriggerSection : UMovieSceneEventSectionBase {
	char pad_F0[0x8]; // 0xf0(0x08)
	struct FMovieSceneEventChannel EventChannel; // 0xf8(0xd0)
};

// Class MovieSceneTracks.MovieSceneFadeSection
// Size: 0x1f0 (Inherited: 0xf0)
struct UMovieSceneFadeSection : UMovieSceneSection {
	struct FMovieSceneFloatChannel FloatCurve; // 0xf0(0xe8)
	struct FLinearColor FadeColor; // 0x1d8(0x10)
	char bFadeAudio : 1; // 0x1e8(0x01)
	char pad_1E8_1 : 7; // 0x1e8(0x01)
	char pad_1E9[0x7]; // 0x1e9(0x07)
};

// Class MovieSceneTracks.MovieSceneFloatTrack
// Size: 0xc0 (Inherited: 0xc0)
struct UMovieSceneFloatTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneFadeTrack
// Size: 0xc8 (Inherited: 0xc0)
struct UMovieSceneFadeTrack : UMovieSceneFloatTrack {
	char pad_C0[0x8]; // 0xc0(0x08)
};

// Class MovieSceneTracks.MovieSceneFloatPerlinNoiseChannelContainer
// Size: 0x80 (Inherited: 0x28)
struct UMovieSceneFloatPerlinNoiseChannelContainer : UMovieSceneChannelOverrideContainer {
	struct FMovieSceneFloatPerlinNoiseChannel FloatPerlinNoiseChannel; // 0x28(0x58)
};

// Class MovieSceneTracks.MovieSceneFloatPropertySystem
// Size: 0x58 (Inherited: 0x58)
struct UMovieSceneFloatPropertySystem : UMovieScenePropertySystem {
};

// Class MovieSceneTracks.MovieSceneFloatSection
// Size: 0x1e0 (Inherited: 0xf0)
struct UMovieSceneFloatSection : UMovieSceneSection {
	char pad_F0[0x8]; // 0xf0(0x08)
	struct FMovieSceneFloatChannel FloatCurve; // 0xf8(0xe8)
};

// Class MovieSceneTracks.MovieSceneHierarchicalBiasSystem
// Size: 0x40 (Inherited: 0x40)
struct UMovieSceneHierarchicalBiasSystem : UMovieSceneEntityInstantiatorSystem {
};

// Class MovieSceneTracks.MovieSceneInitialValueSystem
// Size: 0x40 (Inherited: 0x40)
struct UMovieSceneInitialValueSystem : UMovieSceneEntityInstantiatorSystem {
};

// Class MovieSceneTracks.MovieSceneIntegerPropertySystem
// Size: 0x58 (Inherited: 0x58)
struct UMovieSceneIntegerPropertySystem : UMovieScenePropertySystem {
};

// Class MovieSceneTracks.MovieSceneIntegerSection
// Size: 0x1d0 (Inherited: 0xf0)
struct UMovieSceneIntegerSection : UMovieSceneSection {
	char pad_F0[0x8]; // 0xf0(0x08)
	struct FMovieSceneIntegerChannel IntegerCurve; // 0xf8(0xd8)
};

// Class MovieSceneTracks.MovieSceneIntegerTrack
// Size: 0xc0 (Inherited: 0xc0)
struct UMovieSceneIntegerTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneInterrogatedPropertyInstantiatorSystem
// Size: 0x1f0 (Inherited: 0x40)
struct UMovieSceneInterrogatedPropertyInstantiatorSystem : UMovieSceneEntityInstantiatorSystem {
	char pad_40[0x1b0]; // 0x40(0x1b0)
};

// Class MovieSceneTracks.MovieSceneLevelVisibilitySection
// Size: 0x110 (Inherited: 0xf0)
struct UMovieSceneLevelVisibilitySection : UMovieSceneSection {
	char pad_F0[0x8]; // 0xf0(0x08)
	enum class ELevelVisibility Visibility; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
	struct TArray<struct FName> LevelNames; // 0x100(0x10)

	void SetVisibility(enum class ELevelVisibility InVisibility); // Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetVisibility // (Final|Native|Public|BlueprintCallable) // @ game+0x9096960
	void SetLevelNames(struct TArray<struct FName>& InLevelNames); // Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetLevelNames // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x90968c0
	enum class ELevelVisibility GetVisibility(); // Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetVisibility // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9096524
	struct TArray<struct FName> GetLevelNames(); // Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetLevelNames // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9096424
};

// Class MovieSceneTracks.MovieSceneLevelVisibilitySystem
// Size: 0x188 (Inherited: 0x40)
struct UMovieSceneLevelVisibilitySystem : UMovieSceneEntitySystem {
	char pad_40[0x148]; // 0x40(0x148)
};

// Class MovieSceneTracks.MovieSceneLevelVisibilityTrack
// Size: 0xa8 (Inherited: 0x98)
struct UMovieSceneLevelVisibilityTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0x98(0x10)
};

// Class MovieSceneTracks.MovieSceneMaterialParameterCollectionSystem
// Size: 0x68 (Inherited: 0x40)
struct UMovieSceneMaterialParameterCollectionSystem : UMovieSceneEntitySystem {
	char pad_40[0x28]; // 0x40(0x28)
};

// Class MovieSceneTracks.MovieSceneMaterialTrack
// Size: 0xa8 (Inherited: 0x98)
struct UMovieSceneMaterialTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0x98(0x10)
};

// Class MovieSceneTracks.MovieSceneMaterialParameterCollectionTrack
// Size: 0xc0 (Inherited: 0xa8)
struct UMovieSceneMaterialParameterCollectionTrack : UMovieSceneMaterialTrack {
	char pad_A8[0x10]; // 0xa8(0x10)
	struct UMaterialParameterCollection* MPC; // 0xb8(0x08)
};

// Class MovieSceneTracks.MovieSceneMaterialParameterSystem
// Size: 0x338 (Inherited: 0x40)
struct UMovieSceneMaterialParameterSystem : UMovieSceneEntitySystem {
	char pad_40[0x2f0]; // 0x40(0x2f0)
	struct UMovieScenePiecewiseDoubleBlenderSystem* DoubleBlenderSystem; // 0x330(0x08)
};

// Class MovieSceneTracks.MovieSceneComponentMaterialTrack
// Size: 0xc0 (Inherited: 0xa8)
struct UMovieSceneComponentMaterialTrack : UMovieSceneMaterialTrack {
	char pad_A8[0x10]; // 0xa8(0x10)
	int32_t MaterialIndex; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
};

// Class MovieSceneTracks.MovieSceneMotionVectorSimulationSystem
// Size: 0x98 (Inherited: 0x40)
struct UMovieSceneMotionVectorSimulationSystem : UMovieSceneEntitySystem {
	char pad_40[0x58]; // 0x40(0x58)
};

// Class MovieSceneTracks.MovieSceneObjectPropertySection
// Size: 0x1f8 (Inherited: 0xf0)
struct UMovieSceneObjectPropertySection : UMovieSceneSection {
	struct FMovieSceneObjectPathChannel ObjectChannel; // 0xf0(0x108)
};

// Class MovieSceneTracks.MovieSceneObjectPropertyTrack
// Size: 0xd0 (Inherited: 0xc0)
struct UMovieSceneObjectPropertyTrack : UMovieScenePropertyTrack {
	char pad_C0[0x8]; // 0xc0(0x08)
	ClassPtrProperty PropertyClass; // 0xc8(0x08)
};

// Class MovieSceneTracks.MovieSceneParameterSectionExtender
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneParameterSectionExtender : UInterface {
};

// Class MovieSceneTracks.MovieSceneParticleParameterTrack
// Size: 0xb0 (Inherited: 0x98)
struct UMovieSceneParticleParameterTrack : UMovieSceneNameableTrack {
	char pad_98[0x8]; // 0x98(0x08)
	struct TArray<struct UMovieSceneSection*> Sections; // 0xa0(0x10)
};

// Class MovieSceneTracks.MovieSceneParticleSection
// Size: 0x1d0 (Inherited: 0xf0)
struct UMovieSceneParticleSection : UMovieSceneSection {
	struct FMovieSceneParticleChannel ParticleKeys; // 0xf0(0xe0)
};

// Class MovieSceneTracks.MovieSceneParticleTrack
// Size: 0xb0 (Inherited: 0x98)
struct UMovieSceneParticleTrack : UMovieSceneNameableTrack {
	char pad_98[0x8]; // 0x98(0x08)
	struct TArray<struct UMovieSceneSection*> ParticleSections; // 0xa0(0x10)
};

// Class MovieSceneTracks.MovieScenePiecewiseBoolBlenderSystem
// Size: 0x90 (Inherited: 0x68)
struct UMovieScenePiecewiseBoolBlenderSystem : UMovieSceneBlenderSystem {
	char pad_68[0x28]; // 0x68(0x28)
};

// Class MovieSceneTracks.MovieScenePiecewiseByteBlenderSystem
// Size: 0x90 (Inherited: 0x68)
struct UMovieScenePiecewiseByteBlenderSystem : UMovieSceneBlenderSystem {
	char pad_68[0x28]; // 0x68(0x28)
};

// Class MovieSceneTracks.MovieScenePiecewiseDoubleBlenderSystem
// Size: 0x130 (Inherited: 0x68)
struct UMovieScenePiecewiseDoubleBlenderSystem : UMovieSceneBlenderSystem {
	char pad_68[0xc8]; // 0x68(0xc8)
};

// Class MovieSceneTracks.MovieScenePiecewiseEnumBlenderSystem
// Size: 0x90 (Inherited: 0x68)
struct UMovieScenePiecewiseEnumBlenderSystem : UMovieSceneBlenderSystem {
	char pad_68[0x28]; // 0x68(0x28)
};

// Class MovieSceneTracks.MovieScenePiecewiseIntegerBlenderSystem
// Size: 0xb0 (Inherited: 0x68)
struct UMovieScenePiecewiseIntegerBlenderSystem : UMovieSceneBlenderSystem {
	char pad_68[0x48]; // 0x68(0x48)
};

// Class MovieSceneTracks.MovieSceneAsyncAction_SequencePrediction
// Size: 0x80 (Inherited: 0x30)
struct UMovieSceneAsyncAction_SequencePrediction : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate Result; // 0x30(0x10)
	struct FMulticastInlineDelegate Failure; // 0x40(0x10)
	char pad_50[0x10]; // 0x50(0x10)
	struct UMovieSceneSequencePlayer* SequencePlayer; // 0x60(0x08)
	struct USceneComponent* SceneComponent; // 0x68(0x08)
	char pad_70[0x10]; // 0x70(0x10)

	struct UMovieSceneAsyncAction_SequencePrediction* PredictWorldTransformAtTime(struct UMovieSceneSequencePlayer* Player, struct USceneComponent* TargetComponent, float TimeInSeconds); // Function MovieSceneTracks.MovieSceneAsyncAction_SequencePrediction.PredictWorldTransformAtTime // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9097d24
	struct UMovieSceneAsyncAction_SequencePrediction* PredictWorldTransformAtFrame(struct UMovieSceneSequencePlayer* Player, struct USceneComponent* TargetComponent, struct FFrameTime FrameTime); // Function MovieSceneTracks.MovieSceneAsyncAction_SequencePrediction.PredictWorldTransformAtFrame // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9097ba4
	struct UMovieSceneAsyncAction_SequencePrediction* PredictLocalTransformAtTime(struct UMovieSceneSequencePlayer* Player, struct USceneComponent* TargetComponent, float TimeInSeconds); // Function MovieSceneTracks.MovieSceneAsyncAction_SequencePrediction.PredictLocalTransformAtTime // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9097a3c
	struct UMovieSceneAsyncAction_SequencePrediction* PredictLocalTransformAtFrame(struct UMovieSceneSequencePlayer* Player, struct USceneComponent* TargetComponent, struct FFrameTime FrameTime); // Function MovieSceneTracks.MovieSceneAsyncAction_SequencePrediction.PredictLocalTransformAtFrame // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x90978bc
};

// Class MovieSceneTracks.MovieScenePredictionSystem
// Size: 0xf0 (Inherited: 0x40)
struct UMovieScenePredictionSystem : UMovieSceneEntitySystem {
	char pad_40[0x90]; // 0x40(0x90)
	struct TArray<struct UMovieSceneAsyncAction_SequencePrediction*> PendingPredictions; // 0xd0(0x10)
	struct TArray<struct UMovieSceneAsyncAction_SequencePrediction*> ProcessingPredictions; // 0xe0(0x10)
};

// Class MovieSceneTracks.MovieScenePrimitiveMaterialSection
// Size: 0x200 (Inherited: 0xf0)
struct UMovieScenePrimitiveMaterialSection : UMovieSceneSection {
	char pad_F0[0x8]; // 0xf0(0x08)
	struct FMovieSceneObjectPathChannel MaterialChannel; // 0xf8(0x108)
};

// Class MovieSceneTracks.MovieScenePrimitiveMaterialTrack
// Size: 0xc8 (Inherited: 0xc0)
struct UMovieScenePrimitiveMaterialTrack : UMovieScenePropertyTrack {
	int32_t MaterialIndex; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
};

// Class MovieSceneTracks.MovieScenePropertyInstantiatorSystem
// Size: 0x248 (Inherited: 0x40)
struct UMovieScenePropertyInstantiatorSystem : UMovieSceneEntityInstantiatorSystem {
	char pad_40[0x208]; // 0x40(0x208)
};

// Class MovieSceneTracks.MovieSceneQuaternionInterpolationRotationSystem
// Size: 0x40 (Inherited: 0x40)
struct UMovieSceneQuaternionInterpolationRotationSystem : UMovieSceneEntitySystem {
};

// Class MovieSceneTracks.MovieSceneSkeletalAnimationSection
// Size: 0x320 (Inherited: 0xf0)
struct UMovieSceneSkeletalAnimationSection : UMovieSceneSection {
	struct FMovieSceneSkeletalAnimationParams Params; // 0xf0(0x120)
	struct UAnimSequence* AnimSequence; // 0x210(0x08)
	struct UAnimSequenceBase* Animation; // 0x218(0x08)
	float StartOffset; // 0x220(0x04)
	float EndOffset; // 0x224(0x04)
	float PlayRate; // 0x228(0x04)
	char bReverse : 1; // 0x22c(0x01)
	char pad_22C_1 : 7; // 0x22c(0x01)
	char pad_22D[0x3]; // 0x22d(0x03)
	struct FName SlotName; // 0x230(0x04)
	char pad_234[0x4]; // 0x234(0x04)
	struct FVector StartLocationOffset; // 0x238(0x18)
	struct FRotator StartRotationOffset; // 0x250(0x18)
	bool bMatchWithPrevious; // 0x268(0x01)
	char pad_269[0x3]; // 0x269(0x03)
	struct FName MatchedBoneName; // 0x26c(0x04)
	struct FVector MatchedLocationOffset; // 0x270(0x18)
	struct FRotator MatchedRotationOffset; // 0x288(0x18)
	bool bMatchTranslation; // 0x2a0(0x01)
	bool bMatchIncludeZHeight; // 0x2a1(0x01)
	bool bMatchRotationYaw; // 0x2a2(0x01)
	bool bMatchRotationPitch; // 0x2a3(0x01)
	bool bMatchRotationRoll; // 0x2a4(0x01)
	char pad_2A5[0x7b]; // 0x2a5(0x7b)
};

// Class MovieSceneTracks.MovieSceneSkeletalAnimationTrack
// Size: 0xf0 (Inherited: 0x98)
struct UMovieSceneSkeletalAnimationTrack : UMovieSceneNameableTrack {
	char pad_98[0x8]; // 0x98(0x08)
	struct TArray<struct UMovieSceneSection*> AnimationSections; // 0xa0(0x10)
	bool bUseLegacySectionIndexBlend; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
	struct FMovieSceneSkeletalAnimRootMotionTrackParams RootMotionParams; // 0xb8(0x30)
	bool bBlendFirstChildOfRoot; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
};

// Class MovieSceneTracks.MovieSceneSlomoSection
// Size: 0x1d8 (Inherited: 0xf0)
struct UMovieSceneSlomoSection : UMovieSceneSection {
	struct FMovieSceneFloatChannel FloatCurve; // 0xf0(0xe8)
};

// Class MovieSceneTracks.MovieSceneSlomoTrack
// Size: 0xc8 (Inherited: 0xc0)
struct UMovieSceneSlomoTrack : UMovieSceneFloatTrack {
	char pad_C0[0x8]; // 0xc0(0x08)
};

// Class MovieSceneTracks.MovieSceneStringSection
// Size: 0x1d8 (Inherited: 0xf0)
struct UMovieSceneStringSection : UMovieSceneSection {
	struct FMovieSceneStringChannel StringCurve; // 0xf0(0xe8)
};

// Class MovieSceneTracks.MovieSceneStringTrack
// Size: 0xc8 (Inherited: 0xc0)
struct UMovieSceneStringTrack : UMovieScenePropertyTrack {
	char pad_C0[0x8]; // 0xc0(0x08)
};

// Class MovieSceneTracks.MovieSceneTransformOriginSystem
// Size: 0x78 (Inherited: 0x40)
struct UMovieSceneTransformOriginSystem : UMovieSceneEntitySystem {
	char pad_40[0x38]; // 0x40(0x38)
};

// Class MovieSceneTracks.MovieSceneTransformTrack
// Size: 0xc0 (Inherited: 0xc0)
struct UMovieSceneTransformTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneFloatVectorPropertySystem
// Size: 0x58 (Inherited: 0x58)
struct UMovieSceneFloatVectorPropertySystem : UMovieScenePropertySystem {
};

// Class MovieSceneTracks.MovieSceneDoubleVectorPropertySystem
// Size: 0x58 (Inherited: 0x58)
struct UMovieSceneDoubleVectorPropertySystem : UMovieScenePropertySystem {
};

// Class MovieSceneTracks.MovieSceneFloatVectorSection
// Size: 0x4a0 (Inherited: 0xf0)
struct UMovieSceneFloatVectorSection : UMovieSceneSection {
	char pad_F0[0x8]; // 0xf0(0x08)
	struct FMovieSceneFloatChannel Curves[0x4]; // 0xf8(0x3a0)
	int32_t ChannelsUsed; // 0x498(0x04)
	char pad_49C[0x4]; // 0x49c(0x04)
};

// Class MovieSceneTracks.MovieSceneDoubleVectorSection
// Size: 0x4c0 (Inherited: 0xf0)
struct UMovieSceneDoubleVectorSection : UMovieSceneSection {
	char pad_F0[0x8]; // 0xf0(0x08)
	struct FMovieSceneDoubleChannel Curves[0x4]; // 0xf8(0x3c0)
	int32_t ChannelsUsed; // 0x4b8(0x04)
	char pad_4BC[0x4]; // 0x4bc(0x04)
};

// Class MovieSceneTracks.MovieSceneFloatVectorTrack
// Size: 0xc8 (Inherited: 0xc0)
struct UMovieSceneFloatVectorTrack : UMovieScenePropertyTrack {
	int32_t NumChannelsUsed; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
};

// Class MovieSceneTracks.MovieSceneDoubleVectorTrack
// Size: 0xc8 (Inherited: 0xc0)
struct UMovieSceneDoubleVectorTrack : UMovieScenePropertyTrack {
	int32_t NumChannelsUsed; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
};

// Class MovieSceneTracks.MovieSceneVisibilityTrack
// Size: 0xc8 (Inherited: 0xc8)
struct UMovieSceneVisibilityTrack : UMovieSceneBoolTrack {
};

// Class MovieSceneTracks.ObjectPathChannelEvaluatorSystem
// Size: 0x40 (Inherited: 0x40)
struct UObjectPathChannelEvaluatorSystem : UMovieSceneEntitySystem {
};

// Class MovieSceneTracks.MovieSceneHierarchicalEasingInstantiatorSystem
// Size: 0x90 (Inherited: 0x40)
struct UMovieSceneHierarchicalEasingInstantiatorSystem : UMovieSceneEntityInstantiatorSystem {
	char pad_40[0x50]; // 0x40(0x50)
};

// Class MovieSceneTracks.WeightAndEasingEvaluatorSystem
// Size: 0x78 (Inherited: 0x40)
struct UWeightAndEasingEvaluatorSystem : UMovieSceneEntitySystem {
	char pad_40[0x38]; // 0x40(0x38)
};

