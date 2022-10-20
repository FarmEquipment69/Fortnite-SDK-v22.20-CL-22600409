// SolarisGeneratedEnum VerseFortnite.DynamicHUD_Anchor
enum class DynamicHUD_Anchor : uint8 {
	TopLeft = 0,
	TopCenter = 1,
	TopRight = 2,
	CenterLeft = 3,
	CenterCenter = 4,
	CenterRight = 5,
	BottomLeft = 6,
	BottomCenter = 7,
	BottomRight = 8
};

// SolarisGeneratedEnum VerseFortnite.player_status_type
enum class player_status_type : uint8 {
	OnGround = 0,
	Skydiving = 1,
	UsingGlider = 2,
	InVehicle = 3,
	Shooting = 4,
	AimingDownSights = 5,
	InStasis = 6
};

// SolarisGeneratedEnum VerseFortnite.PlayerAttribute
enum class PlayerAttribute : uint8 {
	CurrentHealth = 0,
	CurrentShield = 1,
	InitialHealth = 2,
	InitialShield = 3,
	Damage = 4,
	ShieldDamage = 5
};

// SolarisGeneratedEnum VerseFortnite.PlayerAttributeOperation
enum class PlayerAttributeOperation : uint8 {
	Add = 0,
	Multiply = 1,
	Divide = 2,
	Override = 3,
	SetMax = 4,
	SetMin = 5
};

// SolarisGeneratedEnum VerseFortnite.PlayerSettingState
enum class PlayerSettingState : uint8 {
	PlayerDefault = 0,
	PlayerAllow = 1,
	PlayerDisallow = 2
};

// SolarisGeneratedEnum VerseFortnite.verse_target_shape
enum class verse_target_shape : uint8 {
	TargetShapeSphere = 0,
	TargetShapeCone = 1,
	TargetShapeBox = 2,
	TargetShapeCapsule = 3,
	TargetShapeLine = 4,
	TargetShapeCylinder = 5
};

// SolarisGeneratedEnum VerseFortnite.verse_target_source
enum class verse_target_source : uint8 {
	TargetSourceCamera = 0,
	TargetSourcePawnForward = 1,
	TargetSourcePawnTowardsFocus = 2,
	TargetSourceWeaponForward = 3,
	TargetSourceWeaponTowardsFocus = 4
};

// SolarisGeneratedEnum VerseFortnite.verse_target_type
enum class verse_target_type : uint8 {
	Damageable = 0,
	Everything = 1,
	Pawns = 2,
	Buildings = 3,
	Walls = 4,
	Traps = 5,
	Players = 6,
	AIPawns = 7,
	Instigator = 8
};

// VerseStruct VerseFortnite.player_team
// Size: 0x04 (Inherited: 0x00)
struct Fplayer_team {
	char pad_0[0x4]; // 0x00(0x04)
};

// VerseStruct VerseFortnite.tuple_L_R
// Size: 0x01 (Inherited: 0x00)
struct Ftuple_L_R {
	char $StructPaddingDummy; // 0x00(0x01)
};

// VerseStruct VerseFortnite.tuple_Lability__component_Msubtype_Lplayer__component_R_R
// Size: 0x10 (Inherited: 0x00)
struct Ftuple_Lability__component_Msubtype_Lplayer__component_R_R {
	struct Uability_component* __verse_0x18E3F084_Elem0; // 0x00(0x08)
	struct Uplayer_component* __verse_0x7D844C3C_Elem1; // 0x08(0x08)
};

// VerseStruct VerseFortnite.tuple_Lability__target__data_Mgameplay__effect__asset_Mfloat_R
// Size: 0x18 (Inherited: 0x00)
struct Ftuple_Lability__target__data_Mgameplay__effect__asset_Mfloat_R {
	struct Uability_target_data* __verse_0x18E3F084_Elem0; // 0x00(0x08)
	struct Ugameplay_effect_asset* __verse_0x7D844C3C_Elem1; // 0x08(0x08)
	double __verse_0x932BF92E_Elem2; // 0x10(0x08)
};

// VerseStruct VerseFortnite.tuple_Lcomponent_M_K_Kchar_R
// Size: 0x18 (Inherited: 0x00)
struct Ftuple_Lcomponent_M_K_Kchar_R {
	struct UEntityComponent* __verse_0x18E3F084_Elem0; // 0x00(0x08)
	struct TArray<VerseStringProperty> __verse_0x7D844C3C_Elem1; // 0x08(0x10)
};

