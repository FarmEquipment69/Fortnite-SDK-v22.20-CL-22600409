// Enum MIDIDevice.EMIDIEventType
enum class EMIDIEventType : uint8 {
	Unknown = 0,
	NoteOff = 8,
	NoteOn = 9,
	NoteAfterTouch = 10,
	ControlChange = 11,
	ProgramChange = 12,
	ChannelAfterTouch = 13,
	PitchBend = 14,
	EMIDIEventType_MAX = 15
};

// ScriptStruct MIDIDevice.FoundMIDIDevice
// Size: 0x20 (Inherited: 0x00)
struct FFoundMIDIDevice {
	int32_t DeviceID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString DeviceName; // 0x08(0x10)
	bool bCanReceiveFrom; // 0x18(0x01)
	bool bCanSendTo; // 0x19(0x01)
	bool bIsAlreadyInUse; // 0x1a(0x01)
	bool bIsDefaultInputDevice; // 0x1b(0x01)
	bool bIsDefaultOutputDevice; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct MIDIDevice.MIDIDeviceInfo
// Size: 0x20 (Inherited: 0x00)
struct FMIDIDeviceInfo {
	int32_t DeviceID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString DeviceName; // 0x08(0x10)
	bool bIsAlreadyInUse; // 0x18(0x01)
	bool bIsDefaultDevice; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
};

