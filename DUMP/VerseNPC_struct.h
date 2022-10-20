// SolarisGeneratedEnum VerseNPC.loot_type
enum class loot_type : uint8 {
	PickUp = 0,
	Chest = 1,
	supply_drop = 2,
	UNKNOWN = 3
};

// SolarisGeneratedEnum VerseNPC.navigate_result
enum class navigate_result : uint8 {
	Reached = 0,
	Cancelled = 1,
	unreachable = 2,
	Error = 3
};

// SolarisGeneratedEnum VerseNPC.obstacle_status
enum class obstacle_status : uint8 {
	incoming_obstacle = 0,
	blocked_by_obstacle = 1,
	trap_obstacle = 2
};

// SolarisGeneratedEnum VerseNPC.threat_status
enum class threat_status : uint8 {
	seeing_threat = 0,
	lost_threat_line_of_sight = 1,
	alerted_by_threat = 2
};

// VerseStruct VerseNPC.damage_info
// Size: 0x40 (Inherited: 0x00)
struct Fdamage_info {
	double __verse_0xBB2452F3_Damage; // 0x00(0x08)
	struct Fthreat_info __verse_0x16209150_DamageCauser; // 0x08(0x38)
};

// VerseStruct VerseNPC.loot_info
// Size: 0x28 (Inherited: 0x00)
struct Floot_info {
	OptionProperty __verse_0xED01F844_Object; // 0x00(0x08)
	struct Fvector3 __verse_0xB0C27E0A_Location; // 0x08(0x18)
	enum class loot_type __verse_0x72E298E9_Type; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// VerseStruct VerseNPC.navigation_parameters
// Size: 0x10 (Inherited: 0x00)
struct Fnavigation_parameters {
	double __verse_0x48D1C52D_AcceptableRadius; // 0x00(0x08)
	char __verse_0x92A9A4A1_CanStrafe : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char __verse_0x4835EE0D_AllowPartialPath : 1; // 0x09(0x01)
	char pad_9_1 : 7; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
};

// VerseStruct VerseNPC.obstacle_info
// Size: 0x28 (Inherited: 0x00)
struct Fobstacle_info {
	struct UEntity* __verse_0x459049A1_Target; // 0x00(0x08)
	struct Fvector3 __verse_0xB0C27E0A_Location; // 0x08(0x18)
	enum class obstacle_status __verse_0xFA60180E_Status; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// VerseStruct VerseNPC.threat_info
// Size: 0x38 (Inherited: 0x00)
struct Fthreat_info {
	struct UEntity* __verse_0x459049A1_Target; // 0x00(0x08)
	enum class threat_status __verse_0xFA60180E_Status; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	double __verse_0xC6D24390_Weight; // 0x10(0x08)
	int64_t __verse_0x555B2F95_Team; // 0x18(0x08)
	char pad_20[0x18]; // 0x20(0x18)
};

// VerseStruct VerseNPC.tuple_L_R
// Size: 0x01 (Inherited: 0x00)
struct Ftuple_L_R {
	char $StructPaddingDummy; // 0x00(0x01)
};

// VerseStruct VerseNPC.tuple_Lentity_M_QNavigationParameters_Nnavigation__parameters_20_3d_20_2e_2e_2e_R
// Size: 0x19 (Inherited: 0x00)
struct Ftuple_Lentity_M_QNavigationParameters_Nnavigation__parameters_20_3d_20_2e_2e_2e_R {
	struct UEntity* __verse_0x18E3F084_Elem0; // 0x00(0x08)
	OptionProperty __verse_0x7D844C3C_Elem1; // 0x08(0x11)
};

// VerseStruct VerseNPC.tuple_Lentity_Mlogic_R
// Size: 0x09 (Inherited: 0x00)
struct Ftuple_Lentity_Mlogic_R {
	struct UEntity* __verse_0x18E3F084_Elem0; // 0x00(0x08)
	char __verse_0x7D844C3C_Elem1 : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
};

// VerseStruct VerseNPC.tuple_Lvector3_M_QNavigationParameters_Nnavigation__parameters_20_3d_20_2e_2e_2e_R
// Size: 0x29 (Inherited: 0x00)
struct Ftuple_Lvector3_M_QNavigationParameters_Nnavigation__parameters_20_3d_20_2e_2e_2e_R {
	struct Fvector3 __verse_0x18E3F084_Elem0; // 0x00(0x18)
	OptionProperty __verse_0x7D844C3C_Elem1; // 0x18(0x11)
};

// VerseStruct VerseNPC.tuple_Lvector3_Mfloat_Mfloat_R
// Size: 0x28 (Inherited: 0x00)
struct Ftuple_Lvector3_Mfloat_Mfloat_R {
	struct Fvector3 __verse_0x18E3F084_Elem0; // 0x00(0x18)
	double __verse_0x7D844C3C_Elem1; // 0x18(0x08)
	double __verse_0x932BF92E_Elem2; // 0x20(0x08)
};

