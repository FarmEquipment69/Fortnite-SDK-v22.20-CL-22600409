// Enum ControlRig.EControlRigState
enum class EControlRigState : uint8 {
	Init = 0,
	Update = 1,
	Invalid = 2,
	EControlRigState_MAX = 3
};

// Enum ControlRig.ERigElementType
enum class ERigElementType : uint8 {
	None = 0,
	Bone = 1,
	Null = 2,
	Space = 2,
	Control = 4,
	Curve = 8,
	RigidBody = 16,
	Reference = 32,
	Last = 64,
	All = 63,
	ToResetAfterConstructionEvent = 13,
	ERigElementType_MAX = 65
};

// Enum ControlRig.ERigControlVisibility
enum class ERigControlVisibility : uint8 {
	UserDefined = 0,
	BasedOnSelection = 1,
	ERigControlVisibility_MAX = 2
};

// Enum ControlRig.ERigControlAxis
enum class ERigControlAxis : uint8 {
	X = 0,
	Y = 1,
	Z = 2,
	ERigControlAxis_MAX = 3
};

// Enum ControlRig.ERigControlType
enum class ERigControlType : uint8 {
	Bool = 0,
	Float = 1,
	Integer = 2,
	Vector2D = 3,
	Position = 4,
	Scale = 5,
	Rotator = 6,
	Transform = 7,
	TransformNoScale = 8,
	EulerTransform = 9,
	ERigControlType_MAX = 10
};

// Enum ControlRig.ERigControlAnimationType
enum class ERigControlAnimationType : uint8 {
	AnimationControl = 0,
	AnimationChannel = 1,
	ProxyControl = 2,
	VisualCue = 3,
	ERigControlAnimationType_MAX = 4
};

// Enum ControlRig.EControlRigDrawSettings
enum class EControlRigDrawSettings : uint8 {
	Points = 0,
	Lines = 1,
	LineStrip = 2,
	DynamicMesh = 3,
	EControlRigDrawSettings_MAX = 4
};

// Enum ControlRig.ERigExecutionType
enum class ERigExecutionType : uint8 {
	Runtime = 0,
	Editing = 1,
	Max = 2
};

// Enum ControlRig.EControlRigComponentSpace
enum class EControlRigComponentSpace : uint8 {
	WorldSpace = 0,
	ActorSpace = 1,
	ComponentSpace = 2,
	RigSpace = 3,
	LocalSpace = 4,
	Max = 5
};

// Enum ControlRig.EControlRigComponentMapDirection
enum class EControlRigComponentMapDirection : uint8 {
	Input = 0,
	Output = 1,
	EControlRigComponentMapDirection_MAX = 2
};

// Enum ControlRig.ETransformSpaceMode
enum class ETransformSpaceMode : uint8 {
	LocalSpace = 0,
	GlobalSpace = 1,
	BaseSpace = 2,
	BaseJoint = 3,
	Max = 4
};

// Enum ControlRig.EControlRigClampSpatialMode
enum class EControlRigClampSpatialMode : uint8 {
	Plane = 0,
	Cylinder = 1,
	Sphere = 2,
	EControlRigClampSpatialMode_MAX = 3
};

// Enum ControlRig.ETransformGetterType
enum class ETransformGetterType : uint8 {
	Initial = 0,
	Current = 1,
	Max = 2
};

// Enum ControlRig.EBoneGetterSetterMode
enum class EBoneGetterSetterMode : uint8 {
	LocalSpace = 0,
	GlobalSpace = 1,
	Max = 2
};

// Enum ControlRig.EControlRigDrawHierarchyMode
enum class EControlRigDrawHierarchyMode : uint8 {
	Axes = 0,
	Max = 1
};

// Enum ControlRig.EControlRigAnimEasingType
enum class EControlRigAnimEasingType : uint8 {
	Linear = 0,
	QuadraticEaseIn = 1,
	QuadraticEaseOut = 2,
	QuadraticEaseInOut = 3,
	CubicEaseIn = 4,
	CubicEaseOut = 5,
	CubicEaseInOut = 6,
	QuarticEaseIn = 7,
	QuarticEaseOut = 8,
	QuarticEaseInOut = 9,
	QuinticEaseIn = 10,
	QuinticEaseOut = 11,
	QuinticEaseInOut = 12,
	SineEaseIn = 13,
	SineEaseOut = 14,
	SineEaseInOut = 15,
	CircularEaseIn = 16,
	CircularEaseOut = 17,
	CircularEaseInOut = 18,
	ExponentialEaseIn = 19,
	ExponentialEaseOut = 20,
	ExponentialEaseInOut = 21,
	ElasticEaseIn = 22,
	ElasticEaseOut = 23,
	ElasticEaseInOut = 24,
	BackEaseIn = 25,
	BackEaseOut = 26,
	BackEaseInOut = 27,
	BounceEaseIn = 28,
	BounceEaseOut = 29,
	BounceEaseInOut = 30,
	EControlRigAnimEasingType_MAX = 31
};

// Enum ControlRig.ECRSimPointIntegrateType
enum class ECRSimPointIntegrateType : uint8 {
	Verlet = 0,
	SemiExplicitEuler = 1,
	ECRSimPointIntegrateType_MAX = 2
};

// Enum ControlRig.ECRSimConstraintType
enum class ECRSimConstraintType : uint8 {
	Distance = 0,
	DistanceFromA = 1,
	DistanceFromB = 2,
	Plane = 3,
	ECRSimConstraintType_MAX = 4
};

// Enum ControlRig.ECRSimPointForceType
enum class ECRSimPointForceType : uint8 {
	Direction = 0,
	ECRSimPointForceType_MAX = 1
};

// Enum ControlRig.ECRSimSoftCollisionType
enum class ECRSimSoftCollisionType : uint8 {
	Plane = 0,
	Sphere = 1,
	Cone = 2,
	ECRSimSoftCollisionType_MAX = 3
};

// Enum ControlRig.EControlRigFKRigExecuteMode
enum class EControlRigFKRigExecuteMode : uint8 {
	Replace = 0,
	Additive = 1,
	Direct = 2,
	Max = 3
};

// Enum ControlRig.EMovieSceneControlRigSpaceType
enum class EMovieSceneControlRigSpaceType : uint8 {
	Parent = 0,
	World = 1,
	ControlRig = 2,
	EMovieSceneControlRigSpaceType_MAX = 3
};

// Enum ControlRig.ERigTransformStackEntryType
enum class ERigTransformStackEntryType : uint8 {
	TransformPose = 0,
	ControlOffset = 1,
	ControlShape = 2,
	CurveValue = 3,
	ERigTransformStackEntryType_MAX = 4
};

// Enum ControlRig.ERigBoneType
enum class ERigBoneType : uint8 {
	Imported = 0,
	User = 1,
	ERigBoneType_MAX = 2
};

// Enum ControlRig.ERigMetadataType
enum class ERigMetadataType : uint8 {
	Bool = 0,
	BoolArray = 1,
	Float = 2,
	FloatArray = 3,
	Int32 = 4,
	Int32Array = 5,
	Name = 6,
	NameArray = 7,
	Vector = 8,
	VectorArray = 9,
	Rotator = 10,
	RotatorArray = 11,
	Quat = 12,
	QuatArray = 13,
	Transform = 14,
	TransformArray = 15,
	LinearColor = 16,
	LinearColorArray = 17,
	RigElementKey = 18,
	RigElementKeyArray = 19,
	Invalid = 20,
	ERigMetadataType_MAX = 21
};

// Enum ControlRig.ERigHierarchyNotification
enum class ERigHierarchyNotification : uint8 {
	ElementAdded = 0,
	ElementRemoved = 1,
	ElementRenamed = 2,
	ElementSelected = 3,
	ElementDeselected = 4,
	ParentChanged = 5,
	HierarchyReset = 6,
	ControlSettingChanged = 7,
	ControlVisibilityChanged = 8,
	ControlDrivenListChanged = 9,
	ControlShapeTransformChanged = 10,
	ParentWeightsChanged = 11,
	InteractionBracketOpened = 12,
	InteractionBracketClosed = 13,
	Max = 14
};

// Enum ControlRig.ERigEvent
enum class ERigEvent : uint8 {
	None = 0,
	RequestAutoKey = 1,
	OpenUndoBracket = 2,
	CloseUndoBracket = 3,
	Max = 4
};

// Enum ControlRig.EControlRigSetKey
enum class EControlRigSetKey : uint8 {
	DoNotCare = 0,
	Always = 1,
	Never = 2,
	EControlRigSetKey_MAX = 3
};

// Enum ControlRig.ERigControlValueType
enum class ERigControlValueType : uint8 {
	Initial = 0,
	Current = 1,
	Minimum = 2,
	Maximum = 3,
	ERigControlValueType_MAX = 4
};

// Enum ControlRig.ERigTransformType
enum class ERigTransformType : uint8 {
	InitialLocal = 0,
	CurrentLocal = 1,
	InitialGlobal = 2,
	CurrentGlobal = 3,
	NumTransformTypes = 4,
	ERigTransformType_MAX = 5
};

// Enum ControlRig.ERigSpaceType
enum class ERigSpaceType : uint8 {
	Global = 0,
	Bone = 1,
	Control = 2,
	Space = 3,
	ERigSpaceType_MAX = 4
};

// Enum ControlRig.EControlRigInteractionType
enum class EControlRigInteractionType : uint8 {
	None = 0,
	Translate = 1,
	Rotate = 2,
	Scale = 4,
	All = 7,
	EControlRigInteractionType_MAX = 8
};

// Enum ControlRig.EAimMode
enum class EAimMode : uint8 {
	AimAtTarget = 0,
	OrientToTarget = 1,
	MAX = 2
};

// Enum ControlRig.EApplyTransformMode
enum class EApplyTransformMode : uint8 {
	Override = 0,
	Additive = 1,
	Max = 2
};

// Enum ControlRig.ERigUnitDebugPointMode
enum class ERigUnitDebugPointMode : uint8 {
	Point = 0,
	Vector = 1,
	Max = 2
};

// Enum ControlRig.ERigUnitDebugTransformMode
enum class ERigUnitDebugTransformMode : uint8 {
	Point = 0,
	Axes = 1,
	Box = 2,
	Max = 3
};

// Enum ControlRig.ERigSwitchParentMode
enum class ERigSwitchParentMode : uint8 {
	World = 0,
	DefaultParent = 1,
	ParentItem = 2,
	ERigSwitchParentMode_MAX = 3
};

// Enum ControlRig.EControlRigCurveAlignment
enum class EControlRigCurveAlignment : uint8 {
	Front = 0,
	Stretched = 1,
	EControlRigCurveAlignment_MAX = 2
};

// Enum ControlRig.EControlRigVectorKind
enum class EControlRigVectorKind : uint8 {
	Direction = 0,
	Location = 1,
	EControlRigVectorKind_MAX = 2
};

// Enum ControlRig.ERBFKernelType
enum class ERBFKernelType : uint8 {
	Gaussian = 0,
	Exponential = 1,
	Linear = 2,
	Cubic = 3,
	Quintic = 4,
	ERBFKernelType_MAX = 5
};

// Enum ControlRig.ERBFQuatDistanceType
enum class ERBFQuatDistanceType : uint8 {
	Euclidean = 0,
	ArcLength = 1,
	SwingAngle = 2,
	TwistAngle = 3,
	ERBFQuatDistanceType_MAX = 4
};

// Enum ControlRig.ERBFVectorDistanceType
enum class ERBFVectorDistanceType : uint8 {
	Euclidean = 0,
	Manhattan = 1,
	ArcLength = 2,
	ERBFVectorDistanceType_MAX = 3
};

// Enum ControlRig.EControlRigModifyBoneMode
enum class EControlRigModifyBoneMode : uint8 {
	OverrideLocal = 0,
	OverrideGlobal = 1,
	AdditiveLocal = 2,
	AdditiveGlobal = 3,
	Max = 4
};

// Enum ControlRig.EConstraintInterpType
enum class EConstraintInterpType : uint8 {
	Average = 0,
	Shortest = 1,
	Max = 2
};

// Enum ControlRig.ERigUnitVisualDebugPointMode
enum class ERigUnitVisualDebugPointMode : uint8 {
	Point = 0,
	Vector = 1,
	Max = 2
};

// ScriptStruct ControlRig.RigBaseElement
// Size: 0xe8 (Inherited: 0x00)
struct FRigBaseElement {
	char pad_0[0x8]; // 0x00(0x08)
	struct FRigElementKey Key; // 0x08(0x08)
	struct FString NameString; // 0x10(0x10)
	int32_t Index; // 0x20(0x04)
	int32_t SubIndex; // 0x24(0x04)
	bool bSelected; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	int32_t CreatedAtInstructionIndex; // 0x2c(0x04)
	char pad_30[0xb8]; // 0x30(0xb8)
};

// ScriptStruct ControlRig.RigElementKey
// Size: 0x08 (Inherited: 0x00)
struct FRigElementKey {
	enum class ERigElementType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName Name; // 0x04(0x04)
};

// ScriptStruct ControlRig.RigTransformElement
// Size: 0x2f0 (Inherited: 0xe8)
struct FRigTransformElement : FRigBaseElement {
	char pad_E8[0x8]; // 0xe8(0x08)
	struct FRigCurrentAndInitialTransform Pose; // 0xf0(0x1c0)
	char pad_2B0[0x40]; // 0x2b0(0x40)
};

// ScriptStruct ControlRig.RigCurrentAndInitialTransform
// Size: 0x1c0 (Inherited: 0x00)
struct FRigCurrentAndInitialTransform {
	struct FRigLocalAndGlobalTransform Current; // 0x00(0xe0)
	struct FRigLocalAndGlobalTransform Initial; // 0xe0(0xe0)
};

// ScriptStruct ControlRig.RigLocalAndGlobalTransform
// Size: 0xe0 (Inherited: 0x00)
struct FRigLocalAndGlobalTransform {
	struct FRigComputedTransform Local; // 0x00(0x70)
	struct FRigComputedTransform Global; // 0x70(0x70)
};

// ScriptStruct ControlRig.RigComputedTransform
// Size: 0x70 (Inherited: 0x00)
struct FRigComputedTransform {
	struct FTransform Transform; // 0x00(0x60)
	char pad_60[0x10]; // 0x60(0x10)
};

// ScriptStruct ControlRig.RigMultiParentElement
// Size: 0x3f0 (Inherited: 0x2f0)
struct FRigMultiParentElement : FRigTransformElement {
	char pad_2F0[0x100]; // 0x2f0(0x100)
};

// ScriptStruct ControlRig.RigControlElement
// Size: 0xa30 (Inherited: 0x3f0)
struct FRigControlElement : FRigMultiParentElement {
	struct FRigControlSettings Settings; // 0x3f0(0x280)
	struct FRigCurrentAndInitialTransform Offset; // 0x670(0x1c0)
	struct FRigCurrentAndInitialTransform Shape; // 0x830(0x1c0)
	struct FRigPreferredEulerAngles PreferredEulerAngles; // 0x9f0(0x38)
	char pad_A28[0x8]; // 0xa28(0x08)
};

// ScriptStruct ControlRig.RigPreferredEulerAngles
// Size: 0x38 (Inherited: 0x00)
struct FRigPreferredEulerAngles {
	enum class EEulerRotationOrder RotationOrder; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FVector Current; // 0x08(0x18)
	struct FVector Initial; // 0x20(0x18)
};

// ScriptStruct ControlRig.RigControlSettings
// Size: 0x280 (Inherited: 0x00)
struct FRigControlSettings {
	enum class ERigControlAnimationType AnimationType; // 0x00(0x01)
	enum class ERigControlType ControlType; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	struct FName DisplayName; // 0x04(0x04)
	enum class ERigControlAxis PrimaryAxis; // 0x08(0x01)
	bool bIsCurve; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct TArray<struct FRigControlLimitEnabled> LimitEnabled; // 0x10(0x10)
	bool bDrawLimits; // 0x20(0x01)
	char pad_21[0xf]; // 0x21(0x0f)
	struct FRigControlValue MinimumValue; // 0x30(0xf0)
	struct FRigControlValue MaximumValue; // 0x120(0xf0)
	bool bShapeVisible; // 0x210(0x01)
	enum class ERigControlVisibility ShapeVisibility; // 0x211(0x01)
	char pad_212[0x2]; // 0x212(0x02)
	struct FName ShapeName; // 0x214(0x04)
	struct FLinearColor ShapeColor; // 0x218(0x10)
	bool bIsTransientControl; // 0x228(0x01)
	char pad_229[0x7]; // 0x229(0x07)
	struct UEnum* ControlEnum; // 0x230(0x08)
	struct FRigControlElementCustomization Customization; // 0x238(0x20)
	struct TArray<struct FRigElementKey> DrivenControls; // 0x258(0x10)
	char pad_268[0x10]; // 0x268(0x10)
	bool bGroupWithParentControl; // 0x278(0x01)
	char pad_279[0x7]; // 0x279(0x07)
};

// ScriptStruct ControlRig.RigControlElementCustomization
// Size: 0x20 (Inherited: 0x00)
struct FRigControlElementCustomization {
	struct TArray<struct FRigElementKey> AvailableSpaces; // 0x00(0x10)
	struct TArray<struct FRigElementKey> RemovedSpaces; // 0x10(0x10)
};

// ScriptStruct ControlRig.RigControlValue
// Size: 0xf0 (Inherited: 0x00)
struct FRigControlValue {
	struct FRigControlValueStorage FloatStorage; // 0x00(0x84)
	char pad_84[0xc]; // 0x84(0x0c)
	struct FTransform Storage; // 0x90(0x60)
};

// ScriptStruct ControlRig.RigControlValueStorage
// Size: 0x84 (Inherited: 0x00)
struct FRigControlValueStorage {
	float Float00; // 0x00(0x04)
	float Float01; // 0x04(0x04)
	float Float02; // 0x08(0x04)
	float Float03; // 0x0c(0x04)
	float Float10; // 0x10(0x04)
	float Float11; // 0x14(0x04)
	float Float12; // 0x18(0x04)
	float Float13; // 0x1c(0x04)
	float Float20; // 0x20(0x04)
	float Float21; // 0x24(0x04)
	float Float22; // 0x28(0x04)
	float Float23; // 0x2c(0x04)
	float Float30; // 0x30(0x04)
	float Float31; // 0x34(0x04)
	float Float32; // 0x38(0x04)
	float Float33; // 0x3c(0x04)
	float ; // 0x40(0x04)
	float ; // 0x44(0x04)
	float ; // 0x48(0x04)
	float ; // 0x4c(0x04)
	float ; // 0x50(0x04)
	float ; // 0x54(0x04)
	float ; // 0x58(0x04)
	float ; // 0x5c(0x04)
	float ; // 0x60(0x04)
	float ; // 0x64(0x04)
	float ; // 0x68(0x04)
	float ; // 0x6c(0x04)
	float ; // 0x70(0x04)
	float ; // 0x74(0x04)
	float ; // 0x78(0x04)
	float ; // 0x7c(0x04)
	bool bValid; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
};

// ScriptStruct ControlRig.RigControlLimitEnabled
// Size: 0x02 (Inherited: 0x00)
struct FRigControlLimitEnabled {
	bool bMinimum; // 0x00(0x01)
	bool bMaximum; // 0x01(0x01)
};

// ScriptStruct ControlRig.RigInfluenceMapPerEvent
// Size: 0x60 (Inherited: 0x00)
struct FRigInfluenceMapPerEvent {
	struct TArray<struct FRigInfluenceMap> Maps; // 0x00(0x10)
	struct TMap<struct FName, int32_t> EventToIndex; // 0x10(0x50)
};

// ScriptStruct ControlRig.RigInfluenceMap
// Size: 0x68 (Inherited: 0x00)
struct FRigInfluenceMap {
	struct FName EventName; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FRigInfluenceEntry> Entries; // 0x08(0x10)
	struct TMap<struct FRigElementKey, int32_t> KeyToIndex; // 0x18(0x50)
};

// ScriptStruct ControlRig.RigInfluenceEntry
// Size: 0x18 (Inherited: 0x00)
struct FRigInfluenceEntry {
	struct FRigElementKey Source; // 0x00(0x08)
	struct TArray<struct FRigElementKey> AffectedList; // 0x08(0x10)
};

// ScriptStruct ControlRig.ControlRigDrawContainer
// Size: 0x18 (Inherited: 0x00)
struct FControlRigDrawContainer {
	char pad_0[0x8]; // 0x00(0x08)
	struct TArray<struct FControlRigDrawInstruction> Instructions; // 0x08(0x10)
};

// ScriptStruct ControlRig.ControlRigDrawInstruction
// Size: 0xc0 (Inherited: 0x00)
struct FControlRigDrawInstruction {
	struct FName Name; // 0x00(0x04)
	enum class EControlRigDrawSettings PrimitiveType; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct TArray<struct FVector> Positions; // 0x08(0x10)
	struct FLinearColor Color; // 0x18(0x10)
	float Thickness; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FTransform Transform; // 0x30(0x60)
	char pad_90[0x30]; // 0x90(0x30)
};

// ScriptStruct ControlRig.RigHierarchySettings
// Size: 0x04 (Inherited: 0x00)
struct FRigHierarchySettings {
	int32_t ProceduralElementLimit; // 0x00(0x04)
};

// ScriptStruct ControlRig.RigUnit
// Size: 0x08 (Inherited: 0x08)
struct FRigUnit : FRigVMStruct {
};

// ScriptStruct ControlRig.RigUnitMutable
// Size: 0x38 (Inherited: 0x08)
struct FRigUnitMutable : FRigUnit {
	struct FControlRigExecuteContext ExecuteContext; // 0x08(0x30)
};

// ScriptStruct ControlRig.ControlRigExecuteContext
// Size: 0x30 (Inherited: 0x28)
struct FControlRigExecuteContext : FRigVMExecuteContext {
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct ControlRig.ConstraintNodeData
// Size: 0x140 (Inherited: 0x00)
struct FConstraintNodeData {
	struct FTransform RelativeParent; // 0x00(0x60)
	struct FConstraintOffset ConstraintOffset; // 0x60(0xc0)
	struct FName LinkedNode; // 0x120(0x04)
	char pad_124[0x4]; // 0x124(0x04)
	struct TArray<struct FTransformConstraint> Constraints; // 0x128(0x10)
	char pad_138[0x8]; // 0x138(0x08)
};

// ScriptStruct ControlRig.AnimationHierarchy
// Size: 0x88 (Inherited: 0x78)
struct FAnimationHierarchy : FNodeHierarchyWithUserData {
	struct TArray<struct FConstraintNodeData> UserData; // 0x78(0x10)
};

// ScriptStruct ControlRig.AnimNode_ControlRigBase
// Size: 0x270 (Inherited: 0x58)
struct FAnimNode_ControlRigBase : FAnimNode_CustomProperty {
	struct FPoseLink Source; // 0x58(0x10)
	bool bResetInputPoseToInitial; // 0x68(0x01)
	bool bTransferInputPose; // 0x69(0x01)
	bool bTransferInputCurves; // 0x6a(0x01)
	bool bTransferPoseInGlobalSpace; // 0x6b(0x01)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct TArray<struct FBoneReference> InputBonesToTransfer; // 0x70(0x10)
	char pad_80[0x1c0]; // 0x80(0x1c0)
	struct TWeakObjectPtr<struct UNodeMappingContainer> NodeMappingContainer; // 0x240(0x08)
	struct FControlRigIOSettings InputSettings; // 0x248(0x02)
	struct FControlRigIOSettings OutputSettings; // 0x24a(0x02)
	bool bExecute; // 0x24c(0x01)
	char pad_24D[0xb]; // 0x24d(0x0b)
	struct TArray<struct FControlRigAnimNodeEventName> EventQueue; // 0x258(0x10)
	char pad_268[0x8]; // 0x268(0x08)
};

// ScriptStruct ControlRig.ControlRigAnimNodeEventName
// Size: 0x04 (Inherited: 0x00)
struct FControlRigAnimNodeEventName {
	struct FName EventName; // 0x00(0x04)
};

// ScriptStruct ControlRig.ControlRigIOSettings
// Size: 0x02 (Inherited: 0x00)
struct FControlRigIOSettings {
	bool bUpdatePose; // 0x00(0x01)
	bool bUpdateCurves; // 0x01(0x01)
};

// ScriptStruct ControlRig.AnimNode_ControlRig
// Size: 0x470 (Inherited: 0x270)
struct FAnimNode_ControlRig : FAnimNode_ControlRigBase {
	struct UControlRig* ControlRigClass; // 0x270(0x08)
	struct UControlRig* ControlRig; // 0x278(0x08)
	float Alpha; // 0x280(0x04)
	enum class EAnimAlphaInputType AlphaInputType; // 0x284(0x01)
	char bAlphaBoolEnabled : 1; // 0x285(0x01)
	char bSetRefPoseFromSkeleton : 1; // 0x285(0x01)
	char pad_285_2 : 6; // 0x285(0x01)
	char pad_286[0x2]; // 0x286(0x02)
	struct FInputScaleBias AlphaScaleBias; // 0x288(0x08)
	struct FInputAlphaBoolBlend AlphaBoolBlend; // 0x290(0x48)
	struct FName AlphaCurveName; // 0x2d8(0x04)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x2dc(0x30)
	char pad_30C[0x4]; // 0x30c(0x04)
	struct TMap<struct FName, struct FName> InputMapping; // 0x310(0x50)
	struct TMap<struct FName, struct FName> OutputMapping; // 0x360(0x50)
	char pad_3B0[0xb0]; // 0x3b0(0xb0)
	int32_t LODThreshold; // 0x460(0x04)
	char pad_464[0xc]; // 0x464(0x0c)
};

// ScriptStruct ControlRig.AnimNode_ControlRig_ExternalSource
// Size: 0x278 (Inherited: 0x270)
struct FAnimNode_ControlRig_ExternalSource : FAnimNode_ControlRigBase {
	struct TWeakObjectPtr<struct UControlRig> ControlRig; // 0x270(0x08)
};

// ScriptStruct ControlRig.ControlRigAnimInstanceProxy
// Size: 0x920 (Inherited: 0x880)
struct FControlRigAnimInstanceProxy : FAnimInstanceProxy {
	char pad_880[0xa0]; // 0x880(0xa0)
};

// ScriptStruct ControlRig.ControlRigComponentMappedElement
// Size: 0xc0 (Inherited: 0x00)
struct FControlRigComponentMappedElement {
	struct FComponentReference ComponentReference; // 0x00(0x28)
	int32_t TransformIndex; // 0x28(0x04)
	struct FName TransformName; // 0x2c(0x04)
	enum class ERigElementType ElementType; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	struct FName ElementName; // 0x34(0x04)
	enum class EControlRigComponentMapDirection Direction; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FTransform Offset; // 0x40(0x60)
	float Weight; // 0xa0(0x04)
	enum class EControlRigComponentSpace Space; // 0xa4(0x01)
	char pad_A5[0x3]; // 0xa5(0x03)
	struct USceneComponent* SceneComponent; // 0xa8(0x08)
	int32_t ElementIndex; // 0xb0(0x04)
	int32_t SubIndex; // 0xb4(0x04)
	char pad_B8[0x8]; // 0xb8(0x08)
};

// ScriptStruct ControlRig.ControlRigComponentMappedComponent
// Size: 0x10 (Inherited: 0x00)
struct FControlRigComponentMappedComponent {
	struct USceneComponent* Component; // 0x00(0x08)
	struct FName ElementName; // 0x08(0x04)
	enum class ERigElementType ElementType; // 0x0c(0x01)
	enum class EControlRigComponentMapDirection Direction; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
};

// ScriptStruct ControlRig.ControlRigComponentMappedBone
// Size: 0x08 (Inherited: 0x00)
struct FControlRigComponentMappedBone {
	struct FName Source; // 0x00(0x04)
	struct FName Target; // 0x04(0x04)
};

// ScriptStruct ControlRig.ControlRigComponentMappedCurve
// Size: 0x08 (Inherited: 0x00)
struct FControlRigComponentMappedCurve {
	struct FName Source; // 0x00(0x04)
	struct FName Target; // 0x04(0x04)
};

// ScriptStruct ControlRig.ControlRigDrawInterface
// Size: 0x18 (Inherited: 0x18)
struct FControlRigDrawInterface : FControlRigDrawContainer {
};

// ScriptStruct ControlRig.ControlShapeActorCreationParam
// Size: 0x1b0 (Inherited: 0x00)
struct FControlShapeActorCreationParam {
	char pad_0[0x1b0]; // 0x00(0x1b0)
};

// ScriptStruct ControlRig.ControlRigShapeDefinition
// Size: 0xa0 (Inherited: 0x00)
struct FControlRigShapeDefinition {
	struct FName ShapeName; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TSoftObjectPtr<UStaticMesh> StaticMesh; // 0x08(0x28)
	struct FTransform Transform; // 0x30(0x60)
	char pad_90[0x10]; // 0x90(0x10)
};

// ScriptStruct ControlRig.AnimNode_ControlRigInputPose
// Size: 0x30 (Inherited: 0x10)
struct FAnimNode_ControlRigInputPose : FAnimNode_Base {
	struct FPoseLink InputPose; // 0x10(0x10)
	char pad_20[0x10]; // 0x20(0x10)
};

// ScriptStruct ControlRig.ControlRigLayerInstanceProxy
// Size: 0x920 (Inherited: 0x880)
struct FControlRigLayerInstanceProxy : FAnimInstanceProxy {
	char pad_880[0xa0]; // 0x880(0xa0)
};

// ScriptStruct ControlRig.CRFourPointBezier
// Size: 0x60 (Inherited: 0x00)
struct FCRFourPointBezier {
	struct FVector A; // 0x00(0x18)
	struct FVector B; // 0x18(0x18)
	struct FVector C; // 0x30(0x18)
	struct FVector D; // 0x48(0x18)
};

// ScriptStruct ControlRig.RigControlCopy
// Size: 0x2a0 (Inherited: 0x00)
struct FRigControlCopy {
	char pad_0[0x10]; // 0x00(0x10)
	struct FName Name; // 0x10(0x04)
	enum class ERigControlType ControlType; // 0x14(0x01)
	char pad_15[0xb]; // 0x15(0x0b)
	struct FRigControlValue Value; // 0x20(0xf0)
	struct FRigElementKey ParentKey; // 0x110(0x08)
	char pad_118[0x8]; // 0x118(0x08)
	struct FTransform OffsetTransform; // 0x120(0x60)
	struct FTransform ParentTransform; // 0x180(0x60)
	struct FTransform LocalTransform; // 0x1e0(0x60)
	struct FTransform GlobalTransform; // 0x240(0x60)
};

// ScriptStruct ControlRig.ControlRigControlPose
// Size: 0x60 (Inherited: 0x00)
struct FControlRigControlPose {
	struct TArray<struct FRigControlCopy> CopyOfControls; // 0x00(0x10)
	char pad_10[0x50]; // 0x10(0x50)
};

// ScriptStruct ControlRig.ControlRigSequenceObjectReference
// Size: 0x08 (Inherited: 0x00)
struct FControlRigSequenceObjectReference {
	struct UControlRig* ControlRigClass; // 0x00(0x08)
};

// ScriptStruct ControlRig.ControlRigSequenceObjectReferences
// Size: 0x10 (Inherited: 0x00)
struct FControlRigSequenceObjectReferences {
	struct TArray<struct FControlRigSequenceObjectReference> Array; // 0x00(0x10)
};

// ScriptStruct ControlRig.ControlRigSequenceObjectReferenceMap
// Size: 0x20 (Inherited: 0x00)
struct FControlRigSequenceObjectReferenceMap {
	struct TArray<struct FGuid> BindingIds; // 0x00(0x10)
	struct TArray<struct FControlRigSequenceObjectReferences> References; // 0x10(0x10)
};

// ScriptStruct ControlRig.ControlRigSettingsPerPinBool
// Size: 0x50 (Inherited: 0x00)
struct FControlRigSettingsPerPinBool {
	struct TMap<struct FString, bool> Values; // 0x00(0x50)
};

// ScriptStruct ControlRig.ControlRigValidationContext
// Size: 0x28 (Inherited: 0x00)
struct FControlRigValidationContext {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct ControlRig.CRSimContainer
// Size: 0x18 (Inherited: 0x00)
struct FCRSimContainer {
	char pad_0[0x8]; // 0x00(0x08)
	float TimeStep; // 0x08(0x04)
	float AccumulatedTime; // 0x0c(0x04)
	float TimeLeftForStep; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ControlRig.CRSimLinearSpring
// Size: 0x10 (Inherited: 0x00)
struct FCRSimLinearSpring {
	int32_t SubjectA; // 0x00(0x04)
	int32_t SubjectB; // 0x04(0x04)
	float Coefficient; // 0x08(0x04)
	float Equilibrium; // 0x0c(0x04)
};

// ScriptStruct ControlRig.CRSimPoint
// Size: 0x40 (Inherited: 0x00)
struct FCRSimPoint {
	float Mass; // 0x00(0x04)
	float Size; // 0x04(0x04)
	float LinearDamping; // 0x08(0x04)
	float InheritMotion; // 0x0c(0x04)
	struct FVector Position; // 0x10(0x18)
	struct FVector LinearVelocity; // 0x28(0x18)
};

// ScriptStruct ControlRig.CRSimPointConstraint
// Size: 0x40 (Inherited: 0x00)
struct FCRSimPointConstraint {
	enum class ECRSimConstraintType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t SubjectA; // 0x04(0x04)
	int32_t SubjectB; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FVector DataA; // 0x10(0x18)
	struct FVector DataB; // 0x28(0x18)
};

// ScriptStruct ControlRig.CRSimPointContainer
// Size: 0x78 (Inherited: 0x18)
struct FCRSimPointContainer : FCRSimContainer {
	struct TArray<struct FCRSimPoint> Points; // 0x18(0x10)
	struct TArray<struct FCRSimLinearSpring> Springs; // 0x28(0x10)
	struct TArray<struct FCRSimPointForce> Forces; // 0x38(0x10)
	struct TArray<struct FCRSimSoftCollision> CollisionVolumes; // 0x48(0x10)
	struct TArray<struct FCRSimPointConstraint> Constraints; // 0x58(0x10)
	struct TArray<struct FCRSimPoint> PreviousStep; // 0x68(0x10)
};

// ScriptStruct ControlRig.CRSimSoftCollision
// Size: 0x80 (Inherited: 0x00)
struct FCRSimSoftCollision {
	struct FTransform Transform; // 0x00(0x60)
	enum class ECRSimSoftCollisionType ShapeType; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	float MinimumDistance; // 0x64(0x04)
	float MaximumDistance; // 0x68(0x04)
	enum class EControlRigAnimEasingType FalloffType; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
	float Coefficient; // 0x70(0x04)
	bool bInverted; // 0x74(0x01)
	char pad_75[0xb]; // 0x75(0x0b)
};

// ScriptStruct ControlRig.CRSimPointForce
// Size: 0x28 (Inherited: 0x00)
struct FCRSimPointForce {
	enum class ECRSimPointForceType ForceType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FVector Vector; // 0x08(0x18)
	float Coefficient; // 0x20(0x04)
	bool bNormalize; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct ControlRig.MovieSceneControlRigInstanceData
// Size: 0x120 (Inherited: 0x08)
struct FMovieSceneControlRigInstanceData : FMovieSceneSequenceInstanceData {
	bool bAdditive; // 0x08(0x01)
	bool bApplyBoneFilter; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct FInputBlendPose BoneFilter; // 0x10(0x10)
	struct FMovieSceneFloatChannel Weight; // 0x20(0xe8)
	struct FMovieSceneEvaluationOperand Operand; // 0x108(0x14)
	char pad_11C[0x4]; // 0x11c(0x04)
};

// ScriptStruct ControlRig.EnumParameterNameAndCurve
// Size: 0xe8 (Inherited: 0x00)
struct FEnumParameterNameAndCurve {
	struct FName ParameterName; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FMovieSceneByteChannel ParameterCurve; // 0x08(0xe0)
};

// ScriptStruct ControlRig.IntegerParameterNameAndCurve
// Size: 0xe0 (Inherited: 0x00)
struct FIntegerParameterNameAndCurve {
	struct FName ParameterName; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FMovieSceneIntegerChannel ParameterCurve; // 0x08(0xd8)
};

// ScriptStruct ControlRig.SpaceControlNameAndChannel
// Size: 0xf0 (Inherited: 0x00)
struct FSpaceControlNameAndChannel {
	struct FName ControlName; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FMovieSceneControlRigSpaceChannel SpaceCurve; // 0x08(0xe8)
};

// ScriptStruct ControlRig.MovieSceneControlRigSpaceChannel
// Size: 0xe8 (Inherited: 0x50)
struct FMovieSceneControlRigSpaceChannel : FMovieSceneChannel {
	struct TArray<struct FFrameNumber> KeyTimes; // 0x50(0x10)
	struct TArray<struct FMovieSceneControlRigSpaceBaseKey> KeyValues; // 0x60(0x10)
	char pad_70[0x78]; // 0x70(0x78)
};

// ScriptStruct ControlRig.MovieSceneControlRigSpaceBaseKey
// Size: 0x0c (Inherited: 0x00)
struct FMovieSceneControlRigSpaceBaseKey {
	enum class EMovieSceneControlRigSpaceType SpaceType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FRigElementKey ControlRigElement; // 0x04(0x08)
};

// ScriptStruct ControlRig.ChannelMapInfo
// Size: 0x38 (Inherited: 0x00)
struct FChannelMapInfo {
	int32_t ControlIndex; // 0x00(0x04)
	int32_t TotalChannelIndex; // 0x04(0x04)
	int32_t ChannelIndex; // 0x08(0x04)
	int32_t ParentControlIndex; // 0x0c(0x04)
	struct FName ChannelTypeName; // 0x10(0x04)
	bool bDoesHaveSpace; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	int32_t SpaceChannelIndex; // 0x18(0x04)
	int32_t MaskIndex; // 0x1c(0x04)
	int32_t CategoryIndex; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct TArray<uint32_t> ConstraintsIndex; // 0x28(0x10)
};

// ScriptStruct ControlRig.MovieSceneControlRigParameterTemplate
// Size: 0xc0 (Inherited: 0x80)
struct FMovieSceneControlRigParameterTemplate : FMovieSceneParameterSectionTemplate {
	struct TArray<struct FEnumParameterNameAndCurve> Enums; // 0x80(0x10)
	struct TArray<struct FIntegerParameterNameAndCurve> Integers; // 0x90(0x10)
	struct TArray<struct FSpaceControlNameAndChannel> Spaces; // 0xa0(0x10)
	struct TArray<struct FConstraintAndActiveChannel> Constraints; // 0xb0(0x10)
};

// ScriptStruct ControlRig.RigElement
// Size: 0x10 (Inherited: 0x00)
struct FRigElement {
	char pad_0[0x8]; // 0x00(0x08)
	struct FName Name; // 0x08(0x04)
	int32_t Index; // 0x0c(0x04)
};

// ScriptStruct ControlRig.RigBone
// Size: 0x160 (Inherited: 0x10)
struct FRigBone : FRigElement {
	struct FName ParentName; // 0x10(0x04)
	int32_t ParentIndex; // 0x14(0x04)
	char pad_18[0x8]; // 0x18(0x08)
	struct FTransform InitialTransform; // 0x20(0x60)
	struct FTransform GlobalTransform; // 0x80(0x60)
	struct FTransform LocalTransform; // 0xe0(0x60)
	struct TArray<int32_t> Dependents; // 0x140(0x10)
	enum class ERigBoneType Type; // 0x150(0x01)
	char pad_151[0xf]; // 0x151(0x0f)
};

// ScriptStruct ControlRig.RigBoneHierarchy
// Size: 0x10 (Inherited: 0x00)
struct FRigBoneHierarchy {
	struct TArray<struct FRigBone> Bones; // 0x00(0x10)
};

// ScriptStruct ControlRig.RigControl
// Size: 0x500 (Inherited: 0x10)
struct FRigControl : FRigElement {
	enum class ERigControlType ControlType; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FName DisplayName; // 0x14(0x04)
	struct FName ParentName; // 0x18(0x04)
	int32_t ParentIndex; // 0x1c(0x04)
	struct FName SpaceName; // 0x20(0x04)
	int32_t SpaceIndex; // 0x24(0x04)
	char pad_28[0x8]; // 0x28(0x08)
	struct FTransform OffsetTransform; // 0x30(0x60)
	struct FRigControlValue InitialValue; // 0x90(0xf0)
	struct FRigControlValue Value; // 0x180(0xf0)
	enum class ERigControlAxis PrimaryAxis; // 0x270(0x01)
	bool bIsCurve; // 0x271(0x01)
	bool bAnimatable; // 0x272(0x01)
	bool bLimitTranslation; // 0x273(0x01)
	bool bLimitRotation; // 0x274(0x01)
	bool bLimitScale; // 0x275(0x01)
	bool bDrawLimits; // 0x276(0x01)
	char pad_277[0x9]; // 0x277(0x09)
	struct FRigControlValue MinimumValue; // 0x280(0xf0)
	struct FRigControlValue MaximumValue; // 0x370(0xf0)
	bool bGizmoEnabled; // 0x460(0x01)
	bool bGizmoVisible; // 0x461(0x01)
	char pad_462[0x2]; // 0x462(0x02)
	struct FName GizmoName; // 0x464(0x04)
	char pad_468[0x8]; // 0x468(0x08)
	struct FTransform GizmoTransform; // 0x470(0x60)
	struct FLinearColor GizmoColor; // 0x4d0(0x10)
	struct TArray<int32_t> Dependents; // 0x4e0(0x10)
	bool bIsTransientControl; // 0x4f0(0x01)
	char pad_4F1[0x7]; // 0x4f1(0x07)
	struct UEnum* ControlEnum; // 0x4f8(0x08)
};

// ScriptStruct ControlRig.RigControlHierarchy
// Size: 0x10 (Inherited: 0x00)
struct FRigControlHierarchy {
	struct TArray<struct FRigControl> Controls; // 0x00(0x10)
};

// ScriptStruct ControlRig.RigCurve
// Size: 0x18 (Inherited: 0x10)
struct FRigCurve : FRigElement {
	float Value; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ControlRig.RigCurveContainer
// Size: 0x10 (Inherited: 0x00)
struct FRigCurveContainer {
	struct TArray<struct FRigCurve> Curves; // 0x00(0x10)
};

// ScriptStruct ControlRig.RigDispatchFactory
// Size: 0x18 (Inherited: 0x18)
struct FRigDispatchFactory : FRigVMDispatchFactory {
};

// ScriptStruct ControlRig.RigTransformStackEntry
// Size: 0xf0 (Inherited: 0x00)
struct FRigTransformStackEntry {
	struct FRigElementKey Key; // 0x00(0x08)
	enum class ERigTransformStackEntryType EntryType; // 0x08(0x01)
	enum class ERigTransformType TransformType; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct FTransform OldTransform; // 0x10(0x60)
	struct FTransform NewTransform; // 0x70(0x60)
	bool bAffectChildren; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
	struct TArray<struct FString> Callstack; // 0xd8(0x10)
	char pad_E8[0x8]; // 0xe8(0x08)
};

// ScriptStruct ControlRig.CachedRigElement
// Size: 0x18 (Inherited: 0x00)
struct FCachedRigElement {
	struct FRigElementKey Key; // 0x00(0x08)
	uint16_t Index; // 0x08(0x02)
	char pad_A[0x2]; // 0x0a(0x02)
	int32_t ContainerVersion; // 0x0c(0x04)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct ControlRig.RigHierarchyContainer
// Size: 0x40 (Inherited: 0x00)
struct FRigHierarchyContainer {
	struct FRigBoneHierarchy BoneHierarchy; // 0x00(0x10)
	struct FRigSpaceHierarchy SpaceHierarchy; // 0x10(0x10)
	struct FRigControlHierarchy ControlHierarchy; // 0x20(0x10)
	struct FRigCurveContainer CurveContainer; // 0x30(0x10)
};

// ScriptStruct ControlRig.RigSpaceHierarchy
// Size: 0x10 (Inherited: 0x00)
struct FRigSpaceHierarchy {
	struct TArray<struct FRigSpace> Spaces; // 0x00(0x10)
};

// ScriptStruct ControlRig.RigSpace
// Size: 0xe0 (Inherited: 0x10)
struct FRigSpace : FRigElement {
	enum class ERigSpaceType SpaceType; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FName ParentName; // 0x14(0x04)
	int32_t ParentIndex; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FTransform InitialTransform; // 0x20(0x60)
	struct FTransform LocalTransform; // 0x80(0x60)
};

// ScriptStruct ControlRig.RigHierarchyRef
// Size: 0x01 (Inherited: 0x00)
struct FRigHierarchyRef {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct ControlRig.RigControlModifiedContext
// Size: 0x14 (Inherited: 0x00)
struct FRigControlModifiedContext {
	char pad_0[0x14]; // 0x00(0x14)
};

// ScriptStruct ControlRig.RigElementKeyCollection
// Size: 0x10 (Inherited: 0x00)
struct FRigElementKeyCollection {
	struct TArray<struct FRigElementKey> Keys; // 0x00(0x10)
};

// ScriptStruct ControlRig.RigEventContext
// Size: 0x20 (Inherited: 0x00)
struct FRigEventContext {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct ControlRig.RigMirrorSettings
// Size: 0x28 (Inherited: 0x00)
struct FRigMirrorSettings {
	enum class EAxis MirrorAxis; // 0x00(0x01)
	enum class EAxis AxisToFlip; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FString SearchString; // 0x08(0x10)
	struct FString ReplaceString; // 0x18(0x10)
};

// ScriptStruct ControlRig.RigSingleParentElement
// Size: 0x300 (Inherited: 0x2f0)
struct FRigSingleParentElement : FRigTransformElement {
	char pad_2F0[0x10]; // 0x2f0(0x10)
};

// ScriptStruct ControlRig.RigElementWeight
// Size: 0x0c (Inherited: 0x00)
struct FRigElementWeight {
	float Location; // 0x00(0x04)
	float Rotation; // 0x04(0x04)
	float Scale; // 0x08(0x04)
};

// ScriptStruct ControlRig.RigElementParentConstraint
// Size: 0x90 (Inherited: 0x00)
struct FRigElementParentConstraint {
	char pad_0[0x90]; // 0x00(0x90)
};

// ScriptStruct ControlRig.RigBoneElement
// Size: 0x300 (Inherited: 0x300)
struct FRigBoneElement : FRigSingleParentElement {
	enum class ERigBoneType BoneType; // 0x2f8(0x01)
};

// ScriptStruct ControlRig.RigNullElement
// Size: 0x3f0 (Inherited: 0x3f0)
struct FRigNullElement : FRigMultiParentElement {
};

// ScriptStruct ControlRig.RigCurveElement
// Size: 0xf0 (Inherited: 0xe8)
struct FRigCurveElement : FRigBaseElement {
	char pad_E8[0x8]; // 0xe8(0x08)
};

// ScriptStruct ControlRig.RigRigidBodySettings
// Size: 0x04 (Inherited: 0x00)
struct FRigRigidBodySettings {
	float Mass; // 0x00(0x04)
};

// ScriptStruct ControlRig.RigRigidBodyElement
// Size: 0x300 (Inherited: 0x300)
struct FRigRigidBodyElement : FRigSingleParentElement {
	struct FRigRigidBodySettings Settings; // 0x2f8(0x04)
};

// ScriptStruct ControlRig.RigReferenceElement
// Size: 0x310 (Inherited: 0x300)
struct FRigReferenceElement : FRigSingleParentElement {
	char pad_300[0x10]; // 0x300(0x10)
};

// ScriptStruct ControlRig.RigHierarchyCopyPasteContentPerElement
// Size: 0x200 (Inherited: 0x00)
struct FRigHierarchyCopyPasteContentPerElement {
	struct FRigElementKey Key; // 0x00(0x08)
	struct FString Content; // 0x08(0x10)
	struct TArray<struct FRigElementKey> Parents; // 0x18(0x10)
	struct TArray<struct FRigElementWeight> ParentWeights; // 0x28(0x10)
	char pad_38[0x8]; // 0x38(0x08)
	struct FRigCurrentAndInitialTransform Pose; // 0x40(0x1c0)
};

// ScriptStruct ControlRig.RigHierarchyCopyPasteContent
// Size: 0x50 (Inherited: 0x00)
struct FRigHierarchyCopyPasteContent {
	struct TArray<struct FRigHierarchyCopyPasteContentPerElement> Elements; // 0x00(0x10)
	struct TArray<enum class ERigElementType> Types; // 0x10(0x10)
	struct TArray<struct FString> Contents; // 0x20(0x10)
	struct TArray<struct FTransform> LocalTransforms; // 0x30(0x10)
	struct TArray<struct FTransform> GlobalTransforms; // 0x40(0x10)
};

// ScriptStruct ControlRig.RigBaseMetadata
// Size: 0x20 (Inherited: 0x00)
struct FRigBaseMetadata {
	char pad_0[0x10]; // 0x00(0x10)
	struct FName Name; // 0x10(0x04)
	enum class ERigMetadataType Type; // 0x14(0x01)
	char pad_15[0xb]; // 0x15(0x0b)
};

// ScriptStruct ControlRig.RigBoolMetadata
// Size: 0x28 (Inherited: 0x20)
struct FRigBoolMetadata : FRigBaseMetadata {
	bool Value; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct ControlRig.RigBoolArrayMetadata
// Size: 0x30 (Inherited: 0x20)
struct FRigBoolArrayMetadata : FRigBaseMetadata {
	struct TArray<bool> Value; // 0x20(0x10)
};

// ScriptStruct ControlRig.RigFloatMetadata
// Size: 0x28 (Inherited: 0x20)
struct FRigFloatMetadata : FRigBaseMetadata {
	float Value; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct ControlRig.RigFloatArrayMetadata
// Size: 0x30 (Inherited: 0x20)
struct FRigFloatArrayMetadata : FRigBaseMetadata {
	struct TArray<float> Value; // 0x20(0x10)
};

// ScriptStruct ControlRig.RigInt32Metadata
// Size: 0x28 (Inherited: 0x20)
struct FRigInt32Metadata : FRigBaseMetadata {
	int32_t Value; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct ControlRig.RigInt32ArrayMetadata
// Size: 0x30 (Inherited: 0x20)
struct FRigInt32ArrayMetadata : FRigBaseMetadata {
	struct TArray<int32_t> Value; // 0x20(0x10)
};

// ScriptStruct ControlRig.RigNameMetadata
// Size: 0x28 (Inherited: 0x20)
struct FRigNameMetadata : FRigBaseMetadata {
	struct FName Value; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct ControlRig.RigNameArrayMetadata
// Size: 0x30 (Inherited: 0x20)
struct FRigNameArrayMetadata : FRigBaseMetadata {
	struct TArray<struct FName> Value; // 0x20(0x10)
};

// ScriptStruct ControlRig.RigVectorMetadata
// Size: 0x38 (Inherited: 0x20)
struct FRigVectorMetadata : FRigBaseMetadata {
	struct FVector Value; // 0x20(0x18)
};

// ScriptStruct ControlRig.RigVectorArrayMetadata
// Size: 0x30 (Inherited: 0x20)
struct FRigVectorArrayMetadata : FRigBaseMetadata {
	struct TArray<struct FVector> Value; // 0x20(0x10)
};

// ScriptStruct ControlRig.RigRotatorMetadata
// Size: 0x38 (Inherited: 0x20)
struct FRigRotatorMetadata : FRigBaseMetadata {
	struct FRotator Value; // 0x20(0x18)
};

// ScriptStruct ControlRig.RigRotatorArrayMetadata
// Size: 0x30 (Inherited: 0x20)
struct FRigRotatorArrayMetadata : FRigBaseMetadata {
	struct TArray<struct FRotator> Value; // 0x20(0x10)
};

// ScriptStruct ControlRig.RigQuatMetadata
// Size: 0x40 (Inherited: 0x20)
struct FRigQuatMetadata : FRigBaseMetadata {
	struct FQuat Value; // 0x20(0x20)
};

// ScriptStruct ControlRig.RigQuatArrayMetadata
// Size: 0x30 (Inherited: 0x20)
struct FRigQuatArrayMetadata : FRigBaseMetadata {
	struct TArray<struct FQuat> Value; // 0x20(0x10)
};

// ScriptStruct ControlRig.RigTransformMetadata
// Size: 0x80 (Inherited: 0x20)
struct FRigTransformMetadata : FRigBaseMetadata {
	struct FTransform Value; // 0x20(0x60)
};

// ScriptStruct ControlRig.RigTransformArrayMetadata
// Size: 0x30 (Inherited: 0x20)
struct FRigTransformArrayMetadata : FRigBaseMetadata {
	struct TArray<struct FTransform> Value; // 0x20(0x10)
};

// ScriptStruct ControlRig.RigLinearColorMetadata
// Size: 0x30 (Inherited: 0x20)
struct FRigLinearColorMetadata : FRigBaseMetadata {
	struct FLinearColor Value; // 0x20(0x10)
};

// ScriptStruct ControlRig.RigLinearColorArrayMetadata
// Size: 0x30 (Inherited: 0x20)
struct FRigLinearColorArrayMetadata : FRigBaseMetadata {
	struct TArray<struct FLinearColor> Value; // 0x20(0x10)
};

// ScriptStruct ControlRig.RigElementKeyMetadata
// Size: 0x28 (Inherited: 0x20)
struct FRigElementKeyMetadata : FRigBaseMetadata {
	struct FRigElementKey Value; // 0x20(0x08)
};

// ScriptStruct ControlRig.RigElementKeyArrayMetadata
// Size: 0x30 (Inherited: 0x20)
struct FRigElementKeyArrayMetadata : FRigBaseMetadata {
	struct TArray<struct FRigElementKey> Value; // 0x20(0x10)
};

// ScriptStruct ControlRig.RigPoseElement
// Size: 0xf0 (Inherited: 0x00)
struct FRigPoseElement {
	struct FCachedRigElement Index; // 0x00(0x18)
	char pad_18[0x8]; // 0x18(0x08)
	struct FTransform GlobalTransform; // 0x20(0x60)
	struct FTransform LocalTransform; // 0x80(0x60)
	float CurveValue; // 0xe0(0x04)
	char pad_E4[0xc]; // 0xe4(0x0c)
};

// ScriptStruct ControlRig.RigPose
// Size: 0x70 (Inherited: 0x00)
struct FRigPose {
	struct TArray<struct FRigPoseElement> Elements; // 0x00(0x10)
	int32_t HierarchyTopologyVersion; // 0x10(0x04)
	int32_t PoseHash; // 0x14(0x04)
	char pad_18[0x58]; // 0x18(0x58)
};

// ScriptStruct ControlRig.RigInfluenceEntryModifier
// Size: 0x10 (Inherited: 0x00)
struct FRigInfluenceEntryModifier {
	struct TArray<struct FRigElementKey> AffectedList; // 0x00(0x10)
};

// ScriptStruct ControlRig.RigUnit_SimBase
// Size: 0x08 (Inherited: 0x08)
struct FRigUnit_SimBase : FRigUnit {
};

// ScriptStruct ControlRig.RigUnit_AccumulateBase
// Size: 0x08 (Inherited: 0x08)
struct FRigUnit_AccumulateBase : FRigUnit_SimBase {
};

// ScriptStruct ControlRig.RigUnit_AccumulateFloatAdd
// Size: 0x20 (Inherited: 0x08)
struct FRigUnit_AccumulateFloatAdd : FRigUnit_AccumulateBase {
	float Increment; // 0x08(0x04)
	float InitialValue; // 0x0c(0x04)
	bool bIntegrateDeltaTime; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float Result; // 0x14(0x04)
	float AccumulatedValue; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct ControlRig.RigUnit_AccumulateVectorAdd
// Size: 0x70 (Inherited: 0x08)
struct FRigUnit_AccumulateVectorAdd : FRigUnit_AccumulateBase {
	struct FVector Increment; // 0x08(0x18)
	struct FVector InitialValue; // 0x20(0x18)
	bool bIntegrateDeltaTime; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FVector Result; // 0x40(0x18)
	struct FVector AccumulatedValue; // 0x58(0x18)
};

// ScriptStruct ControlRig.RigUnit_AccumulateFloatMul
// Size: 0x20 (Inherited: 0x08)
struct FRigUnit_AccumulateFloatMul : FRigUnit_AccumulateBase {
	float Multiplier; // 0x08(0x04)
	float InitialValue; // 0x0c(0x04)
	bool bIntegrateDeltaTime; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float Result; // 0x14(0x04)
	float AccumulatedValue; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct ControlRig.RigUnit_AccumulateVectorMul
// Size: 0x70 (Inherited: 0x08)
struct FRigUnit_AccumulateVectorMul : FRigUnit_AccumulateBase {
	struct FVector Multiplier; // 0x08(0x18)
	struct FVector InitialValue; // 0x20(0x18)
	bool bIntegrateDeltaTime; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FVector Result; // 0x40(0x18)
	struct FVector AccumulatedValue; // 0x58(0x18)
};

// ScriptStruct ControlRig.RigUnit_AccumulateQuatMul
// Size: 0xa0 (Inherited: 0x08)
struct FRigUnit_AccumulateQuatMul : FRigUnit_AccumulateBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat Multiplier; // 0x10(0x20)
	struct FQuat InitialValue; // 0x30(0x20)
	bool bFlipOrder; // 0x50(0x01)
	bool bIntegrateDeltaTime; // 0x51(0x01)
	char pad_52[0xe]; // 0x52(0x0e)
	struct FQuat Result; // 0x60(0x20)
	struct FQuat AccumulatedValue; // 0x80(0x20)
};

// ScriptStruct ControlRig.RigUnit_AccumulateTransformMul
// Size: 0x1a0 (Inherited: 0x08)
struct FRigUnit_AccumulateTransformMul : FRigUnit_AccumulateBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Multiplier; // 0x10(0x60)
	struct FTransform InitialValue; // 0x70(0x60)
	bool bFlipOrder; // 0xd0(0x01)
	bool bIntegrateDeltaTime; // 0xd1(0x01)
	char pad_D2[0xe]; // 0xd2(0x0e)
	struct FTransform Result; // 0xe0(0x60)
	struct FTransform AccumulatedValue; // 0x140(0x60)
};

// ScriptStruct ControlRig.RigUnit_AccumulateFloatLerp
// Size: 0x20 (Inherited: 0x08)
struct FRigUnit_AccumulateFloatLerp : FRigUnit_AccumulateBase {
	float TargetValue; // 0x08(0x04)
	float InitialValue; // 0x0c(0x04)
	float Blend; // 0x10(0x04)
	bool bIntegrateDeltaTime; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float Result; // 0x18(0x04)
	float AccumulatedValue; // 0x1c(0x04)
};

// ScriptStruct ControlRig.RigUnit_AccumulateVectorLerp
// Size: 0x70 (Inherited: 0x08)
struct FRigUnit_AccumulateVectorLerp : FRigUnit_AccumulateBase {
	struct FVector TargetValue; // 0x08(0x18)
	struct FVector InitialValue; // 0x20(0x18)
	float Blend; // 0x38(0x04)
	bool bIntegrateDeltaTime; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct FVector Result; // 0x40(0x18)
	struct FVector AccumulatedValue; // 0x58(0x18)
};

// ScriptStruct ControlRig.RigUnit_AccumulateQuatLerp
// Size: 0xa0 (Inherited: 0x08)
struct FRigUnit_AccumulateQuatLerp : FRigUnit_AccumulateBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat TargetValue; // 0x10(0x20)
	struct FQuat InitialValue; // 0x30(0x20)
	float Blend; // 0x50(0x04)
	bool bIntegrateDeltaTime; // 0x54(0x01)
	char pad_55[0xb]; // 0x55(0x0b)
	struct FQuat Result; // 0x60(0x20)
	struct FQuat AccumulatedValue; // 0x80(0x20)
};

// ScriptStruct ControlRig.RigUnit_AccumulateTransformLerp
// Size: 0x1a0 (Inherited: 0x08)
struct FRigUnit_AccumulateTransformLerp : FRigUnit_AccumulateBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform TargetValue; // 0x10(0x60)
	struct FTransform InitialValue; // 0x70(0x60)
	float Blend; // 0xd0(0x04)
	bool bIntegrateDeltaTime; // 0xd4(0x01)
	char pad_D5[0xb]; // 0xd5(0x0b)
	struct FTransform Result; // 0xe0(0x60)
	struct FTransform AccumulatedValue; // 0x140(0x60)
};

// ScriptStruct ControlRig.RigUnit_AccumulateFloatRange
// Size: 0x20 (Inherited: 0x08)
struct FRigUnit_AccumulateFloatRange : FRigUnit_AccumulateBase {
	float Value; // 0x08(0x04)
	float Minimum; // 0x0c(0x04)
	float Maximum; // 0x10(0x04)
	float AccumulatedMinimum; // 0x14(0x04)
	float AccumulatedMaximum; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct ControlRig.RigUnit_AccumulateVectorRange
// Size: 0x80 (Inherited: 0x08)
struct FRigUnit_AccumulateVectorRange : FRigUnit_AccumulateBase {
	struct FVector Value; // 0x08(0x18)
	struct FVector Minimum; // 0x20(0x18)
	struct FVector Maximum; // 0x38(0x18)
	struct FVector AccumulatedMinimum; // 0x50(0x18)
	struct FVector AccumulatedMaximum; // 0x68(0x18)
};

// ScriptStruct ControlRig.RigUnit_AddBoneTransform
// Size: 0xc0 (Inherited: 0x38)
struct FRigUnit_AddBoneTransform : FRigUnitMutable {
	struct FName bone; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FTransform Transform; // 0x40(0x60)
	float Weight; // 0xa0(0x04)
	bool bPostMultiply; // 0xa4(0x01)
	bool bPropagateToChildren; // 0xa5(0x01)
	char pad_A6[0x2]; // 0xa6(0x02)
	struct FCachedRigElement CachedBone; // 0xa8(0x18)
};

// ScriptStruct ControlRig.RigUnit_AimBone_Target
// Size: 0x40 (Inherited: 0x00)
struct FRigUnit_AimBone_Target {
	float Weight; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FVector Axis; // 0x08(0x18)
	struct FVector Target; // 0x20(0x18)
	enum class EControlRigVectorKind Kind; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct FName Space; // 0x3c(0x04)
};

// ScriptStruct ControlRig.RigUnit_AimItem_Target
// Size: 0x48 (Inherited: 0x00)
struct FRigUnit_AimItem_Target {
	float Weight; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FVector Axis; // 0x08(0x18)
	struct FVector Target; // 0x20(0x18)
	enum class EControlRigVectorKind Kind; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct FRigElementKey Space; // 0x3c(0x08)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct ControlRig.RigUnit_AimBone_DebugSettings
// Size: 0x70 (Inherited: 0x00)
struct FRigUnit_AimBone_DebugSettings {
	bool bEnabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Scale; // 0x04(0x04)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform WorldOffset; // 0x10(0x60)
};

// ScriptStruct ControlRig.RigUnit_HighlevelBase
// Size: 0x08 (Inherited: 0x08)
struct FRigUnit_HighlevelBase : FRigUnit {
};

// ScriptStruct ControlRig.RigUnit_AimBoneMath
// Size: 0x210 (Inherited: 0x08)
struct FRigUnit_AimBoneMath : FRigUnit_HighlevelBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform InputTransform; // 0x10(0x60)
	struct FRigUnit_AimItem_Target Primary; // 0x70(0x48)
	struct FRigUnit_AimItem_Target Secondary; // 0xb8(0x48)
	float Weight; // 0x100(0x04)
	char pad_104[0xc]; // 0x104(0x0c)
	struct FTransform Result; // 0x110(0x60)
	struct FRigUnit_AimBone_DebugSettings DebugSettings; // 0x170(0x70)
	struct FCachedRigElement PrimaryCachedSpace; // 0x1e0(0x18)
	struct FCachedRigElement SecondaryCachedSpace; // 0x1f8(0x18)
};

// ScriptStruct ControlRig.RigUnit_HighlevelBaseMutable
// Size: 0x38 (Inherited: 0x38)
struct FRigUnit_HighlevelBaseMutable : FRigUnitMutable {
};

// ScriptStruct ControlRig.RigUnit_AimBone
// Size: 0x190 (Inherited: 0x38)
struct FRigUnit_AimBone : FRigUnit_HighlevelBaseMutable {
	struct FName bone; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FRigUnit_AimBone_Target Primary; // 0x40(0x40)
	struct FRigUnit_AimBone_Target Secondary; // 0x80(0x40)
	float Weight; // 0xc0(0x04)
	bool bPropagateToChildren; // 0xc4(0x01)
	char pad_C5[0xb]; // 0xc5(0x0b)
	struct FRigUnit_AimBone_DebugSettings DebugSettings; // 0xd0(0x70)
	struct FCachedRigElement CachedBoneIndex; // 0x140(0x18)
	struct FCachedRigElement PrimaryCachedSpace; // 0x158(0x18)
	struct FCachedRigElement SecondaryCachedSpace; // 0x170(0x18)
	char pad_188[0x8]; // 0x188(0x08)
};

// ScriptStruct ControlRig.RigUnit_AimItem
// Size: 0x1a0 (Inherited: 0x38)
struct FRigUnit_AimItem : FRigUnit_HighlevelBaseMutable {
	struct FRigElementKey Item; // 0x38(0x08)
	struct FRigUnit_AimItem_Target Primary; // 0x40(0x48)
	struct FRigUnit_AimItem_Target Secondary; // 0x88(0x48)
	float Weight; // 0xd0(0x04)
	char pad_D4[0xc]; // 0xd4(0x0c)
	struct FRigUnit_AimBone_DebugSettings DebugSettings; // 0xe0(0x70)
	struct FCachedRigElement CachedItem; // 0x150(0x18)
	struct FCachedRigElement PrimaryCachedSpace; // 0x168(0x18)
	struct FCachedRigElement SecondaryCachedSpace; // 0x180(0x18)
	char pad_198[0x8]; // 0x198(0x08)
};

// ScriptStruct ControlRig.AimTarget
// Size: 0x90 (Inherited: 0x00)
struct FAimTarget {
	float Weight; // 0x00(0x04)
	char pad_4[0xc]; // 0x04(0x0c)
	struct FTransform Transform; // 0x10(0x60)
	struct FVector AlignVector; // 0x70(0x18)
	char pad_88[0x8]; // 0x88(0x08)
};

// ScriptStruct ControlRig.RigUnit_AimConstraint_WorkData
// Size: 0x10 (Inherited: 0x00)
struct FRigUnit_AimConstraint_WorkData {
	struct TArray<struct FConstraintData> ConstraintData; // 0x00(0x10)
};

// ScriptStruct ControlRig.RigUnit_AimConstraint
// Size: 0xa0 (Inherited: 0x38)
struct FRigUnit_AimConstraint : FRigUnitMutable {
	struct FName Joint; // 0x38(0x04)
	enum class EAimMode AimMode; // 0x3c(0x01)
	enum class EAimMode UpMode; // 0x3d(0x01)
	char pad_3E[0x2]; // 0x3e(0x02)
	struct FVector AimVector; // 0x40(0x18)
	struct FVector UpVector; // 0x58(0x18)
	struct TArray<struct FAimTarget> AimTargets; // 0x70(0x10)
	struct TArray<struct FAimTarget> UpTargets; // 0x80(0x10)
	struct FRigUnit_AimConstraint_WorkData WorkData; // 0x90(0x10)
};

// ScriptStruct ControlRig.RigUnit_AlphaInterp
// Size: 0x78 (Inherited: 0x08)
struct FRigUnit_AlphaInterp : FRigUnit_SimBase {
	float Value; // 0x08(0x04)
	float Scale; // 0x0c(0x04)
	float Bias; // 0x10(0x04)
	bool bMapRange; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FInputRange InRange; // 0x18(0x08)
	struct FInputRange OutRange; // 0x20(0x08)
	bool bClampResult; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float ClampMin; // 0x2c(0x04)
	float ClampMax; // 0x30(0x04)
	bool bInterpResult; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	float InterpSpeedIncreasing; // 0x38(0x04)
	float InterpSpeedDecreasing; // 0x3c(0x04)
	float Result; // 0x40(0x04)
	struct FInputScaleBiasClamp ScaleBiasClamp; // 0x44(0x30)
	char pad_74[0x4]; // 0x74(0x04)
};

// ScriptStruct ControlRig.RigUnit_AlphaInterpVector
// Size: 0xa0 (Inherited: 0x08)
struct FRigUnit_AlphaInterpVector : FRigUnit_SimBase {
	struct FVector Value; // 0x08(0x18)
	float Scale; // 0x20(0x04)
	float Bias; // 0x24(0x04)
	bool bMapRange; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	struct FInputRange InRange; // 0x2c(0x08)
	struct FInputRange OutRange; // 0x34(0x08)
	bool bClampResult; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	float ClampMin; // 0x40(0x04)
	float ClampMax; // 0x44(0x04)
	bool bInterpResult; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	float InterpSpeedIncreasing; // 0x4c(0x04)
	float InterpSpeedDecreasing; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct FVector Result; // 0x58(0x18)
	struct FInputScaleBiasClamp ScaleBiasClamp; // 0x70(0x30)
};

// ScriptStruct ControlRig.RigUnit_AlphaInterpQuat
// Size: 0xc0 (Inherited: 0x08)
struct FRigUnit_AlphaInterpQuat : FRigUnit_SimBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat Value; // 0x10(0x20)
	float Scale; // 0x30(0x04)
	float Bias; // 0x34(0x04)
	bool bMapRange; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct FInputRange InRange; // 0x3c(0x08)
	struct FInputRange OutRange; // 0x44(0x08)
	bool bClampResult; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	float ClampMin; // 0x50(0x04)
	float ClampMax; // 0x54(0x04)
	bool bInterpResult; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	float InterpSpeedIncreasing; // 0x5c(0x04)
	float InterpSpeedDecreasing; // 0x60(0x04)
	char pad_64[0xc]; // 0x64(0x0c)
	struct FQuat Result; // 0x70(0x20)
	struct FInputScaleBiasClamp ScaleBiasClamp; // 0x90(0x30)
};

// ScriptStruct ControlRig.RigDispatch_AnimAttributeBase
// Size: 0x50 (Inherited: 0x18)
struct FRigDispatch_AnimAttributeBase : FRigDispatchFactory {
	char pad_18[0x38]; // 0x18(0x38)
};

// ScriptStruct ControlRig.RigDispatch_GetAnimAttribute
// Size: 0x50 (Inherited: 0x50)
struct FRigDispatch_GetAnimAttribute : FRigDispatch_AnimAttributeBase {
};

// ScriptStruct ControlRig.RigDispatch_SetAnimAttribute
// Size: 0x50 (Inherited: 0x50)
struct FRigDispatch_SetAnimAttribute : FRigDispatch_AnimAttributeBase {
};

// ScriptStruct ControlRig.RigUnit_AnimBase
// Size: 0x08 (Inherited: 0x08)
struct FRigUnit_AnimBase : FRigUnit {
};

// ScriptStruct ControlRig.RigUnit_AnimEasingType
// Size: 0x10 (Inherited: 0x08)
struct FRigUnit_AnimEasingType : FRigUnit_AnimBase {
	enum class EControlRigAnimEasingType Type; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct ControlRig.RigUnit_AnimEasing
// Size: 0x28 (Inherited: 0x08)
struct FRigUnit_AnimEasing : FRigUnit_AnimBase {
	float Value; // 0x08(0x04)
	enum class EControlRigAnimEasingType Type; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float SourceMinimum; // 0x10(0x04)
	float SourceMaximum; // 0x14(0x04)
	float TargetMinimum; // 0x18(0x04)
	float TargetMaximum; // 0x1c(0x04)
	float Result; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct ControlRig.RigUnit_AnimEvalRichCurve
// Size: 0xb0 (Inherited: 0x08)
struct FRigUnit_AnimEvalRichCurve : FRigUnit_AnimBase {
	float Value; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FRuntimeFloatCurve Curve; // 0x10(0x88)
	float SourceMinimum; // 0x98(0x04)
	float SourceMaximum; // 0x9c(0x04)
	float TargetMinimum; // 0xa0(0x04)
	float TargetMaximum; // 0xa4(0x04)
	float Result; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
};

// ScriptStruct ControlRig.RigUnit_AnimRichCurve
// Size: 0x90 (Inherited: 0x08)
struct FRigUnit_AnimRichCurve : FRigUnit_AnimBase {
	struct FRuntimeFloatCurve Curve; // 0x08(0x88)
};

// ScriptStruct ControlRig.RigUnit_ApplyFK
// Size: 0x120 (Inherited: 0x38)
struct FRigUnit_ApplyFK : FRigUnitMutable {
	struct FName Joint; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FTransform Transform; // 0x40(0x60)
	struct FTransformFilter Filter; // 0xa0(0x09)
	enum class EApplyTransformMode ApplyTransformMode; // 0xa9(0x01)
	enum class ETransformSpaceMode ApplyTransformSpace; // 0xaa(0x01)
	char pad_AB[0x5]; // 0xab(0x05)
	struct FTransform BaseTransform; // 0xb0(0x60)
	struct FName BaseJoint; // 0x110(0x04)
	char pad_114[0xc]; // 0x114(0x0c)
};

// ScriptStruct ControlRig.RigUnit_BeginExecution
// Size: 0x38 (Inherited: 0x08)
struct FRigUnit_BeginExecution : FRigUnit {
	struct FControlRigExecuteContext ExecuteContext; // 0x08(0x30)
};

// ScriptStruct ControlRig.BlendTarget
// Size: 0x70 (Inherited: 0x00)
struct FBlendTarget {
	struct FTransform Transform; // 0x00(0x60)
	float Weight; // 0x60(0x04)
	char pad_64[0xc]; // 0x64(0x0c)
};

// ScriptStruct ControlRig.RigUnit_BlendTransform
// Size: 0xe0 (Inherited: 0x08)
struct FRigUnit_BlendTransform : FRigUnit {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Source; // 0x10(0x60)
	struct TArray<struct FBlendTarget> Targets; // 0x70(0x10)
	struct FTransform Result; // 0x80(0x60)
};

// ScriptStruct ControlRig.RigUnit_BoneHarmonics_BoneTarget
// Size: 0x08 (Inherited: 0x00)
struct FRigUnit_BoneHarmonics_BoneTarget {
	struct FName bone; // 0x00(0x04)
	float Ratio; // 0x04(0x04)
};

// ScriptStruct ControlRig.RigUnit_Harmonics_TargetItem
// Size: 0x0c (Inherited: 0x00)
struct FRigUnit_Harmonics_TargetItem {
	struct FRigElementKey Item; // 0x00(0x08)
	float Ratio; // 0x08(0x04)
};

// ScriptStruct ControlRig.RigUnit_BoneHarmonics_WorkData
// Size: 0x28 (Inherited: 0x00)
struct FRigUnit_BoneHarmonics_WorkData {
	struct TArray<struct FCachedRigElement> CachedItems; // 0x00(0x10)
	struct FVector WaveTime; // 0x10(0x18)
};

// ScriptStruct ControlRig.RigUnit_BoneHarmonics
// Size: 0xf8 (Inherited: 0x38)
struct FRigUnit_BoneHarmonics : FRigUnit_HighlevelBaseMutable {
	struct TArray<struct FRigUnit_BoneHarmonics_BoneTarget> Bones; // 0x38(0x10)
	struct FVector WaveSpeed; // 0x48(0x18)
	struct FVector WaveFrequency; // 0x60(0x18)
	struct FVector WaveAmplitude; // 0x78(0x18)
	struct FVector WaveOffset; // 0x90(0x18)
	struct FVector WaveNoise; // 0xa8(0x18)
	enum class EControlRigAnimEasingType WaveEase; // 0xc0(0x01)
	char pad_C1[0x3]; // 0xc1(0x03)
	float WaveMinimum; // 0xc4(0x04)
	float WaveMaximum; // 0xc8(0x04)
	enum class EEulerRotationOrder RotationOrder; // 0xcc(0x01)
	bool bPropagateToChildren; // 0xcd(0x01)
	char pad_CE[0x2]; // 0xce(0x02)
	struct FRigUnit_BoneHarmonics_WorkData WorkData; // 0xd0(0x28)
};

// ScriptStruct ControlRig.RigUnit_ItemHarmonics
// Size: 0xf8 (Inherited: 0x38)
struct FRigUnit_ItemHarmonics : FRigUnit_HighlevelBaseMutable {
	struct TArray<struct FRigUnit_Harmonics_TargetItem> Targets; // 0x38(0x10)
	struct FVector WaveSpeed; // 0x48(0x18)
	struct FVector WaveFrequency; // 0x60(0x18)
	struct FVector WaveAmplitude; // 0x78(0x18)
	struct FVector WaveOffset; // 0x90(0x18)
	struct FVector WaveNoise; // 0xa8(0x18)
	enum class EControlRigAnimEasingType WaveEase; // 0xc0(0x01)
	char pad_C1[0x3]; // 0xc1(0x03)
	float WaveMinimum; // 0xc4(0x04)
	float WaveMaximum; // 0xc8(0x04)
	enum class EEulerRotationOrder RotationOrder; // 0xcc(0x01)
	char pad_CD[0x3]; // 0xcd(0x03)
	struct FRigUnit_BoneHarmonics_WorkData WorkData; // 0xd0(0x28)
};

// ScriptStruct ControlRig.RigUnit_Item
// Size: 0x10 (Inherited: 0x08)
struct FRigUnit_Item : FRigUnit {
	struct FRigElementKey Item; // 0x08(0x08)
};

// ScriptStruct ControlRig.RigUnit_BoneName
// Size: 0x10 (Inherited: 0x08)
struct FRigUnit_BoneName : FRigUnit {
	struct FName bone; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct ControlRig.RigUnit_SpaceName
// Size: 0x10 (Inherited: 0x08)
struct FRigUnit_SpaceName : FRigUnit {
	struct FName Space; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct ControlRig.RigUnit_ControlName
// Size: 0x10 (Inherited: 0x08)
struct FRigUnit_ControlName : FRigUnit {
	struct FName Control; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct ControlRig.RigUnit_CCDIK_RotationLimit
// Size: 0x08 (Inherited: 0x00)
struct FRigUnit_CCDIK_RotationLimit {
	struct FName bone; // 0x00(0x04)
	float Limit; // 0x04(0x04)
};

// ScriptStruct ControlRig.RigUnit_CCDIK_RotationLimitPerItem
// Size: 0x0c (Inherited: 0x00)
struct FRigUnit_CCDIK_RotationLimitPerItem {
	struct FRigElementKey Item; // 0x00(0x08)
	float Limit; // 0x08(0x04)
};

// ScriptStruct ControlRig.RigUnit_CCDIK_WorkData
// Size: 0x58 (Inherited: 0x00)
struct FRigUnit_CCDIK_WorkData {
	struct TArray<struct FCCDIKChainLink> Chain; // 0x00(0x10)
	struct TArray<struct FCachedRigElement> CachedItems; // 0x10(0x10)
	struct TArray<int32_t> RotationLimitIndex; // 0x20(0x10)
	struct TArray<float> RotationLimitsPerItem; // 0x30(0x10)
	struct FCachedRigElement CachedEffector; // 0x40(0x18)
};

// ScriptStruct ControlRig.RigUnit_CCDIK
// Size: 0x130 (Inherited: 0x38)
struct FRigUnit_CCDIK : FRigUnit_HighlevelBaseMutable {
	struct FName StartBone; // 0x38(0x04)
	struct FName EffectorBone; // 0x3c(0x04)
	struct FTransform EffectorTransform; // 0x40(0x60)
	float Precision; // 0xa0(0x04)
	float Weight; // 0xa4(0x04)
	int32_t MaxIterations; // 0xa8(0x04)
	bool bStartFromTail; // 0xac(0x01)
	char pad_AD[0x3]; // 0xad(0x03)
	float BaseRotationLimit; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct TArray<struct FRigUnit_CCDIK_RotationLimit> RotationLimits; // 0xb8(0x10)
	bool bPropagateToChildren; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
	struct FRigUnit_CCDIK_WorkData WorkData; // 0xd0(0x58)
	char pad_128[0x8]; // 0x128(0x08)
};

// ScriptStruct ControlRig.RigUnit_CCDIKPerItem
// Size: 0x140 (Inherited: 0x38)
struct FRigUnit_CCDIKPerItem : FRigUnit_HighlevelBaseMutable {
	struct FRigElementKeyCollection Items; // 0x38(0x10)
	char pad_48[0x8]; // 0x48(0x08)
	struct FTransform EffectorTransform; // 0x50(0x60)
	float Precision; // 0xb0(0x04)
	float Weight; // 0xb4(0x04)
	int32_t MaxIterations; // 0xb8(0x04)
	bool bStartFromTail; // 0xbc(0x01)
	char pad_BD[0x3]; // 0xbd(0x03)
	float BaseRotationLimit; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct TArray<struct FRigUnit_CCDIK_RotationLimitPerItem> RotationLimits; // 0xc8(0x10)
	bool bPropagateToChildren; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
	struct FRigUnit_CCDIK_WorkData WorkData; // 0xe0(0x58)
	char pad_138[0x8]; // 0x138(0x08)
};

// ScriptStruct ControlRig.RigUnit_CCDIKItemArray
// Size: 0x140 (Inherited: 0x38)
struct FRigUnit_CCDIKItemArray : FRigUnit_HighlevelBaseMutable {
	struct TArray<struct FRigElementKey> Items; // 0x38(0x10)
	char pad_48[0x8]; // 0x48(0x08)
	struct FTransform EffectorTransform; // 0x50(0x60)
	float Precision; // 0xb0(0x04)
	float Weight; // 0xb4(0x04)
	int32_t MaxIterations; // 0xb8(0x04)
	bool bStartFromTail; // 0xbc(0x01)
	char pad_BD[0x3]; // 0xbd(0x03)
	float BaseRotationLimit; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct TArray<struct FRigUnit_CCDIK_RotationLimitPerItem> RotationLimits; // 0xc8(0x10)
	bool bPropagateToChildren; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
	struct FRigUnit_CCDIK_WorkData WorkData; // 0xe0(0x58)
	char pad_138[0x8]; // 0x138(0x08)
};

// ScriptStruct ControlRig.RigUnit_ChainHarmonics_Reach
// Size: 0x48 (Inherited: 0x00)
struct FRigUnit_ChainHarmonics_Reach {
	bool bEnabled; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FVector ReachTarget; // 0x08(0x18)
	struct FVector ReachAxis; // 0x20(0x18)
	float ReachMinimum; // 0x38(0x04)
	float ReachMaximum; // 0x3c(0x04)
	enum class EControlRigAnimEasingType ReachEase; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// ScriptStruct ControlRig.RigUnit_ChainHarmonics_Wave
// Size: 0x78 (Inherited: 0x00)
struct FRigUnit_ChainHarmonics_Wave {
	bool bEnabled; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FVector WaveFrequency; // 0x08(0x18)
	struct FVector WaveAmplitude; // 0x20(0x18)
	struct FVector WaveOffset; // 0x38(0x18)
	struct FVector WaveNoise; // 0x50(0x18)
	float WaveMinimum; // 0x68(0x04)
	float WaveMaximum; // 0x6c(0x04)
	enum class EControlRigAnimEasingType WaveEase; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// ScriptStruct ControlRig.RigUnit_ChainHarmonics_Pendulum
// Size: 0x58 (Inherited: 0x00)
struct FRigUnit_ChainHarmonics_Pendulum {
	bool bEnabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float PendulumStiffness; // 0x04(0x04)
	struct FVector PendulumGravity; // 0x08(0x18)
	float PendulumBlend; // 0x20(0x04)
	float PendulumDrag; // 0x24(0x04)
	float PendulumMinimum; // 0x28(0x04)
	float PendulumMaximum; // 0x2c(0x04)
	enum class EControlRigAnimEasingType PendulumEase; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FVector UnwindAxis; // 0x38(0x18)
	float UnwindMinimum; // 0x50(0x04)
	float UnwindMaximum; // 0x54(0x04)
};

// ScriptStruct ControlRig.RigUnit_ChainHarmonics_WorkData
// Size: 0x98 (Inherited: 0x00)
struct FRigUnit_ChainHarmonics_WorkData {
	struct FVector Time; // 0x00(0x18)
	struct TArray<struct FCachedRigElement> Items; // 0x18(0x10)
	struct TArray<float> Ratio; // 0x28(0x10)
	struct TArray<struct FVector> LocalTip; // 0x38(0x10)
	struct TArray<struct FVector> PendulumTip; // 0x48(0x10)
	struct TArray<struct FVector> PendulumPosition; // 0x58(0x10)
	struct TArray<struct FVector> PendulumVelocity; // 0x68(0x10)
	struct TArray<struct FVector> HierarchyLine; // 0x78(0x10)
	struct TArray<struct FVector> VelocityLines; // 0x88(0x10)
};

// ScriptStruct ControlRig.RigUnit_ChainHarmonics
// Size: 0x300 (Inherited: 0x38)
struct FRigUnit_ChainHarmonics : FRigUnit_HighlevelBaseMutable {
	struct FName ChainRoot; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FVector Speed; // 0x40(0x18)
	struct FRigUnit_ChainHarmonics_Reach Reach; // 0x58(0x48)
	struct FRigUnit_ChainHarmonics_Wave Wave; // 0xa0(0x78)
	struct FRuntimeFloatCurve WaveCurve; // 0x118(0x88)
	struct FRigUnit_ChainHarmonics_Pendulum Pendulum; // 0x1a0(0x58)
	bool bDrawDebug; // 0x1f8(0x01)
	char pad_1F9[0x7]; // 0x1f9(0x07)
	struct FTransform DrawWorldOffset; // 0x200(0x60)
	struct FRigUnit_ChainHarmonics_WorkData WorkData; // 0x260(0x98)
	char pad_2F8[0x8]; // 0x2f8(0x08)
};

// ScriptStruct ControlRig.RigUnit_ChainHarmonicsPerItem
// Size: 0x300 (Inherited: 0x38)
struct FRigUnit_ChainHarmonicsPerItem : FRigUnit_HighlevelBaseMutable {
	struct FRigElementKey ChainRoot; // 0x38(0x08)
	struct FVector Speed; // 0x40(0x18)
	struct FRigUnit_ChainHarmonics_Reach Reach; // 0x58(0x48)
	struct FRigUnit_ChainHarmonics_Wave Wave; // 0xa0(0x78)
	struct FRuntimeFloatCurve WaveCurve; // 0x118(0x88)
	struct FRigUnit_ChainHarmonics_Pendulum Pendulum; // 0x1a0(0x58)
	bool bDrawDebug; // 0x1f8(0x01)
	char pad_1F9[0x7]; // 0x1f9(0x07)
	struct FTransform DrawWorldOffset; // 0x200(0x60)
	struct FRigUnit_ChainHarmonics_WorkData WorkData; // 0x260(0x98)
	char pad_2F8[0x8]; // 0x2f8(0x08)
};

// ScriptStruct ControlRig.RigUnit_CollectionBase
// Size: 0x08 (Inherited: 0x08)
struct FRigUnit_CollectionBase : FRigUnit {
};

// ScriptStruct ControlRig.RigUnit_CollectionBaseMutable
// Size: 0x38 (Inherited: 0x38)
struct FRigUnit_CollectionBaseMutable : FRigUnitMutable {
};

// ScriptStruct ControlRig.RigUnit_CollectionChain
// Size: 0x30 (Inherited: 0x08)
struct FRigUnit_CollectionChain : FRigUnit_CollectionBase {
	struct FRigElementKey FirstItem; // 0x08(0x08)
	struct FRigElementKey LastItem; // 0x10(0x08)
	bool Reverse; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FRigElementKeyCollection Collection; // 0x20(0x10)
};

// ScriptStruct ControlRig.RigUnit_CollectionChainArray
// Size: 0x30 (Inherited: 0x08)
struct FRigUnit_CollectionChainArray : FRigUnit_CollectionBase {
	struct FRigElementKey FirstItem; // 0x08(0x08)
	struct FRigElementKey LastItem; // 0x10(0x08)
	bool Reverse; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct TArray<struct FRigElementKey> Items; // 0x20(0x10)
};

// ScriptStruct ControlRig.RigUnit_CollectionNameSearch
// Size: 0x20 (Inherited: 0x08)
struct FRigUnit_CollectionNameSearch : FRigUnit_CollectionBase {
	struct FName PartialName; // 0x08(0x04)
	enum class ERigElementType TypeToSearch; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FRigElementKeyCollection Collection; // 0x10(0x10)
};

// ScriptStruct ControlRig.RigUnit_CollectionNameSearchArray
// Size: 0x20 (Inherited: 0x08)
struct FRigUnit_CollectionNameSearchArray : FRigUnit_CollectionBase {
	struct FName PartialName; // 0x08(0x04)
	enum class ERigElementType TypeToSearch; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct TArray<struct FRigElementKey> Items; // 0x10(0x10)
};

// ScriptStruct ControlRig.RigUnit_CollectionChildren
// Size: 0x28 (Inherited: 0x08)
struct FRigUnit_CollectionChildren : FRigUnit_CollectionBase {
	struct FRigElementKey Parent; // 0x08(0x08)
	bool bIncludeParent; // 0x10(0x01)
	bool bRecursive; // 0x11(0x01)
	enum class ERigElementType TypeToSearch; // 0x12(0x01)
	char pad_13[0x5]; // 0x13(0x05)
	struct FRigElementKeyCollection Collection; // 0x18(0x10)
};

// ScriptStruct ControlRig.RigUnit_CollectionChildrenArray
// Size: 0x28 (Inherited: 0x08)
struct FRigUnit_CollectionChildrenArray : FRigUnit_CollectionBase {
	struct FRigElementKey Parent; // 0x08(0x08)
	bool bIncludeParent; // 0x10(0x01)
	bool bRecursive; // 0x11(0x01)
	enum class ERigElementType TypeToSearch; // 0x12(0x01)
	char pad_13[0x5]; // 0x13(0x05)
	struct TArray<struct FRigElementKey> Items; // 0x18(0x10)
};

// ScriptStruct ControlRig.RigUnit_CollectionGetAll
// Size: 0x20 (Inherited: 0x08)
struct FRigUnit_CollectionGetAll : FRigUnit_CollectionBase {
	enum class ERigElementType TypeToSearch; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<struct FRigElementKey> Items; // 0x10(0x10)
};

// ScriptStruct ControlRig.RigUnit_CollectionReplaceItems
// Size: 0x38 (Inherited: 0x08)
struct FRigUnit_CollectionReplaceItems : FRigUnit_CollectionBase {
	struct FRigElementKeyCollection Items; // 0x08(0x10)
	struct FName Old; // 0x18(0x04)
	struct FName New; // 0x1c(0x04)
	bool RemoveInvalidItems; // 0x20(0x01)
	bool bAllowDuplicates; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)
	struct FRigElementKeyCollection Collection; // 0x28(0x10)
};

// ScriptStruct ControlRig.RigUnit_CollectionReplaceItemsArray
// Size: 0x38 (Inherited: 0x08)
struct FRigUnit_CollectionReplaceItemsArray : FRigUnit_CollectionBase {
	struct TArray<struct FRigElementKey> Items; // 0x08(0x10)
	struct FName Old; // 0x18(0x04)
	struct FName New; // 0x1c(0x04)
	bool RemoveInvalidItems; // 0x20(0x01)
	bool bAllowDuplicates; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)
	struct TArray<struct FRigElementKey> Result; // 0x28(0x10)
};

// ScriptStruct ControlRig.RigUnit_CollectionItems
// Size: 0x30 (Inherited: 0x08)
struct FRigUnit_CollectionItems : FRigUnit_CollectionBase {
	struct TArray<struct FRigElementKey> Items; // 0x08(0x10)
	bool bAllowDuplicates; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FRigElementKeyCollection Collection; // 0x20(0x10)
};

// ScriptStruct ControlRig.RigUnit_CollectionGetItems
// Size: 0x28 (Inherited: 0x08)
struct FRigUnit_CollectionGetItems : FRigUnit_CollectionBase {
	struct FRigElementKeyCollection Collection; // 0x08(0x10)
	struct TArray<struct FRigElementKey> Items; // 0x18(0x10)
};

// ScriptStruct ControlRig.RigUnit_CollectionGetParentIndices
// Size: 0x28 (Inherited: 0x08)
struct FRigUnit_CollectionGetParentIndices : FRigUnit_CollectionBase {
	struct FRigElementKeyCollection Collection; // 0x08(0x10)
	struct TArray<int32_t> ParentIndices; // 0x18(0x10)
};

// ScriptStruct ControlRig.RigUnit_CollectionGetParentIndicesItemArray
// Size: 0x28 (Inherited: 0x08)
struct FRigUnit_CollectionGetParentIndicesItemArray : FRigUnit_CollectionBase {
	struct TArray<struct FRigElementKey> Items; // 0x08(0x10)
	struct TArray<int32_t> ParentIndices; // 0x18(0x10)
};

// ScriptStruct ControlRig.RigUnit_CollectionUnion
// Size: 0x40 (Inherited: 0x08)
struct FRigUnit_CollectionUnion : FRigUnit_CollectionBase {
	struct FRigElementKeyCollection A; // 0x08(0x10)
	struct FRigElementKeyCollection B; // 0x18(0x10)
	bool bAllowDuplicates; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FRigElementKeyCollection Collection; // 0x30(0x10)
};

// ScriptStruct ControlRig.RigUnit_CollectionIntersection
// Size: 0x38 (Inherited: 0x08)
struct FRigUnit_CollectionIntersection : FRigUnit_CollectionBase {
	struct FRigElementKeyCollection A; // 0x08(0x10)
	struct FRigElementKeyCollection B; // 0x18(0x10)
	struct FRigElementKeyCollection Collection; // 0x28(0x10)
};

// ScriptStruct ControlRig.RigUnit_CollectionDifference
// Size: 0x38 (Inherited: 0x08)
struct FRigUnit_CollectionDifference : FRigUnit_CollectionBase {
	struct FRigElementKeyCollection A; // 0x08(0x10)
	struct FRigElementKeyCollection B; // 0x18(0x10)
	struct FRigElementKeyCollection Collection; // 0x28(0x10)
};

// ScriptStruct ControlRig.RigUnit_CollectionReverse
// Size: 0x28 (Inherited: 0x08)
struct FRigUnit_CollectionReverse : FRigUnit_CollectionBase {
	struct FRigElementKeyCollection Collection; // 0x08(0x10)
	struct FRigElementKeyCollection Reversed; // 0x18(0x10)
};

// ScriptStruct ControlRig.RigUnit_CollectionCount
// Size: 0x20 (Inherited: 0x08)
struct FRigUnit_CollectionCount : FRigUnit_CollectionBase {
	struct FRigElementKeyCollection Collection; // 0x08(0x10)
	int32_t Count; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct ControlRig.RigUnit_CollectionItemAtIndex
// Size: 0x28 (Inherited: 0x08)
struct FRigUnit_CollectionItemAtIndex : FRigUnit_CollectionBase {
	struct FRigElementKeyCollection Collection; // 0x08(0x10)
	int32_t Index; // 0x18(0x04)
	struct FRigElementKey Item; // 0x1c(0x08)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct ControlRig.RigUnit_CollectionLoop
// Size: 0x90 (Inherited: 0x38)
struct FRigUnit_CollectionLoop : FRigUnit_CollectionBaseMutable {
	struct FRigElementKeyCollection Collection; // 0x38(0x10)
	struct FRigElementKey Item; // 0x48(0x08)
	int32_t Index; // 0x50(0x04)
	int32_t Count; // 0x54(0x04)
	float Ratio; // 0x58(0x04)
	bool Continue; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	struct FControlRigExecuteContext Completed; // 0x60(0x30)
};

// ScriptStruct ControlRig.RigUnit_CollectionAddItem
// Size: 0x30 (Inherited: 0x08)
struct FRigUnit_CollectionAddItem : FRigUnit_CollectionBase {
	struct FRigElementKeyCollection Collection; // 0x08(0x10)
	struct FRigElementKey Item; // 0x18(0x08)
	struct FRigElementKeyCollection Result; // 0x20(0x10)
};

// ScriptStruct ControlRig.RigUnit_Control
// Size: 0x180 (Inherited: 0x08)
struct FRigUnit_Control : FRigUnit {
	struct FEulerTransform Transform; // 0x08(0x48)
	struct FTransform Base; // 0x50(0x60)
	struct FTransform InitTransform; // 0xb0(0x60)
	struct FTransform Result; // 0x110(0x60)
	struct FTransformFilter Filter; // 0x170(0x09)
	char pad_179[0x7]; // 0x179(0x07)
};

// ScriptStruct ControlRig.RigUnit_GetAnimationChannelBase
// Size: 0x20 (Inherited: 0x08)
struct FRigUnit_GetAnimationChannelBase : FRigUnit {
	struct FName Control; // 0x08(0x04)
	struct FName Channel; // 0x0c(0x04)
	bool bInitial; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FRigElementKey CachedChannelKey; // 0x14(0x08)
	int32_t CachedChannelHash; // 0x1c(0x04)
};

// ScriptStruct ControlRig.RigUnit_GetBoolAnimationChannel
// Size: 0x28 (Inherited: 0x20)
struct FRigUnit_GetBoolAnimationChannel : FRigUnit_GetAnimationChannelBase {
	bool Value; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct ControlRig.RigUnit_GetFloatAnimationChannel
// Size: 0x28 (Inherited: 0x20)
struct FRigUnit_GetFloatAnimationChannel : FRigUnit_GetAnimationChannelBase {
	float Value; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct ControlRig.RigUnit_GetIntAnimationChannel
// Size: 0x28 (Inherited: 0x20)
struct FRigUnit_GetIntAnimationChannel : FRigUnit_GetAnimationChannelBase {
	int32_t Value; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct ControlRig.RigUnit_GetVector2DAnimationChannel
// Size: 0x30 (Inherited: 0x20)
struct FRigUnit_GetVector2DAnimationChannel : FRigUnit_GetAnimationChannelBase {
	struct FVector2D Value; // 0x20(0x10)
};

// ScriptStruct ControlRig.RigUnit_GetVectorAnimationChannel
// Size: 0x38 (Inherited: 0x20)
struct FRigUnit_GetVectorAnimationChannel : FRigUnit_GetAnimationChannelBase {
	struct FVector Value; // 0x20(0x18)
};

// ScriptStruct ControlRig.RigUnit_GetRotatorAnimationChannel
// Size: 0x38 (Inherited: 0x20)
struct FRigUnit_GetRotatorAnimationChannel : FRigUnit_GetAnimationChannelBase {
	struct FRotator Value; // 0x20(0x18)
};

// ScriptStruct ControlRig.RigUnit_GetTransformAnimationChannel
// Size: 0x80 (Inherited: 0x20)
struct FRigUnit_GetTransformAnimationChannel : FRigUnit_GetAnimationChannelBase {
	struct FTransform Value; // 0x20(0x60)
};

// ScriptStruct ControlRig.RigUnit_SetAnimationChannelBase
// Size: 0x50 (Inherited: 0x20)
struct FRigUnit_SetAnimationChannelBase : FRigUnit_GetAnimationChannelBase {
	struct FControlRigExecuteContext ExecuteContext; // 0x20(0x30)
};

// ScriptStruct ControlRig.RigUnit_SetBoolAnimationChannel
// Size: 0x58 (Inherited: 0x50)
struct FRigUnit_SetBoolAnimationChannel : FRigUnit_SetAnimationChannelBase {
	bool Value; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// ScriptStruct ControlRig.RigUnit_SetFloatAnimationChannel
// Size: 0x58 (Inherited: 0x50)
struct FRigUnit_SetFloatAnimationChannel : FRigUnit_SetAnimationChannelBase {
	float Value; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct ControlRig.RigUnit_SetIntAnimationChannel
// Size: 0x58 (Inherited: 0x50)
struct FRigUnit_SetIntAnimationChannel : FRigUnit_SetAnimationChannelBase {
	int32_t Value; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct ControlRig.RigUnit_SetVector2DAnimationChannel
// Size: 0x60 (Inherited: 0x50)
struct FRigUnit_SetVector2DAnimationChannel : FRigUnit_SetAnimationChannelBase {
	struct FVector2D Value; // 0x50(0x10)
};

// ScriptStruct ControlRig.RigUnit_SetVectorAnimationChannel
// Size: 0x68 (Inherited: 0x50)
struct FRigUnit_SetVectorAnimationChannel : FRigUnit_SetAnimationChannelBase {
	struct FVector Value; // 0x50(0x18)
};

// ScriptStruct ControlRig.RigUnit_SetRotatorAnimationChannel
// Size: 0x68 (Inherited: 0x50)
struct FRigUnit_SetRotatorAnimationChannel : FRigUnit_SetAnimationChannelBase {
	struct FRotator Value; // 0x50(0x18)
};

// ScriptStruct ControlRig.RigUnit_SetTransformAnimationChannel
// Size: 0xb0 (Inherited: 0x50)
struct FRigUnit_SetTransformAnimationChannel : FRigUnit_SetAnimationChannelBase {
	struct FTransform Value; // 0x50(0x60)
};

// ScriptStruct ControlRig.RigUnit_Control_StaticMesh
// Size: 0x1e0 (Inherited: 0x180)
struct FRigUnit_Control_StaticMesh : FRigUnit_Control {
	struct FTransform MeshTransform; // 0x180(0x60)
};

// ScriptStruct ControlRig.RigUnit_ConvertTransform
// Size: 0xc0 (Inherited: 0x08)
struct FRigUnit_ConvertTransform : FRigUnit {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Input; // 0x10(0x60)
	struct FEulerTransform Result; // 0x70(0x48)
	char pad_B8[0x8]; // 0xb8(0x08)
};

// ScriptStruct ControlRig.RigUnit_ConvertEulerTransform
// Size: 0xb0 (Inherited: 0x08)
struct FRigUnit_ConvertEulerTransform : FRigUnit {
	struct FEulerTransform Input; // 0x08(0x48)
	struct FTransform Result; // 0x50(0x60)
};

// ScriptStruct ControlRig.RigUnit_ConvertRotation
// Size: 0x40 (Inherited: 0x08)
struct FRigUnit_ConvertRotation : FRigUnit {
	struct FRotator Input; // 0x08(0x18)
	struct FQuat Result; // 0x20(0x20)
};

// ScriptStruct ControlRig.RigUnit_ConvertVectorRotation
// Size: 0x40 (Inherited: 0x40)
struct FRigUnit_ConvertVectorRotation : FRigUnit_ConvertRotation {
};

// ScriptStruct ControlRig.RigUnit_ConvertQuaternion
// Size: 0x50 (Inherited: 0x08)
struct FRigUnit_ConvertQuaternion : FRigUnit {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat Input; // 0x10(0x20)
	struct FRotator Result; // 0x30(0x18)
	char pad_48[0x8]; // 0x48(0x08)
};

// ScriptStruct ControlRig.RigUnit_ConvertVectorToRotation
// Size: 0x38 (Inherited: 0x08)
struct FRigUnit_ConvertVectorToRotation : FRigUnit {
	struct FVector Input; // 0x08(0x18)
	struct FRotator Result; // 0x20(0x18)
};

// ScriptStruct ControlRig.RigUnit_ConvertVectorToQuaternion
// Size: 0x40 (Inherited: 0x08)
struct FRigUnit_ConvertVectorToQuaternion : FRigUnit {
	struct FVector Input; // 0x08(0x18)
	struct FQuat Result; // 0x20(0x20)
};

// ScriptStruct ControlRig.RigUnit_ConvertRotationToVector
// Size: 0x38 (Inherited: 0x08)
struct FRigUnit_ConvertRotationToVector : FRigUnit {
	struct FRotator Input; // 0x08(0x18)
	struct FVector Result; // 0x20(0x18)
};

// ScriptStruct ControlRig.RigUnit_ConvertQuaternionToVector
// Size: 0x50 (Inherited: 0x08)
struct FRigUnit_ConvertQuaternionToVector : FRigUnit {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat Input; // 0x10(0x20)
	struct FVector Result; // 0x30(0x18)
	char pad_48[0x8]; // 0x48(0x08)
};

// ScriptStruct ControlRig.RigUnit_ToSwingAndTwist
// Size: 0x90 (Inherited: 0x08)
struct FRigUnit_ToSwingAndTwist : FRigUnit {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat Input; // 0x10(0x20)
	struct FVector TwistAxis; // 0x30(0x18)
	char pad_48[0x8]; // 0x48(0x08)
	struct FQuat Swing; // 0x50(0x20)
	struct FQuat Twist; // 0x70(0x20)
};

// ScriptStruct ControlRig.RigDispatch_CoreBase
// Size: 0x18 (Inherited: 0x18)
struct FRigDispatch_CoreBase : FRigDispatchFactory {
};

// ScriptStruct ControlRig.RigDispatch_CoreEquals
// Size: 0x18 (Inherited: 0x18)
struct FRigDispatch_CoreEquals : FRigDispatch_CoreBase {
};

// ScriptStruct ControlRig.RigDispatch_CoreNotEquals
// Size: 0x18 (Inherited: 0x18)
struct FRigDispatch_CoreNotEquals : FRigDispatch_CoreEquals {
};

// ScriptStruct ControlRig.RigUnit_DebugBase
// Size: 0x08 (Inherited: 0x08)
struct FRigUnit_DebugBase : FRigUnit {
};

// ScriptStruct ControlRig.RigUnit_DebugBaseMutable
// Size: 0x38 (Inherited: 0x38)
struct FRigUnit_DebugBaseMutable : FRigUnitMutable {
};

// ScriptStruct ControlRig.RigUnit_DebugBezier
// Size: 0x130 (Inherited: 0x38)
struct FRigUnit_DebugBezier : FRigUnit_DebugBaseMutable {
	struct FCRFourPointBezier Bezier; // 0x38(0x60)
	float MinimumU; // 0x98(0x04)
	float MaximumU; // 0x9c(0x04)
	struct FLinearColor Color; // 0xa0(0x10)
	float Thickness; // 0xb0(0x04)
	int32_t Detail; // 0xb4(0x04)
	struct FName Space; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct FTransform WorldOffset; // 0xc0(0x60)
	bool bEnabled; // 0x120(0x01)
	char pad_121[0xf]; // 0x121(0x0f)
};

// ScriptStruct ControlRig.RigUnit_DebugBezierItemSpace
// Size: 0x130 (Inherited: 0x38)
struct FRigUnit_DebugBezierItemSpace : FRigUnit_DebugBaseMutable {
	struct FCRFourPointBezier Bezier; // 0x38(0x60)
	float MinimumU; // 0x98(0x04)
	float MaximumU; // 0x9c(0x04)
	struct FLinearColor Color; // 0xa0(0x10)
	float Thickness; // 0xb0(0x04)
	int32_t Detail; // 0xb4(0x04)
	struct FRigElementKey Space; // 0xb8(0x08)
	struct FTransform WorldOffset; // 0xc0(0x60)
	bool bEnabled; // 0x120(0x01)
	char pad_121[0xf]; // 0x121(0x0f)
};

// ScriptStruct ControlRig.RigUnit_DebugHierarchy
// Size: 0xc0 (Inherited: 0x38)
struct FRigUnit_DebugHierarchy : FRigUnit_DebugBaseMutable {
	float Scale; // 0x38(0x04)
	struct FLinearColor Color; // 0x3c(0x10)
	float Thickness; // 0x4c(0x04)
	struct FTransform WorldOffset; // 0x50(0x60)
	bool bEnabled; // 0xb0(0x01)
	char pad_B1[0xf]; // 0xb1(0x0f)
};

// ScriptStruct ControlRig.RigUnit_DebugPose
// Size: 0x130 (Inherited: 0x38)
struct FRigUnit_DebugPose : FRigUnit_DebugBaseMutable {
	struct FRigPose Pose; // 0x38(0x70)
	float Scale; // 0xa8(0x04)
	struct FLinearColor Color; // 0xac(0x10)
	float Thickness; // 0xbc(0x04)
	struct FTransform WorldOffset; // 0xc0(0x60)
	bool bEnabled; // 0x120(0x01)
	char pad_121[0xf]; // 0x121(0x0f)
};

// ScriptStruct ControlRig.RigUnit_DebugLine
// Size: 0xf0 (Inherited: 0x38)
struct FRigUnit_DebugLine : FRigUnit_DebugBaseMutable {
	struct FVector A; // 0x38(0x18)
	struct FVector B; // 0x50(0x18)
	struct FLinearColor Color; // 0x68(0x10)
	float Thickness; // 0x78(0x04)
	struct FName Space; // 0x7c(0x04)
	struct FTransform WorldOffset; // 0x80(0x60)
	bool bEnabled; // 0xe0(0x01)
	char pad_E1[0xf]; // 0xe1(0x0f)
};

// ScriptStruct ControlRig.RigUnit_DebugLineItemSpace
// Size: 0x100 (Inherited: 0x38)
struct FRigUnit_DebugLineItemSpace : FRigUnit_DebugBaseMutable {
	struct FVector A; // 0x38(0x18)
	struct FVector B; // 0x50(0x18)
	struct FLinearColor Color; // 0x68(0x10)
	float Thickness; // 0x78(0x04)
	struct FRigElementKey Space; // 0x7c(0x08)
	char pad_84[0xc]; // 0x84(0x0c)
	struct FTransform WorldOffset; // 0x90(0x60)
	bool bEnabled; // 0xf0(0x01)
	char pad_F1[0xf]; // 0xf1(0x0f)
};

// ScriptStruct ControlRig.RigUnit_DebugLineStrip
// Size: 0xd0 (Inherited: 0x38)
struct FRigUnit_DebugLineStrip : FRigUnit_DebugBaseMutable {
	struct TArray<struct FVector> Points; // 0x38(0x10)
	struct FLinearColor Color; // 0x48(0x10)
	float Thickness; // 0x58(0x04)
	struct FName Space; // 0x5c(0x04)
	struct FTransform WorldOffset; // 0x60(0x60)
	bool bEnabled; // 0xc0(0x01)
	char pad_C1[0xf]; // 0xc1(0x0f)
};

// ScriptStruct ControlRig.RigUnit_DebugLineStripItemSpace
// Size: 0xe0 (Inherited: 0x38)
struct FRigUnit_DebugLineStripItemSpace : FRigUnit_DebugBaseMutable {
	struct TArray<struct FVector> Points; // 0x38(0x10)
	struct FLinearColor Color; // 0x48(0x10)
	float Thickness; // 0x58(0x04)
	struct FRigElementKey Space; // 0x5c(0x08)
	char pad_64[0xc]; // 0x64(0x0c)
	struct FTransform WorldOffset; // 0x70(0x60)
	bool bEnabled; // 0xd0(0x01)
	char pad_D1[0xf]; // 0xd1(0x0f)
};

// ScriptStruct ControlRig.RigUnit_DebugPoint
// Size: 0xb0 (Inherited: 0x08)
struct FRigUnit_DebugPoint : FRigUnit_DebugBase {
	struct FVector Vector; // 0x08(0x18)
	enum class ERigUnitDebugPointMode Mode; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	struct FLinearColor Color; // 0x24(0x10)
	float Scale; // 0x34(0x04)
	float Thickness; // 0x38(0x04)
	struct FName Space; // 0x3c(0x04)
	struct FTransform WorldOffset; // 0x40(0x60)
	bool bEnabled; // 0xa0(0x01)
	char pad_A1[0xf]; // 0xa1(0x0f)
};

// ScriptStruct ControlRig.RigUnit_DebugPointMutable
// Size: 0xe0 (Inherited: 0x38)
struct FRigUnit_DebugPointMutable : FRigUnit_DebugBaseMutable {
	struct FVector Vector; // 0x38(0x18)
	enum class ERigUnitDebugPointMode Mode; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	struct FLinearColor Color; // 0x54(0x10)
	float Scale; // 0x64(0x04)
	float Thickness; // 0x68(0x04)
	struct FName Space; // 0x6c(0x04)
	struct FTransform WorldOffset; // 0x70(0x60)
	bool bEnabled; // 0xd0(0x01)
	char pad_D1[0xf]; // 0xd1(0x0f)
};

// ScriptStruct ControlRig.RigUnit_DebugRectangle
// Size: 0x130 (Inherited: 0x38)
struct FRigUnit_DebugRectangle : FRigUnit_DebugBaseMutable {
	char pad_38[0x8]; // 0x38(0x08)
	struct FTransform Transform; // 0x40(0x60)
	struct FLinearColor Color; // 0xa0(0x10)
	float Scale; // 0xb0(0x04)
	float Thickness; // 0xb4(0x04)
	struct FName Space; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct FTransform WorldOffset; // 0xc0(0x60)
	bool bEnabled; // 0x120(0x01)
	char pad_121[0xf]; // 0x121(0x0f)
};

// ScriptStruct ControlRig.RigUnit_DebugRectangleItemSpace
// Size: 0x130 (Inherited: 0x38)
struct FRigUnit_DebugRectangleItemSpace : FRigUnit_DebugBaseMutable {
	char pad_38[0x8]; // 0x38(0x08)
	struct FTransform Transform; // 0x40(0x60)
	struct FLinearColor Color; // 0xa0(0x10)
	float Scale; // 0xb0(0x04)
	float Thickness; // 0xb4(0x04)
	struct FRigElementKey Space; // 0xb8(0x08)
	struct FTransform WorldOffset; // 0xc0(0x60)
	bool bEnabled; // 0x120(0x01)
	char pad_121[0xf]; // 0x121(0x0f)
};

// ScriptStruct ControlRig.RigUnit_DebugArc
// Size: 0x140 (Inherited: 0x38)
struct FRigUnit_DebugArc : FRigUnit_DebugBaseMutable {
	char pad_38[0x8]; // 0x38(0x08)
	struct FTransform Transform; // 0x40(0x60)
	struct FLinearColor Color; // 0xa0(0x10)
	float Radius; // 0xb0(0x04)
	float MinimumDegrees; // 0xb4(0x04)
	float MaximumDegrees; // 0xb8(0x04)
	float Thickness; // 0xbc(0x04)
	int32_t Detail; // 0xc0(0x04)
	struct FName Space; // 0xc4(0x04)
	char pad_C8[0x8]; // 0xc8(0x08)
	struct FTransform WorldOffset; // 0xd0(0x60)
	bool bEnabled; // 0x130(0x01)
	char pad_131[0xf]; // 0x131(0x0f)
};

// ScriptStruct ControlRig.RigUnit_DebugArcItemSpace
// Size: 0x140 (Inherited: 0x38)
struct FRigUnit_DebugArcItemSpace : FRigUnit_DebugBaseMutable {
	char pad_38[0x8]; // 0x38(0x08)
	struct FTransform Transform; // 0x40(0x60)
	struct FLinearColor Color; // 0xa0(0x10)
	float Radius; // 0xb0(0x04)
	float MinimumDegrees; // 0xb4(0x04)
	float MaximumDegrees; // 0xb8(0x04)
	float Thickness; // 0xbc(0x04)
	int32_t Detail; // 0xc0(0x04)
	struct FRigElementKey Space; // 0xc4(0x08)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct FTransform WorldOffset; // 0xd0(0x60)
	bool bEnabled; // 0x130(0x01)
	char pad_131[0xf]; // 0x131(0x0f)
};

// ScriptStruct ControlRig.RigUnit_DebugTransform
// Size: 0x100 (Inherited: 0x08)
struct FRigUnit_DebugTransform : FRigUnit_DebugBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Transform; // 0x10(0x60)
	enum class ERigUnitDebugTransformMode Mode; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	struct FLinearColor Color; // 0x74(0x10)
	float Thickness; // 0x84(0x04)
	float Scale; // 0x88(0x04)
	struct FName Space; // 0x8c(0x04)
	struct FTransform WorldOffset; // 0x90(0x60)
	bool bEnabled; // 0xf0(0x01)
	char pad_F1[0xf]; // 0xf1(0x0f)
};

// ScriptStruct ControlRig.RigUnit_DebugTransformMutable
// Size: 0x130 (Inherited: 0x38)
struct FRigUnit_DebugTransformMutable : FRigUnit_DebugBaseMutable {
	char pad_38[0x8]; // 0x38(0x08)
	struct FTransform Transform; // 0x40(0x60)
	enum class ERigUnitDebugTransformMode Mode; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	struct FLinearColor Color; // 0xa4(0x10)
	float Thickness; // 0xb4(0x04)
	float Scale; // 0xb8(0x04)
	struct FName Space; // 0xbc(0x04)
	struct FTransform WorldOffset; // 0xc0(0x60)
	bool bEnabled; // 0x120(0x01)
	char pad_121[0xf]; // 0x121(0x0f)
};

// ScriptStruct ControlRig.RigUnit_DebugTransformMutableItemSpace
// Size: 0x140 (Inherited: 0x38)
struct FRigUnit_DebugTransformMutableItemSpace : FRigUnit_DebugBaseMutable {
	char pad_38[0x8]; // 0x38(0x08)
	struct FTransform Transform; // 0x40(0x60)
	enum class ERigUnitDebugTransformMode Mode; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	struct FLinearColor Color; // 0xa4(0x10)
	float Thickness; // 0xb4(0x04)
	float Scale; // 0xb8(0x04)
	struct FRigElementKey Space; // 0xbc(0x08)
	char pad_C4[0xc]; // 0xc4(0x0c)
	struct FTransform WorldOffset; // 0xd0(0x60)
	bool bEnabled; // 0x130(0x01)
	char pad_131[0xf]; // 0x131(0x0f)
};

// ScriptStruct ControlRig.RigUnit_DebugTransformArrayMutable_WorkData
// Size: 0x10 (Inherited: 0x00)
struct FRigUnit_DebugTransformArrayMutable_WorkData {
	struct TArray<struct FTransform> DrawTransforms; // 0x00(0x10)
};

// ScriptStruct ControlRig.RigUnit_DebugTransformArrayMutable
// Size: 0xf0 (Inherited: 0x38)
struct FRigUnit_DebugTransformArrayMutable : FRigUnit_DebugBaseMutable {
	struct TArray<struct FTransform> Transforms; // 0x38(0x10)
	enum class ERigUnitDebugTransformMode Mode; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	struct FLinearColor Color; // 0x4c(0x10)
	float Thickness; // 0x5c(0x04)
	float Scale; // 0x60(0x04)
	struct FName Space; // 0x64(0x04)
	char pad_68[0x8]; // 0x68(0x08)
	struct FTransform WorldOffset; // 0x70(0x60)
	bool bEnabled; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
	struct FRigUnit_DebugTransformArrayMutable_WorkData WorkData; // 0xd8(0x10)
	char pad_E8[0x8]; // 0xe8(0x08)
};

// ScriptStruct ControlRig.RigUnit_DebugTransformArrayMutableItemSpace
// Size: 0xf0 (Inherited: 0x38)
struct FRigUnit_DebugTransformArrayMutableItemSpace : FRigUnit_DebugBaseMutable {
	struct TArray<struct FTransform> Transforms; // 0x38(0x10)
	struct TArray<int32_t> ParentIndices; // 0x48(0x10)
	enum class ERigUnitDebugTransformMode Mode; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	struct FLinearColor Color; // 0x5c(0x10)
	float Thickness; // 0x6c(0x04)
	float Scale; // 0x70(0x04)
	struct FRigElementKey Space; // 0x74(0x08)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct FTransform WorldOffset; // 0x80(0x60)
	bool bEnabled; // 0xe0(0x01)
	char pad_E1[0xf]; // 0xe1(0x0f)
};

// ScriptStruct ControlRig.RigUnit_DeltaFromPreviousFloat
// Size: 0x18 (Inherited: 0x08)
struct FRigUnit_DeltaFromPreviousFloat : FRigUnit_SimBase {
	float Value; // 0x08(0x04)
	float Delta; // 0x0c(0x04)
	float PreviousValue; // 0x10(0x04)
	float Cache; // 0x14(0x04)
};

// ScriptStruct ControlRig.RigUnit_DeltaFromPreviousVector
// Size: 0x68 (Inherited: 0x08)
struct FRigUnit_DeltaFromPreviousVector : FRigUnit_SimBase {
	struct FVector Value; // 0x08(0x18)
	struct FVector Delta; // 0x20(0x18)
	struct FVector PreviousValue; // 0x38(0x18)
	struct FVector Cache; // 0x50(0x18)
};

// ScriptStruct ControlRig.RigUnit_DeltaFromPreviousQuat
// Size: 0x90 (Inherited: 0x08)
struct FRigUnit_DeltaFromPreviousQuat : FRigUnit_SimBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat Value; // 0x10(0x20)
	struct FQuat Delta; // 0x30(0x20)
	struct FQuat PreviousValue; // 0x50(0x20)
	struct FQuat Cache; // 0x70(0x20)
};

// ScriptStruct ControlRig.RigUnit_DeltaFromPreviousTransform
// Size: 0x190 (Inherited: 0x08)
struct FRigUnit_DeltaFromPreviousTransform : FRigUnit_SimBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Value; // 0x10(0x60)
	struct FTransform Delta; // 0x70(0x60)
	struct FTransform PreviousValue; // 0xd0(0x60)
	struct FTransform Cache; // 0x130(0x60)
};

// ScriptStruct ControlRig.RigUnit_DistributeRotation_Rotation
// Size: 0x30 (Inherited: 0x00)
struct FRigUnit_DistributeRotation_Rotation {
	struct FQuat Rotation; // 0x00(0x20)
	float Ratio; // 0x20(0x04)
	char pad_24[0xc]; // 0x24(0x0c)
};

// ScriptStruct ControlRig.RigUnit_DistributeRotation_WorkData
// Size: 0x50 (Inherited: 0x00)
struct FRigUnit_DistributeRotation_WorkData {
	struct TArray<struct FCachedRigElement> CachedItems; // 0x00(0x10)
	struct TArray<int32_t> ItemRotationA; // 0x10(0x10)
	struct TArray<int32_t> ItemRotationB; // 0x20(0x10)
	struct TArray<float> ItemRotationT; // 0x30(0x10)
	struct TArray<struct FTransform> ItemLocalTransforms; // 0x40(0x10)
};

// ScriptStruct ControlRig.RigUnit_DistributeRotation
// Size: 0xb0 (Inherited: 0x38)
struct FRigUnit_DistributeRotation : FRigUnit_HighlevelBaseMutable {
	struct FName StartBone; // 0x38(0x04)
	struct FName EndBone; // 0x3c(0x04)
	struct TArray<struct FRigUnit_DistributeRotation_Rotation> Rotations; // 0x40(0x10)
	enum class EControlRigAnimEasingType RotationEaseType; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float Weight; // 0x54(0x04)
	bool bPropagateToChildren; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct FRigUnit_DistributeRotation_WorkData WorkData; // 0x60(0x50)
};

// ScriptStruct ControlRig.RigUnit_DistributeRotationForCollection
// Size: 0xb0 (Inherited: 0x38)
struct FRigUnit_DistributeRotationForCollection : FRigUnit_HighlevelBaseMutable {
	struct FRigElementKeyCollection Items; // 0x38(0x10)
	struct TArray<struct FRigUnit_DistributeRotation_Rotation> Rotations; // 0x48(0x10)
	enum class EControlRigAnimEasingType RotationEaseType; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	float Weight; // 0x5c(0x04)
	struct FRigUnit_DistributeRotation_WorkData WorkData; // 0x60(0x50)
};

// ScriptStruct ControlRig.RigUnit_DistributeRotationForItemArray
// Size: 0xb0 (Inherited: 0x38)
struct FRigUnit_DistributeRotationForItemArray : FRigUnit_HighlevelBaseMutable {
	struct TArray<struct FRigElementKey> Items; // 0x38(0x10)
	struct TArray<struct FRigUnit_DistributeRotation_Rotation> Rotations; // 0x48(0x10)
	enum class EControlRigAnimEasingType RotationEaseType; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	float Weight; // 0x5c(0x04)
	struct FRigUnit_DistributeRotation_WorkData WorkData; // 0x60(0x50)
};

// ScriptStruct ControlRig.RigUnit_DrawContainerGetInstruction
// Size: 0x80 (Inherited: 0x08)
struct FRigUnit_DrawContainerGetInstruction : FRigUnit {
	struct FName InstructionName; // 0x08(0x04)
	struct FLinearColor Color; // 0x0c(0x10)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FTransform Transform; // 0x20(0x60)
};

// ScriptStruct ControlRig.RigUnit_DrawContainerSetColor
// Size: 0x50 (Inherited: 0x38)
struct FRigUnit_DrawContainerSetColor : FRigUnitMutable {
	struct FName InstructionName; // 0x38(0x04)
	struct FLinearColor Color; // 0x3c(0x10)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct ControlRig.RigUnit_DrawContainerSetThickness
// Size: 0x40 (Inherited: 0x38)
struct FRigUnit_DrawContainerSetThickness : FRigUnitMutable {
	struct FName InstructionName; // 0x38(0x04)
	float Thickness; // 0x3c(0x04)
};

// ScriptStruct ControlRig.RigUnit_DrawContainerSetTransform
// Size: 0xa0 (Inherited: 0x38)
struct FRigUnit_DrawContainerSetTransform : FRigUnitMutable {
	struct FName InstructionName; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FTransform Transform; // 0x40(0x60)
};

// ScriptStruct ControlRig.RigUnit_DynamicHierarchyBase
// Size: 0x08 (Inherited: 0x08)
struct FRigUnit_DynamicHierarchyBase : FRigUnit {
};

// ScriptStruct ControlRig.RigUnit_DynamicHierarchyBaseMutable
// Size: 0x38 (Inherited: 0x38)
struct FRigUnit_DynamicHierarchyBaseMutable : FRigUnitMutable {
};

// ScriptStruct ControlRig.RigUnit_AddParent
// Size: 0x48 (Inherited: 0x38)
struct FRigUnit_AddParent : FRigUnit_DynamicHierarchyBaseMutable {
	struct FRigElementKey Child; // 0x38(0x08)
	struct FRigElementKey Parent; // 0x40(0x08)
};

// ScriptStruct ControlRig.RigUnit_SetDefaultParent
// Size: 0x48 (Inherited: 0x38)
struct FRigUnit_SetDefaultParent : FRigUnit_DynamicHierarchyBaseMutable {
	struct FRigElementKey Child; // 0x38(0x08)
	struct FRigElementKey Parent; // 0x40(0x08)
};

// ScriptStruct ControlRig.RigUnit_SwitchParent
// Size: 0x50 (Inherited: 0x38)
struct FRigUnit_SwitchParent : FRigUnit_DynamicHierarchyBaseMutable {
	enum class ERigSwitchParentMode Mode; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct FRigElementKey Child; // 0x3c(0x08)
	struct FRigElementKey Parent; // 0x44(0x08)
	bool bMaintainGlobal; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
};

// ScriptStruct ControlRig.RigUnit_HierarchyGetParentWeights
// Size: 0x30 (Inherited: 0x08)
struct FRigUnit_HierarchyGetParentWeights : FRigUnit_DynamicHierarchyBase {
	struct FRigElementKey Child; // 0x08(0x08)
	struct TArray<struct FRigElementWeight> Weights; // 0x10(0x10)
	struct FRigElementKeyCollection Parents; // 0x20(0x10)
};

// ScriptStruct ControlRig.RigUnit_HierarchyGetParentWeightsArray
// Size: 0x30 (Inherited: 0x08)
struct FRigUnit_HierarchyGetParentWeightsArray : FRigUnit_DynamicHierarchyBase {
	struct FRigElementKey Child; // 0x08(0x08)
	struct TArray<struct FRigElementWeight> Weights; // 0x10(0x10)
	struct TArray<struct FRigElementKey> Parents; // 0x20(0x10)
};

// ScriptStruct ControlRig.RigUnit_HierarchySetParentWeights
// Size: 0x50 (Inherited: 0x38)
struct FRigUnit_HierarchySetParentWeights : FRigUnit_DynamicHierarchyBaseMutable {
	struct FRigElementKey Child; // 0x38(0x08)
	struct TArray<struct FRigElementWeight> Weights; // 0x40(0x10)
};

// ScriptStruct ControlRig.RigUnit_HierarchyReset
// Size: 0x38 (Inherited: 0x38)
struct FRigUnit_HierarchyReset : FRigUnit_DynamicHierarchyBaseMutable {
};

// ScriptStruct ControlRig.RigUnit_HierarchyImportFromSkeleton
// Size: 0x50 (Inherited: 0x38)
struct FRigUnit_HierarchyImportFromSkeleton : FRigUnit_DynamicHierarchyBaseMutable {
	struct FName Namespace; // 0x38(0x04)
	bool bIncludeCurves; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct TArray<struct FRigElementKey> Items; // 0x40(0x10)
};

// ScriptStruct ControlRig.RigUnit_HierarchyRemoveElement
// Size: 0x48 (Inherited: 0x38)
struct FRigUnit_HierarchyRemoveElement : FRigUnit_DynamicHierarchyBaseMutable {
	struct FRigElementKey Item; // 0x38(0x08)
	bool bSuccess; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// ScriptStruct ControlRig.RigUnit_HierarchyAddElement
// Size: 0x50 (Inherited: 0x38)
struct FRigUnit_HierarchyAddElement : FRigUnit_DynamicHierarchyBaseMutable {
	struct FRigElementKey Parent; // 0x38(0x08)
	struct FName Name; // 0x40(0x04)
	struct FRigElementKey Item; // 0x44(0x08)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct ControlRig.RigUnit_HierarchyAddBone
// Size: 0xc0 (Inherited: 0x50)
struct FRigUnit_HierarchyAddBone : FRigUnit_HierarchyAddElement {
	struct FTransform Transform; // 0x50(0x60)
	enum class EBoneGetterSetterMode Space; // 0xb0(0x01)
	char pad_B1[0xf]; // 0xb1(0x0f)
};

// ScriptStruct ControlRig.RigUnit_HierarchyAddNull
// Size: 0xc0 (Inherited: 0x50)
struct FRigUnit_HierarchyAddNull : FRigUnit_HierarchyAddElement {
	struct FTransform Transform; // 0x50(0x60)
	enum class EBoneGetterSetterMode Space; // 0xb0(0x01)
	char pad_B1[0xf]; // 0xb1(0x0f)
};

// ScriptStruct ControlRig.RigUnit_HierarchyAddControl_Settings
// Size: 0x10 (Inherited: 0x00)
struct FRigUnit_HierarchyAddControl_Settings {
	char pad_0[0x8]; // 0x00(0x08)
	struct FName DisplayName; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct ControlRig.RigUnit_HierarchyAddControl_ShapeSettings
// Size: 0x80 (Inherited: 0x00)
struct FRigUnit_HierarchyAddControl_ShapeSettings {
	bool bVisible; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName Name; // 0x04(0x04)
	struct FLinearColor Color; // 0x08(0x10)
	char pad_18[0x8]; // 0x18(0x08)
	struct FTransform Transform; // 0x20(0x60)
};

// ScriptStruct ControlRig.RigUnit_HierarchyAddControl_ProxySettings
// Size: 0x20 (Inherited: 0x00)
struct FRigUnit_HierarchyAddControl_ProxySettings {
	bool bIsProxy; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FRigElementKey> DrivenControls; // 0x08(0x10)
	enum class ERigControlVisibility ShapeVisibility; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct ControlRig.RigUnit_HierarchyAddControlFloat_LimitSettings
// Size: 0x10 (Inherited: 0x00)
struct FRigUnit_HierarchyAddControlFloat_LimitSettings {
	struct FRigControlLimitEnabled Limit; // 0x00(0x02)
	char pad_2[0x2]; // 0x02(0x02)
	float MinValue; // 0x04(0x04)
	float MaxValue; // 0x08(0x04)
	bool bDrawLimits; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct ControlRig.RigUnit_HierarchyAddControlFloat_Settings
// Size: 0xd0 (Inherited: 0x10)
struct FRigUnit_HierarchyAddControlFloat_Settings : FRigUnit_HierarchyAddControl_Settings {
	enum class ERigControlAxis PrimaryAxis; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FRigUnit_HierarchyAddControlFloat_LimitSettings Limits; // 0x14(0x10)
	char pad_24[0xc]; // 0x24(0x0c)
	struct FRigUnit_HierarchyAddControl_ShapeSettings Shape; // 0x30(0x80)
	struct FRigUnit_HierarchyAddControl_ProxySettings Proxy; // 0xb0(0x20)
};

// ScriptStruct ControlRig.RigUnit_HierarchyAddControlFloat
// Size: 0x190 (Inherited: 0x50)
struct FRigUnit_HierarchyAddControlFloat : FRigUnit_HierarchyAddElement {
	struct FTransform OffsetTransform; // 0x50(0x60)
	float InitialValue; // 0xb0(0x04)
	char pad_B4[0xc]; // 0xb4(0x0c)
	struct FRigUnit_HierarchyAddControlFloat_Settings Settings; // 0xc0(0xd0)
};

// ScriptStruct ControlRig.RigUnit_HierarchyAddControlInteger_LimitSettings
// Size: 0x10 (Inherited: 0x00)
struct FRigUnit_HierarchyAddControlInteger_LimitSettings {
	struct FRigControlLimitEnabled Limit; // 0x00(0x02)
	char pad_2[0x2]; // 0x02(0x02)
	int32_t MinValue; // 0x04(0x04)
	int32_t MaxValue; // 0x08(0x04)
	bool bDrawLimits; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct ControlRig.RigUnit_HierarchyAddControlInteger_Settings
// Size: 0xd0 (Inherited: 0x10)
struct FRigUnit_HierarchyAddControlInteger_Settings : FRigUnit_HierarchyAddControl_Settings {
	enum class ERigControlAxis PrimaryAxis; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FRigUnit_HierarchyAddControlInteger_LimitSettings Limits; // 0x14(0x10)
	char pad_24[0xc]; // 0x24(0x0c)
	struct FRigUnit_HierarchyAddControl_ShapeSettings Shape; // 0x30(0x80)
	struct FRigUnit_HierarchyAddControl_ProxySettings Proxy; // 0xb0(0x20)
};

// ScriptStruct ControlRig.RigUnit_HierarchyAddControlInteger
// Size: 0x190 (Inherited: 0x50)
struct FRigUnit_HierarchyAddControlInteger : FRigUnit_HierarchyAddElement {
	struct FTransform OffsetTransform; // 0x50(0x60)
	int32_t InitialValue; // 0xb0(0x04)
	char pad_B4[0xc]; // 0xb4(0x0c)
	struct FRigUnit_HierarchyAddControlInteger_Settings Settings; // 0xc0(0xd0)
};

// ScriptStruct ControlRig.RigUnit_HierarchyAddControlVector2D_LimitSettings
// Size: 0x30 (Inherited: 0x00)
struct FRigUnit_HierarchyAddControlVector2D_LimitSettings {
	struct FRigControlLimitEnabled LimitX; // 0x00(0x02)
	struct FRigControlLimitEnabled LimitY; // 0x02(0x02)
	char pad_4[0x4]; // 0x04(0x04)
	struct FVector2D MinValue; // 0x08(0x10)
	struct FVector2D MaxValue; // 0x18(0x10)
	bool bDrawLimits; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct ControlRig.RigUnit_HierarchyAddControlVector2D_Settings
// Size: 0xf0 (Inherited: 0x10)
struct FRigUnit_HierarchyAddControlVector2D_Settings : FRigUnit_HierarchyAddControl_Settings {
	enum class ERigControlAxis PrimaryAxis; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FRigUnit_HierarchyAddControlVector2D_LimitSettings Limits; // 0x18(0x30)
	char pad_48[0x8]; // 0x48(0x08)
	struct FRigUnit_HierarchyAddControl_ShapeSettings Shape; // 0x50(0x80)
	struct FRigUnit_HierarchyAddControl_ProxySettings Proxy; // 0xd0(0x20)
};

// ScriptStruct ControlRig.RigUnit_HierarchyAddControlVector2D
// Size: 0x1b0 (Inherited: 0x50)
struct FRigUnit_HierarchyAddControlVector2D : FRigUnit_HierarchyAddElement {
	struct FTransform OffsetTransform; // 0x50(0x60)
	struct FVector2D InitialValue; // 0xb0(0x10)
	struct FRigUnit_HierarchyAddControlVector2D_Settings Settings; // 0xc0(0xf0)
};

// ScriptStruct ControlRig.RigUnit_HierarchyAddControlVector_LimitSettings
// Size: 0x40 (Inherited: 0x00)
struct FRigUnit_HierarchyAddControlVector_LimitSettings {
	struct FRigControlLimitEnabled LimitX; // 0x00(0x02)
	struct FRigControlLimitEnabled LimitY; // 0x02(0x02)
	struct FRigControlLimitEnabled LimitZ; // 0x04(0x02)
	char pad_6[0x2]; // 0x06(0x02)
	struct FVector MinValue; // 0x08(0x18)
	struct FVector MaxValue; // 0x20(0x18)
	bool bDrawLimits; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct ControlRig.RigUnit_HierarchyAddControlVector_Settings
// Size: 0x100 (Inherited: 0x10)
struct FRigUnit_HierarchyAddControlVector_Settings : FRigUnit_HierarchyAddControl_Settings {
	bool bIsPosition; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FRigUnit_HierarchyAddControlVector_LimitSettings Limits; // 0x18(0x40)
	char pad_58[0x8]; // 0x58(0x08)
	struct FRigUnit_HierarchyAddControl_ShapeSettings Shape; // 0x60(0x80)
	struct FRigUnit_HierarchyAddControl_ProxySettings Proxy; // 0xe0(0x20)
};

// ScriptStruct ControlRig.RigUnit_HierarchyAddControlVector
// Size: 0x1d0 (Inherited: 0x50)
struct FRigUnit_HierarchyAddControlVector : FRigUnit_HierarchyAddElement {
	struct FTransform OffsetTransform; // 0x50(0x60)
	struct FVector InitialValue; // 0xb0(0x18)
	char pad_C8[0x8]; // 0xc8(0x08)
	struct FRigUnit_HierarchyAddControlVector_Settings Settings; // 0xd0(0x100)
};

// ScriptStruct ControlRig.RigUnit_HierarchyAddControlRotator_LimitSettings
// Size: 0x40 (Inherited: 0x00)
struct FRigUnit_HierarchyAddControlRotator_LimitSettings {
	struct FRigControlLimitEnabled LimitPitch; // 0x00(0x02)
	struct FRigControlLimitEnabled LimitYaw; // 0x02(0x02)
	struct FRigControlLimitEnabled LimitRoll; // 0x04(0x02)
	char pad_6[0x2]; // 0x06(0x02)
	struct FRotator MinValue; // 0x08(0x18)
	struct FRotator MaxValue; // 0x20(0x18)
	bool bDrawLimits; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct ControlRig.RigUnit_HierarchyAddControlRotator_Settings
// Size: 0xf0 (Inherited: 0x10)
struct FRigUnit_HierarchyAddControlRotator_Settings : FRigUnit_HierarchyAddControl_Settings {
	struct FRigUnit_HierarchyAddControlRotator_LimitSettings Limits; // 0x10(0x40)
	struct FRigUnit_HierarchyAddControl_ShapeSettings Shape; // 0x50(0x80)
	struct FRigUnit_HierarchyAddControl_ProxySettings Proxy; // 0xd0(0x20)
};

// ScriptStruct ControlRig.RigUnit_HierarchyAddControlRotator
// Size: 0x1c0 (Inherited: 0x50)
struct FRigUnit_HierarchyAddControlRotator : FRigUnit_HierarchyAddElement {
	struct FTransform OffsetTransform; // 0x50(0x60)
	struct FRotator InitialValue; // 0xb0(0x18)
	char pad_C8[0x8]; // 0xc8(0x08)
	struct FRigUnit_HierarchyAddControlRotator_Settings Settings; // 0xd0(0xf0)
};

// ScriptStruct ControlRig.RigUnit_HierarchyAddControlTransform_Settings
// Size: 0xb0 (Inherited: 0x10)
struct FRigUnit_HierarchyAddControlTransform_Settings : FRigUnit_HierarchyAddControl_Settings {
	struct FRigUnit_HierarchyAddControl_ShapeSettings Shape; // 0x10(0x80)
	struct FRigUnit_HierarchyAddControl_ProxySettings Proxy; // 0x90(0x20)
};

// ScriptStruct ControlRig.RigUnit_HierarchyAddControlTransform
// Size: 0x1c0 (Inherited: 0x50)
struct FRigUnit_HierarchyAddControlTransform : FRigUnit_HierarchyAddElement {
	struct FTransform OffsetTransform; // 0x50(0x60)
	struct FTransform InitialValue; // 0xb0(0x60)
	struct FRigUnit_HierarchyAddControlTransform_Settings Settings; // 0x110(0xb0)
};

// ScriptStruct ControlRig.RigUnit_HierarchyAddAnimationChannelBool
// Size: 0x58 (Inherited: 0x50)
struct FRigUnit_HierarchyAddAnimationChannelBool : FRigUnit_HierarchyAddElement {
	bool InitialValue; // 0x50(0x01)
	bool MinimumValue; // 0x51(0x01)
	bool MaximumValue; // 0x52(0x01)
	char pad_53[0x5]; // 0x53(0x05)
};

// ScriptStruct ControlRig.RigUnit_HierarchyAddAnimationChannelFloat
// Size: 0x60 (Inherited: 0x50)
struct FRigUnit_HierarchyAddAnimationChannelFloat : FRigUnit_HierarchyAddElement {
	float InitialValue; // 0x50(0x04)
	float MinimumValue; // 0x54(0x04)
	float MaximumValue; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct ControlRig.RigUnit_HierarchyAddAnimationChannelInteger
// Size: 0x60 (Inherited: 0x50)
struct FRigUnit_HierarchyAddAnimationChannelInteger : FRigUnit_HierarchyAddElement {
	int32_t InitialValue; // 0x50(0x04)
	int32_t MinimumValue; // 0x54(0x04)
	int32_t MaximumValue; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct ControlRig.RigUnit_HierarchyAddAnimationChannelVector2D
// Size: 0x80 (Inherited: 0x50)
struct FRigUnit_HierarchyAddAnimationChannelVector2D : FRigUnit_HierarchyAddElement {
	struct FVector2D InitialValue; // 0x50(0x10)
	struct FVector2D MinimumValue; // 0x60(0x10)
	struct FVector2D MaximumValue; // 0x70(0x10)
};

// ScriptStruct ControlRig.RigUnit_HierarchyAddAnimationChannelVector
// Size: 0x98 (Inherited: 0x50)
struct FRigUnit_HierarchyAddAnimationChannelVector : FRigUnit_HierarchyAddElement {
	struct FVector InitialValue; // 0x50(0x18)
	struct FVector MinimumValue; // 0x68(0x18)
	struct FVector MaximumValue; // 0x80(0x18)
};

// ScriptStruct ControlRig.RigUnit_HierarchyAddAnimationChannelRotator
// Size: 0x98 (Inherited: 0x50)
struct FRigUnit_HierarchyAddAnimationChannelRotator : FRigUnit_HierarchyAddElement {
	struct FRotator InitialValue; // 0x50(0x18)
	struct FRotator MinimumValue; // 0x68(0x18)
	struct FRotator MaximumValue; // 0x80(0x18)
};

// ScriptStruct ControlRig.RigUnit_FABRIK_WorkData
// Size: 0x38 (Inherited: 0x00)
struct FRigUnit_FABRIK_WorkData {
	struct TArray<struct FFABRIKChainLink> Chain; // 0x00(0x10)
	struct TArray<struct FCachedRigElement> CachedItems; // 0x10(0x10)
	struct FCachedRigElement CachedEffector; // 0x20(0x18)
};

// ScriptStruct ControlRig.RigUnit_FABRIK
// Size: 0xf0 (Inherited: 0x38)
struct FRigUnit_FABRIK : FRigUnit_HighlevelBaseMutable {
	struct FName StartBone; // 0x38(0x04)
	struct FName EffectorBone; // 0x3c(0x04)
	struct FTransform EffectorTransform; // 0x40(0x60)
	float Precision; // 0xa0(0x04)
	float Weight; // 0xa4(0x04)
	bool bPropagateToChildren; // 0xa8(0x01)
	char pad_A9[0x3]; // 0xa9(0x03)
	int32_t MaxIterations; // 0xac(0x04)
	struct FRigUnit_FABRIK_WorkData WorkData; // 0xb0(0x38)
	bool bSetEffectorTransform; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
};

// ScriptStruct ControlRig.RigUnit_FABRIKPerItem
// Size: 0x100 (Inherited: 0x38)
struct FRigUnit_FABRIKPerItem : FRigUnit_HighlevelBaseMutable {
	struct FRigElementKeyCollection Items; // 0x38(0x10)
	char pad_48[0x8]; // 0x48(0x08)
	struct FTransform EffectorTransform; // 0x50(0x60)
	float Precision; // 0xb0(0x04)
	float Weight; // 0xb4(0x04)
	bool bPropagateToChildren; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	int32_t MaxIterations; // 0xbc(0x04)
	struct FRigUnit_FABRIK_WorkData WorkData; // 0xc0(0x38)
	bool bSetEffectorTransform; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
};

// ScriptStruct ControlRig.RigUnit_FABRIKItemArray
// Size: 0x100 (Inherited: 0x38)
struct FRigUnit_FABRIKItemArray : FRigUnit_HighlevelBaseMutable {
	struct TArray<struct FRigElementKey> Items; // 0x38(0x10)
	char pad_48[0x8]; // 0x48(0x08)
	struct FTransform EffectorTransform; // 0x50(0x60)
	float Precision; // 0xb0(0x04)
	float Weight; // 0xb4(0x04)
	bool bPropagateToChildren; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	int32_t MaxIterations; // 0xbc(0x04)
	struct FRigUnit_FABRIK_WorkData WorkData; // 0xc0(0x38)
	bool bSetEffectorTransform; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
};

// ScriptStruct ControlRig.RigUnit_FitChainToCurve_Rotation
// Size: 0x30 (Inherited: 0x00)
struct FRigUnit_FitChainToCurve_Rotation {
	struct FQuat Rotation; // 0x00(0x20)
	float Ratio; // 0x20(0x04)
	char pad_24[0xc]; // 0x24(0x0c)
};

// ScriptStruct ControlRig.RigUnit_FitChainToCurve_DebugSettings
// Size: 0x90 (Inherited: 0x00)
struct FRigUnit_FitChainToCurve_DebugSettings {
	bool bEnabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Scale; // 0x04(0x04)
	struct FLinearColor CurveColor; // 0x08(0x10)
	struct FLinearColor SegmentsColor; // 0x18(0x10)
	char pad_28[0x8]; // 0x28(0x08)
	struct FTransform WorldOffset; // 0x30(0x60)
};

// ScriptStruct ControlRig.RigUnit_FitChainToCurve_WorkData
// Size: 0x98 (Inherited: 0x00)
struct FRigUnit_FitChainToCurve_WorkData {
	float ChainLength; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FVector> ItemPositions; // 0x08(0x10)
	struct TArray<float> ItemSegments; // 0x18(0x10)
	struct TArray<struct FVector> CurvePositions; // 0x28(0x10)
	struct TArray<float> CurveSegments; // 0x38(0x10)
	struct TArray<struct FCachedRigElement> CachedItems; // 0x48(0x10)
	struct TArray<int32_t> ItemRotationA; // 0x58(0x10)
	struct TArray<int32_t> ItemRotationB; // 0x68(0x10)
	struct TArray<float> ItemRotationT; // 0x78(0x10)
	struct TArray<struct FTransform> ItemLocalTransforms; // 0x88(0x10)
};

// ScriptStruct ControlRig.RigUnit_FitChainToCurve
// Size: 0x250 (Inherited: 0x38)
struct FRigUnit_FitChainToCurve : FRigUnit_HighlevelBaseMutable {
	struct FName StartBone; // 0x38(0x04)
	struct FName EndBone; // 0x3c(0x04)
	struct FCRFourPointBezier Bezier; // 0x40(0x60)
	enum class EControlRigCurveAlignment Alignment; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	float Minimum; // 0xa4(0x04)
	float Maximum; // 0xa8(0x04)
	int32_t SamplingPrecision; // 0xac(0x04)
	struct FVector PrimaryAxis; // 0xb0(0x18)
	struct FVector SecondaryAxis; // 0xc8(0x18)
	struct FVector PoleVectorPosition; // 0xe0(0x18)
	struct TArray<struct FRigUnit_FitChainToCurve_Rotation> Rotations; // 0xf8(0x10)
	enum class EControlRigAnimEasingType RotationEaseType; // 0x108(0x01)
	char pad_109[0x3]; // 0x109(0x03)
	float Weight; // 0x10c(0x04)
	bool bPropagateToChildren; // 0x110(0x01)
	char pad_111[0xf]; // 0x111(0x0f)
	struct FRigUnit_FitChainToCurve_DebugSettings DebugSettings; // 0x120(0x90)
	struct FRigUnit_FitChainToCurve_WorkData WorkData; // 0x1b0(0x98)
	char pad_248[0x8]; // 0x248(0x08)
};

// ScriptStruct ControlRig.RigUnit_FitChainToCurvePerItem
// Size: 0x250 (Inherited: 0x38)
struct FRigUnit_FitChainToCurvePerItem : FRigUnit_HighlevelBaseMutable {
	struct FRigElementKeyCollection Items; // 0x38(0x10)
	struct FCRFourPointBezier Bezier; // 0x48(0x60)
	enum class EControlRigCurveAlignment Alignment; // 0xa8(0x01)
	char pad_A9[0x3]; // 0xa9(0x03)
	float Minimum; // 0xac(0x04)
	float Maximum; // 0xb0(0x04)
	int32_t SamplingPrecision; // 0xb4(0x04)
	struct FVector PrimaryAxis; // 0xb8(0x18)
	struct FVector SecondaryAxis; // 0xd0(0x18)
	struct FVector PoleVectorPosition; // 0xe8(0x18)
	struct TArray<struct FRigUnit_FitChainToCurve_Rotation> Rotations; // 0x100(0x10)
	enum class EControlRigAnimEasingType RotationEaseType; // 0x110(0x01)
	char pad_111[0x3]; // 0x111(0x03)
	float Weight; // 0x114(0x04)
	bool bPropagateToChildren; // 0x118(0x01)
	char pad_119[0x7]; // 0x119(0x07)
	struct FRigUnit_FitChainToCurve_DebugSettings DebugSettings; // 0x120(0x90)
	struct FRigUnit_FitChainToCurve_WorkData WorkData; // 0x1b0(0x98)
	char pad_248[0x8]; // 0x248(0x08)
};

// ScriptStruct ControlRig.RigUnit_FitChainToCurveItemArray
// Size: 0x250 (Inherited: 0x38)
struct FRigUnit_FitChainToCurveItemArray : FRigUnit_HighlevelBaseMutable {
	struct TArray<struct FRigElementKey> Items; // 0x38(0x10)
	struct FCRFourPointBezier Bezier; // 0x48(0x60)
	enum class EControlRigCurveAlignment Alignment; // 0xa8(0x01)
	char pad_A9[0x3]; // 0xa9(0x03)
	float Minimum; // 0xac(0x04)
	float Maximum; // 0xb0(0x04)
	int32_t SamplingPrecision; // 0xb4(0x04)
	struct FVector PrimaryAxis; // 0xb8(0x18)
	struct FVector SecondaryAxis; // 0xd0(0x18)
	struct FVector PoleVectorPosition; // 0xe8(0x18)
	struct TArray<struct FRigUnit_FitChainToCurve_Rotation> Rotations; // 0x100(0x10)
	enum class EControlRigAnimEasingType RotationEaseType; // 0x110(0x01)
	char pad_111[0x3]; // 0x111(0x03)
	float Weight; // 0x114(0x04)
	bool bPropagateToChildren; // 0x118(0x01)
	char pad_119[0x7]; // 0x119(0x07)
	struct FRigUnit_FitChainToCurve_DebugSettings DebugSettings; // 0x120(0x90)
	struct FRigUnit_FitChainToCurve_WorkData WorkData; // 0x1b0(0x98)
	char pad_248[0x8]; // 0x248(0x08)
};

// ScriptStruct ControlRig.RigUnit_BinaryFloatOp
// Size: 0x18 (Inherited: 0x08)
struct FRigUnit_BinaryFloatOp : FRigUnit {
	float Argument0; // 0x08(0x04)
	float Argument1; // 0x0c(0x04)
	float Result; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ControlRig.RigUnit_Multiply_FloatFloat
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_Multiply_FloatFloat : FRigUnit_BinaryFloatOp {
};

// ScriptStruct ControlRig.RigUnit_Add_FloatFloat
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_Add_FloatFloat : FRigUnit_BinaryFloatOp {
};

// ScriptStruct ControlRig.RigUnit_Subtract_FloatFloat
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_Subtract_FloatFloat : FRigUnit_BinaryFloatOp {
};

// ScriptStruct ControlRig.RigUnit_Divide_FloatFloat
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_Divide_FloatFloat : FRigUnit_BinaryFloatOp {
};

// ScriptStruct ControlRig.RigUnit_Clamp_Float
// Size: 0x18 (Inherited: 0x08)
struct FRigUnit_Clamp_Float : FRigUnit {
	float Value; // 0x08(0x04)
	float min; // 0x0c(0x04)
	float max; // 0x10(0x04)
	float Result; // 0x14(0x04)
};

// ScriptStruct ControlRig.RigUnit_MapRange_Float
// Size: 0x20 (Inherited: 0x08)
struct FRigUnit_MapRange_Float : FRigUnit {
	float Value; // 0x08(0x04)
	float MinIn; // 0x0c(0x04)
	float MaxIn; // 0x10(0x04)
	float MinOut; // 0x14(0x04)
	float MaxOut; // 0x18(0x04)
	float Result; // 0x1c(0x04)
};

// ScriptStruct ControlRig.RigUnit_ForLoopCount
// Size: 0x78 (Inherited: 0x38)
struct FRigUnit_ForLoopCount : FRigUnitMutable {
	int32_t Count; // 0x38(0x04)
	int32_t Index; // 0x3c(0x04)
	float Ratio; // 0x40(0x04)
	bool Continue; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	struct FControlRigExecuteContext Completed; // 0x48(0x30)
};

// ScriptStruct ControlRig.RigUnit_GetBoneTransform
// Size: 0x90 (Inherited: 0x08)
struct FRigUnit_GetBoneTransform : FRigUnit {
	struct FName bone; // 0x08(0x04)
	enum class EBoneGetterSetterMode Space; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FTransform Transform; // 0x10(0x60)
	struct FCachedRigElement CachedBone; // 0x70(0x18)
	char pad_88[0x8]; // 0x88(0x08)
};

// ScriptStruct ControlRig.RigUnit_GetControlInitialTransform
// Size: 0x90 (Inherited: 0x08)
struct FRigUnit_GetControlInitialTransform : FRigUnit {
	struct FName Control; // 0x08(0x04)
	enum class EBoneGetterSetterMode Space; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FTransform Transform; // 0x10(0x60)
	struct FCachedRigElement CachedControlIndex; // 0x70(0x18)
	char pad_88[0x8]; // 0x88(0x08)
};

// ScriptStruct ControlRig.RigUnit_GetControlBool
// Size: 0x28 (Inherited: 0x08)
struct FRigUnit_GetControlBool : FRigUnit {
	struct FName Control; // 0x08(0x04)
	bool BoolValue; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FCachedRigElement CachedControlIndex; // 0x10(0x18)
};

// ScriptStruct ControlRig.RigUnit_GetControlFloat
// Size: 0x30 (Inherited: 0x08)
struct FRigUnit_GetControlFloat : FRigUnit {
	struct FName Control; // 0x08(0x04)
	float FloatValue; // 0x0c(0x04)
	float Minimum; // 0x10(0x04)
	float Maximum; // 0x14(0x04)
	struct FCachedRigElement CachedControlIndex; // 0x18(0x18)
};

// ScriptStruct ControlRig.RigUnit_GetControlInteger
// Size: 0x30 (Inherited: 0x08)
struct FRigUnit_GetControlInteger : FRigUnit {
	struct FName Control; // 0x08(0x04)
	int32_t IntegerValue; // 0x0c(0x04)
	int32_t Minimum; // 0x10(0x04)
	int32_t Maximum; // 0x14(0x04)
	struct FCachedRigElement CachedControlIndex; // 0x18(0x18)
};

// ScriptStruct ControlRig.RigUnit_GetControlVector2D
// Size: 0x58 (Inherited: 0x08)
struct FRigUnit_GetControlVector2D : FRigUnit {
	struct FName Control; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FVector2D Vector; // 0x10(0x10)
	struct FVector2D Minimum; // 0x20(0x10)
	struct FVector2D Maximum; // 0x30(0x10)
	struct FCachedRigElement CachedControlIndex; // 0x40(0x18)
};

// ScriptStruct ControlRig.RigUnit_GetControlVector
// Size: 0x70 (Inherited: 0x08)
struct FRigUnit_GetControlVector : FRigUnit {
	struct FName Control; // 0x08(0x04)
	enum class EBoneGetterSetterMode Space; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FVector Vector; // 0x10(0x18)
	struct FVector Minimum; // 0x28(0x18)
	struct FVector Maximum; // 0x40(0x18)
	struct FCachedRigElement CachedControlIndex; // 0x58(0x18)
};

// ScriptStruct ControlRig.RigUnit_GetControlRotator
// Size: 0x70 (Inherited: 0x08)
struct FRigUnit_GetControlRotator : FRigUnit {
	struct FName Control; // 0x08(0x04)
	enum class EBoneGetterSetterMode Space; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FRotator Rotator; // 0x10(0x18)
	struct FRotator Minimum; // 0x28(0x18)
	struct FRotator Maximum; // 0x40(0x18)
	struct FCachedRigElement CachedControlIndex; // 0x58(0x18)
};

// ScriptStruct ControlRig.RigUnit_GetControlTransform
// Size: 0x150 (Inherited: 0x08)
struct FRigUnit_GetControlTransform : FRigUnit {
	struct FName Control; // 0x08(0x04)
	enum class EBoneGetterSetterMode Space; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FTransform Transform; // 0x10(0x60)
	struct FTransform Minimum; // 0x70(0x60)
	struct FTransform Maximum; // 0xd0(0x60)
	struct FCachedRigElement CachedControlIndex; // 0x130(0x18)
	char pad_148[0x8]; // 0x148(0x08)
};

// ScriptStruct ControlRig.RigUnit_GetCurveValue
// Size: 0x30 (Inherited: 0x08)
struct FRigUnit_GetCurveValue : FRigUnit {
	struct FName Curve; // 0x08(0x04)
	bool Valid; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float Value; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FCachedRigElement CachedCurveIndex; // 0x18(0x18)
};

// ScriptStruct ControlRig.RigUnit_GetDeltaTime
// Size: 0x10 (Inherited: 0x08)
struct FRigUnit_GetDeltaTime : FRigUnit_AnimBase {
	float Result; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct ControlRig.RigUnit_GetInitialBoneTransform
// Size: 0x90 (Inherited: 0x08)
struct FRigUnit_GetInitialBoneTransform : FRigUnit {
	struct FName bone; // 0x08(0x04)
	enum class EBoneGetterSetterMode Space; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FTransform Transform; // 0x10(0x60)
	struct FCachedRigElement CachedBone; // 0x70(0x18)
	char pad_88[0x8]; // 0x88(0x08)
};

// ScriptStruct ControlRig.RigUnit_GetJointTransform
// Size: 0x110 (Inherited: 0x38)
struct FRigUnit_GetJointTransform : FRigUnitMutable {
	struct FName Joint; // 0x38(0x04)
	enum class ETransformGetterType Type; // 0x3c(0x01)
	enum class ETransformSpaceMode TransformSpace; // 0x3d(0x01)
	char pad_3E[0x2]; // 0x3e(0x02)
	struct FTransform BaseTransform; // 0x40(0x60)
	struct FName BaseJoint; // 0xa0(0x04)
	char pad_A4[0xc]; // 0xa4(0x0c)
	struct FTransform Output; // 0xb0(0x60)
};

// ScriptStruct ControlRig.RigUnit_GetRelativeBoneTransform
// Size: 0xa0 (Inherited: 0x08)
struct FRigUnit_GetRelativeBoneTransform : FRigUnit {
	struct FName bone; // 0x08(0x04)
	struct FName Space; // 0x0c(0x04)
	struct FTransform Transform; // 0x10(0x60)
	struct FCachedRigElement CachedBone; // 0x70(0x18)
	struct FCachedRigElement CachedSpace; // 0x88(0x18)
};

// ScriptStruct ControlRig.RigUnit_GetRelativeTransformForItem
// Size: 0xb0 (Inherited: 0x08)
struct FRigUnit_GetRelativeTransformForItem : FRigUnit {
	struct FRigElementKey Child; // 0x08(0x08)
	bool bChildInitial; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FRigElementKey Parent; // 0x14(0x08)
	bool bParentInitial; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	struct FTransform RelativeTransform; // 0x20(0x60)
	struct FCachedRigElement CachedChild; // 0x80(0x18)
	struct FCachedRigElement CachedParent; // 0x98(0x18)
};

// ScriptStruct ControlRig.RigUnit_GetSpaceTransform
// Size: 0x90 (Inherited: 0x08)
struct FRigUnit_GetSpaceTransform : FRigUnit {
	struct FName Space; // 0x08(0x04)
	enum class EBoneGetterSetterMode SpaceType; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FTransform Transform; // 0x10(0x60)
	struct FCachedRigElement CachedSpaceIndex; // 0x70(0x18)
	char pad_88[0x8]; // 0x88(0x08)
};

// ScriptStruct ControlRig.RigUnit_GetTransform
// Size: 0xa0 (Inherited: 0x08)
struct FRigUnit_GetTransform : FRigUnit {
	struct FRigElementKey Item; // 0x08(0x08)
	enum class EBoneGetterSetterMode Space; // 0x10(0x01)
	bool bInitial; // 0x11(0x01)
	char pad_12[0xe]; // 0x12(0x0e)
	struct FTransform Transform; // 0x20(0x60)
	struct FCachedRigElement CachedIndex; // 0x80(0x18)
	char pad_98[0x8]; // 0x98(0x08)
};

// ScriptStruct ControlRig.RigUnit_GetTransformArray
// Size: 0x40 (Inherited: 0x08)
struct FRigUnit_GetTransformArray : FRigUnit {
	struct FRigElementKeyCollection Items; // 0x08(0x10)
	enum class EBoneGetterSetterMode Space; // 0x18(0x01)
	bool bInitial; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
	struct TArray<struct FTransform> Transforms; // 0x20(0x10)
	struct TArray<struct FCachedRigElement> CachedIndex; // 0x30(0x10)
};

// ScriptStruct ControlRig.RigUnit_GetTransformItemArray
// Size: 0x40 (Inherited: 0x08)
struct FRigUnit_GetTransformItemArray : FRigUnit {
	struct TArray<struct FRigElementKey> Items; // 0x08(0x10)
	enum class EBoneGetterSetterMode Space; // 0x18(0x01)
	bool bInitial; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
	struct TArray<struct FTransform> Transforms; // 0x20(0x10)
	struct TArray<struct FCachedRigElement> CachedIndex; // 0x30(0x10)
};

// ScriptStruct ControlRig.RigUnit_GetWorldTime
// Size: 0x28 (Inherited: 0x08)
struct FRigUnit_GetWorldTime : FRigUnit_AnimBase {
	float Year; // 0x08(0x04)
	float Month; // 0x0c(0x04)
	float Day; // 0x10(0x04)
	float WeekDay; // 0x14(0x04)
	float Hours; // 0x18(0x04)
	float Minutes; // 0x1c(0x04)
	float Seconds; // 0x20(0x04)
	float OverallSeconds; // 0x24(0x04)
};

// ScriptStruct ControlRig.RigUnit_HierarchyBase
// Size: 0x08 (Inherited: 0x08)
struct FRigUnit_HierarchyBase : FRigUnit {
};

// ScriptStruct ControlRig.RigUnit_HierarchyBaseMutable
// Size: 0x38 (Inherited: 0x38)
struct FRigUnit_HierarchyBaseMutable : FRigUnitMutable {
};

// ScriptStruct ControlRig.RigUnit_HierarchyGetParent
// Size: 0x48 (Inherited: 0x08)
struct FRigUnit_HierarchyGetParent : FRigUnit_HierarchyBase {
	struct FRigElementKey Child; // 0x08(0x08)
	struct FRigElementKey Parent; // 0x10(0x08)
	struct FCachedRigElement CachedChild; // 0x18(0x18)
	struct FCachedRigElement CachedParent; // 0x30(0x18)
};

// ScriptStruct ControlRig.RigUnit_HierarchyGetParents
// Size: 0x50 (Inherited: 0x08)
struct FRigUnit_HierarchyGetParents : FRigUnit_HierarchyBase {
	struct FRigElementKey Child; // 0x08(0x08)
	bool bIncludeChild; // 0x10(0x01)
	bool bReverse; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
	struct FRigElementKeyCollection Parents; // 0x18(0x10)
	struct FCachedRigElement CachedChild; // 0x28(0x18)
	struct FRigElementKeyCollection CachedParents; // 0x40(0x10)
};

// ScriptStruct ControlRig.RigUnit_HierarchyGetParentsItemArray
// Size: 0x50 (Inherited: 0x08)
struct FRigUnit_HierarchyGetParentsItemArray : FRigUnit_HierarchyBase {
	struct FRigElementKey Child; // 0x08(0x08)
	bool bIncludeChild; // 0x10(0x01)
	bool bReverse; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
	struct TArray<struct FRigElementKey> Parents; // 0x18(0x10)
	struct FCachedRigElement CachedChild; // 0x28(0x18)
	struct FRigElementKeyCollection CachedParents; // 0x40(0x10)
};

// ScriptStruct ControlRig.RigUnit_HierarchyGetChildren
// Size: 0x50 (Inherited: 0x08)
struct FRigUnit_HierarchyGetChildren : FRigUnit_HierarchyBase {
	struct FRigElementKey Parent; // 0x08(0x08)
	bool bIncludeParent; // 0x10(0x01)
	bool bRecursive; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
	struct FRigElementKeyCollection Children; // 0x18(0x10)
	struct FCachedRigElement CachedParent; // 0x28(0x18)
	struct FRigElementKeyCollection CachedChildren; // 0x40(0x10)
};

// ScriptStruct ControlRig.RigUnit_HierarchyGetSiblings
// Size: 0x50 (Inherited: 0x08)
struct FRigUnit_HierarchyGetSiblings : FRigUnit_HierarchyBase {
	struct FRigElementKey Item; // 0x08(0x08)
	bool bIncludeItem; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FRigElementKeyCollection Siblings; // 0x18(0x10)
	struct FCachedRigElement CachedItem; // 0x28(0x18)
	struct FRigElementKeyCollection CachedSiblings; // 0x40(0x10)
};

// ScriptStruct ControlRig.RigUnit_HierarchyGetSiblingsItemArray
// Size: 0x50 (Inherited: 0x08)
struct FRigUnit_HierarchyGetSiblingsItemArray : FRigUnit_HierarchyBase {
	struct FRigElementKey Item; // 0x08(0x08)
	bool bIncludeItem; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TArray<struct FRigElementKey> Siblings; // 0x18(0x10)
	struct FCachedRigElement CachedItem; // 0x28(0x18)
	struct FRigElementKeyCollection CachedSiblings; // 0x40(0x10)
};

// ScriptStruct ControlRig.RigUnit_HierarchyGetPose
// Size: 0x90 (Inherited: 0x08)
struct FRigUnit_HierarchyGetPose : FRigUnit_HierarchyBase {
	bool Initial; // 0x08(0x01)
	enum class ERigElementType ElementType; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct FRigElementKeyCollection ItemsToGet; // 0x10(0x10)
	struct FRigPose Pose; // 0x20(0x70)
};

// ScriptStruct ControlRig.RigUnit_HierarchyGetPoseItemArray
// Size: 0x90 (Inherited: 0x08)
struct FRigUnit_HierarchyGetPoseItemArray : FRigUnit_HierarchyBase {
	bool Initial; // 0x08(0x01)
	enum class ERigElementType ElementType; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct TArray<struct FRigElementKey> ItemsToGet; // 0x10(0x10)
	struct FRigPose Pose; // 0x20(0x70)
};

// ScriptStruct ControlRig.RigUnit_HierarchySetPose
// Size: 0xc8 (Inherited: 0x38)
struct FRigUnit_HierarchySetPose : FRigUnit_HierarchyBaseMutable {
	struct FRigPose Pose; // 0x38(0x70)
	enum class ERigElementType ElementType; // 0xa8(0x01)
	enum class EBoneGetterSetterMode Space; // 0xa9(0x01)
	char pad_AA[0x6]; // 0xaa(0x06)
	struct FRigElementKeyCollection ItemsToSet; // 0xb0(0x10)
	float Weight; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
};

// ScriptStruct ControlRig.RigUnit_HierarchySetPoseItemArray
// Size: 0xc8 (Inherited: 0x38)
struct FRigUnit_HierarchySetPoseItemArray : FRigUnit_HierarchyBaseMutable {
	struct FRigPose Pose; // 0x38(0x70)
	enum class ERigElementType ElementType; // 0xa8(0x01)
	enum class EBoneGetterSetterMode Space; // 0xa9(0x01)
	char pad_AA[0x6]; // 0xaa(0x06)
	struct TArray<struct FRigElementKey> ItemsToSet; // 0xb0(0x10)
	float Weight; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
};

// ScriptStruct ControlRig.RigUnit_PoseIsEmpty
// Size: 0x80 (Inherited: 0x08)
struct FRigUnit_PoseIsEmpty : FRigUnit_HierarchyBase {
	struct FRigPose Pose; // 0x08(0x70)
	bool IsEmpty; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
};

// ScriptStruct ControlRig.RigUnit_PoseGetItems
// Size: 0x90 (Inherited: 0x08)
struct FRigUnit_PoseGetItems : FRigUnit_HierarchyBase {
	struct FRigPose Pose; // 0x08(0x70)
	enum class ERigElementType ElementType; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct FRigElementKeyCollection Items; // 0x80(0x10)
};

// ScriptStruct ControlRig.RigUnit_PoseGetItemsItemArray
// Size: 0x90 (Inherited: 0x08)
struct FRigUnit_PoseGetItemsItemArray : FRigUnit_HierarchyBase {
	struct FRigPose Pose; // 0x08(0x70)
	enum class ERigElementType ElementType; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct TArray<struct FRigElementKey> Items; // 0x80(0x10)
};

// ScriptStruct ControlRig.RigUnit_PoseGetDelta
// Size: 0x128 (Inherited: 0x08)
struct FRigUnit_PoseGetDelta : FRigUnit_HierarchyBase {
	struct FRigPose PoseA; // 0x08(0x70)
	struct FRigPose PoseB; // 0x78(0x70)
	float PositionThreshold; // 0xe8(0x04)
	float RotationThreshold; // 0xec(0x04)
	float ScaleThreshold; // 0xf0(0x04)
	float CurveThreshold; // 0xf4(0x04)
	enum class ERigElementType ElementType; // 0xf8(0x01)
	enum class EBoneGetterSetterMode Space; // 0xf9(0x01)
	char pad_FA[0x6]; // 0xfa(0x06)
	struct FRigElementKeyCollection ItemsToCompare; // 0x100(0x10)
	bool PosesAreEqual; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)
	struct FRigElementKeyCollection ItemsWithDelta; // 0x118(0x10)
};

// ScriptStruct ControlRig.RigUnit_PoseGetTransform
// Size: 0x100 (Inherited: 0x08)
struct FRigUnit_PoseGetTransform : FRigUnit_HierarchyBase {
	struct FRigPose Pose; // 0x08(0x70)
	struct FRigElementKey Item; // 0x78(0x08)
	enum class EBoneGetterSetterMode Space; // 0x80(0x01)
	bool Valid; // 0x81(0x01)
	char pad_82[0xe]; // 0x82(0x0e)
	struct FTransform Transform; // 0x90(0x60)
	float CurveValue; // 0xf0(0x04)
	int32_t CachedPoseElementIndex; // 0xf4(0x04)
	int32_t CachedPoseHash; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
};

// ScriptStruct ControlRig.RigUnit_PoseGetTransformArray
// Size: 0x90 (Inherited: 0x08)
struct FRigUnit_PoseGetTransformArray : FRigUnit_HierarchyBase {
	struct FRigPose Pose; // 0x08(0x70)
	enum class EBoneGetterSetterMode Space; // 0x78(0x01)
	bool Valid; // 0x79(0x01)
	char pad_7A[0x6]; // 0x7a(0x06)
	struct TArray<struct FTransform> Transforms; // 0x80(0x10)
};

// ScriptStruct ControlRig.RigUnit_PoseGetCurve
// Size: 0x90 (Inherited: 0x08)
struct FRigUnit_PoseGetCurve : FRigUnit_HierarchyBase {
	struct FRigPose Pose; // 0x08(0x70)
	struct FName Curve; // 0x78(0x04)
	bool Valid; // 0x7c(0x01)
	char pad_7D[0x3]; // 0x7d(0x03)
	float CurveValue; // 0x80(0x04)
	int32_t CachedPoseElementIndex; // 0x84(0x04)
	int32_t CachedPoseHash; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// ScriptStruct ControlRig.RigUnit_PoseLoop
// Size: 0x1c0 (Inherited: 0x38)
struct FRigUnit_PoseLoop : FRigUnit_HierarchyBaseMutable {
	struct FRigPose Pose; // 0x38(0x70)
	struct FRigElementKey Item; // 0xa8(0x08)
	struct FTransform GlobalTransform; // 0xb0(0x60)
	struct FTransform LocalTransform; // 0x110(0x60)
	float CurveValue; // 0x170(0x04)
	int32_t Index; // 0x174(0x04)
	int32_t Count; // 0x178(0x04)
	float Ratio; // 0x17c(0x04)
	bool Continue; // 0x180(0x01)
	char pad_181[0x7]; // 0x181(0x07)
	struct FControlRigExecuteContext Completed; // 0x188(0x30)
	char pad_1B8[0x8]; // 0x1b8(0x08)
};

// ScriptStruct ControlRig.RigUnit_InteractionExecution
// Size: 0x38 (Inherited: 0x08)
struct FRigUnit_InteractionExecution : FRigUnit {
	struct FControlRigExecuteContext ExecuteContext; // 0x08(0x30)
};

// ScriptStruct ControlRig.RigUnit_InverseExecution
// Size: 0x38 (Inherited: 0x08)
struct FRigUnit_InverseExecution : FRigUnit {
	struct FControlRigExecuteContext ExecuteContext; // 0x08(0x30)
};

// ScriptStruct ControlRig.RigUnit_IsInteracting
// Size: 0x20 (Inherited: 0x08)
struct FRigUnit_IsInteracting : FRigUnit {
	bool bIsInteracting; // 0x08(0x01)
	bool bIsTranslating; // 0x09(0x01)
	bool bIsRotating; // 0x0a(0x01)
	bool bIsScaling; // 0x0b(0x01)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FRigElementKey> Items; // 0x10(0x10)
};

// ScriptStruct ControlRig.RigUnit_ItemBase
// Size: 0x08 (Inherited: 0x08)
struct FRigUnit_ItemBase : FRigUnit {
};

// ScriptStruct ControlRig.RigUnit_ItemBaseMutable
// Size: 0x38 (Inherited: 0x38)
struct FRigUnit_ItemBaseMutable : FRigUnitMutable {
};

// ScriptStruct ControlRig.RigUnit_ItemExists
// Size: 0x30 (Inherited: 0x08)
struct FRigUnit_ItemExists : FRigUnit_ItemBase {
	struct FRigElementKey Item; // 0x08(0x08)
	bool Exists; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FCachedRigElement CachedIndex; // 0x18(0x18)
};

// ScriptStruct ControlRig.RigUnit_ItemReplace
// Size: 0x20 (Inherited: 0x08)
struct FRigUnit_ItemReplace : FRigUnit_ItemBase {
	struct FRigElementKey Item; // 0x08(0x08)
	struct FName Old; // 0x10(0x04)
	struct FName New; // 0x14(0x04)
	struct FRigElementKey Result; // 0x18(0x08)
};

// ScriptStruct ControlRig.RigUnit_ItemEquals
// Size: 0x20 (Inherited: 0x08)
struct FRigUnit_ItemEquals : FRigUnit_ItemBase {
	struct FRigElementKey A; // 0x08(0x08)
	struct FRigElementKey B; // 0x10(0x08)
	bool Result; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct ControlRig.RigUnit_ItemNotEquals
// Size: 0x20 (Inherited: 0x08)
struct FRigUnit_ItemNotEquals : FRigUnit_ItemBase {
	struct FRigElementKey A; // 0x08(0x08)
	struct FRigElementKey B; // 0x10(0x08)
	bool Result; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct ControlRig.RigUnit_ItemTypeEquals
// Size: 0x20 (Inherited: 0x08)
struct FRigUnit_ItemTypeEquals : FRigUnit_ItemBase {
	struct FRigElementKey A; // 0x08(0x08)
	struct FRigElementKey B; // 0x10(0x08)
	bool Result; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct ControlRig.RigUnit_ItemTypeNotEquals
// Size: 0x20 (Inherited: 0x08)
struct FRigUnit_ItemTypeNotEquals : FRigUnit_ItemBase {
	struct FRigElementKey A; // 0x08(0x08)
	struct FRigElementKey B; // 0x10(0x08)
	bool Result; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct ControlRig.RigUnit_KalmanFloat
// Size: 0x30 (Inherited: 0x08)
struct FRigUnit_KalmanFloat : FRigUnit_SimBase {
	float Value; // 0x08(0x04)
	int32_t BufferSize; // 0x0c(0x04)
	float Result; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<float> Buffer; // 0x18(0x10)
	int32_t LastInsertIndex; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct ControlRig.RigUnit_KalmanVector
// Size: 0x58 (Inherited: 0x08)
struct FRigUnit_KalmanVector : FRigUnit_SimBase {
	struct FVector Value; // 0x08(0x18)
	int32_t BufferSize; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FVector Result; // 0x28(0x18)
	struct TArray<struct FVector> Buffer; // 0x40(0x10)
	int32_t LastInsertIndex; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct ControlRig.RigUnit_KalmanTransform
// Size: 0x100 (Inherited: 0x08)
struct FRigUnit_KalmanTransform : FRigUnit_SimBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Value; // 0x10(0x60)
	int32_t BufferSize; // 0x70(0x04)
	char pad_74[0xc]; // 0x74(0x0c)
	struct FTransform Result; // 0x80(0x60)
	struct TArray<struct FTransform> Buffer; // 0xe0(0x10)
	int32_t LastInsertIndex; // 0xf0(0x04)
	char pad_F4[0xc]; // 0xf4(0x0c)
};

// ScriptStruct ControlRig.RigUnit_MathBase
// Size: 0x08 (Inherited: 0x08)
struct FRigUnit_MathBase : FRigUnit {
};

// ScriptStruct ControlRig.RigUnit_MathMutableBase
// Size: 0x38 (Inherited: 0x38)
struct FRigUnit_MathMutableBase : FRigUnitMutable {
};

// ScriptStruct ControlRig.RigUnit_MathBoolBase
// Size: 0x08 (Inherited: 0x08)
struct FRigUnit_MathBoolBase : FRigUnit_MathBase {
};

// ScriptStruct ControlRig.RigUnit_MathBoolConstant
// Size: 0x10 (Inherited: 0x08)
struct FRigUnit_MathBoolConstant : FRigUnit_MathBoolBase {
	bool Value; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct ControlRig.RigUnit_MathBoolUnaryOp
// Size: 0x10 (Inherited: 0x08)
struct FRigUnit_MathBoolUnaryOp : FRigUnit_MathBoolBase {
	bool Value; // 0x08(0x01)
	bool Result; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
};

// ScriptStruct ControlRig.RigUnit_MathBoolBinaryOp
// Size: 0x10 (Inherited: 0x08)
struct FRigUnit_MathBoolBinaryOp : FRigUnit_MathBoolBase {
	bool A; // 0x08(0x01)
	bool B; // 0x09(0x01)
	bool Result; // 0x0a(0x01)
	char pad_B[0x5]; // 0x0b(0x05)
};

// ScriptStruct ControlRig.RigUnit_MathBoolConstTrue
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathBoolConstTrue : FRigUnit_MathBoolConstant {
};

// ScriptStruct ControlRig.RigUnit_MathBoolConstFalse
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathBoolConstFalse : FRigUnit_MathBoolConstant {
};

// ScriptStruct ControlRig.RigUnit_MathBoolNot
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathBoolNot : FRigUnit_MathBoolUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathBoolAnd
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathBoolAnd : FRigUnit_MathBoolBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathBoolNand
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathBoolNand : FRigUnit_MathBoolBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathBoolNand2
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathBoolNand2 : FRigUnit_MathBoolBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathBoolOr
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathBoolOr : FRigUnit_MathBoolBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathBoolEquals
// Size: 0x10 (Inherited: 0x08)
struct FRigUnit_MathBoolEquals : FRigUnit_MathBoolBase {
	bool A; // 0x08(0x01)
	bool B; // 0x09(0x01)
	bool Result; // 0x0a(0x01)
	char pad_B[0x5]; // 0x0b(0x05)
};

// ScriptStruct ControlRig.RigUnit_MathBoolNotEquals
// Size: 0x10 (Inherited: 0x08)
struct FRigUnit_MathBoolNotEquals : FRigUnit_MathBoolBase {
	bool A; // 0x08(0x01)
	bool B; // 0x09(0x01)
	bool Result; // 0x0a(0x01)
	char pad_B[0x5]; // 0x0b(0x05)
};

// ScriptStruct ControlRig.RigUnit_MathBoolToggled
// Size: 0x10 (Inherited: 0x08)
struct FRigUnit_MathBoolToggled : FRigUnit_MathBoolBase {
	bool Value; // 0x08(0x01)
	bool Toggled; // 0x09(0x01)
	bool Initialized; // 0x0a(0x01)
	bool LastValue; // 0x0b(0x01)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct ControlRig.RigUnit_MathBoolFlipFlop
// Size: 0x18 (Inherited: 0x08)
struct FRigUnit_MathBoolFlipFlop : FRigUnit_MathBoolBase {
	bool StartValue; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float Duration; // 0x0c(0x04)
	bool Result; // 0x10(0x01)
	bool LastValue; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	float TimeLeft; // 0x14(0x04)
};

// ScriptStruct ControlRig.RigUnit_MathBoolOnce
// Size: 0x18 (Inherited: 0x08)
struct FRigUnit_MathBoolOnce : FRigUnit_MathBoolBase {
	float Duration; // 0x08(0x04)
	bool Result; // 0x0c(0x01)
	bool LastValue; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	float TimeLeft; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ControlRig.RigUnit_MathBoolToFloat
// Size: 0x10 (Inherited: 0x08)
struct FRigUnit_MathBoolToFloat : FRigUnit_MathBoolBase {
	bool Value; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float Result; // 0x0c(0x04)
};

// ScriptStruct ControlRig.RigUnit_MathBoolToInteger
// Size: 0x10 (Inherited: 0x08)
struct FRigUnit_MathBoolToInteger : FRigUnit_MathBoolBase {
	bool Value; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t Result; // 0x0c(0x04)
};

// ScriptStruct ControlRig.RigUnit_MathColorBase
// Size: 0x08 (Inherited: 0x08)
struct FRigUnit_MathColorBase : FRigUnit_MathBase {
};

// ScriptStruct ControlRig.RigUnit_MathColorBinaryOp
// Size: 0x38 (Inherited: 0x08)
struct FRigUnit_MathColorBinaryOp : FRigUnit_MathColorBase {
	struct FLinearColor A; // 0x08(0x10)
	struct FLinearColor B; // 0x18(0x10)
	struct FLinearColor Result; // 0x28(0x10)
};

// ScriptStruct ControlRig.RigUnit_MathColorFromFloat
// Size: 0x20 (Inherited: 0x08)
struct FRigUnit_MathColorFromFloat : FRigUnit_MathColorBase {
	float Value; // 0x08(0x04)
	struct FLinearColor Result; // 0x0c(0x10)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct ControlRig.RigUnit_MathColorAdd
// Size: 0x38 (Inherited: 0x38)
struct FRigUnit_MathColorAdd : FRigUnit_MathColorBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathColorSub
// Size: 0x38 (Inherited: 0x38)
struct FRigUnit_MathColorSub : FRigUnit_MathColorBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathColorMul
// Size: 0x38 (Inherited: 0x38)
struct FRigUnit_MathColorMul : FRigUnit_MathColorBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathColorLerp
// Size: 0x40 (Inherited: 0x08)
struct FRigUnit_MathColorLerp : FRigUnit_MathColorBase {
	struct FLinearColor A; // 0x08(0x10)
	struct FLinearColor B; // 0x18(0x10)
	float T; // 0x28(0x04)
	struct FLinearColor Result; // 0x2c(0x10)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct ControlRig.RigUnit_MathDoubleBase
// Size: 0x08 (Inherited: 0x08)
struct FRigUnit_MathDoubleBase : FRigUnit_MathBase {
};

// ScriptStruct ControlRig.RigUnit_MathDoubleConstant
// Size: 0x10 (Inherited: 0x08)
struct FRigUnit_MathDoubleConstant : FRigUnit_MathDoubleBase {
	double Value; // 0x08(0x08)
};

// ScriptStruct ControlRig.RigUnit_MathDoubleUnaryOp
// Size: 0x18 (Inherited: 0x08)
struct FRigUnit_MathDoubleUnaryOp : FRigUnit_MathDoubleBase {
	double Value; // 0x08(0x08)
	double Result; // 0x10(0x08)
};

// ScriptStruct ControlRig.RigUnit_MathDoubleBinaryOp
// Size: 0x20 (Inherited: 0x08)
struct FRigUnit_MathDoubleBinaryOp : FRigUnit_MathDoubleBase {
	double A; // 0x08(0x08)
	double B; // 0x10(0x08)
	double Result; // 0x18(0x08)
};

// ScriptStruct ControlRig.RigUnit_MathDoubleConstPi
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathDoubleConstPi : FRigUnit_MathDoubleConstant {
};

// ScriptStruct ControlRig.RigUnit_MathDoubleConstHalfPi
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathDoubleConstHalfPi : FRigUnit_MathDoubleConstant {
};

// ScriptStruct ControlRig.RigUnit_MathDoubleConstTwoPi
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathDoubleConstTwoPi : FRigUnit_MathDoubleConstant {
};

// ScriptStruct ControlRig.RigUnit_MathDoubleConstE
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathDoubleConstE : FRigUnit_MathDoubleConstant {
};

// ScriptStruct ControlRig.RigUnit_MathDoubleAdd
// Size: 0x20 (Inherited: 0x20)
struct FRigUnit_MathDoubleAdd : FRigUnit_MathDoubleBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathDoubleSub
// Size: 0x20 (Inherited: 0x20)
struct FRigUnit_MathDoubleSub : FRigUnit_MathDoubleBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathDoubleMul
// Size: 0x20 (Inherited: 0x20)
struct FRigUnit_MathDoubleMul : FRigUnit_MathDoubleBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathDoubleDiv
// Size: 0x20 (Inherited: 0x20)
struct FRigUnit_MathDoubleDiv : FRigUnit_MathDoubleBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathDoubleMod
// Size: 0x20 (Inherited: 0x20)
struct FRigUnit_MathDoubleMod : FRigUnit_MathDoubleBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathDoubleMin
// Size: 0x20 (Inherited: 0x20)
struct FRigUnit_MathDoubleMin : FRigUnit_MathDoubleBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathDoubleMax
// Size: 0x20 (Inherited: 0x20)
struct FRigUnit_MathDoubleMax : FRigUnit_MathDoubleBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathDoublePow
// Size: 0x20 (Inherited: 0x20)
struct FRigUnit_MathDoublePow : FRigUnit_MathDoubleBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathDoubleSqrt
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_MathDoubleSqrt : FRigUnit_MathDoubleUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathDoubleNegate
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_MathDoubleNegate : FRigUnit_MathDoubleUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathDoubleAbs
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_MathDoubleAbs : FRigUnit_MathDoubleUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathDoubleFloor
// Size: 0x20 (Inherited: 0x08)
struct FRigUnit_MathDoubleFloor : FRigUnit_MathDoubleBase {
	double Value; // 0x08(0x08)
	double Result; // 0x10(0x08)
	int32_t Int; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct ControlRig.RigUnit_MathDoubleCeil
// Size: 0x20 (Inherited: 0x08)
struct FRigUnit_MathDoubleCeil : FRigUnit_MathDoubleBase {
	double Value; // 0x08(0x08)
	double Result; // 0x10(0x08)
	int32_t Int; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct ControlRig.RigUnit_MathDoubleRound
// Size: 0x20 (Inherited: 0x08)
struct FRigUnit_MathDoubleRound : FRigUnit_MathDoubleBase {
	double Value; // 0x08(0x08)
	double Result; // 0x10(0x08)
	int32_t Int; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct ControlRig.RigUnit_MathDoubleToInt
// Size: 0x18 (Inherited: 0x08)
struct FRigUnit_MathDoubleToInt : FRigUnit_MathDoubleBase {
	double Value; // 0x08(0x08)
	int32_t Result; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ControlRig.RigUnit_MathDoubleSign
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_MathDoubleSign : FRigUnit_MathDoubleUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathDoubleClamp
// Size: 0x28 (Inherited: 0x08)
struct FRigUnit_MathDoubleClamp : FRigUnit_MathDoubleBase {
	double Value; // 0x08(0x08)
	double Minimum; // 0x10(0x08)
	double Maximum; // 0x18(0x08)
	double Result; // 0x20(0x08)
};

// ScriptStruct ControlRig.RigUnit_MathDoubleLerp
// Size: 0x28 (Inherited: 0x08)
struct FRigUnit_MathDoubleLerp : FRigUnit_MathDoubleBase {
	double A; // 0x08(0x08)
	double B; // 0x10(0x08)
	double T; // 0x18(0x08)
	double Result; // 0x20(0x08)
};

// ScriptStruct ControlRig.RigUnit_MathDoubleRemap
// Size: 0x40 (Inherited: 0x08)
struct FRigUnit_MathDoubleRemap : FRigUnit_MathDoubleBase {
	double Value; // 0x08(0x08)
	double SourceMinimum; // 0x10(0x08)
	double SourceMaximum; // 0x18(0x08)
	double TargetMinimum; // 0x20(0x08)
	double TargetMaximum; // 0x28(0x08)
	bool bClamp; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	double Result; // 0x38(0x08)
};

// ScriptStruct ControlRig.RigUnit_MathDoubleEquals
// Size: 0x20 (Inherited: 0x08)
struct FRigUnit_MathDoubleEquals : FRigUnit_MathDoubleBase {
	double A; // 0x08(0x08)
	double B; // 0x10(0x08)
	bool Result; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct ControlRig.RigUnit_MathDoubleNotEquals
// Size: 0x20 (Inherited: 0x08)
struct FRigUnit_MathDoubleNotEquals : FRigUnit_MathDoubleBase {
	double A; // 0x08(0x08)
	double B; // 0x10(0x08)
	bool Result; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct ControlRig.RigUnit_MathDoubleGreater
// Size: 0x20 (Inherited: 0x08)
struct FRigUnit_MathDoubleGreater : FRigUnit_MathDoubleBase {
	double A; // 0x08(0x08)
	double B; // 0x10(0x08)
	bool Result; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct ControlRig.RigUnit_MathDoubleLess
// Size: 0x20 (Inherited: 0x08)
struct FRigUnit_MathDoubleLess : FRigUnit_MathDoubleBase {
	double A; // 0x08(0x08)
	double B; // 0x10(0x08)
	bool Result; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct ControlRig.RigUnit_MathDoubleGreaterEqual
// Size: 0x20 (Inherited: 0x08)
struct FRigUnit_MathDoubleGreaterEqual : FRigUnit_MathDoubleBase {
	double A; // 0x08(0x08)
	double B; // 0x10(0x08)
	bool Result; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct ControlRig.RigUnit_MathDoubleLessEqual
// Size: 0x20 (Inherited: 0x08)
struct FRigUnit_MathDoubleLessEqual : FRigUnit_MathDoubleBase {
	double A; // 0x08(0x08)
	double B; // 0x10(0x08)
	bool Result; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct ControlRig.RigUnit_MathDoubleIsNearlyZero
// Size: 0x20 (Inherited: 0x08)
struct FRigUnit_MathDoubleIsNearlyZero : FRigUnit_MathDoubleBase {
	double Value; // 0x08(0x08)
	double Tolerance; // 0x10(0x08)
	bool Result; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct ControlRig.RigUnit_MathDoubleIsNearlyEqual
// Size: 0x28 (Inherited: 0x08)
struct FRigUnit_MathDoubleIsNearlyEqual : FRigUnit_MathDoubleBase {
	double A; // 0x08(0x08)
	double B; // 0x10(0x08)
	double Tolerance; // 0x18(0x08)
	bool Result; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct ControlRig.RigUnit_MathDoubleDeg
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_MathDoubleDeg : FRigUnit_MathDoubleUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathDoubleRad
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_MathDoubleRad : FRigUnit_MathDoubleUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathDoubleSin
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_MathDoubleSin : FRigUnit_MathDoubleUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathDoubleCos
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_MathDoubleCos : FRigUnit_MathDoubleUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathDoubleTan
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_MathDoubleTan : FRigUnit_MathDoubleUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathDoubleAsin
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_MathDoubleAsin : FRigUnit_MathDoubleUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathDoubleAcos
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_MathDoubleAcos : FRigUnit_MathDoubleUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathDoubleAtan
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_MathDoubleAtan : FRigUnit_MathDoubleUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathDoubleLawOfCosine
// Size: 0x40 (Inherited: 0x08)
struct FRigUnit_MathDoubleLawOfCosine : FRigUnit_MathDoubleBase {
	double A; // 0x08(0x08)
	double B; // 0x10(0x08)
	double C; // 0x18(0x08)
	double AlphaAngle; // 0x20(0x08)
	double BetaAngle; // 0x28(0x08)
	double GammaAngle; // 0x30(0x08)
	bool bValid; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct ControlRig.RigUnit_MathDoubleExponential
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_MathDoubleExponential : FRigUnit_MathDoubleUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathFloatBase
// Size: 0x08 (Inherited: 0x08)
struct FRigUnit_MathFloatBase : FRigUnit_MathBase {
};

// ScriptStruct ControlRig.RigUnit_MathFloatConstant
// Size: 0x10 (Inherited: 0x08)
struct FRigUnit_MathFloatConstant : FRigUnit_MathFloatBase {
	float Value; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct ControlRig.RigUnit_MathFloatUnaryOp
// Size: 0x10 (Inherited: 0x08)
struct FRigUnit_MathFloatUnaryOp : FRigUnit_MathFloatBase {
	float Value; // 0x08(0x04)
	float Result; // 0x0c(0x04)
};

// ScriptStruct ControlRig.RigUnit_MathFloatBinaryOp
// Size: 0x18 (Inherited: 0x08)
struct FRigUnit_MathFloatBinaryOp : FRigUnit_MathFloatBase {
	float A; // 0x08(0x04)
	float B; // 0x0c(0x04)
	float Result; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ControlRig.RigUnit_MathFloatConstPi
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathFloatConstPi : FRigUnit_MathFloatConstant {
};

// ScriptStruct ControlRig.RigUnit_MathFloatConstHalfPi
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathFloatConstHalfPi : FRigUnit_MathFloatConstant {
};

// ScriptStruct ControlRig.RigUnit_MathFloatConstTwoPi
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathFloatConstTwoPi : FRigUnit_MathFloatConstant {
};

// ScriptStruct ControlRig.RigUnit_MathFloatConstE
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathFloatConstE : FRigUnit_MathFloatConstant {
};

// ScriptStruct ControlRig.RigUnit_MathFloatAdd
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_MathFloatAdd : FRigUnit_MathFloatBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathFloatSub
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_MathFloatSub : FRigUnit_MathFloatBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathFloatMul
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_MathFloatMul : FRigUnit_MathFloatBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathFloatDiv
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_MathFloatDiv : FRigUnit_MathFloatBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathFloatMod
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_MathFloatMod : FRigUnit_MathFloatBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathFloatMin
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_MathFloatMin : FRigUnit_MathFloatBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathFloatMax
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_MathFloatMax : FRigUnit_MathFloatBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathFloatPow
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_MathFloatPow : FRigUnit_MathFloatBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathFloatSqrt
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathFloatSqrt : FRigUnit_MathFloatUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathFloatNegate
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathFloatNegate : FRigUnit_MathFloatUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathFloatAbs
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathFloatAbs : FRigUnit_MathFloatUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathFloatFloor
// Size: 0x18 (Inherited: 0x08)
struct FRigUnit_MathFloatFloor : FRigUnit_MathFloatBase {
	float Value; // 0x08(0x04)
	float Result; // 0x0c(0x04)
	int32_t Int; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ControlRig.RigUnit_MathFloatCeil
// Size: 0x18 (Inherited: 0x08)
struct FRigUnit_MathFloatCeil : FRigUnit_MathFloatBase {
	float Value; // 0x08(0x04)
	float Result; // 0x0c(0x04)
	int32_t Int; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ControlRig.RigUnit_MathFloatRound
// Size: 0x18 (Inherited: 0x08)
struct FRigUnit_MathFloatRound : FRigUnit_MathFloatBase {
	float Value; // 0x08(0x04)
	float Result; // 0x0c(0x04)
	int32_t Int; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ControlRig.RigUnit_MathFloatToInt
// Size: 0x10 (Inherited: 0x08)
struct FRigUnit_MathFloatToInt : FRigUnit_MathFloatBase {
	float Value; // 0x08(0x04)
	int32_t Result; // 0x0c(0x04)
};

// ScriptStruct ControlRig.RigUnit_MathFloatSign
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathFloatSign : FRigUnit_MathFloatUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathFloatClamp
// Size: 0x18 (Inherited: 0x08)
struct FRigUnit_MathFloatClamp : FRigUnit_MathFloatBase {
	float Value; // 0x08(0x04)
	float Minimum; // 0x0c(0x04)
	float Maximum; // 0x10(0x04)
	float Result; // 0x14(0x04)
};

// ScriptStruct ControlRig.RigUnit_MathFloatLerp
// Size: 0x18 (Inherited: 0x08)
struct FRigUnit_MathFloatLerp : FRigUnit_MathFloatBase {
	float A; // 0x08(0x04)
	float B; // 0x0c(0x04)
	float T; // 0x10(0x04)
	float Result; // 0x14(0x04)
};

// ScriptStruct ControlRig.RigUnit_MathFloatRemap
// Size: 0x28 (Inherited: 0x08)
struct FRigUnit_MathFloatRemap : FRigUnit_MathFloatBase {
	float Value; // 0x08(0x04)
	float SourceMinimum; // 0x0c(0x04)
	float SourceMaximum; // 0x10(0x04)
	float TargetMinimum; // 0x14(0x04)
	float TargetMaximum; // 0x18(0x04)
	bool bClamp; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float Result; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct ControlRig.RigUnit_MathFloatEquals
// Size: 0x18 (Inherited: 0x08)
struct FRigUnit_MathFloatEquals : FRigUnit_MathFloatBase {
	float A; // 0x08(0x04)
	float B; // 0x0c(0x04)
	bool Result; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct ControlRig.RigUnit_MathFloatNotEquals
// Size: 0x18 (Inherited: 0x08)
struct FRigUnit_MathFloatNotEquals : FRigUnit_MathFloatBase {
	float A; // 0x08(0x04)
	float B; // 0x0c(0x04)
	bool Result; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct ControlRig.RigUnit_MathFloatGreater
// Size: 0x18 (Inherited: 0x08)
struct FRigUnit_MathFloatGreater : FRigUnit_MathFloatBase {
	float A; // 0x08(0x04)
	float B; // 0x0c(0x04)
	bool Result; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct ControlRig.RigUnit_MathFloatLess
// Size: 0x18 (Inherited: 0x08)
struct FRigUnit_MathFloatLess : FRigUnit_MathFloatBase {
	float A; // 0x08(0x04)
	float B; // 0x0c(0x04)
	bool Result; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct ControlRig.RigUnit_MathFloatGreaterEqual
// Size: 0x18 (Inherited: 0x08)
struct FRigUnit_MathFloatGreaterEqual : FRigUnit_MathFloatBase {
	float A; // 0x08(0x04)
	float B; // 0x0c(0x04)
	bool Result; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct ControlRig.RigUnit_MathFloatLessEqual
// Size: 0x18 (Inherited: 0x08)
struct FRigUnit_MathFloatLessEqual : FRigUnit_MathFloatBase {
	float A; // 0x08(0x04)
	float B; // 0x0c(0x04)
	bool Result; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct ControlRig.RigUnit_MathFloatIsNearlyZero
// Size: 0x18 (Inherited: 0x08)
struct FRigUnit_MathFloatIsNearlyZero : FRigUnit_MathFloatBase {
	float Value; // 0x08(0x04)
	float Tolerance; // 0x0c(0x04)
	bool Result; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct ControlRig.RigUnit_MathFloatIsNearlyEqual
// Size: 0x18 (Inherited: 0x08)
struct FRigUnit_MathFloatIsNearlyEqual : FRigUnit_MathFloatBase {
	float A; // 0x08(0x04)
	float B; // 0x0c(0x04)
	float Tolerance; // 0x10(0x04)
	bool Result; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct ControlRig.RigUnit_MathFloatSelectBool
// Size: 0x18 (Inherited: 0x08)
struct FRigUnit_MathFloatSelectBool : FRigUnit_MathFloatBase {
	bool Condition; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float IfTrue; // 0x0c(0x04)
	float IfFalse; // 0x10(0x04)
	float Result; // 0x14(0x04)
};

// ScriptStruct ControlRig.RigUnit_MathFloatDeg
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathFloatDeg : FRigUnit_MathFloatUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathFloatRad
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathFloatRad : FRigUnit_MathFloatUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathFloatSin
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathFloatSin : FRigUnit_MathFloatUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathFloatCos
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathFloatCos : FRigUnit_MathFloatUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathFloatTan
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathFloatTan : FRigUnit_MathFloatUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathFloatAsin
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathFloatAsin : FRigUnit_MathFloatUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathFloatAcos
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathFloatAcos : FRigUnit_MathFloatUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathFloatAtan
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathFloatAtan : FRigUnit_MathFloatUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathFloatLawOfCosine
// Size: 0x28 (Inherited: 0x08)
struct FRigUnit_MathFloatLawOfCosine : FRigUnit_MathFloatBase {
	float A; // 0x08(0x04)
	float B; // 0x0c(0x04)
	float C; // 0x10(0x04)
	float AlphaAngle; // 0x14(0x04)
	float BetaAngle; // 0x18(0x04)
	float GammaAngle; // 0x1c(0x04)
	bool bValid; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct ControlRig.RigUnit_MathFloatExponential
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathFloatExponential : FRigUnit_MathFloatUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathIntBase
// Size: 0x08 (Inherited: 0x08)
struct FRigUnit_MathIntBase : FRigUnit_MathBase {
};

// ScriptStruct ControlRig.RigUnit_MathIntUnaryOp
// Size: 0x10 (Inherited: 0x08)
struct FRigUnit_MathIntUnaryOp : FRigUnit_MathIntBase {
	int32_t Value; // 0x08(0x04)
	int32_t Result; // 0x0c(0x04)
};

// ScriptStruct ControlRig.RigUnit_MathIntBinaryOp
// Size: 0x18 (Inherited: 0x08)
struct FRigUnit_MathIntBinaryOp : FRigUnit_MathIntBase {
	int32_t A; // 0x08(0x04)
	int32_t B; // 0x0c(0x04)
	int32_t Result; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ControlRig.RigUnit_MathIntAdd
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_MathIntAdd : FRigUnit_MathIntBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathIntSub
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_MathIntSub : FRigUnit_MathIntBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathIntMul
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_MathIntMul : FRigUnit_MathIntBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathIntDiv
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_MathIntDiv : FRigUnit_MathIntBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathIntMod
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_MathIntMod : FRigUnit_MathIntBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathIntMin
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_MathIntMin : FRigUnit_MathIntBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathIntMax
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_MathIntMax : FRigUnit_MathIntBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathIntPow
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_MathIntPow : FRigUnit_MathIntBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathIntNegate
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathIntNegate : FRigUnit_MathIntUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathIntAbs
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathIntAbs : FRigUnit_MathIntUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathIntToFloat
// Size: 0x10 (Inherited: 0x08)
struct FRigUnit_MathIntToFloat : FRigUnit_MathIntBase {
	int32_t Value; // 0x08(0x04)
	float Result; // 0x0c(0x04)
};

// ScriptStruct ControlRig.RigUnit_MathIntSign
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathIntSign : FRigUnit_MathIntUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathIntClamp
// Size: 0x18 (Inherited: 0x08)
struct FRigUnit_MathIntClamp : FRigUnit_MathIntBase {
	int32_t Value; // 0x08(0x04)
	int32_t Minimum; // 0x0c(0x04)
	int32_t Maximum; // 0x10(0x04)
	int32_t Result; // 0x14(0x04)
};

// ScriptStruct ControlRig.RigUnit_MathIntEquals
// Size: 0x18 (Inherited: 0x08)
struct FRigUnit_MathIntEquals : FRigUnit_MathIntBase {
	int32_t A; // 0x08(0x04)
	int32_t B; // 0x0c(0x04)
	bool Result; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct ControlRig.RigUnit_MathIntNotEquals
// Size: 0x18 (Inherited: 0x08)
struct FRigUnit_MathIntNotEquals : FRigUnit_MathIntBase {
	int32_t A; // 0x08(0x04)
	int32_t B; // 0x0c(0x04)
	bool Result; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct ControlRig.RigUnit_MathIntGreater
// Size: 0x18 (Inherited: 0x08)
struct FRigUnit_MathIntGreater : FRigUnit_MathIntBase {
	int32_t A; // 0x08(0x04)
	int32_t B; // 0x0c(0x04)
	bool Result; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct ControlRig.RigUnit_MathIntLess
// Size: 0x18 (Inherited: 0x08)
struct FRigUnit_MathIntLess : FRigUnit_MathIntBase {
	int32_t A; // 0x08(0x04)
	int32_t B; // 0x0c(0x04)
	bool Result; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct ControlRig.RigUnit_MathIntGreaterEqual
// Size: 0x18 (Inherited: 0x08)
struct FRigUnit_MathIntGreaterEqual : FRigUnit_MathIntBase {
	int32_t A; // 0x08(0x04)
	int32_t B; // 0x0c(0x04)
	bool Result; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct ControlRig.RigUnit_MathIntLessEqual
// Size: 0x18 (Inherited: 0x08)
struct FRigUnit_MathIntLessEqual : FRigUnit_MathIntBase {
	int32_t A; // 0x08(0x04)
	int32_t B; // 0x0c(0x04)
	bool Result; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct ControlRig.RigUnit_MathMatrixBase
// Size: 0x08 (Inherited: 0x08)
struct FRigUnit_MathMatrixBase : FRigUnit_MathBase {
};

// ScriptStruct ControlRig.RigUnit_MathMatrixUnaryOp
// Size: 0x110 (Inherited: 0x08)
struct FRigUnit_MathMatrixUnaryOp : FRigUnit_MathMatrixBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FMatrix Value; // 0x10(0x80)
	struct FMatrix Result; // 0x90(0x80)
};

// ScriptStruct ControlRig.RigUnit_MathMatrixBinaryOp
// Size: 0x190 (Inherited: 0x08)
struct FRigUnit_MathMatrixBinaryOp : FRigUnit_MathMatrixBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FMatrix A; // 0x10(0x80)
	struct FMatrix B; // 0x90(0x80)
	struct FMatrix Result; // 0x110(0x80)
};

// ScriptStruct ControlRig.RigUnit_MathMatrixToTransform
// Size: 0xf0 (Inherited: 0x08)
struct FRigUnit_MathMatrixToTransform : FRigUnit_MathMatrixBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FMatrix Value; // 0x10(0x80)
	struct FTransform Result; // 0x90(0x60)
};

// ScriptStruct ControlRig.RigUnit_MathMatrixFromTransform
// Size: 0xf0 (Inherited: 0x08)
struct FRigUnit_MathMatrixFromTransform : FRigUnit_MathMatrixBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Transform; // 0x10(0x60)
	struct FMatrix Result; // 0x70(0x80)
};

// ScriptStruct ControlRig.RigUnit_MathMatrixFromTransformV2
// Size: 0xf0 (Inherited: 0x08)
struct FRigUnit_MathMatrixFromTransformV2 : FRigUnit_MathMatrixBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Value; // 0x10(0x60)
	struct FMatrix Result; // 0x70(0x80)
};

// ScriptStruct ControlRig.RigUnit_MathMatrixToVectors
// Size: 0xf0 (Inherited: 0x08)
struct FRigUnit_MathMatrixToVectors : FRigUnit_MathMatrixBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FMatrix Value; // 0x10(0x80)
	struct FVector Origin; // 0x90(0x18)
	struct FVector X; // 0xa8(0x18)
	struct FVector Y; // 0xc0(0x18)
	struct FVector Z; // 0xd8(0x18)
};

// ScriptStruct ControlRig.RigUnit_MathMatrixFromVectors
// Size: 0xf0 (Inherited: 0x08)
struct FRigUnit_MathMatrixFromVectors : FRigUnit_MathMatrixBase {
	struct FVector Origin; // 0x08(0x18)
	struct FVector X; // 0x20(0x18)
	struct FVector Y; // 0x38(0x18)
	struct FVector Z; // 0x50(0x18)
	char pad_68[0x8]; // 0x68(0x08)
	struct FMatrix Result; // 0x70(0x80)
};

// ScriptStruct ControlRig.RigUnit_MathMatrixMul
// Size: 0x190 (Inherited: 0x190)
struct FRigUnit_MathMatrixMul : FRigUnit_MathMatrixBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathMatrixInverse
// Size: 0x110 (Inherited: 0x110)
struct FRigUnit_MathMatrixInverse : FRigUnit_MathMatrixUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionBase
// Size: 0x08 (Inherited: 0x08)
struct FRigUnit_MathQuaternionBase : FRigUnit_MathBase {
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionUnaryOp
// Size: 0x50 (Inherited: 0x08)
struct FRigUnit_MathQuaternionUnaryOp : FRigUnit_MathQuaternionBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat Value; // 0x10(0x20)
	struct FQuat Result; // 0x30(0x20)
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionBinaryOp
// Size: 0x70 (Inherited: 0x08)
struct FRigUnit_MathQuaternionBinaryOp : FRigUnit_MathQuaternionBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat A; // 0x10(0x20)
	struct FQuat B; // 0x30(0x20)
	struct FQuat Result; // 0x50(0x20)
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionFromAxisAndAngle
// Size: 0x50 (Inherited: 0x08)
struct FRigUnit_MathQuaternionFromAxisAndAngle : FRigUnit_MathQuaternionBase {
	struct FVector Axis; // 0x08(0x18)
	float Angle; // 0x20(0x04)
	char pad_24[0xc]; // 0x24(0x0c)
	struct FQuat Result; // 0x30(0x20)
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionFromEuler
// Size: 0x50 (Inherited: 0x08)
struct FRigUnit_MathQuaternionFromEuler : FRigUnit_MathQuaternionBase {
	struct FVector Euler; // 0x08(0x18)
	enum class EEulerRotationOrder RotationOrder; // 0x20(0x01)
	char pad_21[0xf]; // 0x21(0x0f)
	struct FQuat Result; // 0x30(0x20)
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionFromRotator
// Size: 0x40 (Inherited: 0x08)
struct FRigUnit_MathQuaternionFromRotator : FRigUnit_MathQuaternionBase {
	struct FRotator Rotator; // 0x08(0x18)
	struct FQuat Result; // 0x20(0x20)
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionFromRotatorV2
// Size: 0x40 (Inherited: 0x08)
struct FRigUnit_MathQuaternionFromRotatorV2 : FRigUnit_MathQuaternionBase {
	struct FRotator Value; // 0x08(0x18)
	struct FQuat Result; // 0x20(0x20)
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionFromTwoVectors
// Size: 0x60 (Inherited: 0x08)
struct FRigUnit_MathQuaternionFromTwoVectors : FRigUnit_MathQuaternionBase {
	struct FVector A; // 0x08(0x18)
	struct FVector B; // 0x20(0x18)
	char pad_38[0x8]; // 0x38(0x08)
	struct FQuat Result; // 0x40(0x20)
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionToAxisAndAngle
// Size: 0x50 (Inherited: 0x08)
struct FRigUnit_MathQuaternionToAxisAndAngle : FRigUnit_MathQuaternionBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat Value; // 0x10(0x20)
	struct FVector Axis; // 0x30(0x18)
	float Angle; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionScale
// Size: 0x40 (Inherited: 0x08)
struct FRigUnit_MathQuaternionScale : FRigUnit_MathQuaternionBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat Value; // 0x10(0x20)
	float Scale; // 0x30(0x04)
	char pad_34[0xc]; // 0x34(0x0c)
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionScaleV2
// Size: 0x60 (Inherited: 0x08)
struct FRigUnit_MathQuaternionScaleV2 : FRigUnit_MathQuaternionBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat Value; // 0x10(0x20)
	float Factor; // 0x30(0x04)
	char pad_34[0xc]; // 0x34(0x0c)
	struct FQuat Result; // 0x40(0x20)
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionToEuler
// Size: 0x50 (Inherited: 0x08)
struct FRigUnit_MathQuaternionToEuler : FRigUnit_MathQuaternionBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat Value; // 0x10(0x20)
	enum class EEulerRotationOrder RotationOrder; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FVector Result; // 0x38(0x18)
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionToRotator
// Size: 0x50 (Inherited: 0x08)
struct FRigUnit_MathQuaternionToRotator : FRigUnit_MathQuaternionBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat Value; // 0x10(0x20)
	struct FRotator Result; // 0x30(0x18)
	char pad_48[0x8]; // 0x48(0x08)
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionMul
// Size: 0x70 (Inherited: 0x70)
struct FRigUnit_MathQuaternionMul : FRigUnit_MathQuaternionBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionInverse
// Size: 0x50 (Inherited: 0x50)
struct FRigUnit_MathQuaternionInverse : FRigUnit_MathQuaternionUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionSlerp
// Size: 0x80 (Inherited: 0x08)
struct FRigUnit_MathQuaternionSlerp : FRigUnit_MathQuaternionBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat A; // 0x10(0x20)
	struct FQuat B; // 0x30(0x20)
	float T; // 0x50(0x04)
	char pad_54[0xc]; // 0x54(0x0c)
	struct FQuat Result; // 0x60(0x20)
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionEquals
// Size: 0x60 (Inherited: 0x08)
struct FRigUnit_MathQuaternionEquals : FRigUnit_MathQuaternionBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat A; // 0x10(0x20)
	struct FQuat B; // 0x30(0x20)
	bool Result; // 0x50(0x01)
	char pad_51[0xf]; // 0x51(0x0f)
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionNotEquals
// Size: 0x60 (Inherited: 0x08)
struct FRigUnit_MathQuaternionNotEquals : FRigUnit_MathQuaternionBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat A; // 0x10(0x20)
	struct FQuat B; // 0x30(0x20)
	bool Result; // 0x50(0x01)
	char pad_51[0xf]; // 0x51(0x0f)
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionSelectBool
// Size: 0x70 (Inherited: 0x08)
struct FRigUnit_MathQuaternionSelectBool : FRigUnit_MathQuaternionBase {
	bool Condition; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FQuat IfTrue; // 0x10(0x20)
	struct FQuat IfFalse; // 0x30(0x20)
	struct FQuat Result; // 0x50(0x20)
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionDot
// Size: 0x60 (Inherited: 0x08)
struct FRigUnit_MathQuaternionDot : FRigUnit_MathQuaternionBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat A; // 0x10(0x20)
	struct FQuat B; // 0x30(0x20)
	float Result; // 0x50(0x04)
	char pad_54[0xc]; // 0x54(0x0c)
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionUnit
// Size: 0x50 (Inherited: 0x50)
struct FRigUnit_MathQuaternionUnit : FRigUnit_MathQuaternionUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionRotateVector
// Size: 0x60 (Inherited: 0x08)
struct FRigUnit_MathQuaternionRotateVector : FRigUnit_MathQuaternionBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat Transform; // 0x10(0x20)
	struct FVector Vector; // 0x30(0x18)
	struct FVector Result; // 0x48(0x18)
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionGetAxis
// Size: 0x50 (Inherited: 0x08)
struct FRigUnit_MathQuaternionGetAxis : FRigUnit_MathQuaternionBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat Quaternion; // 0x10(0x20)
	enum class EAxis Axis; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FVector Result; // 0x38(0x18)
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionSwingTwist
// Size: 0x90 (Inherited: 0x08)
struct FRigUnit_MathQuaternionSwingTwist : FRigUnit_MathQuaternionBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat Input; // 0x10(0x20)
	struct FVector TwistAxis; // 0x30(0x18)
	char pad_48[0x8]; // 0x48(0x08)
	struct FQuat Swing; // 0x50(0x20)
	struct FQuat Twist; // 0x70(0x20)
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionRotationOrder
// Size: 0x10 (Inherited: 0x08)
struct FRigUnit_MathQuaternionRotationOrder : FRigUnit_MathBase {
	enum class EEulerRotationOrder RotationOrder; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionMakeRelative
// Size: 0x70 (Inherited: 0x08)
struct FRigUnit_MathQuaternionMakeRelative : FRigUnit_MathQuaternionBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat Global; // 0x10(0x20)
	struct FQuat Parent; // 0x30(0x20)
	struct FQuat Local; // 0x50(0x20)
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionMakeAbsolute
// Size: 0x70 (Inherited: 0x08)
struct FRigUnit_MathQuaternionMakeAbsolute : FRigUnit_MathQuaternionBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat Local; // 0x10(0x20)
	struct FQuat Parent; // 0x30(0x20)
	struct FQuat Global; // 0x50(0x20)
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionMirrorTransform
// Size: 0xc0 (Inherited: 0x08)
struct FRigUnit_MathQuaternionMirrorTransform : FRigUnit_MathQuaternionBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat Value; // 0x10(0x20)
	enum class EAxis MirrorAxis; // 0x30(0x01)
	enum class EAxis AxisToFlip; // 0x31(0x01)
	char pad_32[0xe]; // 0x32(0x0e)
	struct FTransform CentralTransform; // 0x40(0x60)
	struct FQuat Result; // 0xa0(0x20)
};

// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateQuatWorkData
// Size: 0x90 (Inherited: 0x00)
struct FRigUnit_MathRBFInterpolateQuatWorkData {
	char pad_0[0x90]; // 0x00(0x90)
};

// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateVectorWorkData
// Size: 0x90 (Inherited: 0x00)
struct FRigUnit_MathRBFInterpolateVectorWorkData {
	char pad_0[0x90]; // 0x00(0x90)
};

// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateBase
// Size: 0x08 (Inherited: 0x08)
struct FRigUnit_MathRBFInterpolateBase : FRigUnit_MathBase {
};

// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateQuatBase
// Size: 0xf0 (Inherited: 0x08)
struct FRigUnit_MathRBFInterpolateQuatBase : FRigUnit_MathRBFInterpolateBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat Input; // 0x10(0x20)
	enum class ERBFQuatDistanceType DistanceFunction; // 0x30(0x01)
	enum class ERBFKernelType SmoothingFunction; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	float SmoothingAngle; // 0x34(0x04)
	bool bNormalizeOutput; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FVector TwistAxis; // 0x40(0x18)
	char pad_58[0x8]; // 0x58(0x08)
	struct FRigUnit_MathRBFInterpolateQuatWorkData WorkData; // 0x60(0x90)
};

// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateVectorBase
// Size: 0xc0 (Inherited: 0x08)
struct FRigUnit_MathRBFInterpolateVectorBase : FRigUnit_MathRBFInterpolateBase {
	struct FVector Input; // 0x08(0x18)
	enum class ERBFVectorDistanceType DistanceFunction; // 0x20(0x01)
	enum class ERBFKernelType SmoothingFunction; // 0x21(0x01)
	char pad_22[0x2]; // 0x22(0x02)
	float SmoothingRadius; // 0x24(0x04)
	bool bNormalizeOutput; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FRigUnit_MathRBFInterpolateVectorWorkData WorkData; // 0x30(0x90)
};

// ScriptStruct ControlRig.MathRBFInterpolateQuatFloat_Target
// Size: 0x30 (Inherited: 0x00)
struct FMathRBFInterpolateQuatFloat_Target {
	struct FQuat Target; // 0x00(0x20)
	float Value; // 0x20(0x04)
	char pad_24[0xc]; // 0x24(0x0c)
};

// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateQuatFloat
// Size: 0x110 (Inherited: 0xf0)
struct FRigUnit_MathRBFInterpolateQuatFloat : FRigUnit_MathRBFInterpolateQuatBase {
	struct TArray<struct FMathRBFInterpolateQuatFloat_Target> Targets; // 0xf0(0x10)
	float Output; // 0x100(0x04)
	char pad_104[0xc]; // 0x104(0x0c)
};

// ScriptStruct ControlRig.MathRBFInterpolateQuatVector_Target
// Size: 0x40 (Inherited: 0x00)
struct FMathRBFInterpolateQuatVector_Target {
	struct FQuat Target; // 0x00(0x20)
	struct FVector Value; // 0x20(0x18)
	char pad_38[0x8]; // 0x38(0x08)
};

// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateQuatVector
// Size: 0x120 (Inherited: 0xf0)
struct FRigUnit_MathRBFInterpolateQuatVector : FRigUnit_MathRBFInterpolateQuatBase {
	struct TArray<struct FMathRBFInterpolateQuatVector_Target> Targets; // 0xf0(0x10)
	struct FVector Output; // 0x100(0x18)
	char pad_118[0x8]; // 0x118(0x08)
};

// ScriptStruct ControlRig.MathRBFInterpolateQuatColor_Target
// Size: 0x30 (Inherited: 0x00)
struct FMathRBFInterpolateQuatColor_Target {
	struct FQuat Target; // 0x00(0x20)
	struct FLinearColor Value; // 0x20(0x10)
};

// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateQuatColor
// Size: 0x110 (Inherited: 0xf0)
struct FRigUnit_MathRBFInterpolateQuatColor : FRigUnit_MathRBFInterpolateQuatBase {
	struct TArray<struct FMathRBFInterpolateQuatColor_Target> Targets; // 0xf0(0x10)
	struct FLinearColor Output; // 0x100(0x10)
};

// ScriptStruct ControlRig.MathRBFInterpolateQuatQuat_Target
// Size: 0x40 (Inherited: 0x00)
struct FMathRBFInterpolateQuatQuat_Target {
	struct FQuat Target; // 0x00(0x20)
	struct FQuat Value; // 0x20(0x20)
};

// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateQuatQuat
// Size: 0x120 (Inherited: 0xf0)
struct FRigUnit_MathRBFInterpolateQuatQuat : FRigUnit_MathRBFInterpolateQuatBase {
	struct TArray<struct FMathRBFInterpolateQuatQuat_Target> Targets; // 0xf0(0x10)
	struct FQuat Output; // 0x100(0x20)
};

// ScriptStruct ControlRig.MathRBFInterpolateQuatXform_Target
// Size: 0x80 (Inherited: 0x00)
struct FMathRBFInterpolateQuatXform_Target {
	struct FQuat Target; // 0x00(0x20)
	struct FTransform Value; // 0x20(0x60)
};

// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateQuatXform
// Size: 0x160 (Inherited: 0xf0)
struct FRigUnit_MathRBFInterpolateQuatXform : FRigUnit_MathRBFInterpolateQuatBase {
	struct TArray<struct FMathRBFInterpolateQuatXform_Target> Targets; // 0xf0(0x10)
	struct FTransform Output; // 0x100(0x60)
};

// ScriptStruct ControlRig.MathRBFInterpolateVectorFloat_Target
// Size: 0x20 (Inherited: 0x00)
struct FMathRBFInterpolateVectorFloat_Target {
	struct FVector Target; // 0x00(0x18)
	float Value; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateVectorFloat
// Size: 0xe0 (Inherited: 0xc0)
struct FRigUnit_MathRBFInterpolateVectorFloat : FRigUnit_MathRBFInterpolateVectorBase {
	struct TArray<struct FMathRBFInterpolateVectorFloat_Target> Targets; // 0xc0(0x10)
	float Output; // 0xd0(0x04)
	char pad_D4[0xc]; // 0xd4(0x0c)
};

// ScriptStruct ControlRig.MathRBFInterpolateVectorVector_Target
// Size: 0x30 (Inherited: 0x00)
struct FMathRBFInterpolateVectorVector_Target {
	struct FVector Target; // 0x00(0x18)
	struct FVector Value; // 0x18(0x18)
};

// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateVectorVector
// Size: 0xf0 (Inherited: 0xc0)
struct FRigUnit_MathRBFInterpolateVectorVector : FRigUnit_MathRBFInterpolateVectorBase {
	struct TArray<struct FMathRBFInterpolateVectorVector_Target> Targets; // 0xc0(0x10)
	struct FVector Output; // 0xd0(0x18)
	char pad_E8[0x8]; // 0xe8(0x08)
};

// ScriptStruct ControlRig.MathRBFInterpolateVectorColor_Target
// Size: 0x28 (Inherited: 0x00)
struct FMathRBFInterpolateVectorColor_Target {
	struct FVector Target; // 0x00(0x18)
	struct FLinearColor Value; // 0x18(0x10)
};

// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateVectorColor
// Size: 0xe0 (Inherited: 0xc0)
struct FRigUnit_MathRBFInterpolateVectorColor : FRigUnit_MathRBFInterpolateVectorBase {
	struct TArray<struct FMathRBFInterpolateVectorColor_Target> Targets; // 0xc0(0x10)
	struct FLinearColor Output; // 0xd0(0x10)
};

// ScriptStruct ControlRig.MathRBFInterpolateVectorQuat_Target
// Size: 0x40 (Inherited: 0x00)
struct FMathRBFInterpolateVectorQuat_Target {
	struct FVector Target; // 0x00(0x18)
	char pad_18[0x8]; // 0x18(0x08)
	struct FQuat Value; // 0x20(0x20)
};

// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateVectorQuat
// Size: 0xf0 (Inherited: 0xc0)
struct FRigUnit_MathRBFInterpolateVectorQuat : FRigUnit_MathRBFInterpolateVectorBase {
	struct TArray<struct FMathRBFInterpolateVectorQuat_Target> Targets; // 0xc0(0x10)
	struct FQuat Output; // 0xd0(0x20)
};

// ScriptStruct ControlRig.MathRBFInterpolateVectorXform_Target
// Size: 0x80 (Inherited: 0x00)
struct FMathRBFInterpolateVectorXform_Target {
	struct FVector Target; // 0x00(0x18)
	char pad_18[0x8]; // 0x18(0x08)
	struct FTransform Value; // 0x20(0x60)
};

// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateVectorXform
// Size: 0x130 (Inherited: 0xc0)
struct FRigUnit_MathRBFInterpolateVectorXform : FRigUnit_MathRBFInterpolateVectorBase {
	struct TArray<struct FMathRBFInterpolateVectorXform_Target> Targets; // 0xc0(0x10)
	struct FTransform Output; // 0xd0(0x60)
};

// ScriptStruct ControlRig.RigUnit_MathTransformBase
// Size: 0x08 (Inherited: 0x08)
struct FRigUnit_MathTransformBase : FRigUnit_MathBase {
};

// ScriptStruct ControlRig.RigUnit_MathTransformMutableBase
// Size: 0x38 (Inherited: 0x38)
struct FRigUnit_MathTransformMutableBase : FRigUnit_MathMutableBase {
};

// ScriptStruct ControlRig.RigUnit_MathTransformUnaryOp
// Size: 0xd0 (Inherited: 0x08)
struct FRigUnit_MathTransformUnaryOp : FRigUnit_MathTransformBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Value; // 0x10(0x60)
	struct FTransform Result; // 0x70(0x60)
};

// ScriptStruct ControlRig.RigUnit_MathTransformBinaryOp
// Size: 0x130 (Inherited: 0x08)
struct FRigUnit_MathTransformBinaryOp : FRigUnit_MathTransformBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform A; // 0x10(0x60)
	struct FTransform B; // 0x70(0x60)
	struct FTransform Result; // 0xd0(0x60)
};

// ScriptStruct ControlRig.RigUnit_MathTransformFromEulerTransform
// Size: 0xb0 (Inherited: 0x08)
struct FRigUnit_MathTransformFromEulerTransform : FRigUnit_MathTransformBase {
	struct FEulerTransform EulerTransform; // 0x08(0x48)
	struct FTransform Result; // 0x50(0x60)
};

// ScriptStruct ControlRig.RigUnit_MathTransformFromEulerTransformV2
// Size: 0xb0 (Inherited: 0x08)
struct FRigUnit_MathTransformFromEulerTransformV2 : FRigUnit_MathTransformBase {
	struct FEulerTransform Value; // 0x08(0x48)
	struct FTransform Result; // 0x50(0x60)
};

// ScriptStruct ControlRig.RigUnit_MathTransformToEulerTransform
// Size: 0xc0 (Inherited: 0x08)
struct FRigUnit_MathTransformToEulerTransform : FRigUnit_MathTransformBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Value; // 0x10(0x60)
	struct FEulerTransform Result; // 0x70(0x48)
	char pad_B8[0x8]; // 0xb8(0x08)
};

// ScriptStruct ControlRig.RigUnit_MathTransformMul
// Size: 0x130 (Inherited: 0x130)
struct FRigUnit_MathTransformMul : FRigUnit_MathTransformBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathTransformMakeRelative
// Size: 0x130 (Inherited: 0x08)
struct FRigUnit_MathTransformMakeRelative : FRigUnit_MathTransformBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Global; // 0x10(0x60)
	struct FTransform Parent; // 0x70(0x60)
	struct FTransform Local; // 0xd0(0x60)
};

// ScriptStruct ControlRig.RigUnit_MathTransformMakeAbsolute
// Size: 0x130 (Inherited: 0x08)
struct FRigUnit_MathTransformMakeAbsolute : FRigUnit_MathTransformBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Local; // 0x10(0x60)
	struct FTransform Parent; // 0x70(0x60)
	struct FTransform Global; // 0xd0(0x60)
};

// ScriptStruct ControlRig.RigUnit_MathTransformAccumulateArray
// Size: 0xc0 (Inherited: 0x38)
struct FRigUnit_MathTransformAccumulateArray : FRigUnit_MathTransformMutableBase {
	struct TArray<struct FTransform> Transforms; // 0x38(0x10)
	enum class EBoneGetterSetterMode TargetSpace; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct FTransform Root; // 0x50(0x60)
	struct TArray<int32_t> ParentIndices; // 0xb0(0x10)
};

// ScriptStruct ControlRig.RigUnit_MathTransformInverse
// Size: 0xd0 (Inherited: 0xd0)
struct FRigUnit_MathTransformInverse : FRigUnit_MathTransformUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathTransformLerp
// Size: 0x140 (Inherited: 0x08)
struct FRigUnit_MathTransformLerp : FRigUnit_MathTransformBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform A; // 0x10(0x60)
	struct FTransform B; // 0x70(0x60)
	float T; // 0xd0(0x04)
	char pad_D4[0xc]; // 0xd4(0x0c)
	struct FTransform Result; // 0xe0(0x60)
};

// ScriptStruct ControlRig.RigUnit_MathTransformSelectBool
// Size: 0x130 (Inherited: 0x08)
struct FRigUnit_MathTransformSelectBool : FRigUnit_MathTransformBase {
	bool Condition; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FTransform IfTrue; // 0x10(0x60)
	struct FTransform IfFalse; // 0x70(0x60)
	struct FTransform Result; // 0xd0(0x60)
};

// ScriptStruct ControlRig.RigUnit_MathTransformRotateVector
// Size: 0xa0 (Inherited: 0x08)
struct FRigUnit_MathTransformRotateVector : FRigUnit_MathTransformBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Transform; // 0x10(0x60)
	struct FVector Vector; // 0x70(0x18)
	struct FVector Result; // 0x88(0x18)
};

// ScriptStruct ControlRig.RigUnit_MathTransformTransformVector
// Size: 0xa0 (Inherited: 0x08)
struct FRigUnit_MathTransformTransformVector : FRigUnit_MathTransformBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Transform; // 0x10(0x60)
	struct FVector Location; // 0x70(0x18)
	struct FVector Result; // 0x88(0x18)
};

// ScriptStruct ControlRig.RigUnit_MathTransformFromSRT
// Size: 0x110 (Inherited: 0x08)
struct FRigUnit_MathTransformFromSRT : FRigUnit_MathTransformBase {
	struct FVector Location; // 0x08(0x18)
	struct FVector Rotation; // 0x20(0x18)
	enum class EEulerRotationOrder RotationOrder; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FVector Scale; // 0x40(0x18)
	char pad_58[0x8]; // 0x58(0x08)
	struct FTransform Transform; // 0x60(0x60)
	struct FEulerTransform EulerTransform; // 0xc0(0x48)
	char pad_108[0x8]; // 0x108(0x08)
};

// ScriptStruct ControlRig.RigUnit_MathTransformArrayToSRT
// Size: 0x48 (Inherited: 0x08)
struct FRigUnit_MathTransformArrayToSRT : FRigUnit_MathTransformBase {
	struct TArray<struct FTransform> Transforms; // 0x08(0x10)
	struct TArray<struct FVector> Translations; // 0x18(0x10)
	struct TArray<struct FQuat> Rotations; // 0x28(0x10)
	struct TArray<struct FVector> Scales; // 0x38(0x10)
};

// ScriptStruct ControlRig.RigUnit_MathTransformClampSpatially
// Size: 0x160 (Inherited: 0x08)
struct FRigUnit_MathTransformClampSpatially : FRigUnit_MathTransformBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Value; // 0x10(0x60)
	enum class EAxis Axis; // 0x70(0x01)
	enum class EControlRigClampSpatialMode Type; // 0x71(0x01)
	char pad_72[0x2]; // 0x72(0x02)
	float Minimum; // 0x74(0x04)
	float Maximum; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct FTransform Space; // 0x80(0x60)
	bool bDrawDebug; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	struct FLinearColor DebugColor; // 0xe4(0x10)
	float DebugThickness; // 0xf4(0x04)
	char pad_F8[0x8]; // 0xf8(0x08)
	struct FTransform Result; // 0x100(0x60)
};

// ScriptStruct ControlRig.RigUnit_MathTransformMirrorTransform
// Size: 0x140 (Inherited: 0x08)
struct FRigUnit_MathTransformMirrorTransform : FRigUnit_MathTransformBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Value; // 0x10(0x60)
	enum class EAxis MirrorAxis; // 0x70(0x01)
	enum class EAxis AxisToFlip; // 0x71(0x01)
	char pad_72[0xe]; // 0x72(0x0e)
	struct FTransform CentralTransform; // 0x80(0x60)
	struct FTransform Result; // 0xe0(0x60)
};

// ScriptStruct ControlRig.RigUnit_MathVectorBase
// Size: 0x08 (Inherited: 0x08)
struct FRigUnit_MathVectorBase : FRigUnit_MathBase {
};

// ScriptStruct ControlRig.RigUnit_MathVectorUnaryOp
// Size: 0x38 (Inherited: 0x08)
struct FRigUnit_MathVectorUnaryOp : FRigUnit_MathVectorBase {
	struct FVector Value; // 0x08(0x18)
	struct FVector Result; // 0x20(0x18)
};

// ScriptStruct ControlRig.RigUnit_MathVectorBinaryOp
// Size: 0x50 (Inherited: 0x08)
struct FRigUnit_MathVectorBinaryOp : FRigUnit_MathVectorBase {
	struct FVector A; // 0x08(0x18)
	struct FVector B; // 0x20(0x18)
	struct FVector Result; // 0x38(0x18)
};

// ScriptStruct ControlRig.RigUnit_MathVectorFromFloat
// Size: 0x28 (Inherited: 0x08)
struct FRigUnit_MathVectorFromFloat : FRigUnit_MathVectorBase {
	float Value; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FVector Result; // 0x10(0x18)
};

// ScriptStruct ControlRig.RigUnit_MathVectorAdd
// Size: 0x50 (Inherited: 0x50)
struct FRigUnit_MathVectorAdd : FRigUnit_MathVectorBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathVectorSub
// Size: 0x50 (Inherited: 0x50)
struct FRigUnit_MathVectorSub : FRigUnit_MathVectorBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathVectorMul
// Size: 0x50 (Inherited: 0x50)
struct FRigUnit_MathVectorMul : FRigUnit_MathVectorBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathVectorScale
// Size: 0x40 (Inherited: 0x08)
struct FRigUnit_MathVectorScale : FRigUnit_MathVectorBase {
	struct FVector Value; // 0x08(0x18)
	float Factor; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FVector Result; // 0x28(0x18)
};

// ScriptStruct ControlRig.RigUnit_MathVectorDiv
// Size: 0x50 (Inherited: 0x50)
struct FRigUnit_MathVectorDiv : FRigUnit_MathVectorBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathVectorMod
// Size: 0x50 (Inherited: 0x50)
struct FRigUnit_MathVectorMod : FRigUnit_MathVectorBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathVectorMin
// Size: 0x50 (Inherited: 0x50)
struct FRigUnit_MathVectorMin : FRigUnit_MathVectorBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathVectorMax
// Size: 0x50 (Inherited: 0x50)
struct FRigUnit_MathVectorMax : FRigUnit_MathVectorBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathVectorNegate
// Size: 0x38 (Inherited: 0x38)
struct FRigUnit_MathVectorNegate : FRigUnit_MathVectorUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathVectorAbs
// Size: 0x38 (Inherited: 0x38)
struct FRigUnit_MathVectorAbs : FRigUnit_MathVectorUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathVectorFloor
// Size: 0x38 (Inherited: 0x38)
struct FRigUnit_MathVectorFloor : FRigUnit_MathVectorUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathVectorCeil
// Size: 0x38 (Inherited: 0x38)
struct FRigUnit_MathVectorCeil : FRigUnit_MathVectorUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathVectorRound
// Size: 0x38 (Inherited: 0x38)
struct FRigUnit_MathVectorRound : FRigUnit_MathVectorUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathVectorSign
// Size: 0x38 (Inherited: 0x38)
struct FRigUnit_MathVectorSign : FRigUnit_MathVectorUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathVectorClamp
// Size: 0x68 (Inherited: 0x08)
struct FRigUnit_MathVectorClamp : FRigUnit_MathVectorBase {
	struct FVector Value; // 0x08(0x18)
	struct FVector Minimum; // 0x20(0x18)
	struct FVector Maximum; // 0x38(0x18)
	struct FVector Result; // 0x50(0x18)
};

// ScriptStruct ControlRig.RigUnit_MathVectorLerp
// Size: 0x58 (Inherited: 0x08)
struct FRigUnit_MathVectorLerp : FRigUnit_MathVectorBase {
	struct FVector A; // 0x08(0x18)
	struct FVector B; // 0x20(0x18)
	float T; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FVector Result; // 0x40(0x18)
};

// ScriptStruct ControlRig.RigUnit_MathVectorRemap
// Size: 0xa0 (Inherited: 0x08)
struct FRigUnit_MathVectorRemap : FRigUnit_MathVectorBase {
	struct FVector Value; // 0x08(0x18)
	struct FVector SourceMinimum; // 0x20(0x18)
	struct FVector SourceMaximum; // 0x38(0x18)
	struct FVector TargetMinimum; // 0x50(0x18)
	struct FVector TargetMaximum; // 0x68(0x18)
	bool bClamp; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct FVector Result; // 0x88(0x18)
};

// ScriptStruct ControlRig.RigUnit_MathVectorEquals
// Size: 0x40 (Inherited: 0x08)
struct FRigUnit_MathVectorEquals : FRigUnit_MathVectorBase {
	struct FVector A; // 0x08(0x18)
	struct FVector B; // 0x20(0x18)
	bool Result; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct ControlRig.RigUnit_MathVectorNotEquals
// Size: 0x40 (Inherited: 0x08)
struct FRigUnit_MathVectorNotEquals : FRigUnit_MathVectorBase {
	struct FVector A; // 0x08(0x18)
	struct FVector B; // 0x20(0x18)
	bool Result; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct ControlRig.RigUnit_MathVectorIsNearlyZero
// Size: 0x28 (Inherited: 0x08)
struct FRigUnit_MathVectorIsNearlyZero : FRigUnit_MathVectorBase {
	struct FVector Value; // 0x08(0x18)
	float Tolerance; // 0x20(0x04)
	bool Result; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct ControlRig.RigUnit_MathVectorIsNearlyEqual
// Size: 0x40 (Inherited: 0x08)
struct FRigUnit_MathVectorIsNearlyEqual : FRigUnit_MathVectorBase {
	struct FVector A; // 0x08(0x18)
	struct FVector B; // 0x20(0x18)
	float Tolerance; // 0x38(0x04)
	bool Result; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
};

// ScriptStruct ControlRig.RigUnit_MathVectorSelectBool
// Size: 0x58 (Inherited: 0x08)
struct FRigUnit_MathVectorSelectBool : FRigUnit_MathVectorBase {
	bool Condition; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FVector IfTrue; // 0x10(0x18)
	struct FVector IfFalse; // 0x28(0x18)
	struct FVector Result; // 0x40(0x18)
};

// ScriptStruct ControlRig.RigUnit_MathVectorDeg
// Size: 0x38 (Inherited: 0x38)
struct FRigUnit_MathVectorDeg : FRigUnit_MathVectorUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathVectorRad
// Size: 0x38 (Inherited: 0x38)
struct FRigUnit_MathVectorRad : FRigUnit_MathVectorUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathVectorLengthSquared
// Size: 0x28 (Inherited: 0x08)
struct FRigUnit_MathVectorLengthSquared : FRigUnit_MathVectorBase {
	struct FVector Value; // 0x08(0x18)
	float Result; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct ControlRig.RigUnit_MathVectorLength
// Size: 0x28 (Inherited: 0x08)
struct FRigUnit_MathVectorLength : FRigUnit_MathVectorBase {
	struct FVector Value; // 0x08(0x18)
	float Result; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct ControlRig.RigUnit_MathVectorDistance
// Size: 0x40 (Inherited: 0x08)
struct FRigUnit_MathVectorDistance : FRigUnit_MathVectorBase {
	struct FVector A; // 0x08(0x18)
	struct FVector B; // 0x20(0x18)
	float Result; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct ControlRig.RigUnit_MathVectorCross
// Size: 0x50 (Inherited: 0x50)
struct FRigUnit_MathVectorCross : FRigUnit_MathVectorBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathVectorDot
// Size: 0x40 (Inherited: 0x08)
struct FRigUnit_MathVectorDot : FRigUnit_MathVectorBase {
	struct FVector A; // 0x08(0x18)
	struct FVector B; // 0x20(0x18)
	float Result; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct ControlRig.RigUnit_MathVectorUnit
// Size: 0x38 (Inherited: 0x38)
struct FRigUnit_MathVectorUnit : FRigUnit_MathVectorUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathVectorSetLength
// Size: 0x40 (Inherited: 0x08)
struct FRigUnit_MathVectorSetLength : FRigUnit_MathVectorBase {
	struct FVector Value; // 0x08(0x18)
	float Length; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FVector Result; // 0x28(0x18)
};

// ScriptStruct ControlRig.RigUnit_MathVectorClampLength
// Size: 0x40 (Inherited: 0x08)
struct FRigUnit_MathVectorClampLength : FRigUnit_MathVectorBase {
	struct FVector Value; // 0x08(0x18)
	float MinimumLength; // 0x20(0x04)
	float MaximumLength; // 0x24(0x04)
	struct FVector Result; // 0x28(0x18)
};

// ScriptStruct ControlRig.RigUnit_MathVectorMirror
// Size: 0x50 (Inherited: 0x08)
struct FRigUnit_MathVectorMirror : FRigUnit_MathVectorBase {
	struct FVector Value; // 0x08(0x18)
	struct FVector Normal; // 0x20(0x18)
	struct FVector Result; // 0x38(0x18)
};

// ScriptStruct ControlRig.RigUnit_MathVectorAngle
// Size: 0x40 (Inherited: 0x08)
struct FRigUnit_MathVectorAngle : FRigUnit_MathVectorBase {
	struct FVector A; // 0x08(0x18)
	struct FVector B; // 0x20(0x18)
	float Result; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct ControlRig.RigUnit_MathVectorParallel
// Size: 0x40 (Inherited: 0x08)
struct FRigUnit_MathVectorParallel : FRigUnit_MathVectorBase {
	struct FVector A; // 0x08(0x18)
	struct FVector B; // 0x20(0x18)
	bool Result; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct ControlRig.RigUnit_MathVectorOrthogonal
// Size: 0x40 (Inherited: 0x08)
struct FRigUnit_MathVectorOrthogonal : FRigUnit_MathVectorBase {
	struct FVector A; // 0x08(0x18)
	struct FVector B; // 0x20(0x18)
	bool Result; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct ControlRig.RigUnit_MathVectorBezierFourPoint
// Size: 0xa0 (Inherited: 0x08)
struct FRigUnit_MathVectorBezierFourPoint : FRigUnit_MathVectorBase {
	struct FCRFourPointBezier Bezier; // 0x08(0x60)
	float T; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct FVector Result; // 0x70(0x18)
	struct FVector Tangent; // 0x88(0x18)
};

// ScriptStruct ControlRig.RigUnit_MathVectorMakeBezierFourPoint
// Size: 0x68 (Inherited: 0x08)
struct FRigUnit_MathVectorMakeBezierFourPoint : FRigUnit_MathVectorBase {
	struct FCRFourPointBezier Bezier; // 0x08(0x60)
};

// ScriptStruct ControlRig.RigUnit_MathVectorClampSpatially
// Size: 0xc0 (Inherited: 0x08)
struct FRigUnit_MathVectorClampSpatially : FRigUnit_MathVectorBase {
	struct FVector Value; // 0x08(0x18)
	enum class EAxis Axis; // 0x20(0x01)
	enum class EControlRigClampSpatialMode Type; // 0x21(0x01)
	char pad_22[0x2]; // 0x22(0x02)
	float Minimum; // 0x24(0x04)
	float Maximum; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FTransform Space; // 0x30(0x60)
	bool bDrawDebug; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	struct FLinearColor DebugColor; // 0x94(0x10)
	float DebugThickness; // 0xa4(0x04)
	struct FVector Result; // 0xa8(0x18)
};

// ScriptStruct ControlRig.RigUnit_MathIntersectPlane
// Size: 0x88 (Inherited: 0x08)
struct FRigUnit_MathIntersectPlane : FRigUnit_MathVectorBase {
	struct FVector Start; // 0x08(0x18)
	struct FVector Direction; // 0x20(0x18)
	struct FVector PlanePoint; // 0x38(0x18)
	struct FVector PlaneNormal; // 0x50(0x18)
	struct FVector Result; // 0x68(0x18)
	float Distance; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
};

// ScriptStruct ControlRig.RigUnit_MathDistanceToPlane
// Size: 0x70 (Inherited: 0x08)
struct FRigUnit_MathDistanceToPlane : FRigUnit_MathVectorBase {
	struct FVector Point; // 0x08(0x18)
	struct FVector PlanePoint; // 0x20(0x18)
	struct FVector PlaneNormal; // 0x38(0x18)
	struct FVector ClosestPointOnPlane; // 0x50(0x18)
	float SignedDistance; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// ScriptStruct ControlRig.RigUnit_MathVectorMakeRelative
// Size: 0x50 (Inherited: 0x08)
struct FRigUnit_MathVectorMakeRelative : FRigUnit_MathVectorBase {
	struct FVector Global; // 0x08(0x18)
	struct FVector Parent; // 0x20(0x18)
	struct FVector Local; // 0x38(0x18)
};

// ScriptStruct ControlRig.RigUnit_MathVectorMakeAbsolute
// Size: 0x50 (Inherited: 0x08)
struct FRigUnit_MathVectorMakeAbsolute : FRigUnit_MathVectorBase {
	struct FVector Local; // 0x08(0x18)
	struct FVector Parent; // 0x20(0x18)
	struct FVector Global; // 0x38(0x18)
};

// ScriptStruct ControlRig.RigUnit_MathVectorMirrorTransform
// Size: 0xb0 (Inherited: 0x08)
struct FRigUnit_MathVectorMirrorTransform : FRigUnit_MathVectorBase {
	struct FVector Value; // 0x08(0x18)
	enum class EAxis MirrorAxis; // 0x20(0x01)
	enum class EAxis AxisToFlip; // 0x21(0x01)
	char pad_22[0xe]; // 0x22(0x0e)
	struct FTransform CentralTransform; // 0x30(0x60)
	struct FVector Result; // 0x90(0x18)
	char pad_A8[0x8]; // 0xa8(0x08)
};

// ScriptStruct ControlRig.RigDispatch_MetadataBase
// Size: 0x48 (Inherited: 0x18)
struct FRigDispatch_MetadataBase : FRigDispatchFactory {
	char pad_18[0x30]; // 0x18(0x30)
};

// ScriptStruct ControlRig.RigDispatch_GetMetadata
// Size: 0x48 (Inherited: 0x48)
struct FRigDispatch_GetMetadata : FRigDispatch_MetadataBase {
};

// ScriptStruct ControlRig.RigDispatch_SetMetadata
// Size: 0x48 (Inherited: 0x48)
struct FRigDispatch_SetMetadata : FRigDispatch_MetadataBase {
};

// ScriptStruct ControlRig.RigUnit_RemoveMetadata
// Size: 0x60 (Inherited: 0x38)
struct FRigUnit_RemoveMetadata : FRigUnitMutable {
	struct FRigElementKey Item; // 0x38(0x08)
	struct FName Name; // 0x40(0x04)
	bool Removed; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	struct FCachedRigElement CachedIndex; // 0x48(0x18)
};

// ScriptStruct ControlRig.RigUnit_RemoveAllMetadata
// Size: 0x60 (Inherited: 0x38)
struct FRigUnit_RemoveAllMetadata : FRigUnitMutable {
	struct FRigElementKey Item; // 0x38(0x08)
	bool Removed; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct FCachedRigElement CachedIndex; // 0x48(0x18)
};

// ScriptStruct ControlRig.RigUnit_HasMetadata
// Size: 0x30 (Inherited: 0x08)
struct FRigUnit_HasMetadata : FRigUnit {
	struct FRigElementKey Item; // 0x08(0x08)
	struct FName Name; // 0x10(0x04)
	enum class ERigMetadataType Type; // 0x14(0x01)
	bool Found; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	struct FCachedRigElement CachedIndex; // 0x18(0x18)
};

// ScriptStruct ControlRig.RigUnit_FindItemsWithMetadata
// Size: 0x20 (Inherited: 0x08)
struct FRigUnit_FindItemsWithMetadata : FRigUnit {
	struct FName Name; // 0x08(0x04)
	enum class ERigMetadataType Type; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct TArray<struct FRigElementKey> Items; // 0x10(0x10)
};

// ScriptStruct ControlRig.RigUnit_GetMetadataTags
// Size: 0x38 (Inherited: 0x08)
struct FRigUnit_GetMetadataTags : FRigUnit {
	struct FRigElementKey Item; // 0x08(0x08)
	struct TArray<struct FName> Tags; // 0x10(0x10)
	struct FCachedRigElement CachedIndex; // 0x20(0x18)
};

// ScriptStruct ControlRig.RigUnit_SetMetadataTag
// Size: 0x60 (Inherited: 0x38)
struct FRigUnit_SetMetadataTag : FRigUnitMutable {
	struct FRigElementKey Item; // 0x38(0x08)
	struct FName tag; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FCachedRigElement CachedIndex; // 0x48(0x18)
};

// ScriptStruct ControlRig.RigUnit_SetMetadataTagArray
// Size: 0x68 (Inherited: 0x38)
struct FRigUnit_SetMetadataTagArray : FRigUnitMutable {
	struct FRigElementKey Item; // 0x38(0x08)
	struct TArray<struct FName> Tags; // 0x40(0x10)
	struct FCachedRigElement CachedIndex; // 0x50(0x18)
};

// ScriptStruct ControlRig.RigUnit_RemoveMetadataTag
// Size: 0x60 (Inherited: 0x38)
struct FRigUnit_RemoveMetadataTag : FRigUnitMutable {
	struct FRigElementKey Item; // 0x38(0x08)
	struct FName tag; // 0x40(0x04)
	bool Removed; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	struct FCachedRigElement CachedIndex; // 0x48(0x18)
};

// ScriptStruct ControlRig.RigUnit_HasMetadataTag
// Size: 0x30 (Inherited: 0x08)
struct FRigUnit_HasMetadataTag : FRigUnit {
	struct FRigElementKey Item; // 0x08(0x08)
	struct FName tag; // 0x10(0x04)
	bool Found; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FCachedRigElement CachedIndex; // 0x18(0x18)
};

// ScriptStruct ControlRig.RigUnit_HasMetadataTagArray
// Size: 0x40 (Inherited: 0x08)
struct FRigUnit_HasMetadataTagArray : FRigUnit {
	struct FRigElementKey Item; // 0x08(0x08)
	struct TArray<struct FName> Tags; // 0x10(0x10)
	bool Found; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct FCachedRigElement CachedIndex; // 0x28(0x18)
};

// ScriptStruct ControlRig.RigUnit_FindItemsWithMetadataTag
// Size: 0x20 (Inherited: 0x08)
struct FRigUnit_FindItemsWithMetadataTag : FRigUnit {
	struct FName tag; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FRigElementKey> Items; // 0x10(0x10)
};

// ScriptStruct ControlRig.RigUnit_FindItemsWithMetadataTagArray
// Size: 0x28 (Inherited: 0x08)
struct FRigUnit_FindItemsWithMetadataTagArray : FRigUnit {
	struct TArray<struct FName> Tags; // 0x08(0x10)
	struct TArray<struct FRigElementKey> Items; // 0x18(0x10)
};

// ScriptStruct ControlRig.RigUnit_FilterItemsByMetadataTags
// Size: 0x50 (Inherited: 0x08)
struct FRigUnit_FilterItemsByMetadataTags : FRigUnit {
	struct TArray<struct FRigElementKey> Items; // 0x08(0x10)
	struct TArray<struct FName> Tags; // 0x18(0x10)
	bool Inclusive; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct TArray<struct FRigElementKey> Result; // 0x30(0x10)
	struct TArray<struct FCachedRigElement> CachedIndices; // 0x40(0x10)
};

// ScriptStruct ControlRig.RigUnit_ModifyBoneTransforms_PerBone
// Size: 0x70 (Inherited: 0x00)
struct FRigUnit_ModifyBoneTransforms_PerBone {
	struct FName bone; // 0x00(0x04)
	char pad_4[0xc]; // 0x04(0x0c)
	struct FTransform Transform; // 0x10(0x60)
};

// ScriptStruct ControlRig.RigUnit_ModifyTransforms_WorkData
// Size: 0x10 (Inherited: 0x00)
struct FRigUnit_ModifyTransforms_WorkData {
	struct TArray<struct FCachedRigElement> CachedItems; // 0x00(0x10)
};

// ScriptStruct ControlRig.RigUnit_ModifyBoneTransforms_WorkData
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_ModifyBoneTransforms_WorkData : FRigUnit_ModifyTransforms_WorkData {
};

// ScriptStruct ControlRig.RigUnit_ModifyBoneTransforms
// Size: 0x68 (Inherited: 0x38)
struct FRigUnit_ModifyBoneTransforms : FRigUnit_HighlevelBaseMutable {
	struct TArray<struct FRigUnit_ModifyBoneTransforms_PerBone> BoneToModify; // 0x38(0x10)
	float Weight; // 0x48(0x04)
	float WeightMinimum; // 0x4c(0x04)
	float WeightMaximum; // 0x50(0x04)
	enum class EControlRigModifyBoneMode Mode; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	struct FRigUnit_ModifyBoneTransforms_WorkData WorkData; // 0x58(0x10)
};

// ScriptStruct ControlRig.RigUnit_ModifyTransforms_PerItem
// Size: 0x70 (Inherited: 0x00)
struct FRigUnit_ModifyTransforms_PerItem {
	struct FRigElementKey Item; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Transform; // 0x10(0x60)
};

// ScriptStruct ControlRig.RigUnit_ModifyTransforms
// Size: 0x68 (Inherited: 0x38)
struct FRigUnit_ModifyTransforms : FRigUnit_HighlevelBaseMutable {
	struct TArray<struct FRigUnit_ModifyTransforms_PerItem> ItemToModify; // 0x38(0x10)
	float Weight; // 0x48(0x04)
	float WeightMinimum; // 0x4c(0x04)
	float WeightMaximum; // 0x50(0x04)
	enum class EControlRigModifyBoneMode Mode; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	struct FRigUnit_ModifyTransforms_WorkData WorkData; // 0x58(0x10)
};

// ScriptStruct ControlRig.RigUnit_MultiFABRIK_WorkData
// Size: 0x68 (Inherited: 0x00)
struct FRigUnit_MultiFABRIK_WorkData {
	char pad_0[0x68]; // 0x00(0x68)
};

// ScriptStruct ControlRig.RigUnit_MultiFABRIK_EndEffector
// Size: 0x20 (Inherited: 0x00)
struct FRigUnit_MultiFABRIK_EndEffector {
	struct FName bone; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FVector Location; // 0x08(0x18)
};

// ScriptStruct ControlRig.RigUnit_MultiFABRIK
// Size: 0xc8 (Inherited: 0x38)
struct FRigUnit_MultiFABRIK : FRigUnit_HighlevelBaseMutable {
	struct FName RootBone; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<struct FRigUnit_MultiFABRIK_EndEffector> Effectors; // 0x40(0x10)
	float Precision; // 0x50(0x04)
	bool bPropagateToChildren; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	int32_t MaxIterations; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FRigUnit_MultiFABRIK_WorkData WorkData; // 0x60(0x68)
};

// ScriptStruct ControlRig.RigUnit_NameBase
// Size: 0x08 (Inherited: 0x08)
struct FRigUnit_NameBase : FRigUnit {
};

// ScriptStruct ControlRig.RigUnit_NameConcat
// Size: 0x18 (Inherited: 0x08)
struct FRigUnit_NameConcat : FRigUnit_NameBase {
	struct FName A; // 0x08(0x04)
	struct FName B; // 0x0c(0x04)
	struct FName Result; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ControlRig.RigUnit_NameTruncate
// Size: 0x20 (Inherited: 0x08)
struct FRigUnit_NameTruncate : FRigUnit_NameBase {
	struct FName Name; // 0x08(0x04)
	int32_t Count; // 0x0c(0x04)
	bool FromEnd; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FName Remainder; // 0x14(0x04)
	struct FName Chopped; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct ControlRig.RigUnit_NameReplace
// Size: 0x18 (Inherited: 0x08)
struct FRigUnit_NameReplace : FRigUnit_NameBase {
	struct FName Name; // 0x08(0x04)
	struct FName Old; // 0x0c(0x04)
	struct FName New; // 0x10(0x04)
	struct FName Result; // 0x14(0x04)
};

// ScriptStruct ControlRig.RigUnit_EndsWith
// Size: 0x18 (Inherited: 0x08)
struct FRigUnit_EndsWith : FRigUnit_NameBase {
	struct FName Name; // 0x08(0x04)
	struct FName Ending; // 0x0c(0x04)
	bool Result; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct ControlRig.RigUnit_StartsWith
// Size: 0x18 (Inherited: 0x08)
struct FRigUnit_StartsWith : FRigUnit_NameBase {
	struct FName Name; // 0x08(0x04)
	struct FName Start; // 0x0c(0x04)
	bool Result; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct ControlRig.RigUnit_Contains
// Size: 0x18 (Inherited: 0x08)
struct FRigUnit_Contains : FRigUnit_NameBase {
	struct FName Name; // 0x08(0x04)
	struct FName Search; // 0x0c(0x04)
	bool Result; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct ControlRig.RigUnit_NoiseFloat
// Size: 0x28 (Inherited: 0x08)
struct FRigUnit_NoiseFloat : FRigUnit_MathBase {
	float Value; // 0x08(0x04)
	float Speed; // 0x0c(0x04)
	float Frequency; // 0x10(0x04)
	float Minimum; // 0x14(0x04)
	float Maximum; // 0x18(0x04)
	float Result; // 0x1c(0x04)
	float Time; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct ControlRig.RigUnit_NoiseDouble
// Size: 0x40 (Inherited: 0x08)
struct FRigUnit_NoiseDouble : FRigUnit_MathBase {
	double Value; // 0x08(0x08)
	double Speed; // 0x10(0x08)
	double Frequency; // 0x18(0x08)
	double Minimum; // 0x20(0x08)
	double Maximum; // 0x28(0x08)
	double Result; // 0x30(0x08)
	double Time; // 0x38(0x08)
};

// ScriptStruct ControlRig.RigUnit_NoiseVector
// Size: 0x88 (Inherited: 0x08)
struct FRigUnit_NoiseVector : FRigUnit_MathBase {
	struct FVector Position; // 0x08(0x18)
	struct FVector Speed; // 0x20(0x18)
	struct FVector Frequency; // 0x38(0x18)
	float Minimum; // 0x50(0x04)
	float Maximum; // 0x54(0x04)
	struct FVector Result; // 0x58(0x18)
	struct FVector Time; // 0x70(0x18)
};

// ScriptStruct ControlRig.RigUnit_NoiseVector2
// Size: 0x90 (Inherited: 0x08)
struct FRigUnit_NoiseVector2 : FRigUnit_MathBase {
	struct FVector Value; // 0x08(0x18)
	struct FVector Speed; // 0x20(0x18)
	struct FVector Frequency; // 0x38(0x18)
	double Minimum; // 0x50(0x08)
	double Maximum; // 0x58(0x08)
	struct FVector Result; // 0x60(0x18)
	struct FVector Time; // 0x78(0x18)
};

// ScriptStruct ControlRig.RigUnit_OffsetTransformForItem
// Size: 0xc0 (Inherited: 0x38)
struct FRigUnit_OffsetTransformForItem : FRigUnitMutable {
	struct FRigElementKey Item; // 0x38(0x08)
	struct FTransform OffsetTransform; // 0x40(0x60)
	float Weight; // 0xa0(0x04)
	bool bPropagateToChildren; // 0xa4(0x01)
	char pad_A5[0x3]; // 0xa5(0x03)
	struct FCachedRigElement CachedIndex; // 0xa8(0x18)
};

// ScriptStruct ControlRig.RigUnit_ParentSwitchConstraint
// Size: 0x1d0 (Inherited: 0x38)
struct FRigUnit_ParentSwitchConstraint : FRigUnitMutable {
	struct FRigElementKey Subject; // 0x38(0x08)
	int32_t ParentIndex; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FRigElementKeyCollection Parents; // 0x48(0x10)
	char pad_58[0x8]; // 0x58(0x08)
	struct FTransform InitialGlobalTransform; // 0x60(0x60)
	float Weight; // 0xc0(0x04)
	char pad_C4[0xc]; // 0xc4(0x0c)
	struct FTransform Transform; // 0xd0(0x60)
	bool Switched; // 0x130(0x01)
	char pad_131[0x7]; // 0x131(0x07)
	struct FCachedRigElement CachedSubject; // 0x138(0x18)
	struct FCachedRigElement CachedParent; // 0x150(0x18)
	char pad_168[0x8]; // 0x168(0x08)
	struct FTransform RelativeOffset; // 0x170(0x60)
};

// ScriptStruct ControlRig.RigUnit_ParentSwitchConstraintArray
// Size: 0x1d0 (Inherited: 0x38)
struct FRigUnit_ParentSwitchConstraintArray : FRigUnitMutable {
	struct FRigElementKey Subject; // 0x38(0x08)
	int32_t ParentIndex; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct TArray<struct FRigElementKey> Parents; // 0x48(0x10)
	char pad_58[0x8]; // 0x58(0x08)
	struct FTransform InitialGlobalTransform; // 0x60(0x60)
	float Weight; // 0xc0(0x04)
	char pad_C4[0xc]; // 0xc4(0x0c)
	struct FTransform Transform; // 0xd0(0x60)
	bool Switched; // 0x130(0x01)
	char pad_131[0x7]; // 0x131(0x07)
	struct FCachedRigElement CachedSubject; // 0x138(0x18)
	struct FCachedRigElement CachedParent; // 0x150(0x18)
	char pad_168[0x8]; // 0x168(0x08)
	struct FTransform RelativeOffset; // 0x170(0x60)
};

// ScriptStruct ControlRig.RigUnit_PointSimulation_DebugSettings
// Size: 0x80 (Inherited: 0x00)
struct FRigUnit_PointSimulation_DebugSettings {
	bool bEnabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Scale; // 0x04(0x04)
	float CollisionScale; // 0x08(0x04)
	bool bDrawPointsAsSpheres; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FLinearColor Color; // 0x10(0x10)
	struct FTransform WorldOffset; // 0x20(0x60)
};

// ScriptStruct ControlRig.RigUnit_PointSimulation_BoneTarget
// Size: 0x10 (Inherited: 0x00)
struct FRigUnit_PointSimulation_BoneTarget {
	struct FName bone; // 0x00(0x04)
	int32_t TranslationPoint; // 0x04(0x04)
	int32_t PrimaryAimPoint; // 0x08(0x04)
	int32_t SecondaryAimPoint; // 0x0c(0x04)
};

// ScriptStruct ControlRig.RigUnit_PointSimulation_WorkData
// Size: 0x88 (Inherited: 0x00)
struct FRigUnit_PointSimulation_WorkData {
	struct FCRSimPointContainer Simulation; // 0x00(0x78)
	struct TArray<struct FCachedRigElement> BoneIndices; // 0x78(0x10)
};

// ScriptStruct ControlRig.RigUnit_SimBaseMutable
// Size: 0x38 (Inherited: 0x38)
struct FRigUnit_SimBaseMutable : FRigUnitMutable {
};

// ScriptStruct ControlRig.RigUnit_PointSimulation
// Size: 0x240 (Inherited: 0x38)
struct FRigUnit_PointSimulation : FRigUnit_SimBaseMutable {
	struct TArray<struct FCRSimPoint> Points; // 0x38(0x10)
	struct TArray<struct FCRSimLinearSpring> Links; // 0x48(0x10)
	struct TArray<struct FCRSimPointForce> Forces; // 0x58(0x10)
	struct TArray<struct FCRSimSoftCollision> CollisionVolumes; // 0x68(0x10)
	float SimulatedStepsPerSecond; // 0x78(0x04)
	enum class ECRSimPointIntegrateType IntegratorType; // 0x7c(0x01)
	char pad_7D[0x3]; // 0x7d(0x03)
	float VerletBlend; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
	struct TArray<struct FRigUnit_PointSimulation_BoneTarget> BoneTargets; // 0x88(0x10)
	bool bLimitLocalPosition; // 0x98(0x01)
	bool bPropagateToChildren; // 0x99(0x01)
	char pad_9A[0x6]; // 0x9a(0x06)
	struct FVector PrimaryAimAxis; // 0xa0(0x18)
	struct FVector SecondaryAimAxis; // 0xb8(0x18)
	struct FRigUnit_PointSimulation_DebugSettings DebugSettings; // 0xd0(0x80)
	struct FCRFourPointBezier Bezier; // 0x150(0x60)
	struct FRigUnit_PointSimulation_WorkData WorkData; // 0x1b0(0x88)
	char pad_238[0x8]; // 0x238(0x08)
};

// ScriptStruct ControlRig.RigUnit_PrepareForExecution
// Size: 0x38 (Inherited: 0x08)
struct FRigUnit_PrepareForExecution : FRigUnit {
	struct FControlRigExecuteContext ExecuteContext; // 0x08(0x30)
};

// ScriptStruct ControlRig.RigDispatch_Print
// Size: 0x18 (Inherited: 0x18)
struct FRigDispatch_Print : FRigDispatchFactory {
};

// ScriptStruct ControlRig.RigUnit_StartProfilingTimer
// Size: 0x38 (Inherited: 0x38)
struct FRigUnit_StartProfilingTimer : FRigUnit_DebugBaseMutable {
};

// ScriptStruct ControlRig.RigUnit_EndProfilingTimer
// Size: 0x58 (Inherited: 0x38)
struct FRigUnit_EndProfilingTimer : FRigUnit_DebugBaseMutable {
	int32_t NumberOfMeasurements; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FString Prefix; // 0x40(0x10)
	float AccumulatedTime; // 0x50(0x04)
	int32_t MeasurementsLeft; // 0x54(0x04)
};

// ScriptStruct ControlRig.RigUnit_ProjectTransformToNewParent
// Size: 0xe0 (Inherited: 0x08)
struct FRigUnit_ProjectTransformToNewParent : FRigUnit {
	struct FRigElementKey Child; // 0x08(0x08)
	bool bChildInitial; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FRigElementKey OldParent; // 0x14(0x08)
	bool bOldParentInitial; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	struct FRigElementKey NewParent; // 0x20(0x08)
	bool bNewParentInitial; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FTransform Transform; // 0x30(0x60)
	struct FCachedRigElement CachedChild; // 0x90(0x18)
	struct FCachedRigElement CachedOldParent; // 0xa8(0x18)
	struct FCachedRigElement CachedNewParent; // 0xc0(0x18)
	char pad_D8[0x8]; // 0xd8(0x08)
};

// ScriptStruct ControlRig.RigUnit_PropagateTransform
// Size: 0x60 (Inherited: 0x38)
struct FRigUnit_PropagateTransform : FRigUnitMutable {
	struct FRigElementKey Item; // 0x38(0x08)
	bool bRecomputeGlobal; // 0x40(0x01)
	bool bApplyToChildren; // 0x41(0x01)
	bool bRecursive; // 0x42(0x01)
	char pad_43[0x5]; // 0x43(0x05)
	struct FCachedRigElement CachedIndex; // 0x48(0x18)
};

// ScriptStruct ControlRig.RigUnit_BinaryQuaternionOp
// Size: 0x70 (Inherited: 0x08)
struct FRigUnit_BinaryQuaternionOp : FRigUnit {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat Argument0; // 0x10(0x20)
	struct FQuat Argument1; // 0x30(0x20)
	struct FQuat Result; // 0x50(0x20)
};

// ScriptStruct ControlRig.RigUnit_MultiplyQuaternion
// Size: 0x70 (Inherited: 0x70)
struct FRigUnit_MultiplyQuaternion : FRigUnit_BinaryQuaternionOp {
};

// ScriptStruct ControlRig.RigUnit_UnaryQuaternionOp
// Size: 0x50 (Inherited: 0x08)
struct FRigUnit_UnaryQuaternionOp : FRigUnit {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat Argument; // 0x10(0x20)
	struct FQuat Result; // 0x30(0x20)
};

// ScriptStruct ControlRig.RigUnit_InverseQuaterion
// Size: 0x50 (Inherited: 0x50)
struct FRigUnit_InverseQuaterion : FRigUnit_UnaryQuaternionOp {
};

// ScriptStruct ControlRig.RigUnit_QuaternionToAxisAndAngle
// Size: 0x50 (Inherited: 0x08)
struct FRigUnit_QuaternionToAxisAndAngle : FRigUnit {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat Argument; // 0x10(0x20)
	struct FVector Axis; // 0x30(0x18)
	float Angle; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct ControlRig.RigUnit_QuaternionFromAxisAndAngle
// Size: 0x50 (Inherited: 0x08)
struct FRigUnit_QuaternionFromAxisAndAngle : FRigUnit {
	struct FVector Axis; // 0x08(0x18)
	float Angle; // 0x20(0x04)
	char pad_24[0xc]; // 0x24(0x0c)
	struct FQuat Result; // 0x30(0x20)
};

// ScriptStruct ControlRig.RigUnit_QuaternionToAngle
// Size: 0x50 (Inherited: 0x08)
struct FRigUnit_QuaternionToAngle : FRigUnit {
	struct FVector Axis; // 0x08(0x18)
	struct FQuat Argument; // 0x20(0x20)
	float Angle; // 0x40(0x04)
	char pad_44[0xc]; // 0x44(0x0c)
};

// ScriptStruct ControlRig.RigUnit_RandomFloat
// Size: 0x30 (Inherited: 0x08)
struct FRigUnit_RandomFloat : FRigUnit_MathBase {
	int32_t Seed; // 0x08(0x04)
	float Minimum; // 0x0c(0x04)
	float Maximum; // 0x10(0x04)
	float Duration; // 0x14(0x04)
	float Result; // 0x18(0x04)
	float LastResult; // 0x1c(0x04)
	int32_t LastSeed; // 0x20(0x04)
	int32_t BaseSeed; // 0x24(0x04)
	float TimeLeft; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct ControlRig.RigUnit_RandomVector
// Size: 0x58 (Inherited: 0x08)
struct FRigUnit_RandomVector : FRigUnit_MathBase {
	int32_t Seed; // 0x08(0x04)
	float Minimum; // 0x0c(0x04)
	float Maximum; // 0x10(0x04)
	float Duration; // 0x14(0x04)
	struct FVector Result; // 0x18(0x18)
	struct FVector LastResult; // 0x30(0x18)
	int32_t LastSeed; // 0x48(0x04)
	int32_t BaseSeed; // 0x4c(0x04)
	float TimeLeft; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct ControlRig.RigUnit_SendEvent
// Size: 0x50 (Inherited: 0x38)
struct FRigUnit_SendEvent : FRigUnitMutable {
	enum class ERigEvent event; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct FRigElementKey Item; // 0x3c(0x08)
	float OffsetInSeconds; // 0x44(0x04)
	bool bEnable; // 0x48(0x01)
	bool bOnlyDuringInteraction; // 0x49(0x01)
	char pad_4A[0x6]; // 0x4a(0x06)
};

// ScriptStruct ControlRig.RigUnit_SequenceExecution
// Size: 0xf8 (Inherited: 0x08)
struct FRigUnit_SequenceExecution : FRigUnit {
	struct FControlRigExecuteContext ExecuteContext; // 0x08(0x30)
	struct FControlRigExecuteContext A; // 0x38(0x30)
	struct FControlRigExecuteContext B; // 0x68(0x30)
	struct FControlRigExecuteContext C; // 0x98(0x30)
	struct FControlRigExecuteContext D; // 0xc8(0x30)
};

// ScriptStruct ControlRig.RigUnit_SequenceAggregate
// Size: 0x98 (Inherited: 0x08)
struct FRigUnit_SequenceAggregate : FRigUnit {
	struct FControlRigExecuteContext ExecuteContext; // 0x08(0x30)
	struct FControlRigExecuteContext A; // 0x38(0x30)
	struct FControlRigExecuteContext B; // 0x68(0x30)
};

// ScriptStruct ControlRig.RigUnit_SetBoneInitialTransform
// Size: 0x120 (Inherited: 0x38)
struct FRigUnit_SetBoneInitialTransform : FRigUnitMutable {
	struct FName bone; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FTransform Transform; // 0x40(0x60)
	struct FTransform Result; // 0xa0(0x60)
	enum class EBoneGetterSetterMode Space; // 0x100(0x01)
	bool bPropagateToChildren; // 0x101(0x01)
	char pad_102[0x6]; // 0x102(0x06)
	struct FCachedRigElement CachedBone; // 0x108(0x18)
};

// ScriptStruct ControlRig.RigUnit_SetBoneRotation
// Size: 0x90 (Inherited: 0x38)
struct FRigUnit_SetBoneRotation : FRigUnitMutable {
	struct FName bone; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FQuat Rotation; // 0x40(0x20)
	enum class EBoneGetterSetterMode Space; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	float Weight; // 0x64(0x04)
	bool bPropagateToChildren; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct FCachedRigElement CachedBone; // 0x70(0x18)
	char pad_88[0x8]; // 0x88(0x08)
};

// ScriptStruct ControlRig.RigUnit_SetBoneTransform
// Size: 0x130 (Inherited: 0x38)
struct FRigUnit_SetBoneTransform : FRigUnitMutable {
	struct FName bone; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FTransform Transform; // 0x40(0x60)
	struct FTransform Result; // 0xa0(0x60)
	enum class EBoneGetterSetterMode Space; // 0x100(0x01)
	char pad_101[0x3]; // 0x101(0x03)
	float Weight; // 0x104(0x04)
	bool bPropagateToChildren; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
	struct FCachedRigElement CachedBone; // 0x110(0x18)
	char pad_128[0x8]; // 0x128(0x08)
};

// ScriptStruct ControlRig.RigUnit_SetBoneTranslation
// Size: 0x80 (Inherited: 0x38)
struct FRigUnit_SetBoneTranslation : FRigUnitMutable {
	struct FName bone; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FVector Translation; // 0x40(0x18)
	enum class EBoneGetterSetterMode Space; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	float Weight; // 0x5c(0x04)
	bool bPropagateToChildren; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct FCachedRigElement CachedBone; // 0x68(0x18)
};

// ScriptStruct ControlRig.RigUnit_GetControlColor
// Size: 0x38 (Inherited: 0x08)
struct FRigUnit_GetControlColor : FRigUnit {
	struct FName Control; // 0x08(0x04)
	struct FLinearColor Color; // 0x0c(0x10)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FCachedRigElement CachedControlIndex; // 0x20(0x18)
};

// ScriptStruct ControlRig.RigUnit_SetControlColor
// Size: 0x68 (Inherited: 0x38)
struct FRigUnit_SetControlColor : FRigUnitMutable {
	struct FName Control; // 0x38(0x04)
	struct FLinearColor Color; // 0x3c(0x10)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FCachedRigElement CachedControlIndex; // 0x50(0x18)
};

// ScriptStruct ControlRig.RigUnit_GetControlDrivenList
// Size: 0x38 (Inherited: 0x08)
struct FRigUnit_GetControlDrivenList : FRigUnit {
	struct FName Control; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FRigElementKey> Driven; // 0x10(0x10)
	struct FCachedRigElement CachedControlIndex; // 0x20(0x18)
};

// ScriptStruct ControlRig.RigUnit_SetControlDrivenList
// Size: 0x68 (Inherited: 0x38)
struct FRigUnit_SetControlDrivenList : FRigUnitMutable {
	struct FName Control; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<struct FRigElementKey> Driven; // 0x40(0x10)
	struct FCachedRigElement CachedControlIndex; // 0x50(0x18)
};

// ScriptStruct ControlRig.RigUnit_SetControlOffset
// Size: 0xc0 (Inherited: 0x38)
struct FRigUnit_SetControlOffset : FRigUnitMutable {
	struct FName Control; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FTransform Offset; // 0x40(0x60)
	enum class EBoneGetterSetterMode Space; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct FCachedRigElement CachedControlIndex; // 0xa8(0x18)
};

// ScriptStruct ControlRig.RigUnit_GetShapeTransform
// Size: 0x90 (Inherited: 0x08)
struct FRigUnit_GetShapeTransform : FRigUnit {
	struct FName Control; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FTransform Transform; // 0x10(0x60)
	struct FCachedRigElement CachedControlIndex; // 0x70(0x18)
	char pad_88[0x8]; // 0x88(0x08)
};

// ScriptStruct ControlRig.RigUnit_SetShapeTransform
// Size: 0xc0 (Inherited: 0x38)
struct FRigUnit_SetShapeTransform : FRigUnitMutable {
	struct FName Control; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FTransform Transform; // 0x40(0x60)
	struct FCachedRigElement CachedControlIndex; // 0xa0(0x18)
	char pad_B8[0x8]; // 0xb8(0x08)
};

// ScriptStruct ControlRig.RigUnit_SetControlBool
// Size: 0x58 (Inherited: 0x38)
struct FRigUnit_SetControlBool : FRigUnitMutable {
	struct FName Control; // 0x38(0x04)
	bool BoolValue; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct FCachedRigElement CachedControlIndex; // 0x40(0x18)
};

// ScriptStruct ControlRig.RigUnit_SetMultiControlBool_Entry
// Size: 0x08 (Inherited: 0x00)
struct FRigUnit_SetMultiControlBool_Entry {
	struct FName Control; // 0x00(0x04)
	bool BoolValue; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct ControlRig.RigUnit_SetMultiControlBool
// Size: 0x58 (Inherited: 0x38)
struct FRigUnit_SetMultiControlBool : FRigUnitMutable {
	struct TArray<struct FRigUnit_SetMultiControlBool_Entry> Entries; // 0x38(0x10)
	struct TArray<struct FCachedRigElement> CachedControlIndices; // 0x48(0x10)
};

// ScriptStruct ControlRig.RigUnit_SetControlFloat
// Size: 0x60 (Inherited: 0x38)
struct FRigUnit_SetControlFloat : FRigUnitMutable {
	struct FName Control; // 0x38(0x04)
	float Weight; // 0x3c(0x04)
	float FloatValue; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FCachedRigElement CachedControlIndex; // 0x48(0x18)
};

// ScriptStruct ControlRig.RigUnit_SetMultiControlFloat_Entry
// Size: 0x08 (Inherited: 0x00)
struct FRigUnit_SetMultiControlFloat_Entry {
	struct FName Control; // 0x00(0x04)
	float FloatValue; // 0x04(0x04)
};

// ScriptStruct ControlRig.RigUnit_SetMultiControlFloat
// Size: 0x60 (Inherited: 0x38)
struct FRigUnit_SetMultiControlFloat : FRigUnitMutable {
	struct TArray<struct FRigUnit_SetMultiControlFloat_Entry> Entries; // 0x38(0x10)
	float Weight; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct TArray<struct FCachedRigElement> CachedControlIndices; // 0x50(0x10)
};

// ScriptStruct ControlRig.RigUnit_SetControlInteger
// Size: 0x60 (Inherited: 0x38)
struct FRigUnit_SetControlInteger : FRigUnitMutable {
	struct FName Control; // 0x38(0x04)
	int32_t Weight; // 0x3c(0x04)
	int32_t IntegerValue; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FCachedRigElement CachedControlIndex; // 0x48(0x18)
};

// ScriptStruct ControlRig.RigUnit_SetMultiControlInteger_Entry
// Size: 0x08 (Inherited: 0x00)
struct FRigUnit_SetMultiControlInteger_Entry {
	struct FName Control; // 0x00(0x04)
	int32_t IntegerValue; // 0x04(0x04)
};

// ScriptStruct ControlRig.RigUnit_SetMultiControlInteger
// Size: 0x60 (Inherited: 0x38)
struct FRigUnit_SetMultiControlInteger : FRigUnitMutable {
	struct TArray<struct FRigUnit_SetMultiControlInteger_Entry> Entries; // 0x38(0x10)
	float Weight; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct TArray<struct FCachedRigElement> CachedControlIndices; // 0x50(0x10)
};

// ScriptStruct ControlRig.RigUnit_SetControlVector2D
// Size: 0x68 (Inherited: 0x38)
struct FRigUnit_SetControlVector2D : FRigUnitMutable {
	struct FName Control; // 0x38(0x04)
	float Weight; // 0x3c(0x04)
	struct FVector2D Vector; // 0x40(0x10)
	struct FCachedRigElement CachedControlIndex; // 0x50(0x18)
};

// ScriptStruct ControlRig.RigUnit_SetMultiControlVector2D_Entry
// Size: 0x18 (Inherited: 0x00)
struct FRigUnit_SetMultiControlVector2D_Entry {
	struct FName Control; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FVector2D Vector; // 0x08(0x10)
};

// ScriptStruct ControlRig.RigUnit_SetMultiControlVector2D
// Size: 0x60 (Inherited: 0x38)
struct FRigUnit_SetMultiControlVector2D : FRigUnitMutable {
	struct TArray<struct FRigUnit_SetMultiControlVector2D_Entry> Entries; // 0x38(0x10)
	float Weight; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct TArray<struct FCachedRigElement> CachedControlIndices; // 0x50(0x10)
};

// ScriptStruct ControlRig.RigUnit_SetControlVector
// Size: 0x78 (Inherited: 0x38)
struct FRigUnit_SetControlVector : FRigUnitMutable {
	struct FName Control; // 0x38(0x04)
	float Weight; // 0x3c(0x04)
	struct FVector Vector; // 0x40(0x18)
	enum class EBoneGetterSetterMode Space; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct FCachedRigElement CachedControlIndex; // 0x60(0x18)
};

// ScriptStruct ControlRig.RigUnit_SetControlRotator
// Size: 0x78 (Inherited: 0x38)
struct FRigUnit_SetControlRotator : FRigUnitMutable {
	struct FName Control; // 0x38(0x04)
	float Weight; // 0x3c(0x04)
	struct FRotator Rotator; // 0x40(0x18)
	enum class EBoneGetterSetterMode Space; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct FCachedRigElement CachedControlIndex; // 0x60(0x18)
};

// ScriptStruct ControlRig.RigUnit_SetMultiControlRotator_Entry
// Size: 0x28 (Inherited: 0x00)
struct FRigUnit_SetMultiControlRotator_Entry {
	struct FName Control; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FRotator Rotator; // 0x08(0x18)
	enum class EBoneGetterSetterMode Space; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct ControlRig.RigUnit_SetMultiControlRotator
// Size: 0x60 (Inherited: 0x38)
struct FRigUnit_SetMultiControlRotator : FRigUnitMutable {
	struct TArray<struct FRigUnit_SetMultiControlRotator_Entry> Entries; // 0x38(0x10)
	float Weight; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct TArray<struct FCachedRigElement> CachedControlIndices; // 0x50(0x10)
};

// ScriptStruct ControlRig.RigUnit_SetControlTransform
// Size: 0xc0 (Inherited: 0x38)
struct FRigUnit_SetControlTransform : FRigUnitMutable {
	struct FName Control; // 0x38(0x04)
	float Weight; // 0x3c(0x04)
	struct FTransform Transform; // 0x40(0x60)
	enum class EBoneGetterSetterMode Space; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct FCachedRigElement CachedControlIndex; // 0xa8(0x18)
};

// ScriptStruct ControlRig.RigUnit_GetControlVisibility
// Size: 0x30 (Inherited: 0x08)
struct FRigUnit_GetControlVisibility : FRigUnit {
	struct FRigElementKey Item; // 0x08(0x08)
	bool bVisible; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FCachedRigElement CachedControlIndex; // 0x18(0x18)
};

// ScriptStruct ControlRig.RigUnit_SetControlVisibility
// Size: 0x68 (Inherited: 0x38)
struct FRigUnit_SetControlVisibility : FRigUnitMutable {
	struct FRigElementKey Item; // 0x38(0x08)
	struct FString Pattern; // 0x40(0x10)
	bool bVisible; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct TArray<struct FCachedRigElement> CachedControlIndices; // 0x58(0x10)
};

// ScriptStruct ControlRig.RigUnit_SetCurveValue
// Size: 0x58 (Inherited: 0x38)
struct FRigUnit_SetCurveValue : FRigUnitMutable {
	struct FName Curve; // 0x38(0x04)
	float Value; // 0x3c(0x04)
	struct FCachedRigElement CachedCurveIndex; // 0x40(0x18)
};

// ScriptStruct ControlRig.RigUnit_SetRelativeBoneTransform
// Size: 0xe0 (Inherited: 0x38)
struct FRigUnit_SetRelativeBoneTransform : FRigUnitMutable {
	struct FName bone; // 0x38(0x04)
	struct FName Space; // 0x3c(0x04)
	struct FTransform Transform; // 0x40(0x60)
	float Weight; // 0xa0(0x04)
	bool bPropagateToChildren; // 0xa4(0x01)
	char pad_A5[0x3]; // 0xa5(0x03)
	struct FCachedRigElement CachedBone; // 0xa8(0x18)
	struct FCachedRigElement CachedSpaceIndex; // 0xc0(0x18)
	char pad_D8[0x8]; // 0xd8(0x08)
};

// ScriptStruct ControlRig.RigUnit_SetRelativeTransformForItem
// Size: 0xf0 (Inherited: 0x38)
struct FRigUnit_SetRelativeTransformForItem : FRigUnitMutable {
	struct FRigElementKey Child; // 0x38(0x08)
	struct FRigElementKey Parent; // 0x40(0x08)
	bool bParentInitial; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct FTransform Value; // 0x50(0x60)
	float Weight; // 0xb0(0x04)
	bool bPropagateToChildren; // 0xb4(0x01)
	char pad_B5[0x3]; // 0xb5(0x03)
	struct FCachedRigElement CachedChild; // 0xb8(0x18)
	struct FCachedRigElement CachedParent; // 0xd0(0x18)
	char pad_E8[0x8]; // 0xe8(0x08)
};

// ScriptStruct ControlRig.RigUnit_SetRelativeTranslationForItem
// Size: 0xa0 (Inherited: 0x38)
struct FRigUnit_SetRelativeTranslationForItem : FRigUnitMutable {
	struct FRigElementKey Child; // 0x38(0x08)
	struct FRigElementKey Parent; // 0x40(0x08)
	bool bParentInitial; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct FVector Value; // 0x50(0x18)
	float Weight; // 0x68(0x04)
	bool bPropagateToChildren; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
	struct FCachedRigElement CachedChild; // 0x70(0x18)
	struct FCachedRigElement CachedParent; // 0x88(0x18)
};

// ScriptStruct ControlRig.RigUnit_SetRelativeRotationForItem
// Size: 0xb0 (Inherited: 0x38)
struct FRigUnit_SetRelativeRotationForItem : FRigUnitMutable {
	struct FRigElementKey Child; // 0x38(0x08)
	struct FRigElementKey Parent; // 0x40(0x08)
	bool bParentInitial; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct FQuat Value; // 0x50(0x20)
	float Weight; // 0x70(0x04)
	bool bPropagateToChildren; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
	struct FCachedRigElement CachedChild; // 0x78(0x18)
	struct FCachedRigElement CachedParent; // 0x90(0x18)
	char pad_A8[0x8]; // 0xa8(0x08)
};

// ScriptStruct ControlRig.RigUnit_SetSpaceInitialTransform
// Size: 0x120 (Inherited: 0x38)
struct FRigUnit_SetSpaceInitialTransform : FRigUnitMutable {
	struct FName SpaceName; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FTransform Transform; // 0x40(0x60)
	struct FTransform Result; // 0xa0(0x60)
	enum class EBoneGetterSetterMode Space; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
	struct FCachedRigElement CachedSpaceIndex; // 0x108(0x18)
};

// ScriptStruct ControlRig.RigUnit_SetSpaceTransform
// Size: 0xc0 (Inherited: 0x38)
struct FRigUnit_SetSpaceTransform : FRigUnitMutable {
	struct FName Space; // 0x38(0x04)
	float Weight; // 0x3c(0x04)
	struct FTransform Transform; // 0x40(0x60)
	enum class EBoneGetterSetterMode SpaceType; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct FCachedRigElement CachedSpaceIndex; // 0xa8(0x18)
};

// ScriptStruct ControlRig.RigUnit_SetTransform
// Size: 0xd0 (Inherited: 0x38)
struct FRigUnit_SetTransform : FRigUnitMutable {
	struct FRigElementKey Item; // 0x38(0x08)
	enum class EBoneGetterSetterMode Space; // 0x40(0x01)
	bool bInitial; // 0x41(0x01)
	char pad_42[0xe]; // 0x42(0x0e)
	struct FTransform Value; // 0x50(0x60)
	float Weight; // 0xb0(0x04)
	bool bPropagateToChildren; // 0xb4(0x01)
	char pad_B5[0x3]; // 0xb5(0x03)
	struct FCachedRigElement CachedIndex; // 0xb8(0x18)
};

// ScriptStruct ControlRig.RigUnit_SetTranslation
// Size: 0x80 (Inherited: 0x38)
struct FRigUnit_SetTranslation : FRigUnitMutable {
	struct FRigElementKey Item; // 0x38(0x08)
	enum class EBoneGetterSetterMode Space; // 0x40(0x01)
	bool bInitial; // 0x41(0x01)
	char pad_42[0x6]; // 0x42(0x06)
	struct FVector Value; // 0x48(0x18)
	float Weight; // 0x60(0x04)
	bool bPropagateToChildren; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	struct FCachedRigElement CachedIndex; // 0x68(0x18)
};

// ScriptStruct ControlRig.RigUnit_SetRotation
// Size: 0x90 (Inherited: 0x38)
struct FRigUnit_SetRotation : FRigUnitMutable {
	struct FRigElementKey Item; // 0x38(0x08)
	enum class EBoneGetterSetterMode Space; // 0x40(0x01)
	bool bInitial; // 0x41(0x01)
	char pad_42[0xe]; // 0x42(0x0e)
	struct FQuat Value; // 0x50(0x20)
	float Weight; // 0x70(0x04)
	bool bPropagateToChildren; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
	struct FCachedRigElement CachedIndex; // 0x78(0x18)
};

// ScriptStruct ControlRig.RigUnit_SetScale
// Size: 0x80 (Inherited: 0x38)
struct FRigUnit_SetScale : FRigUnitMutable {
	struct FRigElementKey Item; // 0x38(0x08)
	enum class EBoneGetterSetterMode Space; // 0x40(0x01)
	bool bInitial; // 0x41(0x01)
	char pad_42[0x6]; // 0x42(0x06)
	struct FVector Scale; // 0x48(0x18)
	float Weight; // 0x60(0x04)
	bool bPropagateToChildren; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	struct FCachedRigElement CachedIndex; // 0x68(0x18)
};

// ScriptStruct ControlRig.RigUnit_SetTransformArray
// Size: 0x78 (Inherited: 0x38)
struct FRigUnit_SetTransformArray : FRigUnitMutable {
	struct FRigElementKeyCollection Items; // 0x38(0x10)
	enum class EBoneGetterSetterMode Space; // 0x48(0x01)
	bool bInitial; // 0x49(0x01)
	char pad_4A[0x6]; // 0x4a(0x06)
	struct TArray<struct FTransform> Transforms; // 0x50(0x10)
	float Weight; // 0x60(0x04)
	bool bPropagateToChildren; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	struct TArray<struct FCachedRigElement> CachedIndex; // 0x68(0x10)
};

// ScriptStruct ControlRig.RigUnit_SetTransformItemArray
// Size: 0x78 (Inherited: 0x38)
struct FRigUnit_SetTransformItemArray : FRigUnitMutable {
	struct TArray<struct FRigElementKey> Items; // 0x38(0x10)
	enum class EBoneGetterSetterMode Space; // 0x48(0x01)
	bool bInitial; // 0x49(0x01)
	char pad_4A[0x6]; // 0x4a(0x06)
	struct TArray<struct FTransform> Transforms; // 0x50(0x10)
	float Weight; // 0x60(0x04)
	bool bPropagateToChildren; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	struct TArray<struct FCachedRigElement> CachedIndex; // 0x68(0x10)
};

// ScriptStruct ControlRig.RigUnit_SlideChain_WorkData
// Size: 0x48 (Inherited: 0x00)
struct FRigUnit_SlideChain_WorkData {
	float ChainLength; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<float> ItemSegments; // 0x08(0x10)
	struct TArray<struct FCachedRigElement> CachedItems; // 0x18(0x10)
	struct TArray<struct FTransform> Transforms; // 0x28(0x10)
	struct TArray<struct FTransform> BlendedTransforms; // 0x38(0x10)
};

// ScriptStruct ControlRig.RigUnit_SlideChain
// Size: 0x90 (Inherited: 0x38)
struct FRigUnit_SlideChain : FRigUnit_HighlevelBaseMutable {
	struct FName StartBone; // 0x38(0x04)
	struct FName EndBone; // 0x3c(0x04)
	float SlideAmount; // 0x40(0x04)
	bool bPropagateToChildren; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	struct FRigUnit_SlideChain_WorkData WorkData; // 0x48(0x48)
};

// ScriptStruct ControlRig.RigUnit_SlideChainPerItem
// Size: 0x98 (Inherited: 0x38)
struct FRigUnit_SlideChainPerItem : FRigUnit_HighlevelBaseMutable {
	struct FRigElementKeyCollection Items; // 0x38(0x10)
	float SlideAmount; // 0x48(0x04)
	bool bPropagateToChildren; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	struct FRigUnit_SlideChain_WorkData WorkData; // 0x50(0x48)
};

// ScriptStruct ControlRig.RigUnit_SlideChainItemArray
// Size: 0x98 (Inherited: 0x38)
struct FRigUnit_SlideChainItemArray : FRigUnit_HighlevelBaseMutable {
	struct TArray<struct FRigElementKey> Items; // 0x38(0x10)
	float SlideAmount; // 0x48(0x04)
	bool bPropagateToChildren; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	struct FRigUnit_SlideChain_WorkData WorkData; // 0x50(0x48)
};

// ScriptStruct ControlRig.RegionScaleFactors
// Size: 0x10 (Inherited: 0x00)
struct FRegionScaleFactors {
	float PositiveWidth; // 0x00(0x04)
	float NegativeWidth; // 0x04(0x04)
	float PositiveHeight; // 0x08(0x04)
	float NegativeHeight; // 0x0c(0x04)
};

// ScriptStruct ControlRig.SphericalRegion
// Size: 0x14 (Inherited: 0x00)
struct FSphericalRegion {
	char pad_0[0x14]; // 0x00(0x14)
};

// ScriptStruct ControlRig.SphericalPoseReaderDebugSettings
// Size: 0x10 (Inherited: 0x00)
struct FSphericalPoseReaderDebugSettings {
	bool bDrawDebug; // 0x00(0x01)
	bool bDraw2D; // 0x01(0x01)
	bool bDrawLocalAxes; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	float DebugScale; // 0x04(0x04)
	int32_t DebugSegments; // 0x08(0x04)
	float DebugThickness; // 0x0c(0x04)
};

// ScriptStruct ControlRig.RigUnit_SphericalPoseReader
// Size: 0x1d0 (Inherited: 0x38)
struct FRigUnit_SphericalPoseReader : FRigUnit_HighlevelBaseMutable {
	float OutputParam; // 0x38(0x04)
	struct FRigElementKey DriverItem; // 0x3c(0x08)
	char pad_44[0x4]; // 0x44(0x04)
	struct FVector DriverAxis; // 0x48(0x18)
	struct FVector RotationOffset; // 0x60(0x18)
	float ActiveRegionSize; // 0x78(0x04)
	struct FRegionScaleFactors ActiveRegionScaleFactors; // 0x7c(0x10)
	float FalloffSize; // 0x8c(0x04)
	struct FRegionScaleFactors FalloffRegionScaleFactors; // 0x90(0x10)
	bool FlipWidthScaling; // 0xa0(0x01)
	bool FlipHeightScaling; // 0xa1(0x01)
	char pad_A2[0x2]; // 0xa2(0x02)
	struct FRigElementKey OptionalParentItem; // 0xa4(0x08)
	struct FSphericalPoseReaderDebugSettings Debug; // 0xac(0x10)
	struct FSphericalRegion InnerRegion; // 0xbc(0x14)
	struct FSphericalRegion OuterRegion; // 0xd0(0x14)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct FVector DriverNormal; // 0xe8(0x18)
	struct FVector Driver2D; // 0x100(0x18)
	struct FCachedRigElement DriverCache; // 0x118(0x18)
	struct FCachedRigElement OptionalParentCache; // 0x130(0x18)
	char pad_148[0x8]; // 0x148(0x08)
	struct FTransform LocalDriverTransformInit; // 0x150(0x60)
	struct FVector CachedRotationOffset; // 0x1b0(0x18)
	bool bCachedInitTransforms; // 0x1c8(0x01)
	char pad_1C9[0x7]; // 0x1c9(0x07)
};

// ScriptStruct ControlRig.RigUnit_SpringIK_DebugSettings
// Size: 0x80 (Inherited: 0x00)
struct FRigUnit_SpringIK_DebugSettings {
	bool bEnabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Scale; // 0x04(0x04)
	struct FLinearColor Color; // 0x08(0x10)
	char pad_18[0x8]; // 0x18(0x08)
	struct FTransform WorldOffset; // 0x20(0x60)
};

// ScriptStruct ControlRig.RigUnit_SpringIK_WorkData
// Size: 0xb0 (Inherited: 0x00)
struct FRigUnit_SpringIK_WorkData {
	struct TArray<struct FCachedRigElement> CachedBones; // 0x00(0x10)
	struct FCachedRigElement CachedPoleVector; // 0x10(0x18)
	struct TArray<struct FTransform> Transforms; // 0x28(0x10)
	struct FCRSimPointContainer Simulation; // 0x38(0x78)
};

// ScriptStruct ControlRig.RigUnit_SpringIK
// Size: 0x1f0 (Inherited: 0x38)
struct FRigUnit_SpringIK : FRigUnit_HighlevelBaseMutable {
	struct FName StartBone; // 0x38(0x04)
	struct FName EndBone; // 0x3c(0x04)
	float HierarchyStrength; // 0x40(0x04)
	float EffectorStrength; // 0x44(0x04)
	float EffectorRatio; // 0x48(0x04)
	float RootStrength; // 0x4c(0x04)
	float RootRatio; // 0x50(0x04)
	float Damping; // 0x54(0x04)
	struct FVector PoleVector; // 0x58(0x18)
	bool bFlipPolePlane; // 0x70(0x01)
	enum class EControlRigVectorKind PoleVectorKind; // 0x71(0x01)
	char pad_72[0x2]; // 0x72(0x02)
	struct FName PoleVectorSpace; // 0x74(0x04)
	struct FVector PrimaryAxis; // 0x78(0x18)
	struct FVector SecondaryAxis; // 0x90(0x18)
	bool bLiveSimulation; // 0xa8(0x01)
	char pad_A9[0x3]; // 0xa9(0x03)
	int32_t Iterations; // 0xac(0x04)
	bool bLimitLocalPosition; // 0xb0(0x01)
	bool bPropagateToChildren; // 0xb1(0x01)
	char pad_B2[0xe]; // 0xb2(0x0e)
	struct FRigUnit_SpringIK_DebugSettings DebugSettings; // 0xc0(0x80)
	struct FRigUnit_SpringIK_WorkData WorkData; // 0x140(0xb0)
};

// ScriptStruct ControlRig.RigUnit_SpringInterp
// Size: 0x30 (Inherited: 0x08)
struct FRigUnit_SpringInterp : FRigUnit_SimBase {
	float Current; // 0x08(0x04)
	float Target; // 0x0c(0x04)
	float Stiffness; // 0x10(0x04)
	float CriticalDamping; // 0x14(0x04)
	float Mass; // 0x18(0x04)
	float Result; // 0x1c(0x04)
	struct FFloatSpringState SpringState; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct ControlRig.RigUnit_SpringInterpVector
// Size: 0x98 (Inherited: 0x08)
struct FRigUnit_SpringInterpVector : FRigUnit_SimBase {
	struct FVector Current; // 0x08(0x18)
	struct FVector Target; // 0x20(0x18)
	float Stiffness; // 0x38(0x04)
	float CriticalDamping; // 0x3c(0x04)
	float Mass; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FVector Result; // 0x48(0x18)
	struct FVectorSpringState SpringState; // 0x60(0x38)
};

// ScriptStruct ControlRig.RigUnit_SpringInterpV2
// Size: 0x40 (Inherited: 0x08)
struct FRigUnit_SpringInterpV2 : FRigUnit_SimBase {
	float Target; // 0x08(0x04)
	float Strength; // 0x0c(0x04)
	float CriticalDamping; // 0x10(0x04)
	float Force; // 0x14(0x04)
	bool bUseCurrentInput; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float Current; // 0x1c(0x04)
	float TargetVelocityAmount; // 0x20(0x04)
	bool bInitializeFromTarget; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	float Result; // 0x28(0x04)
	float Velocity; // 0x2c(0x04)
	float SimulatedResult; // 0x30(0x04)
	struct FFloatSpringState SpringState; // 0x34(0x0c)
};

// ScriptStruct ControlRig.RigUnit_SpringInterpVectorV2
// Size: 0xe8 (Inherited: 0x08)
struct FRigUnit_SpringInterpVectorV2 : FRigUnit_SimBase {
	struct FVector Target; // 0x08(0x18)
	float Strength; // 0x20(0x04)
	float CriticalDamping; // 0x24(0x04)
	struct FVector Force; // 0x28(0x18)
	bool bUseCurrentInput; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct FVector Current; // 0x48(0x18)
	float TargetVelocityAmount; // 0x60(0x04)
	bool bInitializeFromTarget; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	struct FVector Result; // 0x68(0x18)
	struct FVector Velocity; // 0x80(0x18)
	struct FVector SimulatedResult; // 0x98(0x18)
	struct FVectorSpringState SpringState; // 0xb0(0x38)
};

// ScriptStruct ControlRig.RigUnit_SpringInterpQuaternionV2
// Size: 0x130 (Inherited: 0x08)
struct FRigUnit_SpringInterpQuaternionV2 : FRigUnit_SimBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat Target; // 0x10(0x20)
	float Strength; // 0x30(0x04)
	float CriticalDamping; // 0x34(0x04)
	struct FVector Torque; // 0x38(0x18)
	bool bUseCurrentInput; // 0x50(0x01)
	char pad_51[0xf]; // 0x51(0x0f)
	struct FQuat Current; // 0x60(0x20)
	float TargetVelocityAmount; // 0x80(0x04)
	bool bInitializeFromTarget; // 0x84(0x01)
	char pad_85[0xb]; // 0x85(0x0b)
	struct FQuat Result; // 0x90(0x20)
	struct FVector AngularVelocity; // 0xb0(0x18)
	char pad_C8[0x8]; // 0xc8(0x08)
	struct FQuat SimulatedResult; // 0xd0(0x20)
	struct FQuaternionSpringState SpringState; // 0xf0(0x40)
};

// ScriptStruct ControlRig.RigUnit_StringBase
// Size: 0x08 (Inherited: 0x08)
struct FRigUnit_StringBase : FRigUnit {
};

// ScriptStruct ControlRig.RigUnit_StringConcat
// Size: 0x38 (Inherited: 0x08)
struct FRigUnit_StringConcat : FRigUnit_StringBase {
	struct FString A; // 0x08(0x10)
	struct FString B; // 0x18(0x10)
	struct FString Result; // 0x28(0x10)
};

// ScriptStruct ControlRig.RigUnit_StringTruncate
// Size: 0x40 (Inherited: 0x08)
struct FRigUnit_StringTruncate : FRigUnit_StringBase {
	struct FString Name; // 0x08(0x10)
	int32_t Count; // 0x18(0x04)
	bool FromEnd; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	struct FString Remainder; // 0x20(0x10)
	struct FString Chopped; // 0x30(0x10)
};

// ScriptStruct ControlRig.RigUnit_StringReplace
// Size: 0x48 (Inherited: 0x08)
struct FRigUnit_StringReplace : FRigUnit_StringBase {
	struct FString Name; // 0x08(0x10)
	struct FString Old; // 0x18(0x10)
	struct FString New; // 0x28(0x10)
	struct FString Result; // 0x38(0x10)
};

// ScriptStruct ControlRig.RigUnit_StringEndsWith
// Size: 0x30 (Inherited: 0x08)
struct FRigUnit_StringEndsWith : FRigUnit_StringBase {
	struct FString Name; // 0x08(0x10)
	struct FString Ending; // 0x18(0x10)
	bool Result; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct ControlRig.RigUnit_StringStartsWith
// Size: 0x30 (Inherited: 0x08)
struct FRigUnit_StringStartsWith : FRigUnit_StringBase {
	struct FString Name; // 0x08(0x10)
	struct FString Start; // 0x18(0x10)
	bool Result; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct ControlRig.RigUnit_StringContains
// Size: 0x30 (Inherited: 0x08)
struct FRigUnit_StringContains : FRigUnit_StringBase {
	struct FString Name; // 0x08(0x10)
	struct FString Search; // 0x18(0x10)
	bool Result; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct ControlRig.RigUnit_StringLength
// Size: 0x20 (Inherited: 0x08)
struct FRigUnit_StringLength : FRigUnit_StringBase {
	struct FString Value; // 0x08(0x10)
	int32_t Length; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct ControlRig.RigUnit_StringTrimWhitespace
// Size: 0x28 (Inherited: 0x08)
struct FRigUnit_StringTrimWhitespace : FRigUnit_StringBase {
	struct FString Value; // 0x08(0x10)
	struct FString Result; // 0x18(0x10)
};

// ScriptStruct ControlRig.RigUnit_StringToUppercase
// Size: 0x28 (Inherited: 0x08)
struct FRigUnit_StringToUppercase : FRigUnit_StringBase {
	struct FString Value; // 0x08(0x10)
	struct FString Result; // 0x18(0x10)
};

// ScriptStruct ControlRig.RigUnit_StringToLowercase
// Size: 0x28 (Inherited: 0x08)
struct FRigUnit_StringToLowercase : FRigUnit_StringBase {
	struct FString Value; // 0x08(0x10)
	struct FString Result; // 0x18(0x10)
};

// ScriptStruct ControlRig.RigUnit_StringReverse
// Size: 0x28 (Inherited: 0x08)
struct FRigUnit_StringReverse : FRigUnit_StringBase {
	struct FString Value; // 0x08(0x10)
	struct FString Reverse; // 0x18(0x10)
};

// ScriptStruct ControlRig.RigUnit_StringLeft
// Size: 0x30 (Inherited: 0x08)
struct FRigUnit_StringLeft : FRigUnit_StringBase {
	struct FString Value; // 0x08(0x10)
	int32_t Count; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString Result; // 0x20(0x10)
};

// ScriptStruct ControlRig.RigUnit_StringRight
// Size: 0x30 (Inherited: 0x08)
struct FRigUnit_StringRight : FRigUnit_StringBase {
	struct FString Value; // 0x08(0x10)
	int32_t Count; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString Result; // 0x20(0x10)
};

// ScriptStruct ControlRig.RigUnit_StringMiddle
// Size: 0x30 (Inherited: 0x08)
struct FRigUnit_StringMiddle : FRigUnit_StringBase {
	struct FString Value; // 0x08(0x10)
	int32_t Start; // 0x18(0x04)
	int32_t Count; // 0x1c(0x04)
	struct FString Result; // 0x20(0x10)
};

// ScriptStruct ControlRig.RigUnit_StringFind
// Size: 0x30 (Inherited: 0x08)
struct FRigUnit_StringFind : FRigUnit_StringBase {
	struct FString Value; // 0x08(0x10)
	struct FString Search; // 0x18(0x10)
	bool Found; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	int32_t Index; // 0x2c(0x04)
};

// ScriptStruct ControlRig.RigUnit_StringSplit
// Size: 0x38 (Inherited: 0x08)
struct FRigUnit_StringSplit : FRigUnit_StringBase {
	struct FString Value; // 0x08(0x10)
	struct FString Separator; // 0x18(0x10)
	struct TArray<struct FString> Result; // 0x28(0x10)
};

// ScriptStruct ControlRig.RigUnit_StringJoin
// Size: 0x38 (Inherited: 0x08)
struct FRigUnit_StringJoin : FRigUnit_StringBase {
	struct TArray<struct FString> Values; // 0x08(0x10)
	struct FString Separator; // 0x18(0x10)
	struct FString Result; // 0x28(0x10)
};

// ScriptStruct ControlRig.RigUnit_StringPadInteger
// Size: 0x20 (Inherited: 0x08)
struct FRigUnit_StringPadInteger : FRigUnit_StringBase {
	int32_t Value; // 0x08(0x04)
	int32_t Digits; // 0x0c(0x04)
	struct FString Result; // 0x10(0x10)
};

// ScriptStruct ControlRig.RigDispatch_ToString
// Size: 0x18 (Inherited: 0x18)
struct FRigDispatch_ToString : FRigDispatchFactory {
};

// ScriptStruct ControlRig.RigDispatch_FromString
// Size: 0x18 (Inherited: 0x18)
struct FRigDispatch_FromString : FRigDispatchFactory {
};

// ScriptStruct ControlRig.RigUnit_FramesToSeconds
// Size: 0x10 (Inherited: 0x08)
struct FRigUnit_FramesToSeconds : FRigUnit_AnimBase {
	float Frames; // 0x08(0x04)
	float Seconds; // 0x0c(0x04)
};

// ScriptStruct ControlRig.RigUnit_SecondsToFrames
// Size: 0x10 (Inherited: 0x08)
struct FRigUnit_SecondsToFrames : FRigUnit_AnimBase {
	float Seconds; // 0x08(0x04)
	float Frames; // 0x0c(0x04)
};

// ScriptStruct ControlRig.RigUnit_Timeline
// Size: 0x18 (Inherited: 0x08)
struct FRigUnit_Timeline : FRigUnit_SimBase {
	float Speed; // 0x08(0x04)
	float Time; // 0x0c(0x04)
	float AccumulatedValue; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ControlRig.RigUnit_TimeLoop
// Size: 0x30 (Inherited: 0x08)
struct FRigUnit_TimeLoop : FRigUnit_SimBase {
	float Speed; // 0x08(0x04)
	float Duration; // 0x0c(0x04)
	bool Normalize; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float Absolute; // 0x14(0x04)
	float Relative; // 0x18(0x04)
	float FlipFlop; // 0x1c(0x04)
	bool Even; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float AccumulatedAbsolute; // 0x24(0x04)
	float AccumulatedRelative; // 0x28(0x04)
	int32_t NumIterations; // 0x2c(0x04)
};

// ScriptStruct ControlRig.RigUnit_TimeOffsetFloat
// Size: 0x48 (Inherited: 0x08)
struct FRigUnit_TimeOffsetFloat : FRigUnit_SimBase {
	float Value; // 0x08(0x04)
	float SecondsAgo; // 0x0c(0x04)
	int32_t BufferSize; // 0x10(0x04)
	float TimeRange; // 0x14(0x04)
	float Result; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<float> Buffer; // 0x20(0x10)
	struct TArray<float> DeltaTimes; // 0x30(0x10)
	int32_t LastInsertIndex; // 0x40(0x04)
	int32_t UpperBound; // 0x44(0x04)
};

// ScriptStruct ControlRig.RigUnit_TimeOffsetVector
// Size: 0x70 (Inherited: 0x08)
struct FRigUnit_TimeOffsetVector : FRigUnit_SimBase {
	struct FVector Value; // 0x08(0x18)
	float SecondsAgo; // 0x20(0x04)
	int32_t BufferSize; // 0x24(0x04)
	float TimeRange; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FVector Result; // 0x30(0x18)
	struct TArray<struct FVector> Buffer; // 0x48(0x10)
	struct TArray<float> DeltaTimes; // 0x58(0x10)
	int32_t LastInsertIndex; // 0x68(0x04)
	int32_t UpperBound; // 0x6c(0x04)
};

// ScriptStruct ControlRig.RigUnit_TimeOffsetTransform
// Size: 0x110 (Inherited: 0x08)
struct FRigUnit_TimeOffsetTransform : FRigUnit_SimBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Value; // 0x10(0x60)
	float SecondsAgo; // 0x70(0x04)
	int32_t BufferSize; // 0x74(0x04)
	float TimeRange; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct FTransform Result; // 0x80(0x60)
	struct TArray<struct FTransform> Buffer; // 0xe0(0x10)
	struct TArray<float> DeltaTimes; // 0xf0(0x10)
	int32_t LastInsertIndex; // 0x100(0x04)
	int32_t UpperBound; // 0x104(0x04)
	char pad_108[0x8]; // 0x108(0x08)
};

// ScriptStruct ControlRig.RigUnit_BinaryTransformOp
// Size: 0x130 (Inherited: 0x08)
struct FRigUnit_BinaryTransformOp : FRigUnit {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Argument0; // 0x10(0x60)
	struct FTransform Argument1; // 0x70(0x60)
	struct FTransform Result; // 0xd0(0x60)
};

// ScriptStruct ControlRig.RigUnit_MultiplyTransform
// Size: 0x130 (Inherited: 0x130)
struct FRigUnit_MultiplyTransform : FRigUnit_BinaryTransformOp {
};

// ScriptStruct ControlRig.RigUnit_GetRelativeTransform
// Size: 0x130 (Inherited: 0x130)
struct FRigUnit_GetRelativeTransform : FRigUnit_BinaryTransformOp {
};

// ScriptStruct ControlRig.ConstraintTarget
// Size: 0x70 (Inherited: 0x00)
struct FConstraintTarget {
	struct FTransform Transform; // 0x00(0x60)
	float Weight; // 0x60(0x04)
	bool bMaintainOffset; // 0x64(0x01)
	struct FTransformFilter Filter; // 0x65(0x09)
	char pad_6E[0x2]; // 0x6e(0x02)
};

// ScriptStruct ControlRig.RigUnit_TransformConstraint_WorkData
// Size: 0x60 (Inherited: 0x00)
struct FRigUnit_TransformConstraint_WorkData {
	struct TArray<struct FConstraintData> ConstraintData; // 0x00(0x10)
	struct TMap<int32_t, int32_t> ConstraintDataToTargets; // 0x10(0x50)
};

// ScriptStruct ControlRig.RigUnit_TransformConstraint
// Size: 0x120 (Inherited: 0x38)
struct FRigUnit_TransformConstraint : FRigUnit_HighlevelBaseMutable {
	struct FName bone; // 0x38(0x04)
	enum class ETransformSpaceMode BaseTransformSpace; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct FTransform BaseTransform; // 0x40(0x60)
	struct FName BaseBone; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct TArray<struct FConstraintTarget> Targets; // 0xa8(0x10)
	bool bUseInitialTransforms; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
	struct FRigUnit_TransformConstraint_WorkData WorkData; // 0xc0(0x60)
};

// ScriptStruct ControlRig.RigUnit_TransformConstraintPerItem
// Size: 0x130 (Inherited: 0x38)
struct FRigUnit_TransformConstraintPerItem : FRigUnit_HighlevelBaseMutable {
	struct FRigElementKey Item; // 0x38(0x08)
	enum class ETransformSpaceMode BaseTransformSpace; // 0x40(0x01)
	char pad_41[0xf]; // 0x41(0x0f)
	struct FTransform BaseTransform; // 0x50(0x60)
	struct FRigElementKey BaseItem; // 0xb0(0x08)
	struct TArray<struct FConstraintTarget> Targets; // 0xb8(0x10)
	bool bUseInitialTransforms; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
	struct FRigUnit_TransformConstraint_WorkData WorkData; // 0xd0(0x60)
};

// ScriptStruct ControlRig.ConstraintParent
// Size: 0x0c (Inherited: 0x00)
struct FConstraintParent {
	struct FRigElementKey Item; // 0x00(0x08)
	float Weight; // 0x08(0x04)
};

// ScriptStruct ControlRig.RigUnit_ParentConstraint_AdvancedSettings
// Size: 0x02 (Inherited: 0x00)
struct FRigUnit_ParentConstraint_AdvancedSettings {
	enum class EConstraintInterpType InterpolationType; // 0x00(0x01)
	enum class EEulerRotationOrder RotationOrderForFilter; // 0x01(0x01)
};

// ScriptStruct ControlRig.RigUnit_ParentConstraint
// Size: 0x90 (Inherited: 0x38)
struct FRigUnit_ParentConstraint : FRigUnit_HighlevelBaseMutable {
	struct FRigElementKey Child; // 0x38(0x08)
	bool bMaintainOffset; // 0x40(0x01)
	struct FTransformFilter Filter; // 0x41(0x09)
	char pad_4A[0x6]; // 0x4a(0x06)
	struct TArray<struct FConstraintParent> Parents; // 0x50(0x10)
	struct FRigUnit_ParentConstraint_AdvancedSettings AdvancedSettings; // 0x60(0x02)
	char pad_62[0x2]; // 0x62(0x02)
	float Weight; // 0x64(0x04)
	struct FCachedRigElement ChildCache; // 0x68(0x18)
	struct TArray<struct FCachedRigElement> ParentCaches; // 0x80(0x10)
};

// ScriptStruct ControlRig.RigUnit_PositionConstraint
// Size: 0x60 (Inherited: 0x38)
struct FRigUnit_PositionConstraint : FRigUnit_HighlevelBaseMutable {
	struct FRigElementKey Child; // 0x38(0x08)
	bool bMaintainOffset; // 0x40(0x01)
	struct FFilterOptionPerAxis Filter; // 0x41(0x03)
	char pad_44[0x4]; // 0x44(0x04)
	struct TArray<struct FConstraintParent> Parents; // 0x48(0x10)
	float Weight; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct ControlRig.RigUnit_PositionConstraintLocalSpaceOffset
// Size: 0x88 (Inherited: 0x38)
struct FRigUnit_PositionConstraintLocalSpaceOffset : FRigUnit_HighlevelBaseMutable {
	struct FRigElementKey Child; // 0x38(0x08)
	bool bMaintainOffset; // 0x40(0x01)
	struct FFilterOptionPerAxis Filter; // 0x41(0x03)
	char pad_44[0x4]; // 0x44(0x04)
	struct TArray<struct FConstraintParent> Parents; // 0x48(0x10)
	float Weight; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FCachedRigElement ChildCache; // 0x60(0x18)
	struct TArray<struct FCachedRigElement> ParentCaches; // 0x78(0x10)
};

// ScriptStruct ControlRig.RigUnit_RotationConstraint_AdvancedSettings
// Size: 0x02 (Inherited: 0x00)
struct FRigUnit_RotationConstraint_AdvancedSettings {
	enum class EConstraintInterpType InterpolationType; // 0x00(0x01)
	enum class EEulerRotationOrder RotationOrderForFilter; // 0x01(0x01)
};

// ScriptStruct ControlRig.RigUnit_RotationConstraint
// Size: 0x60 (Inherited: 0x38)
struct FRigUnit_RotationConstraint : FRigUnit_HighlevelBaseMutable {
	struct FRigElementKey Child; // 0x38(0x08)
	bool bMaintainOffset; // 0x40(0x01)
	struct FFilterOptionPerAxis Filter; // 0x41(0x03)
	char pad_44[0x4]; // 0x44(0x04)
	struct TArray<struct FConstraintParent> Parents; // 0x48(0x10)
	struct FRigUnit_RotationConstraint_AdvancedSettings AdvancedSettings; // 0x58(0x02)
	char pad_5A[0x2]; // 0x5a(0x02)
	float Weight; // 0x5c(0x04)
};

// ScriptStruct ControlRig.RigUnit_RotationConstraintLocalSpaceOffset
// Size: 0x88 (Inherited: 0x38)
struct FRigUnit_RotationConstraintLocalSpaceOffset : FRigUnit_HighlevelBaseMutable {
	struct FRigElementKey Child; // 0x38(0x08)
	bool bMaintainOffset; // 0x40(0x01)
	struct FFilterOptionPerAxis Filter; // 0x41(0x03)
	char pad_44[0x4]; // 0x44(0x04)
	struct TArray<struct FConstraintParent> Parents; // 0x48(0x10)
	struct FRigUnit_RotationConstraint_AdvancedSettings AdvancedSettings; // 0x58(0x02)
	char pad_5A[0x2]; // 0x5a(0x02)
	float Weight; // 0x5c(0x04)
	struct FCachedRigElement ChildCache; // 0x60(0x18)
	struct TArray<struct FCachedRigElement> ParentCaches; // 0x78(0x10)
};

// ScriptStruct ControlRig.RigUnit_ScaleConstraint
// Size: 0x60 (Inherited: 0x38)
struct FRigUnit_ScaleConstraint : FRigUnit_HighlevelBaseMutable {
	struct FRigElementKey Child; // 0x38(0x08)
	bool bMaintainOffset; // 0x40(0x01)
	struct FFilterOptionPerAxis Filter; // 0x41(0x03)
	char pad_44[0x4]; // 0x44(0x04)
	struct TArray<struct FConstraintParent> Parents; // 0x48(0x10)
	float Weight; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct ControlRig.RigUnit_ScaleConstraintLocalSpaceOffset
// Size: 0x88 (Inherited: 0x38)
struct FRigUnit_ScaleConstraintLocalSpaceOffset : FRigUnit_HighlevelBaseMutable {
	struct FRigElementKey Child; // 0x38(0x08)
	bool bMaintainOffset; // 0x40(0x01)
	struct FFilterOptionPerAxis Filter; // 0x41(0x03)
	char pad_44[0x4]; // 0x44(0x04)
	struct TArray<struct FConstraintParent> Parents; // 0x48(0x10)
	float Weight; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FCachedRigElement ChildCache; // 0x60(0x18)
	struct TArray<struct FCachedRigElement> ParentCaches; // 0x78(0x10)
};

// ScriptStruct ControlRig.RigUnit_TwistBones_WorkData
// Size: 0x30 (Inherited: 0x00)
struct FRigUnit_TwistBones_WorkData {
	struct TArray<struct FCachedRigElement> CachedItems; // 0x00(0x10)
	struct TArray<float> ItemRatios; // 0x10(0x10)
	struct TArray<struct FTransform> ItemTransforms; // 0x20(0x10)
};

// ScriptStruct ControlRig.RigUnit_TwistBones
// Size: 0xb0 (Inherited: 0x38)
struct FRigUnit_TwistBones : FRigUnit_HighlevelBaseMutable {
	struct FName StartBone; // 0x38(0x04)
	struct FName EndBone; // 0x3c(0x04)
	struct FVector TwistAxis; // 0x40(0x18)
	struct FVector PoleAxis; // 0x58(0x18)
	enum class EControlRigAnimEasingType TwistEaseType; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	float Weight; // 0x74(0x04)
	bool bPropagateToChildren; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct FRigUnit_TwistBones_WorkData WorkData; // 0x80(0x30)
};

// ScriptStruct ControlRig.RigUnit_TwistBonesPerItem
// Size: 0xb8 (Inherited: 0x38)
struct FRigUnit_TwistBonesPerItem : FRigUnit_HighlevelBaseMutable {
	struct FRigElementKeyCollection Items; // 0x38(0x10)
	struct FVector TwistAxis; // 0x48(0x18)
	struct FVector PoleAxis; // 0x60(0x18)
	enum class EControlRigAnimEasingType TwistEaseType; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	float Weight; // 0x7c(0x04)
	bool bPropagateToChildren; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct FRigUnit_TwistBones_WorkData WorkData; // 0x88(0x30)
};

// ScriptStruct ControlRig.RigUnit_TwoBoneIKFK
// Size: 0x340 (Inherited: 0x38)
struct FRigUnit_TwoBoneIKFK : FRigUnitMutable {
	struct FName StartJoint; // 0x38(0x04)
	struct FName EndJoint; // 0x3c(0x04)
	struct FVector PoleTarget; // 0x40(0x18)
	float Spin; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FTransform EndEffector; // 0x60(0x60)
	float IKBlend; // 0xc0(0x04)
	char pad_C4[0xc]; // 0xc4(0x0c)
	struct FTransform StartJointFKTransform; // 0xd0(0x60)
	struct FTransform MidJointFKTransform; // 0x130(0x60)
	struct FTransform EndJointFKTransform; // 0x190(0x60)
	float PreviousFKIKBlend; // 0x1f0(0x04)
	char pad_1F4[0xc]; // 0x1f4(0x0c)
	struct FTransform StartJointIKTransform; // 0x200(0x60)
	struct FTransform MidJointIKTransform; // 0x260(0x60)
	struct FTransform EndJointIKTransform; // 0x2c0(0x60)
	int32_t StartJointIndex; // 0x320(0x04)
	int32_t MidJointIndex; // 0x324(0x04)
	int32_t EndJointIndex; // 0x328(0x04)
	float UpperLimbLength; // 0x32c(0x04)
	float LowerLimbLength; // 0x330(0x04)
	char pad_334[0xc]; // 0x334(0x0c)
};

// ScriptStruct ControlRig.RigUnit_TwoBoneIKSimple_DebugSettings
// Size: 0x70 (Inherited: 0x00)
struct FRigUnit_TwoBoneIKSimple_DebugSettings {
	bool bEnabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Scale; // 0x04(0x04)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform WorldOffset; // 0x10(0x60)
};

// ScriptStruct ControlRig.RigUnit_TwoBoneIKSimple
// Size: 0x200 (Inherited: 0x38)
struct FRigUnit_TwoBoneIKSimple : FRigUnit_HighlevelBaseMutable {
	struct FName BoneA; // 0x38(0x04)
	struct FName BoneB; // 0x3c(0x04)
	struct FName EffectorBone; // 0x40(0x04)
	char pad_44[0xc]; // 0x44(0x0c)
	struct FTransform Effector; // 0x50(0x60)
	struct FVector PrimaryAxis; // 0xb0(0x18)
	struct FVector SecondaryAxis; // 0xc8(0x18)
	float SecondaryAxisWeight; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct FVector PoleVector; // 0xe8(0x18)
	enum class EControlRigVectorKind PoleVectorKind; // 0x100(0x01)
	char pad_101[0x3]; // 0x101(0x03)
	struct FName PoleVectorSpace; // 0x104(0x04)
	bool bEnableStretch; // 0x108(0x01)
	char pad_109[0x3]; // 0x109(0x03)
	float StretchStartRatio; // 0x10c(0x04)
	float StretchMaximumRatio; // 0x110(0x04)
	float Weight; // 0x114(0x04)
	float BoneALength; // 0x118(0x04)
	float BoneBLength; // 0x11c(0x04)
	bool bPropagateToChildren; // 0x120(0x01)
	char pad_121[0xf]; // 0x121(0x0f)
	struct FRigUnit_TwoBoneIKSimple_DebugSettings DebugSettings; // 0x130(0x70)
	struct FCachedRigElement CachedBoneAIndex; // 0x1a0(0x18)
	struct FCachedRigElement CachedBoneBIndex; // 0x1b8(0x18)
	struct FCachedRigElement CachedEffectorBoneIndex; // 0x1d0(0x18)
	struct FCachedRigElement CachedPoleVectorSpaceIndex; // 0x1e8(0x18)
};

// ScriptStruct ControlRig.RigUnit_TwoBoneIKSimplePerItem
// Size: 0x200 (Inherited: 0x38)
struct FRigUnit_TwoBoneIKSimplePerItem : FRigUnit_HighlevelBaseMutable {
	struct FRigElementKey ItemA; // 0x38(0x08)
	struct FRigElementKey ItemB; // 0x40(0x08)
	struct FRigElementKey EffectorItem; // 0x48(0x08)
	struct FTransform Effector; // 0x50(0x60)
	struct FVector PrimaryAxis; // 0xb0(0x18)
	struct FVector SecondaryAxis; // 0xc8(0x18)
	float SecondaryAxisWeight; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct FVector PoleVector; // 0xe8(0x18)
	enum class EControlRigVectorKind PoleVectorKind; // 0x100(0x01)
	char pad_101[0x3]; // 0x101(0x03)
	struct FRigElementKey PoleVectorSpace; // 0x104(0x08)
	bool bEnableStretch; // 0x10c(0x01)
	char pad_10D[0x3]; // 0x10d(0x03)
	float StretchStartRatio; // 0x110(0x04)
	float StretchMaximumRatio; // 0x114(0x04)
	float Weight; // 0x118(0x04)
	float ItemALength; // 0x11c(0x04)
	float ItemBLength; // 0x120(0x04)
	bool bPropagateToChildren; // 0x124(0x01)
	char pad_125[0xb]; // 0x125(0x0b)
	struct FRigUnit_TwoBoneIKSimple_DebugSettings DebugSettings; // 0x130(0x70)
	struct FCachedRigElement CachedItemAIndex; // 0x1a0(0x18)
	struct FCachedRigElement CachedItemBIndex; // 0x1b8(0x18)
	struct FCachedRigElement CachedEffectorItemIndex; // 0x1d0(0x18)
	struct FCachedRigElement CachedPoleVectorSpaceIndex; // 0x1e8(0x18)
};

// ScriptStruct ControlRig.RigUnit_TwoBoneIKSimpleVectors
// Size: 0x80 (Inherited: 0x08)
struct FRigUnit_TwoBoneIKSimpleVectors : FRigUnit_HighlevelBase {
	struct FVector Root; // 0x08(0x18)
	struct FVector PoleVector; // 0x20(0x18)
	struct FVector Effector; // 0x38(0x18)
	bool bEnableStretch; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float StretchStartRatio; // 0x54(0x04)
	float StretchMaximumRatio; // 0x58(0x04)
	float BoneALength; // 0x5c(0x04)
	float BoneBLength; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FVector Elbow; // 0x68(0x18)
};

// ScriptStruct ControlRig.RigUnit_TwoBoneIKSimpleTransforms
// Size: 0x1a0 (Inherited: 0x08)
struct FRigUnit_TwoBoneIKSimpleTransforms : FRigUnit_HighlevelBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Root; // 0x10(0x60)
	struct FVector PoleVector; // 0x70(0x18)
	char pad_88[0x8]; // 0x88(0x08)
	struct FTransform Effector; // 0x90(0x60)
	struct FVector PrimaryAxis; // 0xf0(0x18)
	struct FVector SecondaryAxis; // 0x108(0x18)
	float SecondaryAxisWeight; // 0x120(0x04)
	bool bEnableStretch; // 0x124(0x01)
	char pad_125[0x3]; // 0x125(0x03)
	float StretchStartRatio; // 0x128(0x04)
	float StretchMaximumRatio; // 0x12c(0x04)
	float BoneALength; // 0x130(0x04)
	float BoneBLength; // 0x134(0x04)
	char pad_138[0x8]; // 0x138(0x08)
	struct FTransform Elbow; // 0x140(0x60)
};

// ScriptStruct ControlRig.RigUnit_UnsetCurveValue
// Size: 0x58 (Inherited: 0x38)
struct FRigUnit_UnsetCurveValue : FRigUnitMutable {
	struct FName Curve; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FCachedRigElement CachedCurveIndex; // 0x40(0x18)
};

// ScriptStruct ControlRig.RigUnit_UserDefinedEvent
// Size: 0x40 (Inherited: 0x08)
struct FRigUnit_UserDefinedEvent : FRigUnit {
	struct FControlRigExecuteContext ExecuteContext; // 0x08(0x30)
	struct FName EventName; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct ControlRig.RigUnit_BinaryVectorOp
// Size: 0x50 (Inherited: 0x08)
struct FRigUnit_BinaryVectorOp : FRigUnit {
	struct FVector Argument0; // 0x08(0x18)
	struct FVector Argument1; // 0x20(0x18)
	struct FVector Result; // 0x38(0x18)
};

// ScriptStruct ControlRig.RigUnit_Multiply_VectorVector
// Size: 0x50 (Inherited: 0x50)
struct FRigUnit_Multiply_VectorVector : FRigUnit_BinaryVectorOp {
};

// ScriptStruct ControlRig.RigUnit_Add_VectorVector
// Size: 0x50 (Inherited: 0x50)
struct FRigUnit_Add_VectorVector : FRigUnit_BinaryVectorOp {
};

// ScriptStruct ControlRig.RigUnit_Subtract_VectorVector
// Size: 0x50 (Inherited: 0x50)
struct FRigUnit_Subtract_VectorVector : FRigUnit_BinaryVectorOp {
};

// ScriptStruct ControlRig.RigUnit_Divide_VectorVector
// Size: 0x50 (Inherited: 0x50)
struct FRigUnit_Divide_VectorVector : FRigUnit_BinaryVectorOp {
};

// ScriptStruct ControlRig.RigUnit_Distance_VectorVector
// Size: 0x40 (Inherited: 0x08)
struct FRigUnit_Distance_VectorVector : FRigUnit {
	struct FVector Argument0; // 0x08(0x18)
	struct FVector Argument1; // 0x20(0x18)
	float Result; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct ControlRig.RigUnit_VerletIntegrateVector
// Size: 0xd8 (Inherited: 0x08)
struct FRigUnit_VerletIntegrateVector : FRigUnit_SimBase {
	struct FVector Target; // 0x08(0x18)
	float Strength; // 0x20(0x04)
	float Damp; // 0x24(0x04)
	float Blend; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FVector Force; // 0x30(0x18)
	struct FVector Position; // 0x48(0x18)
	struct FVector Velocity; // 0x60(0x18)
	struct FVector Acceleration; // 0x78(0x18)
	struct FCRSimPoint Point; // 0x90(0x40)
	bool bInitialized; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
};

// ScriptStruct ControlRig.RigUnit_VisualDebugVector
// Size: 0x40 (Inherited: 0x08)
struct FRigUnit_VisualDebugVector : FRigUnit_DebugBase {
	struct FVector Value; // 0x08(0x18)
	bool bEnabled; // 0x20(0x01)
	enum class ERigUnitVisualDebugPointMode Mode; // 0x21(0x01)
	char pad_22[0x2]; // 0x22(0x02)
	struct FLinearColor Color; // 0x24(0x10)
	float Thickness; // 0x34(0x04)
	float Scale; // 0x38(0x04)
	struct FName BoneSpace; // 0x3c(0x04)
};

// ScriptStruct ControlRig.RigUnit_VisualDebugVectorItemSpace
// Size: 0x48 (Inherited: 0x08)
struct FRigUnit_VisualDebugVectorItemSpace : FRigUnit_DebugBase {
	struct FVector Value; // 0x08(0x18)
	bool bEnabled; // 0x20(0x01)
	enum class ERigUnitVisualDebugPointMode Mode; // 0x21(0x01)
	char pad_22[0x2]; // 0x22(0x02)
	struct FLinearColor Color; // 0x24(0x10)
	float Thickness; // 0x34(0x04)
	float Scale; // 0x38(0x04)
	struct FRigElementKey Space; // 0x3c(0x08)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct ControlRig.RigUnit_VisualDebugQuat
// Size: 0x40 (Inherited: 0x08)
struct FRigUnit_VisualDebugQuat : FRigUnit_DebugBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat Value; // 0x10(0x20)
	bool bEnabled; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float Thickness; // 0x34(0x04)
	float Scale; // 0x38(0x04)
	struct FName BoneSpace; // 0x3c(0x04)
};

// ScriptStruct ControlRig.RigUnit_VisualDebugQuatItemSpace
// Size: 0x50 (Inherited: 0x08)
struct FRigUnit_VisualDebugQuatItemSpace : FRigUnit_DebugBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat Value; // 0x10(0x20)
	bool bEnabled; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float Thickness; // 0x34(0x04)
	float Scale; // 0x38(0x04)
	struct FRigElementKey Space; // 0x3c(0x08)
	char pad_44[0xc]; // 0x44(0x0c)
};

// ScriptStruct ControlRig.RigUnit_VisualDebugTransform
// Size: 0x80 (Inherited: 0x08)
struct FRigUnit_VisualDebugTransform : FRigUnit_DebugBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Value; // 0x10(0x60)
	bool bEnabled; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	float Thickness; // 0x74(0x04)
	float Scale; // 0x78(0x04)
	struct FName BoneSpace; // 0x7c(0x04)
};

// ScriptStruct ControlRig.RigUnit_VisualDebugTransformItemSpace
// Size: 0x90 (Inherited: 0x08)
struct FRigUnit_VisualDebugTransformItemSpace : FRigUnit_DebugBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Value; // 0x10(0x60)
	bool bEnabled; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	float Thickness; // 0x74(0x04)
	float Scale; // 0x78(0x04)
	struct FRigElementKey Space; // 0x7c(0x08)
	char pad_84[0xc]; // 0x84(0x0c)
};

// ScriptStruct ControlRig.RigUnit_SphereTraceWorld
// Size: 0x78 (Inherited: 0x08)
struct FRigUnit_SphereTraceWorld : FRigUnit {
	struct FVector Start; // 0x08(0x18)
	struct FVector End; // 0x20(0x18)
	enum class ECollisionChannel Channel; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float Radius; // 0x3c(0x04)
	bool bHit; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct FVector HitLocation; // 0x48(0x18)
	struct FVector HitNormal; // 0x60(0x18)
};

// ScriptStruct ControlRig.RigUnit_SphereTraceByTraceChannel
// Size: 0x78 (Inherited: 0x08)
struct FRigUnit_SphereTraceByTraceChannel : FRigUnit {
	struct FVector Start; // 0x08(0x18)
	struct FVector End; // 0x20(0x18)
	enum class ETraceTypeQuery TraceChannel; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float Radius; // 0x3c(0x04)
	bool bHit; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct FVector HitLocation; // 0x48(0x18)
	struct FVector HitNormal; // 0x60(0x18)
};

// ScriptStruct ControlRig.RigUnit_SphereTraceByObjectTypes
// Size: 0x80 (Inherited: 0x08)
struct FRigUnit_SphereTraceByObjectTypes : FRigUnit {
	struct FVector Start; // 0x08(0x18)
	struct FVector End; // 0x20(0x18)
	struct TArray<enum class EObjectTypeQuery> ObjectTypes; // 0x38(0x10)
	float Radius; // 0x48(0x04)
	bool bHit; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	struct FVector HitLocation; // 0x50(0x18)
	struct FVector HitNormal; // 0x68(0x18)
};

// ScriptStruct ControlRig.RigUnit_ToWorldSpace_Transform
// Size: 0xd0 (Inherited: 0x08)
struct FRigUnit_ToWorldSpace_Transform : FRigUnit {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Value; // 0x10(0x60)
	struct FTransform World; // 0x70(0x60)
};

// ScriptStruct ControlRig.RigUnit_ToRigSpace_Transform
// Size: 0xd0 (Inherited: 0x08)
struct FRigUnit_ToRigSpace_Transform : FRigUnit {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Value; // 0x10(0x60)
	struct FTransform Global; // 0x70(0x60)
};

// ScriptStruct ControlRig.RigUnit_ToWorldSpace_Location
// Size: 0x38 (Inherited: 0x08)
struct FRigUnit_ToWorldSpace_Location : FRigUnit {
	struct FVector Value; // 0x08(0x18)
	struct FVector World; // 0x20(0x18)
};

// ScriptStruct ControlRig.RigUnit_ToRigSpace_Location
// Size: 0x38 (Inherited: 0x08)
struct FRigUnit_ToRigSpace_Location : FRigUnit {
	struct FVector Value; // 0x08(0x18)
	struct FVector Global; // 0x20(0x18)
};

// ScriptStruct ControlRig.RigUnit_ToWorldSpace_Rotation
// Size: 0x50 (Inherited: 0x08)
struct FRigUnit_ToWorldSpace_Rotation : FRigUnit {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat Value; // 0x10(0x20)
	struct FQuat World; // 0x30(0x20)
};

// ScriptStruct ControlRig.RigUnit_ToRigSpace_Rotation
// Size: 0x50 (Inherited: 0x08)
struct FRigUnit_ToRigSpace_Rotation : FRigUnit {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat Value; // 0x10(0x20)
	struct FQuat Global; // 0x30(0x20)
};

// ScriptStruct ControlRig.StructReference
// Size: 0x08 (Inherited: 0x00)
struct FStructReference {
	char pad_0[0x8]; // 0x00(0x08)
};

