// Class LiveLinkMovieScene.MovieSceneLiveLinkSection
// Size: 0x230 (Inherited: 0xf0)
struct UMovieSceneLiveLinkSection : UMovieSceneSection {
	struct FLiveLinkSubjectPreset SubjectPreset; // 0xf0(0x38)
	struct TArray<bool> ChannelMask; // 0x128(0x10)
	struct TArray<struct UMovieSceneLiveLinkSubSection*> SubSections; // 0x138(0x10)
	char pad_148[0x10]; // 0x148(0x10)
	struct FName SubjectName; // 0x158(0x04)
	char pad_15C[0x4]; // 0x15c(0x04)
	struct FLiveLinkFrameData TemplateToPush; // 0x160(0x90)
	struct FLiveLinkRefSkeleton RefSkeleton; // 0x1f0(0x20)
	struct TArray<struct FName> CurveNames; // 0x210(0x10)
	struct TArray<struct FMovieSceneFloatChannel> PropertyFloatChannels; // 0x220(0x10)
};

// Class LiveLinkMovieScene.MovieSceneLiveLinkSubSection
// Size: 0x50 (Inherited: 0x28)
struct UMovieSceneLiveLinkSubSection : UObject {
	struct FLiveLinkSubSectionData SubSectionData; // 0x28(0x10)
	struct ULiveLinkRole* SubjectRole; // 0x38(0x08)
	char pad_40[0x10]; // 0x40(0x10)
};

// Class LiveLinkMovieScene.MovieSceneLiveLinkSubSectionAnimation
// Size: 0x60 (Inherited: 0x50)
struct UMovieSceneLiveLinkSubSectionAnimation : UMovieSceneLiveLinkSubSection {
	char pad_50[0x10]; // 0x50(0x10)
};

// Class LiveLinkMovieScene.MovieSceneLiveLinkSubSectionBasicRole
// Size: 0x60 (Inherited: 0x50)
struct UMovieSceneLiveLinkSubSectionBasicRole : UMovieSceneLiveLinkSubSection {
	char pad_50[0x10]; // 0x50(0x10)
};

// Class LiveLinkMovieScene.MovieSceneLiveLinkSubSectionProperties
// Size: 0x60 (Inherited: 0x50)
struct UMovieSceneLiveLinkSubSectionProperties : UMovieSceneLiveLinkSubSection {
	char pad_50[0x10]; // 0x50(0x10)
};

// Class LiveLinkMovieScene.MovieSceneLiveLinkTrack
// Size: 0xd0 (Inherited: 0xc0)
struct UMovieSceneLiveLinkTrack : UMovieScenePropertyTrack {
	char pad_C0[0x8]; // 0xc0(0x08)
	struct ULiveLinkRole* TrackRole; // 0xc8(0x08)
};

