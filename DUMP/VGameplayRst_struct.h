// SolarisGeneratedEnum VGameplayRst.activation_state
enum class activation_state : uint8 {
	Active = 0,
	Inactive = 1
};

// SolarisGeneratedEnum VGameplayRst.collision_shape_mode
enum class collision_shape_mode : uint8 {
	CollisionMesh = 0,
	CollisionBox = 1,
	CollisionCapsule = 2,
	CollisionSphere = 3
};

// SolarisGeneratedEnum VGameplayRst.collision_type
enum class collision_type : uint8 {
	NoCollision = 0,
	QueryOnly = 1,
	SimulationOnly = 2,
	QueryAndSimulation = 3
};

// SolarisGeneratedEnum VGameplayRst.default_animation_mode_type
enum class default_animation_mode_type : uint8 {
	UseAnimationBlueprint = 0,
	UseAnimationInstance = 1,
	UseAnimationAsset = 2,
	UseCustomMode = 3
};

// SolarisGeneratedEnum VGameplayRst.default_mesh_type
enum class default_mesh_type : uint8 {
	CUBE = 0,
	Sphere = 1,
	Cylinder = 2,
	Cone = 3,
	Plane = 4
};

// SolarisGeneratedEnum VGameplayRst.dof_movement_mode
enum class dof_movement_mode : uint8 {
	Default = 0,
	SixDOF = 1,
	YZPlane = 2,
	XZPlane = 3,
	XYPlane = 4,
	CustomPlane = 5,
	NoConstraints = 6
};

// SolarisGeneratedEnum VGameplayRst.physics_trace_category
enum class physics_trace_category : uint8 {
	Channel = 0,
	Profile = 1,
	Object = 2
};

// SolarisGeneratedEnum VGameplayRst.physics_trace_channel
enum class physics_trace_channel : uint8 {
	WorldStatic = 0,
	WorldDynamic = 1,
	Pawn = 2,
	Visibility = 3,
	Camera = 4,
	PhysicsBody = 5,
	Vehicle = 6,
	Destructible = 7,
	GameTraceChannel1 = 8,
	GameTraceChannel2 = 9,
	GameTraceChannel3 = 10,
	GameTraceChannel4 = 11,
	GameTraceChannel5 = 12,
	GameTraceChannel6 = 13
};

// SolarisGeneratedEnum VGameplayRst.physics_trace_shape
enum class physics_trace_shape : uint8 {
	Line = 0,
	Box = 1,
	ShapeSphere = 2
};

// SolarisGeneratedEnum VGameplayRst.physics_trace_type
enum class physics_trace_type : uint8 {
	Single = 0,
	Multi = 1,
	Test = 2
};

// VerseStruct VGameplayRst.hit_result
// Size: 0x40 (Inherited: 0x00)
struct Fhit_result {
	int64_t __verse_0x592C3A0F_OtherEntityID; // 0x00(0x08)
	struct Ucollision_component* __verse_0x15DAA648_OtherComponent; // 0x08(0x08)
	struct Fvector3 __verse_0xA0175DA6_HitNormal; // 0x10(0x18)
	struct Fvector3 __verse_0xE16733E1_HitLocation; // 0x28(0x18)
};

// VerseStruct VGameplayRst.tuple_L_Kchar_Mtransform_M_Kchar_R
// Size: 0x70 (Inherited: 0x00)
struct Ftuple_L_Kchar_Mtransform_M_Kchar_R {
	VerseStringProperty __verse_0x18E3F084_Elem0; // 0x00(0x10)
	struct FTransform __verse_0x7D844C3C_Elem1; // 0x10(0x50)
	VerseStringProperty __verse_0x932BF92E_Elem2; // 0x60(0x10)
};

// VerseStruct VGameplayRst.tuple_L_Ksubtype_Lcomponent_R_Mtransform_M_Kchar_Mstatic__mesh_Mmaterial_R
// Size: 0x80 (Inherited: 0x00)
struct Ftuple_L_Ksubtype_Lcomponent_R_Mtransform_M_Kchar_Mstatic__mesh_Mmaterial_R {
	struct TArray<struct UEntityComponent*> __verse_0x18E3F084_Elem0; // 0x00(0x10)
	struct FTransform __verse_0x7D844C3C_Elem1; // 0x10(0x50)
	VerseStringProperty __verse_0x932BF92E_Elem2; // 0x60(0x10)
	struct Ustatic_mesh* __verse_0xF64C4596_Elem3; // 0x70(0x08)
	struct UMaterial* __verse_0x4F74920B_Elem4; // 0x78(0x08)
};

