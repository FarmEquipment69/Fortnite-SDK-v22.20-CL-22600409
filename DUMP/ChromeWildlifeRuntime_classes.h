// Class ChromeWildlifeRuntime.FortAthenaChromeWildlifeTelemetryData
// Size: 0x38 (Inherited: 0x28)
struct UFortAthenaChromeWildlifeTelemetryData : UFortAthenaAITelemetryData {
	bool bIsChromed; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	int32_t ChromedDowns; // 0x2c(0x04)
	float FirstChromedTime; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)

	void SetIsChromed(bool bInIsChromed); // Function ChromeWildlifeRuntime.FortAthenaChromeWildlifeTelemetryData.SetIsChromed // (Final|Native|Public|BlueprintCallable) // @ game+0x672fd50
};

