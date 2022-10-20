// Enum DataAssetDirectory.EDataAssetDirectoryUpdateStatus
enum class EDataAssetDirectoryUpdateStatus : uint8 {
	Failed = 0,
	Success = 1,
	SuccessNoChange = 2,
	EDataAssetDirectoryUpdateStatus_MAX = 3
};

// Enum DataAssetDirectory.EDataAssetDirectoryTestEnum
enum class EDataAssetDirectoryTestEnum : uint8 {
	A = 0,
	B = 1,
	C = 2,
	D = 3,
	EDataAssetDirectoryTestEnum_MAX = 4
};

// ScriptStruct DataAssetDirectory.DataAssetDirectoryTestPODStruct
// Size: 0x40 (Inherited: 0x00)
struct FDataAssetDirectoryTestPODStruct {
	enum class EDataAssetDirectoryTestEnum EnumProperty; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t IntProperty; // 0x04(0x04)
	float FloatProperty; // 0x08(0x04)
	bool BoolProperty; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FString StringProperty; // 0x10(0x10)
	struct FName NameProperty; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FText TextProperty; // 0x28(0x18)
};

// ScriptStruct DataAssetDirectory.DataAssetDirectoryTestSimpleStruct
// Size: 0x04 (Inherited: 0x00)
struct FDataAssetDirectoryTestSimpleStruct {
	int32_t IntProperty; // 0x00(0x04)
};

