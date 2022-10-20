// Class Hotfix.OnlineHotfixManager
// Size: 0x238 (Inherited: 0x28)
struct UOnlineHotfixManager : UObject {
	char pad_28[0x1d0]; // 0x28(0x1d0)
	struct FString OSSName; // 0x1f8(0x10)
	struct FString HotfixManagerClassName; // 0x208(0x10)
	struct FString DebugPrefix; // 0x218(0x10)
	struct TArray<struct UObject*> AssetsHotfixedFromIniFiles; // 0x228(0x10)

	void StartHotfixProcess(); // Function Hotfix.OnlineHotfixManager.StartHotfixProcess // (Native|Public|BlueprintCallable) // @ game+0x234846c
};

// Class Hotfix.UpdateManager
// Size: 0x1f0 (Inherited: 0x28)
struct UUpdateManager : UObject {
	char pad_28[0x60]; // 0x28(0x60)
	float HotfixCheckCompleteDelay; // 0x88(0x04)
	float UpdateCheckCompleteDelay; // 0x8c(0x04)
	float HotfixAvailabilityCheckCompleteDelay; // 0x90(0x04)
	float UpdateCheckAvailabilityCompleteDelay; // 0x94(0x04)
	char pad_98[0x4]; // 0x98(0x04)
	int32_t AppSuspendedUpdateCheckTimeSeconds; // 0x9c(0x04)
	char pad_A0[0x8]; // 0xa0(0x08)
	bool bPlatformEnvironmentDetected; // 0xa8(0x01)
	bool bInitialUpdateFinished; // 0xa9(0x01)
	bool bCheckHotfixAvailabilityOnly; // 0xaa(0x01)
	enum class EUpdateState CurrentUpdateState; // 0xab(0x01)
	int32_t WorstNumFilesPendingLoadViewed; // 0xac(0x04)
	char pad_B0[0x4]; // 0xb0(0x04)
	enum class EHotfixResult LastHotfixResult; // 0xb4(0x01)
	char pad_B5[0x23]; // 0xb5(0x23)
	struct FDateTime LastUpdateCheck[0x2]; // 0xd8(0x10)
	enum class EUpdateCompletionStatus LastCompletionResult[0x2]; // 0xe8(0x02)
	char pad_EA[0x26]; // 0xea(0x26)
	struct UEnum* UpdateStateEnum; // 0x110(0x08)
	struct UEnum* UpdateCompletionEnum; // 0x118(0x08)
	struct FUpdateContextDefinition UpdateContextDefinitionUnknown; // 0x120(0x68)
	struct TArray<struct FUpdateContextDefinition> UpdateContextDefinitions; // 0x188(0x10)
	char pad_198[0x58]; // 0x198(0x58)
};

