// ScriptStruct EpicCMS.DownloadCacheEntry
// Size: 0x28 (Inherited: 0x00)
struct FDownloadCacheEntry {
	struct FString FilePath; // 0x00(0x10)
	struct FString SourceUrl; // 0x10(0x10)
	struct FDateTime LastAccessTime; // 0x20(0x08)
};

// ScriptStruct EpicCMS.DownloadCache
// Size: 0x58 (Inherited: 0x00)
struct FDownloadCache {
	char pad_0[0x4]; // 0x00(0x04)
	int32_t Version; // 0x04(0x04)
	struct TMap<struct FString, struct FDownloadCacheEntry> Cache; // 0x08(0x50)
};

