// Class VerseDevices.PlaylistUserOptionScript
// Size: 0x1e0 (Inherited: 0x1c8)
struct UPlaylistUserOptionScript : UPlaylistUserOptionBase {
	struct TArray<struct FPlaylistOptionScriptValue> OptionValues; // 0x1c8(0x10)
	int32_t DefaultValueIndex; // 0x1d8(0x04)
	char pad_1DC[0x4]; // 0x1dc(0x04)
};

// Class VerseDevices.ScriptDevice
// Size: 0xf18 (Inherited: 0xee0)
struct AScriptDevice : ABuildingProp {
	struct UVerseCreativeDevice* Script; // 0xee0(0x08)
	char pad_EE8[0x8]; // 0xee8(0x08)
	struct UVerseCreativeDevice* ScriptInstance; // 0xef0(0x08)
	char pad_EF8[0x20]; // 0xef8(0x20)

	void SetEnabled(bool bInEnabled); // Function VerseDevices.ScriptDevice.SetEnabled // (Final|Native|Protected|BlueprintCallable) // @ game+0x5faa314
	void HandlePreMinigameStartedSetup(); // Function VerseDevices.ScriptDevice.HandlePreMinigameStartedSetup // (Final|Native|Public) // @ game+0x5faa300
	void HandleMinigameEnded(); // Function VerseDevices.ScriptDevice.HandleMinigameEnded // (Final|Native|Public) // @ game+0x5faa2ec
};

// Class VerseDevices.VerseCreativeDevice
// Size: 0x30 (Inherited: 0x28)
struct UVerseCreativeDevice : UObject {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class VerseDevices.VerseCreativeObject
// Size: 0x38 (Inherited: 0x28)
struct UVerseCreativeObject : UObject {
	struct ABuildingActor* SavedActor; // 0x28(0x08)
	char pad_30[0x8]; // 0x30(0x08)
};