// VerseStruct VerseFortnite.tuple_Lcomponent_Mfort__item__definition_Mint_Mvector3_R
// Size: 0x30 (Inherited: 0x00)
struct Ftuple_Lcomponent_Mfort__item__definition_Mint_Mvector3_R {
	struct UEntityComponent* __verse_0x18E3F084_Elem0; // 0x00(0x08)
	struct Ufort_item_definition* __verse_0x7D844C3C_Elem1; // 0x08(0x08)
	int64_t __verse_0x932BF92E_Elem2; // 0x10(0x08)
	struct Fvector3 __verse_0xF64C4596_Elem3; // 0x18(0x18)
};

// VerseStruct VerseFortnite.tuple_Lcomponent_Mlogic_R
// Size: 0x09 (Inherited: 0x00)
struct Ftuple_Lcomponent_Mlogic_R {
	struct UEntityComponent* __verse_0x18E3F084_Elem0; // 0x00(0x08)
	char __verse_0x7D844C3C_Elem1 : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
};

// VerseStruct VerseFortnite.tuple_Lcomponent_Msubtype_Lcomponent_R_R
// Size: 0x10 (Inherited: 0x00)
struct Ftuple_Lcomponent_Msubtype_Lcomponent_R_R {
	struct UEntityComponent* __verse_0x18E3F084_Elem0; // 0x00(0x08)
	struct UEntityComponent* __verse_0x7D844C3C_Elem1; // 0x08(0x08)
};

// VerseStruct VerseFortnite.tuple_Lcomponent_Mtype_R
// Size: 0x10 (Inherited: 0x00)
struct Ftuple_Lcomponent_Mtype_R {
	struct UEntityComponent* __verse_0x18E3F084_Elem0; // 0x00(0x08)
	struct UObject* __verse_0x7D844C3C_Elem1; // 0x08(0x08)
};

// VerseStruct VerseFortnite.tuple_Lgameplay__effect__asset_Mfloat_R
// Size: 0x10 (Inherited: 0x00)
struct Ftuple_Lgameplay__effect__asset_Mfloat_R {
	struct Ugameplay_effect_asset* __verse_0x18E3F084_Elem0; // 0x00(0x08)
	double __verse_0x7D844C3C_Elem1; // 0x08(0x08)
};

// VerseStruct VerseFortnite.tuple_Lint_Mint_R
// Size: 0x10 (Inherited: 0x00)
struct Ftuple_Lint_Mint_R {
	int64_t __verse_0x18E3F084_Elem0; // 0x00(0x08)
	int64_t __verse_0x7D844C3C_Elem1; // 0x08(0x08)
};

// VerseStruct VerseFortnite.tuple_Litem__type_Mint_Mplayer__component_R
// Size: 0x18 (Inherited: 0x00)
struct Ftuple_Litem__type_Mint_Mplayer__component_R {
	struct Uitem_type* __verse_0x18E3F084_Elem0; // 0x00(0x08)
	int64_t __verse_0x7D844C3C_Elem1; // 0x08(0x08)
	struct Uplayer_component* __verse_0x932BF92E_Elem2; // 0x10(0x08)
};

// VerseStruct VerseFortnite.tuple_Lplayer__component_M_Kchar_M_Kchar_M_Kchar_R
// Size: 0x38 (Inherited: 0x00)
struct Ftuple_Lplayer__component_M_Kchar_M_Kchar_M_Kchar_R {
	struct Uplayer_component* __verse_0x18E3F084_Elem0; // 0x00(0x08)
	VerseStringProperty __verse_0x7D844C3C_Elem1; // 0x08(0x10)
	VerseStringProperty __verse_0x932BF92E_Elem2; // 0x18(0x10)
	VerseStringProperty __verse_0xF64C4596_Elem3; // 0x28(0x10)
};

// VerseStruct VerseFortnite.tuple_Lplayer__component_M_Kchar_M_Kchar_MDynamicHUD__Anchor_M_Kchar_M_Kchar_MDynamicHUD__Anchor_R
// Size: 0x51 (Inherited: 0x00)
struct Ftuple_Lplayer__component_M_Kchar_M_Kchar_MDynamicHUD__Anchor_M_Kchar_M_Kchar_MDynamicHUD__Anchor_R {
	struct Uplayer_component* __verse_0x18E3F084_Elem0; // 0x00(0x08)
	VerseStringProperty __verse_0x7D844C3C_Elem1; // 0x08(0x10)
	VerseStringProperty __verse_0x932BF92E_Elem2; // 0x18(0x10)
	enum class DynamicHUD_Anchor __verse_0xF64C4596_Elem3; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	VerseStringProperty __verse_0x4F74920B_Elem4; // 0x30(0x10)
	VerseStringProperty __verse_0x2A132EB3_Elem5; // 0x40(0x10)
	enum class DynamicHUD_Anchor __verse_0xC4BC9BA1_Elem6; // 0x50(0x01)
};

