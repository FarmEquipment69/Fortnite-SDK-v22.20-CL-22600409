// ScriptStruct DeveloperSettings.PerPlatformSettings
// Size: 0x10 (Inherited: 0x00)
struct FPerPlatformSettings {
	struct TArray<struct UPlatformSettings*> Settings; // 0x00(0x10)
};

// ScriptStruct DeveloperSettings.PlatformSettingsInstances
// Size: 0x58 (Inherited: 0x00)
struct FPlatformSettingsInstances {
	struct UPlatformSettings* PlatformInstance; // 0x00(0x08)
	struct TMap<struct FName, struct UPlatformSettings*> OtherPlatforms; // 0x08(0x50)
};

