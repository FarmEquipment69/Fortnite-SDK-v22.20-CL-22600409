// Class SoundLibrary.SoundLibraryContext
// Size: 0x58 (Inherited: 0x28)
struct USoundLibraryContext : UObject {
	struct TWeakObjectPtr<struct AActor> Actor; // 0x28(0x08)
	struct FGameplayTag BaseEventName; // 0x30(0x04)
	bool bForwardToActorOwner; // 0x34(0x01)
	bool bForwardToAttachedActors; // 0x35(0x01)
	char pad_36[0x2]; // 0x36(0x02)
	struct FGameplayTagContainer PlaybackTags; // 0x38(0x20)

	bool PlaySound(struct USoundBase* sound, struct FSoundLibraryPlaySoundResult& OutResults); // Function SoundLibrary.SoundLibraryContext.PlaySound // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1d92090
	void OnRemovedFromActor(struct AActor* InActor); // Function SoundLibrary.SoundLibraryContext.OnRemovedFromActor // (Native|Event|Public|BlueprintEvent) // @ game+0x689a378
	void OnAddedToActor(struct AActor* InActor); // Function SoundLibrary.SoundLibraryContext.OnAddedToActor // (Native|Event|Public|BlueprintEvent) // @ game+0x689a274
	bool CreateEventName(struct FGameplayTag& OutEventName); // Function SoundLibrary.SoundLibraryContext.CreateEventName // (Native|Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0x1db92d8
};

// Class SoundLibrary.SoundLibraryAnimContext
// Size: 0x90 (Inherited: 0x58)
struct USoundLibraryAnimContext : USoundLibraryContext {
	struct FSoundLibraryAnimContextSettings AnimSettings; // 0x58(0x20)
	struct TWeakObjectPtr<struct UAnimSequenceBase> Animation; // 0x78(0x08)
	struct TWeakObjectPtr<struct USkeletalMeshComponent> MeshComponent; // 0x80(0x08)
	bool bSupportsNotifyEnd; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	float AnimRate; // 0x8c(0x04)

	void ConfigureContext(struct AActor* OwningActor, struct UAnimSequenceBase* InAnimation, struct FSoundLibraryAnimContextSettings& InSettings); // Function SoundLibrary.SoundLibraryAnimContext.ConfigureContext // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6fa6da4
};

// Class SoundLibrary.SoundLibraryAnimNotifyHelper
// Size: 0x38 (Inherited: 0x28)
struct USoundLibraryAnimNotifyHelper : UObject {
	struct TArray<struct TWeakObjectPtr<struct UAudioComponent>> PlayingComps; // 0x28(0x10)
};

// Class SoundLibrary.AnimNotify_SoundLibrary
// Size: 0x48 (Inherited: 0x38)
struct UAnimNotify_SoundLibrary : UAnimNotify {
	struct USoundLibraryContext* SoundContext; // 0x38(0x08)
	struct USoundLibraryAnimNotifyHelper* NotifyHelper; // 0x40(0x08)
};

// Class SoundLibrary.AnimNotifyState_SoundLibrary
// Size: 0x40 (Inherited: 0x30)
struct UAnimNotifyState_SoundLibrary : UAnimNotifyState {
	struct USoundLibraryContext* SoundContext; // 0x30(0x08)
	struct USoundLibraryAnimNotifyHelper* NotifyHelper; // 0x38(0x08)
};

// Class SoundLibrary.SoundLibraryComponent
// Size: 0xe0 (Inherited: 0xa8)
struct USoundLibraryComponent : UAudioGameplayComponent {
	char pad_A8[0x8]; // 0xa8(0x08)
	struct FMulticastInlineDelegate OnSoundLibraryPlayEvent; // 0xb0(0x10)
	struct TArray<struct USoundLibrary*> Libraries; // 0xc0(0x10)
	struct TArray<struct USoundLibraryContext*> ContextClasses; // 0xd0(0x10)
};

// Class SoundLibrary.SoundLibraryProviderInterface
// Size: 0x28 (Inherited: 0x28)
struct USoundLibraryProviderInterface : UInterface {
};

// Class SoundLibrary.SoundLibraryCollection
// Size: 0x80 (Inherited: 0x30)
struct USoundLibraryCollection : UDataAsset {
	struct TMap<struct FGameplayTag, struct FSoundLibrarySet> Libraries; // 0x30(0x50)
};

// Class SoundLibrary.SoundLibrarySettings
// Size: 0x58 (Inherited: 0x30)
struct USoundLibrarySettings : UDeveloperSettings {
	struct TSoftObjectPtr<USoundLibraryCollection> CommonLibraries; // 0x30(0x28)
};

