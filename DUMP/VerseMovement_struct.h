// SolarisGeneratedEnum VerseMovement.move_response_effect
enum class move_response_effect : uint8 {
	Force = 0,
	VelocityChange = 1,
	Transform = 2,
	move_response_effect_MAX = 3
};

// SolarisGeneratedEnum VerseMovement.move_response_frame
enum class move_response_frame : uint8 {
	Absolute = 0,
	move_response_frame_Object = 1,
	move_response_frame_Camera = 2,
	move_response_frame_MAX = 3
};

// SolarisGeneratedEnum VerseMovement.move_response_modifier
enum class move_response_modifier : uint8 {
	move_response_modifier_Add = 0,
	TargetTransform = 1,
	TargetVelocity = 2,
	OverrideTransform = 3,
	OverrideVelocity = 4,
	move_response_modifier_MAX = 5
};

// SolarisGeneratedEnum VerseMovement.move_response_type
enum class move_response_type : uint8 {
	Linear = 0,
	Angular = 1,
	move_response_type_MAX = 2
};

// SolarisGeneratedEnum VerseMovement.move_trigger_type
enum class move_trigger_type : uint8 {
	Input = 0,
	Constraint = 1,
	Physics = 2,
	Trace = 3,
	Constant = 4,
	move_trigger_type_MAX = 5
};

// VerseStruct VerseMovement.move_config
// Size: 0x10 (Inherited: 0x00)
struct Fmove_config {
	struct TArray<struct Fmove_config_entry> __verse_0xCE82C4DD_Entries; // 0x00(0x10)
};

// VerseStruct VerseMovement.move_config_entry
// Size: 0x30 (Inherited: 0x00)
struct Fmove_config_entry {
	VerseStringProperty __verse_0x38D9A616_Name; // 0x00(0x10)
	struct TArray<struct Fmove_trigger> __verse_0x6DA99CE5_Triggers; // 0x10(0x10)
	struct TArray<struct Fmove_response> __verse_0xBAC32A9B_Responses; // 0x20(0x10)
};

// VerseStruct VerseMovement.move_input_trigger_params
// Size: 0x38 (Inherited: 0x00)
struct Fmove_input_trigger_params {
	char __verse_0x7D5B20A2_IsAxis : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	VerseStringProperty __verse_0x38D9A616_Name; // 0x08(0x10)
	OptionProperty __verse_0x2A186A5F_AxisToMagnitudeCurve; // 0x18(0x08)
	char __verse_0xC35555B9_AccumulateAxisInput : 1; // 0x20(0x01)
	char pad_20_1 : 7; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct Fvector2 __verse_0x9EA11583_ClampAxis; // 0x28(0x10)
};

// VerseStruct VerseMovement.move_physics_trigger_params
// Size: 0x18 (Inherited: 0x00)
struct Fmove_physics_trigger_params {
	struct Fvector3 __verse_0xE78E15A1_SpeedInDirection; // 0x00(0x18)
};

// VerseStruct VerseMovement.move_response
// Size: 0x50 (Inherited: 0x00)
struct Fmove_response {
	struct Fvector3 __verse_0x0464FDB1_Vector; // 0x00(0x18)
	double __verse_0xA6A970E7_Magnitude; // 0x18(0x08)
	OptionProperty __verse_0x9D526629_MagnitudeCurve; // 0x20(0x08)
	enum class move_response_type __verse_0x72E298E9_Type; // 0x28(0x01)
	enum class move_response_frame __verse_0x08A22912_Frame; // 0x29(0x01)
	enum class move_response_effect __verse_0xCDC901A6_Effect; // 0x2a(0x01)
	enum class move_response_modifier __verse_0xCDC9EFBD_Modifier; // 0x2b(0x01)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct Fvector3 __verse_0x7B949B4B_ClampVector; // 0x30(0x18)
	enum class move_response_frame __verse_0x3B045791_ClampFrame; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// VerseStruct VerseMovement.move_trace_trigger_params
// Size: 0x38 (Inherited: 0x00)
struct Fmove_trace_trigger_params {
	struct Fvector3 __verse_0x722EF6A3_Direction; // 0x00(0x18)
	enum class move_response_frame __verse_0x08A22912_Frame; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	double __verse_0x2AC13C27_TraceLength; // 0x20(0x08)
	char __verse_0x99455FC7_ProportionalToHitDistance : 1; // 0x28(0x01)
	char pad_28_1 : 7; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	OptionProperty __verse_0x0C3D14E7_HitDistanceToMagnitudeCurve; // 0x30(0x08)
};

// VerseStruct VerseMovement.move_trigger
// Size: 0x90 (Inherited: 0x00)
struct Fmove_trigger {
	enum class move_trigger_type __verse_0x72E298E9_Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct Fmove_input_trigger_params __verse_0xD3F71544_InputParams; // 0x08(0x38)
	struct Fmove_physics_trigger_params __verse_0x4D939126_PhysicsParams; // 0x40(0x18)
	struct Fmove_trace_trigger_params __verse_0x874565E7_TraceParams; // 0x58(0x38)
};

