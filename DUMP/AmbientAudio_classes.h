// Class AmbientAudio.AmbientAudioComponent
// Size: 0xd8 (Inherited: 0xa8)
struct UAmbientAudioComponent : UAudioGameplayComponent {
	char pad_A8[0x8]; // 0xa8(0x08)
	struct UAmbientAudioDataAsset* AmbientAsset; // 0xb0(0x08)
	int32_t Priority; // 0xb8(0x04)
	float CrossfadeTime; // 0xbc(0x04)
	struct FGuid AmbientGuid; // 0xc0(0x10)
	struct FName DisplayName; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)

	void SetPriority(int32_t InPriority); // Function AmbientAudio.AmbientAudioComponent.SetPriority // (Final|Native|Public|BlueprintCallable) // @ game+0x6fa5124
	void SetCrossfadeTime(float InCrossfadeTime); // Function AmbientAudio.AmbientAudioComponent.SetCrossfadeTime // (Final|Native|Public|BlueprintCallable) // @ game+0x6fa50a0
	void SetAmbientAsset(struct UAmbientAudioDataAsset* InAmbientAsset); // Function AmbientAudio.AmbientAudioComponent.SetAmbientAsset // (Final|Native|Public|BlueprintCallable) // @ game+0x6fa5010
};

// Class AmbientAudio.AmbientAudioDataAsset
// Size: 0x58 (Inherited: 0x30)
struct UAmbientAudioDataAsset : UDataAsset {
	struct TArray<struct FAmbientAudioLoop> LoopingSounds; // 0x30(0x10)
	struct TArray<struct FAmbientAudioOneShot> OneShotSounds; // 0x40(0x10)
	float TagCrossfadeTime; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// Class AmbientAudio.AmbientAudioSubsystem
// Size: 0x250 (Inherited: 0x30)
struct UAmbientAudioSubsystem : UWorldSubsystem {
	char pad_30[0x8]; // 0x30(0x08)
	struct FMulticastInlineDelegate OnTagChanged; // 0x38(0x10)
	struct FMulticastInlineDelegate OnEntryChanged; // 0x48(0x10)
	struct TArray<struct UAmbientAudioComponent*> AmbientComponents; // 0x58(0x10)
	char pad_68[0x1e8]; // 0x68(0x1e8)

	void RemoveGameplayTag(struct FGameplayTag GameplayTag); // Function AmbientAudio.AmbientAudioSubsystem.RemoveGameplayTag // (Final|Native|Public|BlueprintCallable) // @ game+0x2230cf4
	void RemoveAmbientEntry(struct FName AmbientName, float CrossfadeOverride); // Function AmbientAudio.AmbientAudioSubsystem.RemoveAmbientEntry // (Final|Native|Public|BlueprintCallable) // @ game+0x25ea050
	void AddGameplayTag(struct FGameplayTag GameplayTag); // Function AmbientAudio.AmbientAudioSubsystem.AddGameplayTag // (Final|Native|Public|BlueprintCallable) // @ game+0x2ae6484
	void AddAmbientEntry(struct FName AmbientName, struct UAmbientAudioDataAsset* Asset, int32_t Priority, float CrossfadeTime); // Function AmbientAudio.AmbientAudioSubsystem.AddAmbientEntry // (Final|Native|Public|BlueprintCallable) // @ game+0xdf675c
};