// Class SoundLibrary.SoundLibrarySubsystem
// Size: 0x130 (Inherited: 0x30)
struct USoundLibrarySubsystem : UWorldSubsystem {
	struct USoundLibraryCollection* CommonLibraries; // 0x30(0x08)
	struct TMap<struct FName, struct USoundLibrary*> SoundLibraries; // 0x38(0x50)
	struct USimpleSoundLibraryContext* SimpleLibraryContext; // 0x88(0x08)
	struct TMap<uint32_t, struct FSoundLibraryActorData> ActorDataMap; // 0x90(0x50)
	char pad_E0[0x50]; // 0xe0(0x50)

	void RemoveLibrary(struct AActor* Actor, struct USoundLibrary* Library); // Function SoundLibrary.SoundLibrarySubsystem.RemoveLibrary // (Final|Native|Public|BlueprintCallable) // @ game+0x23e78c8
	void RemoveLibraries(struct AActor* Actor, struct TArray<struct USoundLibrary*> Libraries); // Function SoundLibrary.SoundLibrarySubsystem.RemoveLibraries // (Final|Native|Public|BlueprintCallable) // @ game+0x2244f30
	bool RemoveContext(struct AActor* Actor, struct USoundLibraryContext* ContextClass); // Function SoundLibrary.SoundLibrarySubsystem.RemoveContext // (Final|Native|Public|BlueprintCallable) // @ game+0x6fa729c
	struct FSoundLibraryPlaySoundResult PlaySoundSimple(struct AActor* OwningActor, struct FSimpleSoundLibraryContextSettings& InSettings); // Function SoundLibrary.SoundLibrarySubsystem.PlaySoundSimple // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6fa7154
	void PlaySound(struct USoundLibraryContext* Context, struct FSoundLibraryPlaySoundResult& OutResults); // Function SoundLibrary.SoundLibrarySubsystem.PlaySound // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2250884
	struct USoundLibraryContext* GetContext(struct AActor* Actor, struct USoundLibraryContext* ContextClass); // Function SoundLibrary.SoundLibrarySubsystem.GetContext // (Final|Native|Public|BlueprintCallable) // @ game+0x6fa6fdc
	void EnableEventsForActor(struct AActor* Actor); // Function SoundLibrary.SoundLibrarySubsystem.EnableEventsForActor // (Final|Native|Public|BlueprintCallable) // @ game+0x6fa6f58
	void DisableEventsForActor(struct AActor* Actor); // Function SoundLibrary.SoundLibrarySubsystem.DisableEventsForActor // (Final|Native|Public|BlueprintCallable) // @ game+0x6fa6ed4
	void AddLibrary(struct AActor* Actor, struct USoundLibrary* Library); // Function SoundLibrary.SoundLibrarySubsystem.AddLibrary // (Final|Native|Public|BlueprintCallable) // @ game+0x259c508
	void AddLibraries(struct AActor* Actor, struct TArray<struct USoundLibrary*> Libraries); // Function SoundLibrary.SoundLibrarySubsystem.AddLibraries // (Final|Native|Public|BlueprintCallable) // @ game+0x22c6e4c
	struct USoundLibraryContext* AddContext(struct AActor* Actor, struct USoundLibraryContext* ContextClass); // Function SoundLibrary.SoundLibrarySubsystem.AddContext // (Final|Native|Public|BlueprintCallable) // @ game+0x6fa6a40
};

// Class SoundLibrary.SimpleSoundLibraryContext
// Size: 0xb0 (Inherited: 0x58)
struct USimpleSoundLibraryContext : USoundLibraryContext {
	struct FSimpleSoundLibraryContextSettings Settings; // 0x58(0x58)

	void ConfigureContext(struct AActor* OwningActor, struct FSimpleSoundLibraryContextSettings& InSettings); // Function SoundLibrary.SimpleSoundLibraryContext.ConfigureContext // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6fa6bd8
};

// Class SoundLibrary.SoundLibrary
// Size: 0x148 (Inherited: 0x28)
struct USoundLibrary : UObject {
	struct TMap<struct FGameplayTag, struct TSoftObjectPtr<USoundBase>> Sounds; // 0x28(0x50)
	struct FAudioGameplayRequirements LibraryRequirements; // 0x78(0x50)
	struct TMap<struct FGameplayTag, struct TSoftObjectPtr<USoundBase>> FullLibrary; // 0xc8(0x50)
	struct TArray<struct USoundBase*> LoadedSoundObjects; // 0x118(0x10)
	char pad_128[0x20]; // 0x128(0x20)
};

