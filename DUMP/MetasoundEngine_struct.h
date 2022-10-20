// Enum MetasoundEngine.EMetaSoundMessageLevel
enum class EMetaSoundMessageLevel : uint8 {
	Error = 0,
	Warning = 1,
	Info = 2,
	EMetaSoundMessageLevel_MAX = 3
};

// Enum MetasoundEngine.EMetasoundSourceAudioFormat
enum class EMetasoundSourceAudioFormat : uint8 {
	Mono = 0,
	Stereo = 1,
	COUNT = 2,
	EMetasoundSourceAudioFormat_MAX = 3
};

// ScriptStruct MetasoundEngine.MetaSoundAssetDirectory
// Size: 0x10 (Inherited: 0x00)
struct FMetaSoundAssetDirectory {
	struct FDirectoryPath Directory; // 0x00(0x10)
};

// ScriptStruct MetasoundEngine.DefaultMetaSoundAssetAutoUpdateSettings
// Size: 0x18 (Inherited: 0x00)
struct FDefaultMetaSoundAssetAutoUpdateSettings {
	struct FSoftObjectPath MetaSound; // 0x00(0x18)
};