// VerseStruct VGameplayRst.tuple_L_Ksubtype_Lcomponent_R_Mtransform_M_Kchar_Mstatic__mesh_R
// Size: 0x78 (Inherited: 0x00)
struct Ftuple_L_Ksubtype_Lcomponent_R_Mtransform_M_Kchar_Mstatic__mesh_R {
	struct TArray<struct UEntityComponent*> __verse_0x18E3F084_Elem0; // 0x00(0x10)
	struct FTransform __verse_0x7D844C3C_Elem1; // 0x10(0x50)
	VerseStringProperty __verse_0x932BF92E_Elem2; // 0x60(0x10)
	struct Ustatic_mesh* __verse_0xF64C4596_Elem3; // 0x70(0x08)
};

// VerseStruct VGameplayRst.tuple_L_Ksubtype_Lcomponent_R_Mvector3_Mrotation_Mvector3_M_Kchar_Mstatic__mesh_Mmaterial_R
// Size: 0x88 (Inherited: 0x00)
struct Ftuple_L_Ksubtype_Lcomponent_R_Mvector3_Mrotation_Mvector3_M_Kchar_Mstatic__mesh_Mmaterial_R {
	struct TArray<struct UEntityComponent*> __verse_0x18E3F084_Elem0; // 0x00(0x10)
	struct Fvector3 __verse_0x7D844C3C_Elem1; // 0x10(0x18)
	char pad_28[0x8]; // 0x28(0x08)
	struct FVerseRotation __verse_0x932BF92E_Elem2; // 0x30(0x20)
	struct Fvector3 __verse_0xF64C4596_Elem3; // 0x50(0x18)
	VerseStringProperty __verse_0x4F74920B_Elem4; // 0x68(0x10)
	struct Ustatic_mesh* __verse_0x2A132EB3_Elem5; // 0x78(0x08)
	struct UMaterial* __verse_0xC4BC9BA1_Elem6; // 0x80(0x08)
};

// VerseStruct VGameplayRst.tuple_L_R
// Size: 0x01 (Inherited: 0x00)
struct Ftuple_L_R {
	char $StructPaddingDummy; // 0x00(0x01)
};

// VerseStruct VGameplayRst.tuple_Lcomponent_Mint_Mtype_R
// Size: 0x18 (Inherited: 0x00)
struct Ftuple_Lcomponent_Mint_Mtype_R {
	struct UEntityComponent* __verse_0x18E3F084_Elem0; // 0x00(0x08)
	int64_t __verse_0x7D844C3C_Elem1; // 0x08(0x08)
	struct UObject* __verse_0x932BF92E_Elem2; // 0x10(0x08)
};

// VerseStruct VGameplayRst.tuple_Lcomponent_Mphysics__trace__category_Mphysics__trace__type_Mphysics__trace__shape_Mphysics__trace__channel_Mvector3_Mvector3_Mlogic_Mvector3_Mfloat_M_Kchar_R
// Size: 0x78 (Inherited: 0x00)
struct Ftuple_Lcomponent_Mphysics__trace__category_Mphysics__trace__type_Mphysics__trace__shape_Mphysics__trace__channel_Mvector3_Mvector3_Mlogic_Mvector3_Mfloat_M_Kchar_R {
	struct UEntityComponent* __verse_0x18E3F084_Elem0; // 0x00(0x08)
	enum class physics_trace_category __verse_0x7D844C3C_Elem1; // 0x08(0x01)
	enum class physics_trace_type __verse_0x932BF92E_Elem2; // 0x09(0x01)
	enum class physics_trace_shape __verse_0xF64C4596_Elem3; // 0x0a(0x01)
	enum class physics_trace_channel __verse_0x4F74920B_Elem4; // 0x0b(0x01)
	char pad_C[0x4]; // 0x0c(0x04)
	struct Fvector3 __verse_0x2A132EB3_Elem5; // 0x10(0x18)
	struct Fvector3 __verse_0xC4BC9BA1_Elem6; // 0x28(0x18)
	char __verse_0xA1DB2719_Elem7 : 1; // 0x40(0x01)
	char pad_40_1 : 7; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct Fvector3 __verse_0xF7CB4441_Elem8; // 0x48(0x18)
	double __verse_0x92ACF8F9_Elem9; // 0x60(0x08)
	VerseStringProperty __verse_0x2E90A5DD_Elem10; // 0x68(0x10)
};

// VerseStruct VGameplayRst.tuple_Lcomponent_Mtype_R
// Size: 0x10 (Inherited: 0x00)
struct Ftuple_Lcomponent_Mtype_R {
	struct UEntityComponent* __verse_0x18E3F084_Elem0; // 0x00(0x08)
	struct UObject* __verse_0x7D844C3C_Elem1; // 0x08(0x08)
};

