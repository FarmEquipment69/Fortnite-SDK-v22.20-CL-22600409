// Class DeveloperSettings.PlatformSettings
// Size: 0x40 (Inherited: 0x28)
struct UPlatformSettings : UObject {
	char pad_28[0x18]; // 0x28(0x18)
};

// Class DeveloperSettings.DeveloperSettings
// Size: 0x30 (Inherited: 0x28)
struct UDeveloperSettings : UObject {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class DeveloperSettings.DeveloperSettingsBackedByCVars
// Size: 0x30 (Inherited: 0x30)
struct UDeveloperSettingsBackedByCVars : UDeveloperSettings {
};

// Class DeveloperSettings.PlatformSettingsManager
// Size: 0x80 (Inherited: 0x28)
struct UPlatformSettingsManager : UObject {
	struct TMap<struct UPlatformSettings*, struct FPlatformSettingsInstances> SettingsMap; // 0x28(0x50)
	char pad_78[0x8]; // 0x78(0x08)
};