// VerseStruct VerseFortnite.tuple_Lplayer__component_M_Kchar_M_Kchar_Mint_Mint_MDynamicHUD__Anchor_R
// Size: 0x39 (Inherited: 0x00)
struct Ftuple_Lplayer__component_M_Kchar_M_Kchar_Mint_Mint_MDynamicHUD__Anchor_R {
	struct Uplayer_component* __verse_0x18E3F084_Elem0; // 0x00(0x08)
	VerseStringProperty __verse_0x7D844C3C_Elem1; // 0x08(0x10)
	VerseStringProperty __verse_0x932BF92E_Elem2; // 0x18(0x10)
	int64_t __verse_0xF64C4596_Elem3; // 0x28(0x08)
	int64_t __verse_0x4F74920B_Elem4; // 0x30(0x08)
	enum class DynamicHUD_Anchor __verse_0x2A132EB3_Elem5; // 0x38(0x01)
};

// VerseStruct VerseFortnite.tuple_Lplayer__component_M_Kchar_M_Kchar_Mint_Mint_R
// Size: 0x38 (Inherited: 0x00)
struct Ftuple_Lplayer__component_M_Kchar_M_Kchar_Mint_Mint_R {
	struct Uplayer_component* __verse_0x18E3F084_Elem0; // 0x00(0x08)
	VerseStringProperty __verse_0x7D844C3C_Elem1; // 0x08(0x10)
	VerseStringProperty __verse_0x932BF92E_Elem2; // 0x18(0x10)
	int64_t __verse_0xF64C4596_Elem3; // 0x28(0x08)
	int64_t __verse_0x4F74920B_Elem4; // 0x30(0x08)
};

// VerseStruct VerseFortnite.tuple_Lplayer__component_M_Kchar_M_Kchar_Mint_R
// Size: 0x30 (Inherited: 0x00)
struct Ftuple_Lplayer__component_M_Kchar_M_Kchar_Mint_R {
	struct Uplayer_component* __verse_0x18E3F084_Elem0; // 0x00(0x08)
	VerseStringProperty __verse_0x7D844C3C_Elem1; // 0x08(0x10)
	VerseStringProperty __verse_0x932BF92E_Elem2; // 0x18(0x10)
	int64_t __verse_0xF64C4596_Elem3; // 0x28(0x08)
};

// VerseStruct VerseFortnite.tuple_Lplayer__component_M_Kchar_M_Kchar_R
// Size: 0x28 (Inherited: 0x00)
struct Ftuple_Lplayer__component_M_Kchar_M_Kchar_R {
	struct Uplayer_component* __verse_0x18E3F084_Elem0; // 0x00(0x08)
	VerseStringProperty __verse_0x7D844C3C_Elem1; // 0x08(0x10)
	VerseStringProperty __verse_0x932BF92E_Elem2; // 0x18(0x10)
};

// VerseStruct VerseFortnite.tuple_Lplayer__component_M_Kchar_R
// Size: 0x18 (Inherited: 0x00)
struct Ftuple_Lplayer__component_M_Kchar_R {
	struct Uplayer_component* __verse_0x18E3F084_Elem0; // 0x00(0x08)
	VerseStringProperty __verse_0x7D844C3C_Elem1; // 0x08(0x10)
};

// VerseStruct VerseFortnite.tuple_Lplayer__component_Mint_R
// Size: 0x10 (Inherited: 0x00)
struct Ftuple_Lplayer__component_Mint_R {
	struct Uplayer_component* __verse_0x18E3F084_Elem0; // 0x00(0x08)
	int64_t __verse_0x7D844C3C_Elem1; // 0x08(0x08)
};

// VerseStruct VerseFortnite.tuple_Lplayer__component_Mlogic_R
// Size: 0x09 (Inherited: 0x00)
struct Ftuple_Lplayer__component_Mlogic_R {
	struct Uplayer_component* __verse_0x18E3F084_Elem0; // 0x00(0x08)
	char __verse_0x7D844C3C_Elem1 : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
};

