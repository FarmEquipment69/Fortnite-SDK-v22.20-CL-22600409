// Class CaretakerRuntime.FortAIAnimInstance_Caretaker
// Size: 0x5d0 (Inherited: 0x580)
struct UFortAIAnimInstance_Caretaker : UFortAIAnimInstance {
	bool bIsMoving; // 0x578(0x01)
	float WalkPlayRate; // 0x57c(0x04)
	float AimOffsetCurve; // 0x580(0x04)
	bool bFootPhase_StopLeftPlant; // 0x584(0x01)
	bool bFootPhase_StopLeftPass; // 0x585(0x01)
	bool bFootPhase_StopRightPlant; // 0x586(0x01)
	bool bFootPhase_StopRightPass; // 0x587(0x01)
	float BreathingCurve; // 0x588(0x04)
	float MovingTreshold; // 0x58c(0x04)
	struct FName CurveName_AimOffsetCurve; // 0x590(0x04)
	struct FName CurveName_FootPhase; // 0x594(0x04)
	struct FName CurveName_BreathingCurve; // 0x598(0x04)
	struct FName SocketName_FX_Chest; // 0x59c(0x04)
	struct FName ParamName_ChestSocketLocation; // 0x5a0(0x04)
	struct FName ParamName_ChestSocketVector; // 0x5a4(0x04)
	float FirstFootPhaseMin; // 0x5a8(0x04)
	float SecondFootPhaseMin; // 0x5ac(0x04)
	float ThirdFootPhaseMin; // 0x5b0(0x04)
	float FourthFootPhaseMin; // 0x5b4(0x04)
	float FootPhaseMax; // 0x5b8(0x04)
	struct UFortAnimWorldStriderComponent* WorldStriderComponent; // 0x5c0(0x08)
	char pad_5C9[0x7]; // 0x5c9(0x07)

	void SetDelayedMaterialParameters(); // Function CaretakerRuntime.FortAIAnimInstance_Caretaker.SetDelayedMaterialParameters // (Final|Native|Protected|BlueprintCallable) // @ game+0x66d6f5c
	struct UFortAnimWorldStriderComponent* GetWorldStriderComponent(); // Function CaretakerRuntime.FortAIAnimInstance_Caretaker.GetWorldStriderComponent // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x66d6b08
	float GetWalkSpeedWarpingValue(); // Function CaretakerRuntime.FortAIAnimInstance_Caretaker.GetWalkSpeedWarpingValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x66d6adc
	float GetWalkPlayRateValue(); // Function CaretakerRuntime.FortAIAnimInstance_Caretaker.GetWalkPlayRateValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x66d6abc
	float GetStartAnimPosition(); // Function CaretakerRuntime.FortAIAnimInstance_Caretaker.GetStartAnimPosition // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x66d6a90
};

// Class CaretakerRuntime.FortAITask_CaretakerMove
// Size: 0x190 (Inherited: 0x190)
struct UFortAITask_CaretakerMove : UFortAbilityTask_MoveAI {
};

// Class CaretakerRuntime.FortAthenaCaretakerAIController
// Size: 0x5b0 (Inherited: 0x5a8)
struct AFortAthenaCaretakerAIController : AAthenaAIController {
	char pad_5A8[0x8]; // 0x5a8(0x08)

	void OnMovementModeChanged(struct ACharacter* CharacterOwner, enum class EMovementMode PreviousMovementMode, char PreviousCustomMode); // Function CaretakerRuntime.FortAthenaCaretakerAIController.OnMovementModeChanged // (Final|Native|Public) // @ game+0x66d6b30
	void DebugUpdate(float UpdateInterval); // Function CaretakerRuntime.FortAthenaCaretakerAIController.DebugUpdate // (Final|Native|Public|BlueprintCallable) // @ game+0x64a21bc
};

// Class CaretakerRuntime.FortBTTask_CaretakerMoveTo
// Size: 0xe0 (Inherited: 0xb0)
struct UFortBTTask_CaretakerMoveTo : UBTTask_MoveTo {
	struct FBlackboardKeySelector FocalPointWhileMoving; // 0xb0(0x28)
	enum class EPathObstacleAction PathObstacleAction; // 0xd8(0x01)
	char pad_D9[0x3]; // 0xd9(0x03)
	char bEnableSlowdownAtGoal : 1; // 0xdc(0x01)
	char bMoveDirectlyTowards : 1; // 0xdc(0x01)
	char bStopAtGoal : 1; // 0xdc(0x01)
	char bFinishMoveOnOverlap : 1; // 0xdc(0x01)
	char pad_DC_4 : 4; // 0xdc(0x01)
	char pad_DD[0x3]; // 0xdd(0x03)
};

// Class CaretakerRuntime.FortNavigationFilter_Caretaker
// Size: 0x60 (Inherited: 0x48)
struct UFortNavigationFilter_Caretaker : UNavigationQueryFilter {
	float EndPointAcceptableRadius; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct UNavigationQueryFilter* EndPointFilterClass; // 0x50(0x08)
	char bEndPointReachTestIncludesAgentRadius : 1; // 0x58(0x01)
	char bEndPointReachTestIncludesGoalRadius : 1; // 0x58(0x01)
	char pad_58_2 : 6; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
};

