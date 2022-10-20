// SolarisGeneratedEnum EpicGamesEngine.input_event
enum class input_event : uint8 {
	Pressed = 0,
	Released = 1
};

// SolarisGeneratedEnum EpicGamesEngine.verse_key
enum class verse_key : uint8 {
	Gamepad_FaceButton_Top = 0,
	Gamepad_FaceButton_Bottom = 1,
	Gamepad_FaceButton_Left = 2,
	Gamepad_FaceButton_Right = 3,
	Gamepad_LeftShoulder = 4,
	Gamepad_RightShoulder = 5,
	Gamepad_LeftTrigger = 6,
	Gamepad_RightTrigger = 7,
	Gamepad_DPad_Up = 8,
	Gamepad_DPad_Down = 9,
	Gamepad_DPad_Left = 10,
	Gamepad_DPad_Right = 11,
	Gamepad_LeftX = 12,
	Gamepad_LeftY = 13,
	Gamepad_RightX = 14,
	Gamepad_RightY = 15,
	Gamepad_LeftTriggerAxis = 16,
	Gamepad_RightTriggerAxis = 17,
	Mouse_X = 18,
	Mouse_Y = 19,
	Mouse_WheelAxis = 20,
	Mouse_LeftButton = 21,
	Mouse_RightButton = 22,
	Mouse_MiddleButton = 23,
	Mouse_ThumbButton = 24,
	Mouse_ThumbButton2 = 25,
	Mouse_ScrollUp = 26,
	Mouse_ScrollDown = 27,
	Keyboard_Up = 28,
	Keyboard_Down = 29,
	Keyboard_Left = 30,
	Keyboard_Right = 31,
	Keyboard_Enter = 32,
	Keyboard_Multiply = 33,
	Keyboard_Divide = 34,
	Keyboard_Add = 35,
	Keyboard_Subtract = 36,
	Keyboard_Decimal = 37,
	Keyboard_SpaceBar = 38,
	Keyboard_LeftShift = 39,
	Keyboard_RightShift = 40,
	Keyboard_LeftControl = 41,
	Keyboard_RightControl = 42,
	Keyboard_LeftAlt = 43,
	Keyboard_RightAlt = 44,
	NumPad_Zero = 45,
	NumPad_One = 46,
	NumPad_Two = 47,
	NumPad_Three = 48,
	NumPad_Four = 49,
	NumPad_Five = 50,
	NumPad_Six = 51,
	NumPad_Seven = 52,
	NumPad_Eight = 53,
	NumPad_Nine = 54,
	e = 55,
	I = 56,
	J = 57,
	K = 58,
	L = 59,
	Z = 60,
	Tab = 61,
	Zero = 62,
	One = 63,
	Two = 64,
	Three = 65,
	Four = 66,
	Five = 67,
	Six = 68,
	Seven = 69,
	Eight = 70,
	Nine = 71
};

// VerseStruct EpicGamesEngine.tuple_L_Kchar_M_Kchar_M_Kverse__key_M_Qfloat_M_Q_Lfloat_Tvoid_R_R
// Size: 0x49 (Inherited: 0x00)
struct Ftuple_L_Kchar_M_Kchar_M_Kverse__key_M_Qfloat_M_Q_Lfloat_Tvoid_R_R {
	VerseStringProperty __verse_0x18E3F084_Elem0; // 0x00(0x10)
	VerseStringProperty __verse_0x7D844C3C_Elem1; // 0x10(0x10)
	struct TArray<enum class verse_key> __verse_0x932BF92E_Elem2; // 0x20(0x10)
	OptionProperty __verse_0xF64C4596_Elem3; // 0x30(0x09)
	char pad_39[0x3]; // 0x39(0x03)
	OptionProperty __verse_0x4F74920B_Elem4; // 0x3c(0x0d)
};