// VerseStruct VGameplayRst.tuple_Lentity_M_Ksubtype_Lcomponent_R_R
// Size: 0x18 (Inherited: 0x00)
struct Ftuple_Lentity_M_Ksubtype_Lcomponent_R_R {
	struct UEntity* __verse_0x18E3F084_Elem0; // 0x00(0x08)
	struct TArray<struct UEntityComponent*> __verse_0x7D844C3C_Elem1; // 0x08(0x10)
};

// VerseStruct VGameplayRst.tuple_Lfloat_Mactivation__state_R
// Size: 0x09 (Inherited: 0x00)
struct Ftuple_Lfloat_Mactivation__state_R {
	double __verse_0x18E3F084_Elem0; // 0x00(0x08)
	enum class activation_state __verse_0x7D844C3C_Elem1; // 0x08(0x01)
};

// VerseStruct VGameplayRst.tuple_Lfloat_Mfloat_R
// Size: 0x10 (Inherited: 0x00)
struct Ftuple_Lfloat_Mfloat_R {
	double __verse_0x18E3F084_Elem0; // 0x00(0x08)
	double __verse_0x7D844C3C_Elem1; // 0x08(0x08)
};

// VerseStruct VGameplayRst.tuple_Lfloat_Mlogic_R
// Size: 0x09 (Inherited: 0x00)
struct Ftuple_Lfloat_Mlogic_R {
	double __verse_0x18E3F084_Elem0; // 0x00(0x08)
	char __verse_0x7D844C3C_Elem1 : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
};

// VerseStruct VGameplayRst.tuple_Lint_Msubtype_Lcomponent_R_R
// Size: 0x10 (Inherited: 0x00)
struct Ftuple_Lint_Msubtype_Lcomponent_R_R {
	int64_t __verse_0x18E3F084_Elem0; // 0x00(0x08)
	struct UEntityComponent* __verse_0x7D844C3C_Elem1; // 0x08(0x08)
};

// VerseStruct VGameplayRst.tuple_Llevel_Mtime__span_M_Kchar_R
// Size: 0x28 (Inherited: 0x00)
struct Ftuple_Llevel_Mtime__span_M_Kchar_R {
	struct ULevel* __verse_0x18E3F084_Elem0; // 0x00(0x08)
	struct Ftime_span __verse_0x7D844C3C_Elem1; // 0x08(0x10)
	VerseStringProperty __verse_0x932BF92E_Elem2; // 0x18(0x10)
};

// VerseStruct VGameplayRst.tuple_Llogic_Mlogic_R
// Size: 0x02 (Inherited: 0x00)
struct Ftuple_Llogic_Mlogic_R {
	char __verse_0x18E3F084_Elem0 : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char __verse_0x7D844C3C_Elem1 : 1; // 0x01(0x01)
	char pad_1_1 : 7; // 0x01(0x01)
};

// VerseStruct VGameplayRst.tuple_Lmaterial_Mint_R
// Size: 0x10 (Inherited: 0x00)
struct Ftuple_Lmaterial_Mint_R {
	struct UMaterial* __verse_0x18E3F084_Elem0; // 0x00(0x08)
	int64_t __verse_0x7D844C3C_Elem1; // 0x08(0x08)
};

// VerseStruct VGameplayRst.tuple_Lplayer__component_M_Kchar_M_Kchar_R
// Size: 0x28 (Inherited: 0x00)
struct Ftuple_Lplayer__component_M_Kchar_M_Kchar_R {
	struct Uplayer_component* __verse_0x18E3F084_Elem0; // 0x00(0x08)
	VerseStringProperty __verse_0x7D844C3C_Elem1; // 0x08(0x10)
	VerseStringProperty __verse_0x932BF92E_Elem2; // 0x18(0x10)
};

// VerseStruct VGameplayRst.tuple_Lplayer__component_M_Kchar_Mint_R
// Size: 0x20 (Inherited: 0x00)
struct Ftuple_Lplayer__component_M_Kchar_Mint_R {
	struct Uplayer_component* __verse_0x18E3F084_Elem0; // 0x00(0x08)
	VerseStringProperty __verse_0x7D844C3C_Elem1; // 0x08(0x10)
	int64_t __verse_0x932BF92E_Elem2; // 0x18(0x08)
};

// VerseStruct VGameplayRst.tuple_Ltime__span_M_Kchar_R
// Size: 0x20 (Inherited: 0x00)
struct Ftuple_Ltime__span_M_Kchar_R {
	struct Ftime_span __verse_0x18E3F084_Elem0; // 0x00(0x10)
	VerseStringProperty __verse_0x7D844C3C_Elem1; // 0x10(0x10)
};

