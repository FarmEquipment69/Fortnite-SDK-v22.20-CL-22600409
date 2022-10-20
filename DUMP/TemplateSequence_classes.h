// Class TemplateSequence.TemplateSequence
// Size: 0x110 (Inherited: 0x68)
struct UTemplateSequence : UMovieSceneSequence {
	struct UMovieScene* MovieScene; // 0x68(0x08)
	struct TSoftClassPtr<UObject> BoundActorClass; // 0x70(0x28)
	struct TSoftObjectPtr<AActor> BoundPreviewActor; // 0x98(0x28)
	struct TMap<struct FGuid, struct FName> BoundActorComponents; // 0xc0(0x50)
};

// Class TemplateSequence.CameraAnimationSequence
// Size: 0x110 (Inherited: 0x110)
struct UCameraAnimationSequence : UTemplateSequence {
};

// Class TemplateSequence.CameraAnimationSequenceCameraStandIn
// Size: 0x820 (Inherited: 0x28)
struct UCameraAnimationSequenceCameraStandIn : UObject {
	float FieldOfView; // 0x28(0x04)
	char bConstrainAspectRatio : 1; // 0x2c(0x01)
	char pad_2C_1 : 7; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	float AspectRatio; // 0x30(0x04)
	char pad_34[0xc]; // 0x34(0x0c)
	struct FPostProcessSettings PostProcessSettings; // 0x40(0x6d0)
	float PostProcessBlendWeight; // 0x710(0x04)
	struct FCameraFilmbackSettings Filmback; // 0x714(0x0c)
	struct FCameraLensSettings LensSettings; // 0x720(0x18)
	struct FCameraFocusSettings FocusSettings; // 0x738(0x60)
	float CurrentFocalLength; // 0x798(0x04)
	float CurrentAperture; // 0x79c(0x04)
	float CurrentFocusDistance; // 0x7a0(0x04)
	char pad_7A4[0x7c]; // 0x7a4(0x7c)
};

// Class TemplateSequence.CameraAnimationSequencePlayer
// Size: 0x3d8 (Inherited: 0x28)
struct UCameraAnimationSequencePlayer : UObject {
	char pad_28[0x260]; // 0x28(0x260)
	struct UObject* BoundObjectOverride; // 0x288(0x08)
	struct UMovieSceneSequence* Sequence; // 0x290(0x08)
	struct FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance; // 0x298(0xe0)
	char pad_378[0x60]; // 0x378(0x60)
};

// Class TemplateSequence.CameraAnimationSpawnableSystem
// Size: 0x40 (Inherited: 0x40)
struct UCameraAnimationSpawnableSystem : UMovieSceneEntitySystem {
};

// Class TemplateSequence.CameraAnimationBoundObjectInstantiator
// Size: 0x40 (Inherited: 0x40)
struct UCameraAnimationBoundObjectInstantiator : UMovieSceneEntityInstantiatorSystem {
};

// Class TemplateSequence.CameraAnimationEntitySystemLinker
// Size: 0x6b8 (Inherited: 0x6b8)
struct UCameraAnimationEntitySystemLinker : UMovieSceneEntitySystemLinker {
};

// Class TemplateSequence.CameraAnimationSequenceSubsystem
// Size: 0xa0 (Inherited: 0x30)
struct UCameraAnimationSequenceSubsystem : UWorldSubsystem {
	struct UMovieSceneEntitySystemLinker* Linker; // 0x30(0x08)
	char pad_38[0x68]; // 0x38(0x68)
};

// Class TemplateSequence.SequenceCameraShakePattern
// Size: 0x58 (Inherited: 0x28)
struct USequenceCameraShakePattern : UCameraShakePattern {
	struct UCameraAnimationSequence* Sequence; // 0x28(0x08)
	float PlayRate; // 0x30(0x04)
	float Scale; // 0x34(0x04)
	float BlendInTime; // 0x38(0x04)
	float BlendOutTime; // 0x3c(0x04)
	float RandomSegmentDuration; // 0x40(0x04)
	bool bRandomSegment; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	struct UCameraAnimationSequencePlayer* Player; // 0x48(0x08)
	struct UCameraAnimationSequenceCameraStandIn* CameraStandIn; // 0x50(0x08)
};

// Class TemplateSequence.SequenceCameraShakeTestUtil
// Size: 0x28 (Inherited: 0x28)
struct USequenceCameraShakeTestUtil : UBlueprintFunctionLibrary {

