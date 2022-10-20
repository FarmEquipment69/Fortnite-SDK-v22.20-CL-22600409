// Class OnlineSubsystemEOS.EOSArtifactSettings
// Size: 0x30 (Inherited: 0x30)
struct UEOSArtifactSettings : UDataAsset {
};

// Class OnlineSubsystemEOS.EOSSettings
// Size: 0x90 (Inherited: 0x38)
struct UEOSSettings : URuntimeOptionsBase {
	struct FString CacheDir; // 0x38(0x10)
	struct FString DefaultArtifactName; // 0x48(0x10)
	int32_t TickBudgetInMilliseconds; // 0x58(0x04)
	bool bEnableOverlay; // 0x5c(0x01)
	bool bEnableSocialOverlay; // 0x5d(0x01)
	bool bEnableEditorOverlay; // 0x5e(0x01)
	bool bShouldEnforceBeingLaunchedByEGS; // 0x5f(0x01)
	struct TArray<struct FString> TitleStorageTags; // 0x60(0x10)
	int32_t TitleStorageReadChunkLength; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct TArray<struct FArtifactSettings> Artifacts; // 0x78(0x10)
	bool bUseEAS; // 0x88(0x01)
	bool bUseEOSConnect; // 0x89(0x01)
	bool bMirrorStatsToEOS; // 0x8a(0x01)
	bool bMirrorAchievementsToEOS; // 0x8b(0x01)
	bool bUseEOSSessions; // 0x8c(0x01)
	bool bMirrorPresenceToEAS; // 0x8d(0x01)
	char pad_8E[0x2]; // 0x8e(0x02)
};

// Class OnlineSubsystemEOS.NetDriverEOS
// Size: 0x818 (Inherited: 0x818)
struct UNetDriverEOS : UNetDriverEOSBase {
};

