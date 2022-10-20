// Class MetasoundEngine.MetasoundEditorGraphBase
// Size: 0x60 (Inherited: 0x60)
struct UMetasoundEditorGraphBase : UEdGraph {
};

// Class MetasoundEngine.MetaSound
// Size: 0x2e8 (Inherited: 0x28)
struct UMetaSound : UObject {
	char pad_28[0x58]; // 0x28(0x58)
	struct FMetasoundFrontendDocument RootMetaSoundDocument; // 0x80(0x1b8)
	struct TSet<struct FString> ReferencedAssetClassKeys; // 0x238(0x50)
	struct TSet<struct FSoftObjectPath> ReferenceAssetClassCache; // 0x288(0x50)
	struct FGuid AssetClassID; // 0x2d8(0x10)
};

// Class MetasoundEngine.MetaSoundAssetSubsystem
// Size: 0xe0 (Inherited: 0x30)
struct UMetaSoundAssetSubsystem : UEngineSubsystem {
	char pad_30[0xb0]; // 0x30(0xb0)

	void UnregisterAssetClassesInDirectories(struct TArray<struct FMetaSoundAssetDirectory>& Directories); // Function MetasoundEngine.MetaSoundAssetSubsystem.UnregisterAssetClassesInDirectories // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6cf2de8
	void RegisterAssetClassesInDirectories(struct TArray<struct FMetaSoundAssetDirectory>& Directories); // Function MetasoundEngine.MetaSoundAssetSubsystem.RegisterAssetClassesInDirectories // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6cf2d50
};

// Class MetasoundEngine.MetaSoundSettings
// Size: 0x78 (Inherited: 0x30)
struct UMetaSoundSettings : UDeveloperSettings {
	bool bAutoUpdateEnabled; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct TArray<struct FMetasoundFrontendClassName> AutoUpdateDenylist; // 0x38(0x10)
	struct TArray<struct FDefaultMetaSoundAssetAutoUpdateSettings> AutoUpdateAssetDenylist; // 0x48(0x10)
	bool bAutoUpdateLogWarningOnDroppedConnection; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct TArray<struct FDirectoryPath> DirectoriesToRegister; // 0x60(0x10)
	int32_t DenyListCacheChangeID; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// Class MetasoundEngine.MetaSoundSource
// Size: 0x630 (Inherited: 0x360)
struct UMetaSoundSource : USoundWaveProcedural {
	char pad_360[0x58]; // 0x360(0x58)
	struct FMetasoundFrontendDocument RootMetaSoundDocument; // 0x3b8(0x1b8)
	struct TSet<struct FString> ReferencedAssetClassKeys; // 0x570(0x50)
	struct TSet<struct FSoftObjectPath> ReferenceAssetClassCache; // 0x5c0(0x50)
	enum class EMetasoundSourceAudioFormat OutputFormat; // 0x610(0x01)
	char pad_611[0x3]; // 0x611(0x03)
	struct FGuid AssetClassID; // 0x614(0x10)
	char pad_624[0xc]; // 0x624(0x0c)
};

