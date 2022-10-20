// Class NavCorridor.NavCorridorTestingComponent
// Size: 0x6a0 (Inherited: 0x580)
struct UNavCorridorTestingComponent : UDebugDrawComponent {
	struct FNavAgentProperties NavAgentProps; // 0x580(0x30)
	struct UNavigationQueryFilter* FilterClass; // 0x5b0(0x08)
	bool bFindCorridorToGoal; // 0x5b8(0x01)
	bool bFollowPathOnGoalCorridor; // 0x5b9(0x01)
	char pad_5BA[0x2]; // 0x5ba(0x02)
	float FollowLookAheadDistance; // 0x5bc(0x04)
	struct AActor* GoalActor; // 0x5c0(0x08)
	struct ANavigationData* NavData; // 0x5c8(0x08)
	struct FNavCorridorParams CorridorParams; // 0x5d0(0x18)
	bool bUpdateParametersFromWidth; // 0x5e8(0x01)
	char pad_5E9[0x3]; // 0x5e9(0x03)
	float PathOffset; // 0x5ec(0x04)
	float PathfindingTimeUs; // 0x5f0(0x04)
	float CorridorTimeUs; // 0x5f4(0x04)
	char pad_5F8[0xa8]; // 0x5f8(0xa8)
};

// Class NavCorridor.NavCorridorTestingActor
// Size: 0x290 (Inherited: 0x288)
struct ANavCorridorTestingActor : AActor {
	struct UNavCorridorTestingComponent* DebugComp; // 0x288(0x08)
};

