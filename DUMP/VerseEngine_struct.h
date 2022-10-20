// SolarisGeneratedEnum VerseEngine.draw_duration_policy
enum class draw_duration_policy : uint8 {
	SingleFrame = 0,
	FiniteDuration = 1,
	Persistent = 2
};

// VerseStruct VerseEngine.arrow_draw_params
// Size: 0x48 (Inherited: 0x00)
struct Farrow_draw_params {
	double __verse_0xF97B0595_ArrowSize; // 0x00(0x08)
	struct FColor __verse_0x65678AC7_Color; // 0x08(0x20)
	double __verse_0x6C915C14_Thickness; // 0x28(0x08)
	enum class draw_duration_policy __verse_0x0DBBEBBF_DrawDurationPolicy; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	OptionProperty __verse_0xFC2FBF02_Duration; // 0x38(0x09)
	char pad_41[0x7]; // 0x41(0x07)
};

// VerseStruct VerseEngine.box_draw_params
// Size: 0x58 (Inherited: 0x00)
struct Fbox_draw_params {
	struct Fvector3 __verse_0xA327BDA5_Extent; // 0x00(0x18)
	struct FColor __verse_0x65678AC7_Color; // 0x18(0x20)
	double __verse_0x6C915C14_Thickness; // 0x38(0x08)
	enum class draw_duration_policy __verse_0x0DBBEBBF_DrawDurationPolicy; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	OptionProperty __verse_0xFC2FBF02_Duration; // 0x48(0x09)
	char pad_51[0x7]; // 0x51(0x07)
};

// VerseStruct VerseEngine.capsule_draw_params
// Size: 0x50 (Inherited: 0x00)
struct Fcapsule_draw_params {
	double __verse_0x32A63D0C_Height; // 0x00(0x08)
	double __verse_0xE34F9FAC_Radius; // 0x08(0x08)
	struct FColor __verse_0x65678AC7_Color; // 0x10(0x20)
	double __verse_0x6C915C14_Thickness; // 0x30(0x08)
	enum class draw_duration_policy __verse_0x0DBBEBBF_DrawDurationPolicy; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	OptionProperty __verse_0xFC2FBF02_Duration; // 0x40(0x09)
	char pad_49[0x7]; // 0x49(0x07)
};

// VerseStruct VerseEngine.cone_draw_params
// Size: 0x60 (Inherited: 0x00)
struct Fcone_draw_params {
	double __verse_0x32A63D0C_Height; // 0x00(0x08)
	double __verse_0x48019537_NumSides; // 0x08(0x08)
	double __verse_0x75E7ED0A_AngleWidth; // 0x10(0x08)
	double __verse_0xA92ED403_AngleHeight; // 0x18(0x08)
	struct FColor __verse_0x65678AC7_Color; // 0x20(0x20)
	double __verse_0x6C915C14_Thickness; // 0x40(0x08)
	enum class draw_duration_policy __verse_0x0DBBEBBF_DrawDurationPolicy; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	OptionProperty __verse_0xFC2FBF02_Duration; // 0x50(0x09)
	char pad_59[0x7]; // 0x59(0x07)
};

// VerseStruct VerseEngine.cylinder_draw_params
// Size: 0x60 (Inherited: 0x00)
struct Fcylinder_draw_params {
	double __verse_0x652D1E0A_NumSegments; // 0x00(0x08)
	double __verse_0xE34F9FAC_Radius; // 0x08(0x08)
	struct FColor __verse_0x65678AC7_Color; // 0x10(0x20)
	double __verse_0x6C915C14_Thickness; // 0x30(0x08)
	enum class draw_duration_policy __verse_0x0DBBEBBF_DrawDurationPolicy; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	OptionProperty __verse_0xFC2FBF02_Duration; // 0x40(0x09)
	char pad_49[0x17]; // 0x49(0x17)
};

// VerseStruct VerseEngine.line_draw_params
// Size: 0x40 (Inherited: 0x00)
struct Fline_draw_params {
	struct FColor __verse_0x65678AC7_Color; // 0x00(0x20)
	double __verse_0x6C915C14_Thickness; // 0x20(0x08)
	enum class draw_duration_policy __verse_0x0DBBEBBF_DrawDurationPolicy; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	OptionProperty __verse_0xFC2FBF02_Duration; // 0x30(0x09)
	char pad_39[0x7]; // 0x39(0x07)
};

