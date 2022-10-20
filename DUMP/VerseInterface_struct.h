// Enum VerseInterface.ESolarisDebugMessageClientId
enum class ESolarisDebugMessageClientId : int32 {
	None = 0,
	Max = 2147483646
};

// Enum VerseInterface.ESolarisDebugMessageCommand
enum class ESolarisDebugMessageCommand : uint8 {
	Connect = 0,
	Disconnect = 1,
	Message = 2,
	PackageMapping = 3,
	ESolarisDebugMessageCommand_MAX = 4
};

// ScriptStruct VerseInterface.SolarisDebugMessage
// Size: 0x18 (Inherited: 0x00)
struct FSolarisDebugMessage {
	enum class ESolarisDebugMessageClientId ClientId; // 0x00(0x04)
	enum class ESolarisDebugMessageCommand Command; // 0x04(0x04)
	struct TArray<char> MessageBodyUTF8; // 0x08(0x10)
};

