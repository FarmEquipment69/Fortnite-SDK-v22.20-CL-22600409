// Class REVRuntime.REVComponent
// Size: 0x7b0 (Inherited: 0x780)
struct UREVComponent : USynthComponent {
	char pad_780[0x8]; // 0x780(0x08)
	struct UREVModel* Model; // 0x788(0x08)
	struct URevSettings* SimSettings; // 0x790(0x08)
	char pad_798[0x18]; // 0x798(0x18)

	void UpdateSimSettings(); // Function REVRuntime.REVComponent.UpdateSimSettings // (Final|Native|Public|BlueprintCallable) // @ game+0x6d10c5c
	void UpdateParameters(float InPitch, float InRPM, float InThrottle, float InVelocity, int32_t InGear, bool bInEnableShifting); // Function REVRuntime.REVComponent.UpdateParameters // (Final|Native|Public|BlueprintCallable) // @ game+0x6d10a80
	void SetSettings(struct URevSettings* InSettings); // Function REVRuntime.REVComponent.SetSettings // (Final|Native|Public|BlueprintCallable) // @ game+0x6d109fc
	void SetRevModel(struct UREVModel* InModel); // Function REVRuntime.REVComponent.SetRevModel // (Final|Native|Public|BlueprintCallable) // @ game+0x6d10958
};

// Class REVRuntime.REVModel
// Size: 0x68 (Inherited: 0x28)
struct UREVModel : UObject {
	char pad_28[0x40]; // 0x28(0x40)
};

// Class REVRuntime.RevSettings
// Size: 0x80 (Inherited: 0x28)
struct URevSettings : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	float UpShiftDuration; // 0x30(0x04)
	float UpShiftAttackDuration; // 0x34(0x04)
	float UpShiftAttackVolumeSpike; // 0x38(0x04)
	float UpShiftAttackRPM; // 0x3c(0x04)
	float UpShiftAttackThrottleTime; // 0x40(0x04)
	float UpShiftWobblePitchFreq; // 0x44(0x04)
	float UpShiftWobblePitchAmp; // 0x48(0x04)
	bool UpShiftWobbleEnabled; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	float UpShiftWobbleVolFreq; // 0x50(0x04)
	float UpShiftWobbleVolAmp; // 0x54(0x04)
	float UpShiftWobbleDuration; // 0x58(0x04)
	float DownShiftDuration; // 0x5c(0x04)
	float PopDuration; // 0x60(0x04)
	float ClutchRPMSpike; // 0x64(0x04)
	float ClutchRPMSpikeDuration; // 0x68(0x04)
	float ClutchRPMMergeTime; // 0x6c(0x04)
	char pad_70[0x10]; // 0x70(0x10)

	void UpdateSettings(); // Function REVRuntime.RevSettings.UpdateSettings // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x6d10c48
};