// VerseStruct VerseEngine.point_draw_params
// Size: 0x40 (Inherited: 0x00)
struct Fpoint_draw_params {
	struct FColor __verse_0x65678AC7_Color; // 0x00(0x20)
	double __verse_0x6C915C14_Thickness; // 0x20(0x08)
	enum class draw_duration_policy __verse_0x0DBBEBBF_DrawDurationPolicy; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	OptionProperty __verse_0xFC2FBF02_Duration; // 0x30(0x09)
	char pad_39[0x7]; // 0x39(0x07)
};

// VerseStruct VerseEngine.sphere_draw_params
// Size: 0x50 (Inherited: 0x00)
struct Fsphere_draw_params {
	double __verse_0xE34F9FAC_Radius; // 0x00(0x08)
	double __verse_0x652D1E0A_NumSegments; // 0x08(0x08)
	struct FColor __verse_0x65678AC7_Color; // 0x10(0x20)
	double __verse_0x6C915C14_Thickness; // 0x30(0x08)
	enum class draw_duration_policy __verse_0x0DBBEBBF_DrawDurationPolicy; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	OptionProperty __verse_0xFC2FBF02_Duration; // 0x40(0x09)
	char pad_49[0x7]; // 0x49(0x07)
};

// VerseStruct VerseEngine.tuple_L_R
// Size: 0x01 (Inherited: 0x00)
struct Ftuple_L_R {
	char $StructPaddingDummy; // 0x00(0x01)
};

// VerseStruct VerseEngine.tuple_Lcomponent_Mtype_R
// Size: 0x10 (Inherited: 0x00)
struct Ftuple_Lcomponent_Mtype_R {
	struct UEntityComponent* __verse_0x18E3F084_Elem0; // 0x00(0x08)
	struct UObject* __verse_0x7D844C3C_Elem1; // 0x08(0x08)
};

// VerseStruct VerseEngine.tuple_Ltransform_M_Kchar_R
// Size: 0x60 (Inherited: 0x00)
struct Ftuple_Ltransform_M_Kchar_R {
	struct FTransform __verse_0x18E3F084_Elem0; // 0x00(0x50)
	VerseStringProperty __verse_0x7D844C3C_Elem1; // 0x50(0x10)
};

// VerseStruct VerseEngine.tuple_Lvector3_M_Kchar_R
// Size: 0x28 (Inherited: 0x00)
struct Ftuple_Lvector3_M_Kchar_R {
	struct Fvector3 __verse_0x18E3F084_Elem0; // 0x00(0x18)
	VerseStringProperty __verse_0x7D844C3C_Elem1; // 0x18(0x10)
};

// VerseStruct VerseEngine.tuple_Lvector3_M_QParams_Npoint__draw__params_20_3d_20_2e_2e_2e_R
// Size: 0x59 (Inherited: 0x00)
struct Ftuple_Lvector3_M_QParams_Npoint__draw__params_20_3d_20_2e_2e_2e_R {
	struct Fvector3 __verse_0x18E3F084_Elem0; // 0x00(0x18)
	OptionProperty __verse_0x7D844C3C_Elem1; // 0x18(0x41)
};

// VerseStruct VerseEngine.tuple_Lvector3_M_QParams_Nsphere__draw__params_20_3d_20_2e_2e_2e_R
// Size: 0x69 (Inherited: 0x00)
struct Ftuple_Lvector3_M_QParams_Nsphere__draw__params_20_3d_20_2e_2e_2e_R {
	struct Fvector3 __verse_0x18E3F084_Elem0; // 0x00(0x18)
	OptionProperty __verse_0x7D844C3C_Elem1; // 0x18(0x51)
};

// VerseStruct VerseEngine.tuple_Lvector3_Mrotation_M_QParams_Nbox__draw__params_20_3d_20_2e_2e_2e_R
// Size: 0x99 (Inherited: 0x00)
struct Ftuple_Lvector3_Mrotation_M_QParams_Nbox__draw__params_20_3d_20_2e_2e_2e_R {
	struct Fvector3 __verse_0x18E3F084_Elem0; // 0x00(0x18)
	char pad_18[0x8]; // 0x18(0x08)
	struct FVerseRotation __verse_0x7D844C3C_Elem1; // 0x20(0x20)
	OptionProperty __verse_0x932BF92E_Elem2; // 0x40(0x59)
};

