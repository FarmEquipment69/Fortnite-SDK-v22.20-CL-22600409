// Enum SoundLibrary.ESoundLibraryNotifyTriggerType
enum class ESoundLibraryNotifyTriggerType : uint8 {
	Play = 0,
	Stop = 1,
	None = 2,
	ESoundLibraryNotifyTriggerType_MAX = 3
};

// ScriptStruct SoundLibrary.SoundLibraryPlaySoundResult
// Size: 0x28 (Inherited: 0x00)
struct FSoundLibraryPlaySoundResult {
	struct FGameplayTag EventName; // 0x00(0x04)
	bool bWasBlocked; // 0x04(0x01)
	bool bSuccess; // 0x05(0x01)
	char pad_6[0x12]; // 0x06(0x12)
	struct TArray<struct UAudioComponent*> AudioComponents; // 0x18(0x10)
};

// ScriptStruct SoundLibrary.SoundLibraryAnimContextSettings
// Size: 0x20 (Inherited: 0x00)
struct FSoundLibraryAnimContextSettings {
	struct FFloatInterval AnimRateThreshold; // 0x00(0x08)
	struct FGameplayTag EventName; // 0x08(0x04)
	bool bAttachToActor; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FName AttachName; // 0x10(0x04)
	bool bFadeOutOnEnd; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float FadeTime; // 0x18(0x04)
	float NotifyTriggerChance; // 0x1c(0x04)
};

// ScriptStruct SoundLibrary.SoundLibrarySet
// Size: 0x50 (Inherited: 0x00)
struct FSoundLibrarySet {
	struct TSet<struct USoundLibrary*> LibrarySet; // 0x00(0x50)
};

// ScriptStruct SoundLibrary.SimpleSoundLibraryContextSettings
// Size: 0x58 (Inherited: 0x00)
struct FSimpleSoundLibraryContextSettings {
	struct FGameplayTag EventName; // 0x00(0x04)
	bool bAttachedSound; // 0x04(0x01)
	bool bStopWhenAttachedDestroyed; // 0x05(0x01)
	bool bAutoDestroy; // 0x06(0x01)
	bool bForceComponentCreation; // 0x07(0x01)
	float VolumeMultiplier; // 0x08(0x04)
	float PitchMultiplier; // 0x0c(0x04)
	float StartTime; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct USoundConcurrency* ConcurrencySettings; // 0x18(0x08)
	struct USoundAttenuation* AttenuationSettings; // 0x20(0x08)
	struct FName AttachName; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct USceneComponent* AttachToComponent; // 0x30(0x08)
	enum class EAttachLocation LocationType; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FVector Location; // 0x40(0x18)
};

// ScriptStruct SoundLibrary.SoundLibraryActorData
// Size: 0x48 (Inherited: 0x00)
struct FSoundLibraryActorData {
	char pad_0[0x30]; // 0x00(0x30)
	struct TArray<struct USoundLibraryContext*> SoundLibraryContexts; // 0x30(0x10)
	char pad_40[0x8]; // 0x40(0x08)
};