// VerseStruct VerseFortnite.tuple_Lplayer__component_Mplayer__start__component_R
// Size: 0x10 (Inherited: 0x00)
struct Ftuple_Lplayer__component_Mplayer__start__component_R {
	struct Uplayer_component* __verse_0x18E3F084_Elem0; // 0x00(0x08)
	struct Uplayer_start_component* __verse_0x7D844C3C_Elem1; // 0x08(0x08)
};

// VerseStruct VerseFortnite.tuple_Lplayer__component_Mplayer__status__type_R
// Size: 0x09 (Inherited: 0x00)
struct Ftuple_Lplayer__component_Mplayer__status__type_R {
	struct Uplayer_component* __verse_0x18E3F084_Elem0; // 0x00(0x08)
	enum class player_status_type __verse_0x7D844C3C_Elem1; // 0x08(0x01)
};

// VerseStruct VerseFortnite.tuple_Lplayer__team_Mint_Mint_R
// Size: 0x18 (Inherited: 0x00)
struct Ftuple_Lplayer__team_Mint_Mint_R {
	struct Fplayer_team __verse_0x18E3F084_Elem0; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	int64_t __verse_0x7D844C3C_Elem1; // 0x08(0x08)
	int64_t __verse_0x932BF92E_Elem2; // 0x10(0x08)
};

// VerseStruct VerseFortnite.tuple_Lplayer__team_Mint_R
// Size: 0x10 (Inherited: 0x00)
struct Ftuple_Lplayer__team_Mint_R {
	struct Fplayer_team __verse_0x18E3F084_Elem0; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	int64_t __verse_0x7D844C3C_Elem1; // 0x08(0x08)
};

// VerseStruct VerseFortnite.tuple_Lplayer__team_Mplayer__team_R
// Size: 0x08 (Inherited: 0x00)
struct Ftuple_Lplayer__team_Mplayer__team_R {
	struct Fplayer_team __verse_0x18E3F084_Elem0; // 0x00(0x04)
	struct Fplayer_team __verse_0x7D844C3C_Elem1; // 0x04(0x04)
};

// VerseStruct VerseFortnite.tuple_Lplayer_M_Kchar_Mint_Mlogic_R
// Size: 0x21 (Inherited: 0x00)
struct Ftuple_Lplayer_M_Kchar_Mint_Mlogic_R {
	struct UPlayer* __verse_0x18E3F084_Elem0; // 0x00(0x08)
	VerseStringProperty __verse_0x7D844C3C_Elem1; // 0x08(0x10)
	int64_t __verse_0x932BF92E_Elem2; // 0x18(0x08)
	char __verse_0xF64C4596_Elem3 : 1; // 0x20(0x01)
	char pad_20_1 : 7; // 0x20(0x01)
};

// VerseStruct VerseFortnite.tuple_Lplayer_M_Kchar_Mint_R
// Size: 0x20 (Inherited: 0x00)
struct Ftuple_Lplayer_M_Kchar_Mint_R {
	struct UPlayer* __verse_0x18E3F084_Elem0; // 0x00(0x08)
	VerseStringProperty __verse_0x7D844C3C_Elem1; // 0x08(0x10)
	int64_t __verse_0x932BF92E_Elem2; // 0x18(0x08)
};

// VerseStruct VerseFortnite.tuple_Lplayer_Mfort__item__definition_Mint_Mlogic_R
// Size: 0x19 (Inherited: 0x00)
struct Ftuple_Lplayer_Mfort__item__definition_Mint_Mlogic_R {
	struct UPlayer* __verse_0x18E3F084_Elem0; // 0x00(0x08)
	struct Ufort_item_definition* __verse_0x7D844C3C_Elem1; // 0x08(0x08)
	int64_t __verse_0x932BF92E_Elem2; // 0x10(0x08)
	char __verse_0xF64C4596_Elem3 : 1; // 0x18(0x01)
	char pad_18_1 : 7; // 0x18(0x01)
};

// VerseStruct VerseFortnite.tuple_Lplayer_Mint_Mint_R
// Size: 0x18 (Inherited: 0x00)
struct Ftuple_Lplayer_Mint_Mint_R {
	struct UPlayer* __verse_0x18E3F084_Elem0; // 0x00(0x08)
	int64_t __verse_0x7D844C3C_Elem1; // 0x08(0x08)
	int64_t __verse_0x932BF92E_Elem2; // 0x10(0x08)
};

