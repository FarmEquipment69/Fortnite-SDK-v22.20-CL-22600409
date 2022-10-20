// Enum PictureInPictureCore.PictureInPictureAuthState
enum class PictureInPictureAuthState : uint8 {
	UNKNOWN = 0,
	NOT_AUTHORIZED = 1,
	AUTHORIZED = 2,
	PictureInPictureAuthState_MAX = 3
};

// Enum PictureInPictureCore.PictureInPictureAuthType
enum class PictureInPictureAuthType : uint8 {
	AUTH_NONE = 0,
	AUTH_USER_PASS = 1,
	AUTH_QR_CODE = 2,
	AUTH_MAX = 3
};

// ScriptStruct PictureInPictureCore.PiPSuspendInfo
// Size: 0x130 (Inherited: 0x00)
struct FPiPSuspendInfo {
	struct FPiPPartnerSource SourceSnapshot; // 0x00(0x128)
	bool bEnabledState; // 0x128(0x01)
	char pad_129[0x7]; // 0x129(0x07)
};

