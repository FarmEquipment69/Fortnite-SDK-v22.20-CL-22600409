// ScriptStruct GameFeedback.LogSubmitOptions
// Size: 0x30 (Inherited: 0x00)
struct FLogSubmitOptions {
	struct FString EventName; // 0x00(0x10)
	bool bSubmitLogs; // 0x10(0x01)
	bool bSubmitLogsInOptionState; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	int32_t LogTailKb; // 0x14(0x04)
	float LogSubmitChance; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct FString> DoNotUploadReasons; // 0x20(0x10)
};

