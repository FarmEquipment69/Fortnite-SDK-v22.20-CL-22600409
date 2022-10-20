// Class WinDualShock.DualShockExternalEndpointSettings
// Size: 0x30 (Inherited: 0x28)
struct UDualShockExternalEndpointSettings : UAudioEndpointSettingsBase {
	int32_t ControllerIndex; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class WinDualShock.DualShockSoundfieldEndpointSettings
// Size: 0x30 (Inherited: 0x28)
struct UDualShockSoundfieldEndpointSettings : USoundfieldEndpointSettingsBase {
	int32_t ControllerIndex; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class WinDualShock.DualShockSpatializationSettings
// Size: 0x38 (Inherited: 0x28)
struct UDualShockSpatializationSettings : USoundfieldEncodingSettingsBase {
	float Spread; // 0x28(0x04)
	int32_t Priority; // 0x2c(0x04)
	bool PassThrough; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

