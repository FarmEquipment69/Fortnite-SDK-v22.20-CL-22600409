// ScriptStruct SOMRuntime.ScriptedObjectMovement_AStarGraphWrapper
// Size: 0x01 (Inherited: 0x00)
struct FScriptedObjectMovement_AStarGraphWrapper {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct SOMRuntime.ScriptedObjectMovement_DynamicPathContext
// Size: 0x38 (Inherited: 0x00)
struct FScriptedObjectMovement_DynamicPathContext {
	struct UFortScriptedObjectMovement_Slot* SourceSlot; // 0x00(0x08)
	struct UFortScriptedObjectMovement_Slot* DestinationSlot; // 0x08(0x08)
	struct TScriptInterface<IFortScriptedObjectMovement_GridProviderInterface> GridProvider; // 0x10(0x10)
	char pad_20[0x18]; // 0x20(0x18)
};

// ScriptStruct SOMRuntime.ScriptedObjectMovement_Grid
// Size: 0xc8 (Inherited: 0x00)
struct FScriptedObjectMovement_Grid {
	char pad_0[0x50]; // 0x00(0x50)
	struct FVector CellSize; // 0x50(0x18)
	char pad_68[0x60]; // 0x68(0x60)
};

// ScriptStruct SOMRuntime.FortScriptedObjectMovementPhaseData
// Size: 0x10 (Inherited: 0x00)
struct FFortScriptedObjectMovementPhaseData {
	struct TArray<struct AFortScriptedObjectMovement_Structure*> Structures; // 0x00(0x10)
};

// ScriptStruct SOMRuntime.ScriptedObjectMovement_StaticPathStepData
// Size: 0xf0 (Inherited: 0x00)
struct FScriptedObjectMovement_StaticPathStepData {
	struct FTransform StartWorldTransform; // 0x00(0x60)
	struct FTransform EndWorldTransform; // 0x60(0x60)
	int32_t MasterPathStartSplinePoint; // 0xc0(0x04)
	int32_t SubSplineStartPoint; // 0xc4(0x04)
	float MoveAtServerTimeSecs; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct AFortScriptedObjectMovement_MovableObjectBase* PathTraveler; // 0xd0(0x08)
	char pad_D8[0x8]; // 0xd8(0x08)
	struct FGameplayTag MoveStyleTag; // 0xe0(0x04)
	bool bTeleport; // 0xe4(0x01)
	bool bIsSkipStep; // 0xe5(0x01)
	char pad_E6[0xa]; // 0xe6(0x0a)
};

// ScriptStruct SOMRuntime.StaticPathCalendarSplinePointGroup
// Size: 0x30 (Inherited: 0x00)
struct FStaticPathCalendarSplinePointGroup {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct SOMRuntime.ScriptedObjectMovement_StaticPathSplineInputKeyData
// Size: 0x28 (Inherited: 0x00)
struct FScriptedObjectMovement_StaticPathSplineInputKeyData {
	bool bLockGeneratedData; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString CalendarEvent; // 0x08(0x10)
	struct FString PauseCalendarEvent; // 0x18(0x10)
};

// ScriptStruct SOMRuntime.ScriptedObjectMovement_StepMetaData
// Size: 0x01 (Inherited: 0x00)
struct FScriptedObjectMovement_StepMetaData {
	bool bSkipStep; // 0x00(0x01)
};

// ScriptStruct SOMRuntime.ScriptedObjectMovement_StaticPathTravelerData
// Size: 0xc0 (Inherited: 0x00)
struct FScriptedObjectMovement_StaticPathTravelerData {
	struct TArray<struct USplineComponent*> GeneratedSplinesArray; // 0x00(0x10)
	struct TArray<struct FScriptedObjectMovement_StepMetaData> StepMetaData; // 0x10(0x10)
	struct USplineComponent* EnterSpline; // 0x20(0x08)
	struct USplineComponent* ExitSpline; // 0x28(0x08)
	struct AFortScriptedObjectMovement_MovableObjectBase* PathTraveler; // 0x30(0x08)
	int32_t TravelOrder; // 0x38(0x04)
	float LateralOffset; // 0x3c(0x04)
	bool bLocked; // 0x40(0x01)
	bool bLockEnterSpline; // 0x41(0x01)
	bool bLockExitSpline; // 0x42(0x01)
	char pad_43[0x5]; // 0x43(0x05)
	struct FVector TravelerBounds; // 0x48(0x18)
	char pad_60[0x60]; // 0x60(0x60)
};

// ScriptStruct SOMRuntime.ScriptedObjectMovementCalendarEventData
// Size: 0x28 (Inherited: 0x00)
struct FScriptedObjectMovementCalendarEventData {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct SOMRuntime.ScriptedObjectMovement_StaticPathCalendarCheatDefinitionData
// Size: 0x18 (Inherited: 0x00)
struct FScriptedObjectMovement_StaticPathCalendarCheatDefinitionData {
	struct FString EventName; // 0x00(0x10)
	float DurationTimeSeconds; // 0x10(0x04)
	float DelayStartTimeSeconds; // 0x14(0x04)
};

