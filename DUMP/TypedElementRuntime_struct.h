// Enum TypedElementRuntime.ETypedElementChildInclusionMethod
enum class ETypedElementChildInclusionMethod : uint8 {
	None = 0,
	Immediate = 1,
	Recursive = 2,
	ETypedElementChildInclusionMethod_MAX = 3
};

// Enum TypedElementRuntime.ETypedElementSelectionMethod
enum class ETypedElementSelectionMethod : uint8 {
	Primary = 0,
	Secondary = 1,
	ETypedElementSelectionMethod_MAX = 2
};

// ScriptStruct TypedElementRuntime.TypedElementSelectionOptions
// Size: 0x05 (Inherited: 0x00)
struct FTypedElementSelectionOptions {
	bool bAllowHidden; // 0x00(0x01)
	bool bAllowGroups; // 0x01(0x01)
	bool bAllowLegacyNotifications; // 0x02(0x01)
	bool bWarnIfLocked; // 0x03(0x01)
	enum class ETypedElementChildInclusionMethod ChildElementInclusionMethod; // 0x04(0x01)
};

// ScriptStruct TypedElementRuntime.TypedElementSelectionSetState
// Size: 0x18 (Inherited: 0x00)
struct FTypedElementSelectionSetState {
	struct TWeakObjectPtr<struct UTypedElementSelectionSet> CreatedFromSelectionSet; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct TypedElementRuntime.TypedElementIsSelectedOptions
// Size: 0x01 (Inherited: 0x00)
struct FTypedElementIsSelectedOptions {
	bool bAllowIndirect; // 0x00(0x01)
};

// ScriptStruct TypedElementRuntime.TypedElementSelectionNormalizationOptions
// Size: 0x02 (Inherited: 0x00)
struct FTypedElementSelectionNormalizationOptions {
	bool bExpandGroups; // 0x00(0x01)
	bool bFollowAttachment; // 0x01(0x01)
};

