// Enum KoalaUI.EKoalaClipEventType
enum class EKoalaClipEventType : uint8 {
	Manual = 0,
	Elimination = 1,
	VictoryRoyale = 2,
	Emote = 3,
	COUNT = 4,
	EKoalaClipEventType_MAX = 5
};

// Enum KoalaUI.EKoalaAvailability
enum class EKoalaAvailability : uint8 {
	Pending = 0,
	NotAvailable = 1,
	Available = 2,
	COUNT = 3,
	EKoalaAvailability_MAX = 4
};

// Enum KoalaUI.EKoalaRecording
enum class EKoalaRecording : uint8 {
	Pending = 0,
	NotRecording = 1,
	Recording = 2,
	COUNT = 3,
	EKoalaRecording_MAX = 4
};

// Enum KoalaUI.EKoalaConnectionStatus
enum class EKoalaConnectionStatus : uint8 {
	Pending = 0,
	NotConnected = 1,
	Connected = 2,
	COUNT = 3,
	EKoalaConnectionStatus_MAX = 4
};

// Enum KoalaUI.EKoalaClipStatus
enum class EKoalaClipStatus : uint8 {
	None = 0,
	Creating = 1,
	Uploading = 2,
	Completed = 3,
	Failed = 4,
	COUNT = 5,
	EKoalaClipStatus_MAX = 6
};

// Enum KoalaUI.EKoalaMockClipMode
enum class EKoalaMockClipMode : uint8 {
	None = 0,
	ShortSuccess = 1,
	ShortFailure = 2,
	LongSuccess = 3,
	LongFailure = 4,
	COUNT = 5,
	EKoalaMockClipMode_MAX = 6
};

// ScriptStruct KoalaUI.KoalaClipInfo
// Size: 0x18 (Inherited: 0x00)
struct FKoalaClipInfo {
	char pad_0[0x18]; // 0x00(0x18)
};