// VerseStruct EpicGamesEngine.tuple_L_Kchar_M_Kchar_M_Kverse__key_M_Qfloat_R
// Size: 0x39 (Inherited: 0x00)
struct Ftuple_L_Kchar_M_Kchar_M_Kverse__key_M_Qfloat_R {
	VerseStringProperty __verse_0x18E3F084_Elem0; // 0x00(0x10)
	VerseStringProperty __verse_0x7D844C3C_Elem1; // 0x10(0x10)
	struct TArray<enum class verse_key> __verse_0x932BF92E_Elem2; // 0x20(0x10)
	OptionProperty __verse_0xF64C4596_Elem3; // 0x30(0x09)
};

// VerseStruct EpicGamesEngine.tuple_L_Kchar_M_Kchar_M_Kverse__key_Minput__event_Mtuple_L_R_Tvoid_R
// Size: 0x40 (Inherited: 0x00)
struct Ftuple_L_Kchar_M_Kchar_M_Kverse__key_Minput__event_Mtuple_L_R_Tvoid_R {
	VerseStringProperty __verse_0x18E3F084_Elem0; // 0x00(0x10)
	VerseStringProperty __verse_0x7D844C3C_Elem1; // 0x10(0x10)
	struct TArray<enum class verse_key> __verse_0x932BF92E_Elem2; // 0x20(0x10)
	enum class input_event __verse_0xF64C4596_Elem3; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	struct FDelegate __verse_0x4F74920B_Elem4; // 0x34(0x0c)
};

// VerseStruct EpicGamesEngine.tuple_L_Kchar_M_Kchar_M_Kverse__key_R
// Size: 0x30 (Inherited: 0x00)
struct Ftuple_L_Kchar_M_Kchar_M_Kverse__key_R {
	VerseStringProperty __verse_0x18E3F084_Elem0; // 0x00(0x10)
	VerseStringProperty __verse_0x7D844C3C_Elem1; // 0x10(0x10)
	struct TArray<enum class verse_key> __verse_0x932BF92E_Elem2; // 0x20(0x10)
};

// VerseStruct EpicGamesEngine.tuple_L_Kchar_M_Q_Lfloat_Tvoid_R_R
// Size: 0x1d (Inherited: 0x00)
struct Ftuple_L_Kchar_M_Q_Lfloat_Tvoid_R_R {
	VerseStringProperty __verse_0x18E3F084_Elem0; // 0x00(0x10)
	OptionProperty __verse_0x7D844C3C_Elem1; // 0x10(0x0d)
};

// VerseStruct EpicGamesEngine.tuple_L_Kchar_Minput__event_Mtuple_L_R_Tvoid_R
// Size: 0x20 (Inherited: 0x00)
struct Ftuple_L_Kchar_Minput__event_Mtuple_L_R_Tvoid_R {
	VerseStringProperty __verse_0x18E3F084_Elem0; // 0x00(0x10)
	enum class input_event __verse_0x7D844C3C_Elem1; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FDelegate __verse_0x932BF92E_Elem2; // 0x14(0x0c)
};

// VerseStruct EpicGamesEngine.tuple_L_Kchar_Minput__event_R
// Size: 0x11 (Inherited: 0x00)
struct Ftuple_L_Kchar_Minput__event_R {
	VerseStringProperty __verse_0x18E3F084_Elem0; // 0x00(0x10)
	enum class input_event __verse_0x7D844C3C_Elem1; // 0x10(0x01)
};

// VerseStruct EpicGamesEngine.tuple_L_R
// Size: 0x01 (Inherited: 0x00)
struct Ftuple_L_R {
	char $StructPaddingDummy; // 0x00(0x01)
};

// VerseStruct EpicGamesEngine.tuple_Lverse__ue__input__component_M_Kchar_Minput__event_R
// Size: 0x19 (Inherited: 0x00)
struct Ftuple_Lverse__ue__input__component_M_Kchar_Minput__event_R {
	struct Uverse_ue_input_component* __verse_0x18E3F084_Elem0; // 0x00(0x08)
	VerseStringProperty __verse_0x7D844C3C_Elem1; // 0x08(0x10)
	enum class input_event __verse_0x932BF92E_Elem2; // 0x18(0x01)
};

