// Enum ChaosSolverEngine.EClusterConnectionTypeEnum
enum class EClusterConnectionTypeEnum : uint8 {
	Chaos_PointImplicit = 0,
	Chaos_DelaunayTriangulation = 1,
	Chaos_MinimalSpanningSubsetDelaunayTriangulation = 2,
	Chaos_PointImplicitAugmentedWithMinimalDelaunay = 3,
	Chaos_BoundsOverlapFilteredDelaunayTriangulation = 4,
	Chaos_None = 5,
	Chaos_EClsuterCreationParameters_Max = 6,
	Chaos_MAX = 7
};

// ScriptStruct ChaosSolverEngine.ChaosPhysicsCollisionInfo
// Size: 0xc0 (Inherited: 0x00)
struct FChaosPhysicsCollisionInfo {
	struct UPrimitiveComponent* Component; // 0x00(0x08)
	struct UPrimitiveComponent* OtherComponent; // 0x08(0x08)
	struct FVector Location; // 0x10(0x18)
	struct FVector Normal; // 0x28(0x18)
	struct FVector AccumulatedImpulse; // 0x40(0x18)
	struct FVector Velocity; // 0x58(0x18)
	struct FVector OtherVelocity; // 0x70(0x18)
	struct FVector AngularVelocity; // 0x88(0x18)
	struct FVector OtherAngularVelocity; // 0xa0(0x18)
	float Mass; // 0xb8(0x04)
	float OtherMass; // 0xbc(0x04)
};

// ScriptStruct ChaosSolverEngine.ChaosBreakEvent
// Size: 0x58 (Inherited: 0x00)
struct FChaosBreakEvent {
	struct UPrimitiveComponent* Component; // 0x00(0x08)
	struct FVector Location; // 0x08(0x18)
	struct FVector Velocity; // 0x20(0x18)
	struct FVector AngularVelocity; // 0x38(0x18)
	float Mass; // 0x50(0x04)
	int32_t Index; // 0x54(0x04)
};

// ScriptStruct ChaosSolverEngine.ChaosCrumblingEvent
// Size: 0xc0 (Inherited: 0x00)
struct FChaosCrumblingEvent {
	struct UPrimitiveComponent* Component; // 0x00(0x08)
	struct FVector Location; // 0x08(0x18)
	struct FQuat Orientation; // 0x20(0x20)
	struct FVector LinearVelocity; // 0x40(0x18)
	struct FVector AngularVelocity; // 0x58(0x18)
	float Mass; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct FBox LocalBounds; // 0x78(0x38)
	struct TArray<int32_t> Children; // 0xb0(0x10)
};

// ScriptStruct ChaosSolverEngine.ChaosRemovalEvent
// Size: 0x28 (Inherited: 0x00)
struct FChaosRemovalEvent {
	struct UPrimitiveComponent* Component; // 0x00(0x08)
	struct FVector Location; // 0x08(0x18)
	float Mass; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct ChaosSolverEngine.BreakEventCallbackWrapper
// Size: 0x40 (Inherited: 0x00)
struct FBreakEventCallbackWrapper {
	char pad_0[0x40]; // 0x00(0x40)
};

// ScriptStruct ChaosSolverEngine.RemovalEventCallbackWrapper
// Size: 0x40 (Inherited: 0x00)
struct FRemovalEventCallbackWrapper {
	char pad_0[0x40]; // 0x00(0x40)
};

// ScriptStruct ChaosSolverEngine.CrumblingEventCallbackWrapper
// Size: 0x40 (Inherited: 0x00)
struct FCrumblingEventCallbackWrapper {
	char pad_0[0x40]; // 0x00(0x40)
};

// ScriptStruct ChaosSolverEngine.ChaosHandlerSet
// Size: 0x58 (Inherited: 0x00)
struct FChaosHandlerSet {
	char pad_0[0x8]; // 0x00(0x08)
	struct TSet<struct UObject*> ChaosHandlers; // 0x08(0x50)
};

// ScriptStruct ChaosSolverEngine.ChaosDebugSubstepControl
// Size: 0x03 (Inherited: 0x00)
struct FChaosDebugSubstepControl {
	bool bPause; // 0x00(0x01)
	bool bSubstep; // 0x01(0x01)
	bool bStep; // 0x02(0x01)
};