// VerseStruct VGameplayRst.tuple_Ltransform_M_Kchar_Mstatic__mesh_Mmaterial_R
// Size: 0x70 (Inherited: 0x00)
struct Ftuple_Ltransform_M_Kchar_Mstatic__mesh_Mmaterial_R {
	struct FTransform __verse_0x18E3F084_Elem0; // 0x00(0x50)
	VerseStringProperty __verse_0x7D844C3C_Elem1; // 0x50(0x10)
	struct Ustatic_mesh* __verse_0x932BF92E_Elem2; // 0x60(0x08)
	struct UMaterial* __verse_0xF64C4596_Elem3; // 0x68(0x08)
};

// VerseStruct VGameplayRst.tuple_Ltransform_M_Kchar_Mstatic__mesh_R
// Size: 0x68 (Inherited: 0x00)
struct Ftuple_Ltransform_M_Kchar_Mstatic__mesh_R {
	struct FTransform __verse_0x18E3F084_Elem0; // 0x00(0x50)
	VerseStringProperty __verse_0x7D844C3C_Elem1; // 0x50(0x10)
	struct Ustatic_mesh* __verse_0x932BF92E_Elem2; // 0x60(0x08)
};

// VerseStruct VGameplayRst.tuple_Ltransform_M_Kchar_R
// Size: 0x60 (Inherited: 0x00)
struct Ftuple_Ltransform_M_Kchar_R {
	struct FTransform __verse_0x18E3F084_Elem0; // 0x00(0x50)
	VerseStringProperty __verse_0x7D844C3C_Elem1; // 0x50(0x10)
};

// VerseStruct VGameplayRst.tuple_Lvector3_M_Kchar_Mstatic__mesh_Mmaterial_R
// Size: 0x38 (Inherited: 0x00)
struct Ftuple_Lvector3_M_Kchar_Mstatic__mesh_Mmaterial_R {
	struct Fvector3 __verse_0x18E3F084_Elem0; // 0x00(0x18)
	VerseStringProperty __verse_0x7D844C3C_Elem1; // 0x18(0x10)
	struct Ustatic_mesh* __verse_0x932BF92E_Elem2; // 0x28(0x08)
	struct UMaterial* __verse_0xF64C4596_Elem3; // 0x30(0x08)
};

// VerseStruct VGameplayRst.tuple_Lvector3_M_Kchar_R
// Size: 0x28 (Inherited: 0x00)
struct Ftuple_Lvector3_M_Kchar_R {
	struct Fvector3 __verse_0x18E3F084_Elem0; // 0x00(0x18)
	VerseStringProperty __verse_0x7D844C3C_Elem1; // 0x18(0x10)
};

// VerseStruct VGameplayRst.tuple_Lvector3_Mrotation_M_Kchar_Mstatic__mesh_Mmaterial_R
// Size: 0x60 (Inherited: 0x00)
struct Ftuple_Lvector3_Mrotation_M_Kchar_Mstatic__mesh_Mmaterial_R {
	struct Fvector3 __verse_0x18E3F084_Elem0; // 0x00(0x18)
	char pad_18[0x8]; // 0x18(0x08)
	struct FVerseRotation __verse_0x7D844C3C_Elem1; // 0x20(0x20)
	VerseStringProperty __verse_0x932BF92E_Elem2; // 0x40(0x10)
	struct Ustatic_mesh* __verse_0xF64C4596_Elem3; // 0x50(0x08)
	struct UMaterial* __verse_0x4F74920B_Elem4; // 0x58(0x08)
};

// VerseStruct VGameplayRst.tuple_Lvector3_Mrotation_Mvector3_M_Kchar_Mstatic__mesh_Mmaterial_R
// Size: 0x78 (Inherited: 0x00)
struct Ftuple_Lvector3_Mrotation_Mvector3_M_Kchar_Mstatic__mesh_Mmaterial_R {
	struct Fvector3 __verse_0x18E3F084_Elem0; // 0x00(0x18)
	char pad_18[0x8]; // 0x18(0x08)
	struct FVerseRotation __verse_0x7D844C3C_Elem1; // 0x20(0x20)
	struct Fvector3 __verse_0x932BF92E_Elem2; // 0x40(0x18)
	VerseStringProperty __verse_0xF64C4596_Elem3; // 0x58(0x10)
	struct Ustatic_mesh* __verse_0x4F74920B_Elem4; // 0x68(0x08)
	struct UMaterial* __verse_0x2A132EB3_Elem5; // 0x70(0x08)
};

// VerseStruct VGameplayRst.tuple_Lvector3_Mvector3_R
// Size: 0x30 (Inherited: 0x00)
struct Ftuple_Lvector3_Mvector3_R {
	struct Fvector3 __verse_0x18E3F084_Elem0; // 0x00(0x18)
	struct Fvector3 __verse_0x7D844C3C_Elem1; // 0x18(0x18)
};

