// Enum ControlRigSpline.ESplineType
enum class ESplineType : uint8 {
	BSpline = 0,
	Hermite = 1,
	Max = 2
};

// ScriptStruct ControlRigSpline.ControlRigSplineImpl
// Size: 0x58 (Inherited: 0x00)
struct FControlRigSplineImpl {
	char pad_0[0x58]; // 0x00(0x58)
};

// ScriptStruct ControlRigSpline.ControlRigSpline
// Size: 0x18 (Inherited: 0x00)
struct FControlRigSpline {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct ControlRigSpline.RigUnit_ControlRigSplineBase
// Size: 0x08 (Inherited: 0x08)
struct FRigUnit_ControlRigSplineBase : FRigUnit {
};

// ScriptStruct ControlRigSpline.RigUnit_ControlRigSplineFromPoints
// Size: 0x40 (Inherited: 0x08)
struct FRigUnit_ControlRigSplineFromPoints : FRigUnit_ControlRigSplineBase {
	struct TArray<struct FVector> Points; // 0x08(0x10)
	enum class ESplineType SplineMode; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	int32_t SamplesPerSegment; // 0x1c(0x04)
	float Compression; // 0x20(0x04)
	float Stretch; // 0x24(0x04)
	struct FControlRigSpline Spline; // 0x28(0x18)
};

// ScriptStruct ControlRigSpline.RigUnit_SetSplinePoints
// Size: 0x60 (Inherited: 0x38)
struct FRigUnit_SetSplinePoints : FRigUnitMutable {
	struct TArray<struct FVector> Points; // 0x38(0x10)
	struct FControlRigSpline Spline; // 0x48(0x18)
};

// ScriptStruct ControlRigSpline.RigUnit_PositionFromControlRigSpline
// Size: 0x40 (Inherited: 0x08)
struct FRigUnit_PositionFromControlRigSpline : FRigUnit_ControlRigSplineBase {
	struct FControlRigSpline Spline; // 0x08(0x18)
	float U; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FVector Position; // 0x28(0x18)
};

// ScriptStruct ControlRigSpline.RigUnit_TransformFromControlRigSpline
// Size: 0xa0 (Inherited: 0x08)
struct FRigUnit_TransformFromControlRigSpline : FRigUnit_ControlRigSplineBase {
	struct FControlRigSpline Spline; // 0x08(0x18)
	struct FVector UpVector; // 0x20(0x18)
	float Roll; // 0x38(0x04)
	float U; // 0x3c(0x04)
	struct FTransform Transform; // 0x40(0x60)
};

// ScriptStruct ControlRigSpline.RigUnit_TangentFromControlRigSpline
// Size: 0x40 (Inherited: 0x08)
struct FRigUnit_TangentFromControlRigSpline : FRigUnit_ControlRigSplineBase {
	struct FControlRigSpline Spline; // 0x08(0x18)
	float U; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FVector Tangent; // 0x28(0x18)
};

// ScriptStruct ControlRigSpline.RigUnit_DrawControlRigSpline
// Size: 0x68 (Inherited: 0x38)
struct FRigUnit_DrawControlRigSpline : FRigUnitMutable {
	struct FControlRigSpline Spline; // 0x38(0x18)
	struct FLinearColor Color; // 0x50(0x10)
	float Thickness; // 0x60(0x04)
	int32_t Detail; // 0x64(0x04)
};

// ScriptStruct ControlRigSpline.RigUnit_GetLengthControlRigSpline
// Size: 0x28 (Inherited: 0x08)
struct FRigUnit_GetLengthControlRigSpline : FRigUnit {
	struct FControlRigSpline Spline; // 0x08(0x18)
	float Length; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct ControlRigSpline.RigUnit_FitChainToSplineCurve
// Size: 0x210 (Inherited: 0x38)
struct FRigUnit_FitChainToSplineCurve : FRigUnit_HighlevelBaseMutable {
	struct FRigElementKeyCollection Items; // 0x38(0x10)
	struct FControlRigSpline Spline; // 0x48(0x18)
	enum class EControlRigCurveAlignment Alignment; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	float Minimum; // 0x64(0x04)
	float Maximum; // 0x68(0x04)
	int32_t SamplingPrecision; // 0x6c(0x04)
	struct FVector PrimaryAxis; // 0x70(0x18)
	struct FVector SecondaryAxis; // 0x88(0x18)
	struct FVector PoleVectorPosition; // 0xa0(0x18)
	struct TArray<struct FRigUnit_FitChainToCurve_Rotation> Rotations; // 0xb8(0x10)
	enum class EControlRigAnimEasingType RotationEaseType; // 0xc8(0x01)
	char pad_C9[0x3]; // 0xc9(0x03)
	float Weight; // 0xcc(0x04)
	bool bPropagateToChildren; // 0xd0(0x01)
	char pad_D1[0xf]; // 0xd1(0x0f)
	struct FRigUnit_FitChainToCurve_DebugSettings DebugSettings; // 0xe0(0x90)
	struct FRigUnit_FitChainToCurve_WorkData WorkData; // 0x170(0x98)
	char pad_208[0x8]; // 0x208(0x08)
};

// ScriptStruct ControlRigSpline.RigUnit_FitChainToSplineCurveItemArray
// Size: 0x210 (Inherited: 0x38)
struct FRigUnit_FitChainToSplineCurveItemArray : FRigUnit_HighlevelBaseMutable {
	struct TArray<struct FRigElementKey> Items; // 0x38(0x10)
	struct FControlRigSpline Spline; // 0x48(0x18)
	enum class EControlRigCurveAlignment Alignment; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	float Minimum; // 0x64(0x04)
	float Maximum; // 0x68(0x04)
	int32_t SamplingPrecision; // 0x6c(0x04)
	struct FVector PrimaryAxis; // 0x70(0x18)
	struct FVector SecondaryAxis; // 0x88(0x18)
	struct FVector PoleVectorPosition; // 0xa0(0x18)
	struct TArray<struct FRigUnit_FitChainToCurve_Rotation> Rotations; // 0xb8(0x10)
	enum class EControlRigAnimEasingType RotationEaseType; // 0xc8(0x01)
	char pad_C9[0x3]; // 0xc9(0x03)
	float Weight; // 0xcc(0x04)
	bool bPropagateToChildren; // 0xd0(0x01)
	char pad_D1[0xf]; // 0xd1(0x0f)
	struct FRigUnit_FitChainToCurve_DebugSettings DebugSettings; // 0xe0(0x90)
	struct FRigUnit_FitChainToCurve_WorkData WorkData; // 0x170(0x98)
	char pad_208[0x8]; // 0x208(0x08)
};

// ScriptStruct ControlRigSpline.RigUnit_FitSplineCurveToChain
// Size: 0x60 (Inherited: 0x38)
struct FRigUnit_FitSplineCurveToChain : FRigUnit_HighlevelBaseMutable {
	struct FRigElementKeyCollection Items; // 0x38(0x10)
	struct FControlRigSpline Spline; // 0x48(0x18)
};

// ScriptStruct ControlRigSpline.RigUnit_FitSplineCurveToChainItemArray
// Size: 0x60 (Inherited: 0x38)
struct FRigUnit_FitSplineCurveToChainItemArray : FRigUnit_HighlevelBaseMutable {
	struct TArray<struct FRigElementKey> Items; // 0x38(0x10)
	struct FControlRigSpline Spline; // 0x48(0x18)
};

// ScriptStruct ControlRigSpline.RigUnit_ClosestParameterFromControlRigSpline
// Size: 0x40 (Inherited: 0x08)
struct FRigUnit_ClosestParameterFromControlRigSpline : FRigUnit_ControlRigSplineBase {
	struct FControlRigSpline Spline; // 0x08(0x18)
	struct FVector Position; // 0x20(0x18)
	float U; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct ControlRigSpline.RigUnit_ParameterAtPercentage
// Size: 0x28 (Inherited: 0x08)
struct FRigUnit_ParameterAtPercentage : FRigUnit_ControlRigSplineBase {
	struct FControlRigSpline Spline; // 0x08(0x18)
	float Percentage; // 0x20(0x04)
	float U; // 0x24(0x04)
};

