// ScriptStruct SessionMessages.SessionServicePing
// Size: 0x10 (Inherited: 0x00)
struct FSessionServicePing {
	struct FString UserName; // 0x00(0x10)
};

// ScriptStruct SessionMessages.SessionServicePong
// Size: 0x90 (Inherited: 0x00)
struct FSessionServicePong {
	bool AUTHORIZED; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString BuildDate; // 0x08(0x10)
	struct FString DeviceName; // 0x18(0x10)
	struct FGuid InstanceID; // 0x28(0x10)
	struct FString InstanceName; // 0x38(0x10)
	struct FString PlatformName; // 0x48(0x10)
	struct FGuid SessionId; // 0x58(0x10)
	struct FString SessionName; // 0x68(0x10)
	struct FString SessionOwner; // 0x78(0x10)
	bool Standalone; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
};

// ScriptStruct SessionMessages.SessionServiceLog
// Size: 0x38 (Inherited: 0x00)
struct FSessionServiceLog {
	struct FName category; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString Data; // 0x08(0x10)
	struct FGuid InstanceID; // 0x18(0x10)
	double TimeSeconds; // 0x28(0x08)
	char Verbosity; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct SessionMessages.SessionServiceLogSubscribe
// Size: 0x01 (Inherited: 0x00)
struct FSessionServiceLogSubscribe {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct SessionMessages.SessionServiceLogUnsubscribe
// Size: 0x01 (Inherited: 0x00)
struct FSessionServiceLogUnsubscribe {
	char pad_0[0x1]; // 0x00(0x01)
};

