// ScriptStruct MusicBlocks.MusicSequencerHitHandle
// Size: 0x08 (Inherited: 0x00)
struct FMusicSequencerHitHandle {
	uint64_t Handle; // 0x00(0x08)
};

// ScriptStruct MusicBlocks.MusicSequencerHitEntry
// Size: 0x60 (Inherited: 0x0c)
struct FMusicSequencerHitEntry : FFastArraySerializerItem {
	char pad_C[0x4]; // 0x0c(0x04)
	struct FMusicSequencerHitHandle Handle; // 0x10(0x08)
	float ServerWorldTimeStart; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct AActor* ActorClass; // 0x20(0x08)
	struct TWeakObjectPtr<struct AActor> Actor; // 0x28(0x08)
	struct TWeakObjectPtr<struct APlayerState> InstigatorPlayerState; // 0x30(0x08)
	struct FVector_NetQuantize SoundLocation; // 0x38(0x18)
	int32_t SoundIndex; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct FTimerHandle TimerHandle; // 0x58(0x08)
};

// ScriptStruct MusicBlocks.MusicSequencerHitArray
// Size: 0x120 (Inherited: 0x108)
struct FMusicSequencerHitArray : FFastArraySerializer {
	struct TArray<struct FMusicSequencerHitEntry> Items; // 0x108(0x10)
	struct TWeakObjectPtr<struct UMusicSequencerHitComponent> OwningComponent; // 0x118(0x08)
};