// VerseStruct VerseFortnite.tuple_Lplayer_Mint_R
// Size: 0x10 (Inherited: 0x00)
struct Ftuple_Lplayer_Mint_R {
	struct UPlayer* __verse_0x18E3F084_Elem0; // 0x00(0x08)
	int64_t __verse_0x7D844C3C_Elem1; // 0x08(0x08)
};

// VerseStruct VerseFortnite.tuple_Lplayer_Mlogic_Mlogic_Mlogic_R
// Size: 0x0b (Inherited: 0x00)
struct Ftuple_Lplayer_Mlogic_Mlogic_Mlogic_R {
	struct UPlayer* __verse_0x18E3F084_Elem0; // 0x00(0x08)
	char __verse_0x7D844C3C_Elem1 : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char __verse_0x932BF92E_Elem2 : 1; // 0x09(0x01)
	char pad_9_1 : 7; // 0x09(0x01)
	char __verse_0xF64C4596_Elem3 : 1; // 0x0a(0x01)
	char pad_A_1 : 7; // 0x0a(0x01)
};

// VerseStruct VerseFortnite.tuple_Lplayer_Mlogic_R
// Size: 0x09 (Inherited: 0x00)
struct Ftuple_Lplayer_Mlogic_R {
	struct UPlayer* __verse_0x18E3F084_Elem0; // 0x00(0x08)
	char __verse_0x7D844C3C_Elem1 : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
};

// VerseStruct VerseFortnite.tuple_Lplayer_Mplayer__team_R
// Size: 0x0c (Inherited: 0x00)
struct Ftuple_Lplayer_Mplayer__team_R {
	struct UPlayer* __verse_0x18E3F084_Elem0; // 0x00(0x08)
	struct Fplayer_team __verse_0x7D844C3C_Elem1; // 0x08(0x04)
};

// VerseStruct VerseFortnite.tuple_Lplayer_Mplayer_R
// Size: 0x10 (Inherited: 0x00)
struct Ftuple_Lplayer_Mplayer_R {
	struct UPlayer* __verse_0x18E3F084_Elem0; // 0x00(0x08)
	struct UPlayer* __verse_0x7D844C3C_Elem1; // 0x08(0x08)
};

// VerseStruct VerseFortnite.tuple_Lplayer_MPlayerAttribute_Mfloat_R
// Size: 0x18 (Inherited: 0x00)
struct Ftuple_Lplayer_MPlayerAttribute_Mfloat_R {
	struct UPlayer* __verse_0x18E3F084_Elem0; // 0x00(0x08)
	enum class PlayerAttribute __verse_0x7D844C3C_Elem1; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	double __verse_0x932BF92E_Elem2; // 0x10(0x08)
};

// VerseStruct VerseFortnite.tuple_Lplayer_MPlayerAttribute_MPlayerAttributeOperation_Mfloat_R
// Size: 0x18 (Inherited: 0x00)
struct Ftuple_Lplayer_MPlayerAttribute_MPlayerAttributeOperation_Mfloat_R {
	struct UPlayer* __verse_0x18E3F084_Elem0; // 0x00(0x08)
	enum class PlayerAttribute __verse_0x7D844C3C_Elem1; // 0x08(0x01)
	enum class PlayerAttributeOperation __verse_0x932BF92E_Elem2; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	double __verse_0xF64C4596_Elem3; // 0x10(0x08)
};

// VerseStruct VerseFortnite.tuple_Lplayer_MPlayerAttribute_R
// Size: 0x09 (Inherited: 0x00)
struct Ftuple_Lplayer_MPlayerAttribute_R {
	struct UPlayer* __verse_0x18E3F084_Elem0; // 0x00(0x08)
	enum class PlayerAttribute __verse_0x7D844C3C_Elem1; // 0x08(0x01)
};

// VerseStruct VerseFortnite.tuple_Lvector3_M_Qplayer__component_R
// Size: 0x20 (Inherited: 0x00)
struct Ftuple_Lvector3_M_Qplayer__component_R {
	struct Fvector3 __verse_0x18E3F084_Elem0; // 0x00(0x18)
	OptionProperty __verse_0x7D844C3C_Elem1; // 0x18(0x08)
};

// VerseStruct VerseFortnite.tuple_Lvector3_Mvector3_R
// Size: 0x30 (Inherited: 0x00)
struct Ftuple_Lvector3_Mvector3_R {
	struct Fvector3 __verse_0x18E3F084_Elem0; // 0x00(0x18)
	struct Fvector3 __verse_0x7D844C3C_Elem1; // 0x18(0x18)
};