// VerseStruct VerseEngine.tuple_Lvector3_Mrotation_M_QParams_Ncapsule__draw__params_20_3d_20_2e_2e_2e_R
// Size: 0x91 (Inherited: 0x00)
struct Ftuple_Lvector3_Mrotation_M_QParams_Ncapsule__draw__params_20_3d_20_2e_2e_2e_R {
	struct Fvector3 __verse_0x18E3F084_Elem0; // 0x00(0x18)
	char pad_18[0x8]; // 0x18(0x08)
	struct FVerseRotation __verse_0x7D844C3C_Elem1; // 0x20(0x20)
	OptionProperty __verse_0x932BF92E_Elem2; // 0x40(0x51)
};

// VerseStruct VerseEngine.tuple_Lvector3_Mvector3_M_QParams_Narrow__draw__params_20_3d_20_2e_2e_2e_R
// Size: 0x79 (Inherited: 0x00)
struct Ftuple_Lvector3_Mvector3_M_QParams_Narrow__draw__params_20_3d_20_2e_2e_2e_R {
	struct Fvector3 __verse_0x18E3F084_Elem0; // 0x00(0x18)
	struct Fvector3 __verse_0x7D844C3C_Elem1; // 0x18(0x18)
	OptionProperty __verse_0x932BF92E_Elem2; // 0x30(0x49)
};

// VerseStruct VerseEngine.tuple_Lvector3_Mvector3_M_QParams_Ncone__draw__params_20_3d_20_2e_2e_2e_R
// Size: 0x91 (Inherited: 0x00)
struct Ftuple_Lvector3_Mvector3_M_QParams_Ncone__draw__params_20_3d_20_2e_2e_2e_R {
	struct Fvector3 __verse_0x18E3F084_Elem0; // 0x00(0x18)
	struct Fvector3 __verse_0x7D844C3C_Elem1; // 0x18(0x18)
	OptionProperty __verse_0x932BF92E_Elem2; // 0x30(0x61)
};

// VerseStruct VerseEngine.tuple_Lvector3_Mvector3_M_QParams_Ncylinder__draw__params_20_3d_20_2e_2e_2e_R
// Size: 0x91 (Inherited: 0x00)
struct Ftuple_Lvector3_Mvector3_M_QParams_Ncylinder__draw__params_20_3d_20_2e_2e_2e_R {
	struct Fvector3 __verse_0x18E3F084_Elem0; // 0x00(0x18)
	struct Fvector3 __verse_0x7D844C3C_Elem1; // 0x18(0x18)
	OptionProperty __verse_0x932BF92E_Elem2; // 0x30(0x61)
};

// VerseStruct VerseEngine.tuple_Lvector3_Mvector3_M_QParams_Nline__draw__params_20_3d_20_2e_2e_2e_R
// Size: 0x71 (Inherited: 0x00)
struct Ftuple_Lvector3_Mvector3_M_QParams_Nline__draw__params_20_3d_20_2e_2e_2e_R {
	struct Fvector3 __verse_0x18E3F084_Elem0; // 0x00(0x18)
	struct Fvector3 __verse_0x7D844C3C_Elem1; // 0x18(0x18)
	OptionProperty __verse_0x932BF92E_Elem2; // 0x30(0x41)
};

// VerseStruct VerseEngine.tuple_Lvector3_Mvector3_Mvector3_M_Kchar_R
// Size: 0x58 (Inherited: 0x00)
struct Ftuple_Lvector3_Mvector3_Mvector3_M_Kchar_R {
	struct Fvector3 __verse_0x18E3F084_Elem0; // 0x00(0x18)
	struct Fvector3 __verse_0x7D844C3C_Elem1; // 0x18(0x18)
	struct Fvector3 __verse_0x932BF92E_Elem2; // 0x30(0x18)
	VerseStringProperty __verse_0xF64C4596_Elem3; // 0x48(0x10)
};

