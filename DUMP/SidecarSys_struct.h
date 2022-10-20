// Enum SidecarSys.EInventoryPersistenceMode
enum class EInventoryPersistenceMode : uint8 {
	Normal = 0,
	Deferred = 1,
	Disabled = 2,
	ReadOnly = 3,
	EInventoryPersistenceMode_MAX = 4
};

// ScriptStruct SidecarSys.SidecarFileInfo
// Size: 0x68 (Inherited: 0x00)
struct FSidecarFileInfo {
	struct TMap<struct FString, struct FString> Meta; // 0x00(0x50)
	bool bIsCheckedOut; // 0x50(0x01)
	bool bOperationPending; // 0x51(0x01)
	char pad_52[0x6]; // 0x52(0x06)
	struct FString CheckoutGuid; // 0x58(0x10)
};

