// Enum CommonInput.ECommonInputType
enum class ECommonInputType : uint8 {
	MouseAndKeyboard = 0,
	Gamepad = 1,
	Touch = 2,
	Count = 3,
	ECommonInputType_MAX = 4
};

// Enum CommonInput.ECommonInputEventFlowBehavior
enum class ECommonInputEventFlowBehavior : uint8 {
	BlockIfActive = 0,
	BlockIfHandled = 1,
	NeverBlock = 2,
	ECommonInputEventFlowBehavior_MAX = 3
};

// Enum CommonInput.ECommonInputMode
enum class ECommonInputMode : uint8 {
	Menu = 0,
	Game = 1,
	All = 2,
	MAX = 3
};

// ScriptStruct CommonInput.CommonInputKeyBrushConfiguration
// Size: 0xe0 (Inherited: 0x00)
struct FCommonInputKeyBrushConfiguration {
	struct FKey Key; // 0x00(0x18)
	char pad_18[0x8]; // 0x18(0x08)
	struct FSlateBrush KeyBrush; // 0x20(0xc0)
};

// ScriptStruct CommonInput.CommonInputKeySetBrushConfiguration
// Size: 0xd0 (Inherited: 0x00)
struct FCommonInputKeySetBrushConfiguration {
	struct TArray<struct FKey> Keys; // 0x00(0x10)
	struct FSlateBrush KeyBrush; // 0x10(0xc0)
};

// ScriptStruct CommonInput.InputDeviceIdentifierPair
// Size: 0x18 (Inherited: 0x00)
struct FInputDeviceIdentifierPair {
	struct FName InputDeviceName; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString HardwareDeviceIdentifier; // 0x08(0x10)
};

// ScriptStruct CommonInput.CommonInputPlatformBaseData
// Size: 0x38 (Inherited: 0x00)
struct FCommonInputPlatformBaseData {
	char pad_0[0x8]; // 0x00(0x08)
	enum class ECommonInputType DefaultInputType; // 0x08(0x01)
	bool bSupportsMouseAndKeyboard; // 0x09(0x01)
	bool bSupportsGamepad; // 0x0a(0x01)
	char pad_B[0x1]; // 0x0b(0x01)
	struct FName DefaultGamepadName; // 0x0c(0x04)
	bool bCanChangeGamepadType; // 0x10(0x01)
	bool bSupportsTouch; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
	struct TArray<struct TSoftClassPtr<UObject>> ControllerData; // 0x18(0x10)
	struct TArray<struct UCommonInputBaseControllerData*> ControllerDataClasses; // 0x28(0x10)
};