	bool GetPostProcessBlendCache(struct APlayerController* PlayerController, int32_t PPIndex, struct FPostProcessSettings& OutPPSettings, float& OutPPBlendWeight); // Function TemplateSequence.SequenceCameraShakeTestUtil.GetPostProcessBlendCache // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x64833e0
	struct FMinimalViewInfo GetLastFrameCameraCachePOV(struct APlayerController* PlayerController); // Function TemplateSequence.SequenceCameraShakeTestUtil.GetLastFrameCameraCachePOV // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x6483300
	struct FMinimalViewInfo GetCameraCachePOV(struct APlayerController* PlayerController); // Function TemplateSequence.SequenceCameraShakeTestUtil.GetCameraCachePOV // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x6483220
};

// Class TemplateSequence.TemplateSequenceActor
// Size: 0x2e0 (Inherited: 0x288)
struct ATemplateSequenceActor : AActor {
	char pad_288[0x8]; // 0x288(0x08)
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x290(0x1c)
	char pad_2AC[0x4]; // 0x2ac(0x04)
	struct UTemplateSequencePlayer* SequencePlayer; // 0x2b0(0x08)
	struct FSoftObjectPath TemplateSequence; // 0x2b8(0x18)
	struct FTemplateSequenceBindingOverrideData BindingOverride; // 0x2d0(0x0c)
	char pad_2DC[0x4]; // 0x2dc(0x04)

	void SetSequence(struct UTemplateSequence* InSequence); // Function TemplateSequence.TemplateSequenceActor.SetSequence // (Final|Native|Public|BlueprintCallable) // @ game+0x6483730
	void SetBinding(struct AActor* Actor, bool bOverridesDefault); // Function TemplateSequence.TemplateSequenceActor.SetBinding // (Final|Native|Public|BlueprintCallable) // @ game+0x6483668
	struct UTemplateSequence* LoadSequence(); // Function TemplateSequence.TemplateSequenceActor.LoadSequence // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6483610
	struct UTemplateSequencePlayer* GetSequencePlayer(); // Function TemplateSequence.TemplateSequenceActor.GetSequencePlayer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x64835e4
	struct UTemplateSequence* GetSequence(); // Function TemplateSequence.TemplateSequenceActor.GetSequence // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6483590
};

// Class TemplateSequence.TemplateSequencePlayer
// Size: 0x4e0 (Inherited: 0x4d8)
struct UTemplateSequencePlayer : UMovieSceneSequencePlayer {
	char pad_4D8[0x8]; // 0x4d8(0x08)

	struct UTemplateSequencePlayer* CreateTemplateSequencePlayer(struct UObject* WorldContextObject, struct UTemplateSequence* TemplateSequence, struct FMovieSceneSequencePlaybackSettings Settings, struct ATemplateSequenceActor*& OutActor); // Function TemplateSequence.TemplateSequencePlayer.CreateTemplateSequencePlayer // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x6483094
};

// Class TemplateSequence.TemplateSequenceSection
// Size: 0x148 (Inherited: 0x130)
struct UTemplateSequenceSection : UMovieSceneSubSection {
	char pad_130[0x8]; // 0x130(0x08)
	struct TArray<struct FTemplateSectionPropertyScale> PropertyScales; // 0x138(0x10)
};

// Class TemplateSequence.TemplateSequenceSystem
// Size: 0xb0 (Inherited: 0x40)
struct UTemplateSequenceSystem : UMovieSceneEntitySystem {
	char pad_40[0x70]; // 0x40(0x70)
};

// Class TemplateSequence.TemplateSequencePropertyScalingInstantiatorSystem
// Size: 0x98 (Inherited: 0x40)
struct UTemplateSequencePropertyScalingInstantiatorSystem : UMovieSceneEntitySystem {
	char pad_40[0x58]; // 0x40(0x58)
};

// Class TemplateSequence.TemplateSequencePropertyScalingEvaluatorSystem
// Size: 0x90 (Inherited: 0x40)
struct UTemplateSequencePropertyScalingEvaluatorSystem : UMovieSceneEntitySystem {
	char pad_40[0x50]; // 0x40(0x50)
};

// Class TemplateSequence.TemplateSequenceTrack
// Size: 0xa8 (Inherited: 0xa8)
struct UTemplateSequenceTrack : UMovieSceneSubTrack {
};

