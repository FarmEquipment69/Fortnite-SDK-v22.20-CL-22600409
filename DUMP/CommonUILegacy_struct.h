// Enum CommonUILegacy.EOperation
enum class EOperation : uint8 {
	Intro = 0,
	Outro = 1,
	Push = 2,
	Pop = 3,
	Invalid = 4,
	EOperation_MAX = 5
};

// Enum CommonUILegacy.ECommonPlatformType
enum class ECommonPlatformType : uint8 {
	PC = 0,
	Mac = 1,
	PS4 = 2,
	XBox = 3,
	IOS = 4,
	Android = 5,
	Switch = 6,
	XSX = 7,
	PS5 = 8,
	Count = 9,
	ECommonPlatformType_MAX = 10
};

// Enum CommonUILegacy.ECommonGamepadType
enum class ECommonGamepadType : uint8 {
	XboxOneController = 0,
	PS4Controller = 1,
	SwitchController = 2,
	GenericController = 3,
	XboxSeriesXController = 4,
	PS5Controller = 5,
	Count = 6,
	ECommonGamepadType_MAX = 7
};

// ScriptStruct CommonUILegacy.Operation
// Size: 0x28 (Inherited: 0x00)
struct FOperation {
	enum class EOperation Operation; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UCommonActivatablePanelLegacy* Panel; // 0x08(0x08)
	bool bIntroPanel; // 0x10(0x01)
	bool bActivatePanel; // 0x11(0x01)
	bool bOutroPanelBelow; // 0x12(0x01)
	char pad_13[0x15]; // 0x13(0x15)
};

// ScriptStruct CommonUILegacy.CommonInputActionData
// Size: 0x8c0 (Inherited: 0x330)
struct FCommonInputActionData : FCommonInputActionDataBase {
	struct TMap<enum class ECommonGamepadType, struct FCommonInputTypeInfo> GamepadInputTypeInfoOverrides; // 0x330(0x50)
	struct FCommonInputTypeInfo GamepadInputTypeInfos[0x6]; // 0x380(0x540)
};

