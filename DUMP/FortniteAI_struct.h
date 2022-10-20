// Enum FortniteAI.EAlertLevel
enum class EAlertLevel : uint8 {
	Unaware = 0,
	Alerted = 1,
	LKP = 2,
	Threatened = 3,
	Count = 4,
	EAlertLevel_MAX = 5
};

// Enum FortniteAI.PingCommandType
enum class PingCommandType : uint8 {
	GoTo = 0,
	BackToMe = 1,
	BackToDefault = 2,
	HoldPosition = 3,
	Revive = 4,
	Dismiss = 5,
	Item = 6,
	Invalid = 7,
	MAX = 8
};

// Enum FortniteAI.ENavigationObstacleOverride
enum class ENavigationObstacleOverride : uint8 {
	UseMeshSettings = 0,
	ForceEnabled = 1,
	ForceDisabled = 2,
	ExportAsPrimitive = 3,
	ENavigationObstacleOverride_MAX = 4
};

// Enum FortniteAI.EAIHotSpotSlotFilter
enum class EAIHotSpotSlotFilter : uint8 {
	All = 0,
	AvailableOnly = 1,
	UnavailableOnly = 2,
	EAIHotSpotSlotFilter_MAX = 3
};

// Enum FortniteAI.EAIHotSpotAssignmentFilter
enum class EAIHotSpotAssignmentFilter : uint8 {
	All = 0,
	WithSlots = 1,
	WaitingList = 2,
	EAIHotSpotAssignmentFilter_MAX = 3
};

// Enum FortniteAI.EAIHotSpotSlot
enum class EAIHotSpotSlot : uint8 {
	Free = 0,
	Claimed = 1,
	Occupied = 2,
	Blocked = 3,
	Disabled = 4,
	EAIHotSpotSlot_MAX = 5
};

// Enum FortniteAI.EBoundingBoxSlotDirectionCalculation
enum class EBoundingBoxSlotDirectionCalculation : uint8 {
	Auto = 0,
	FaceWall = 1,
	FaceAwayFromWall = 2,
	FaceCenter = 3,
	EBoundingBoxSlotDirectionCalculation_MAX = 4
};

// Enum FortniteAI.EInBoundsState
enum class EInBoundsState : uint8 {
	NoBounds = 0,
	NotInBounds = 1,
	InBounds = 2,
	EInBoundsState_MAX = 3
};

// Enum FortniteAI.EAthenaAITelemetryEventType
enum class EAthenaAITelemetryEventType : uint8 {
	Spawn = 0,
	Despawn = 1,
	EAthenaAITelemetryEventType_MAX = 2
};

// Enum FortniteAI.EAICustomTargetRequestType
enum class EAICustomTargetRequestType : uint8 {
	Movement = 1,
	MeleeAttack = 2,
	RangedAttack = 4,
	EAICustomTargetRequestType_MAX = 5
};

// Enum FortniteAI.EDespawnAIType
enum class EDespawnAIType : uint8 {
	Relevancy = 0,
	Distance = 1,
	EDespawnAIType_MAX = 2
};

// Enum FortniteAI.EFortAIDirectorEventContribution
enum class EFortAIDirectorEventContribution : uint8 {
	Increment = 0,
	Set = 1,
	EFortAIDirectorEventContribution_MAX = 2
};

// Enum FortniteAI.EFortAIDirectorFactorContribution
enum class EFortAIDirectorFactorContribution : uint8 {
	Direct = 0,
	Inverse = 1,
	EFortAIDirectorFactorContribution_MAX = 2
};

// Enum FortniteAI.EFortEncounterPacingState
enum class EFortEncounterPacingState : uint8 {
	Ramp = 0,
	Peak = 1,
	Fade = 2,
	Rest = 3,
	Max_None = 4,
	EFortEncounterPacingState_MAX = 5
};

// Enum FortniteAI.EFortEncounterState
enum class EFortEncounterState : uint8 {
	Uninitialized = 0,
	InitializingProperties = 1,
	InitializingRiftManager = 2,
	AwaitingActivation = 3,
	Active = 4,
	ReplacingRifts = 5,
	Max_None = 6,
	EFortEncounterState_MAX = 7
};

// Enum FortniteAI.EFortAIWaveProgressSection
enum class EFortAIWaveProgressSection : uint8 {
	SectionOne = 0,
	SectionTwo = 1,
	Max_None = 2,
	EFortAIWaveProgressSection_MAX = 3
};

// Enum FortniteAI.EFortEncounterSequenceResult
enum class EFortEncounterSequenceResult : uint8 {
	Success = 0,
	FailedEncounterInProgress = 1,
	Failed = 2,
	EFortEncounterSequenceResult_MAX = 3
};

// Enum FortniteAI.EAssignmentCreationResult
enum class EAssignmentCreationResult : uint8 {
	AssignmentNotFoundOrCreated = 0,
	AssignmentCreated = 1,
	AssignmentFound = 2,
	EAssignmentCreationResult_MAX = 3
};

// Enum FortniteAI.ETagGoalScoringCategory
enum class ETagGoalScoringCategory : uint8 {
	Ignore = 0,
	HighInterest = 1,
	NumCategories = 2,
	ETagGoalScoringCategory_MAX = 3
};

// Enum FortniteAI.ECorePerceptionTypes
enum class ECorePerceptionTypes : uint8 {
	Sight = 0,
	Hearing = 1,
	Damage = 2,
	Touch = 3,
	Team = 4,
	Prediction = 5,
	MAX = 6
};

// Enum FortniteAI.EFortAILODLevel
enum class EFortAILODLevel : uint8 {
	Invalid = 0,
	MIN = 0,
	Dormant = 1,
	BelowLower = 2,
	Lower = 3,
	AboveLower = 4,
	BelowNormal = 5,
	Normal = 6,
	AboveNormal = 7,
	MAX = 8
};

// Enum FortniteAI.EAssignmentType
enum class EAssignmentType : uint8 {
	Invalid = 0,
	Encounter = 1,
	World = 2,
	Enemy = 3,
	NumAssignmentTypes = 4,
	EAssignmentType_MAX = 5
};

// Enum FortniteAI.EBuildingWallArea
enum class EBuildingWallArea : uint8 {
	Regular = 0,
	Flat = 1,
	Special = 2,
	EBuildingWallArea_MAX = 3
};

// Enum FortniteAI.EBuildingStairsRailing
enum class EBuildingStairsRailing : uint8 {
	None = 0,
	Partial = 1,
	Full = 2,
	EBuildingStairsRailing_MAX = 3
};

// Enum FortniteAI.EBuildingFloorRailing
enum class EBuildingFloorRailing : uint8 {
	None = 0,
	Balcony = 1,
	EBuildingFloorRailing_MAX = 2
};

// Enum FortniteAI.EFortHotSpotSlot
enum class EFortHotSpotSlot : uint8 {
	Melee = 0,
	MeleeHuge = 1,
	Ranged = 2,
	None = 3,
	EFortHotSpotSlot_MAX = 4
};

// Enum FortniteAI.EFortHotSpotDirection
enum class EFortHotSpotDirection : uint8 {
	PositiveX = 0,
	NegativeX = 1,
	PositiveY = 2,
	NegativeY = 3,
	PositiveZ = 4,
	NegativeZ = 5,
	Any = 6,
	EFortHotSpotDirection_MAX = 7
};

// Enum FortniteAI.EFortHotSpotPreview
enum class EFortHotSpotPreview : uint8 {
	None = 0,
	Smashing = 1,
	Shooting = 2,
	EFortHotSpotPreview_MAX = 3
};

// Enum FortniteAI.EHotspotTypeConfigMode
enum class EHotspotTypeConfigMode : uint8 {
	AlwaysAdd = 0,
	WhenNotDefined = 1,
	WhenNotValid = 2,
	EHotspotTypeConfigMode_MAX = 3
};

// Enum FortniteAI.EFortPartialPathUsage
enum class EFortPartialPathUsage : uint8 {
	Always = 0,
	OnlyGoalsOnDestructible = 1,
	Never = 2,
	EFortPartialPathUsage_MAX = 3
};

// Enum FortniteAI.ETargetDistanceComparisonType
enum class ETargetDistanceComparisonType : uint8 {
	TwoDimensions = 0,
	ThreeDimensions = 1,
	CollisionHalfHeightMultiplier = 2,
	ETargetDistanceComparisonType_MAX = 3
};

// Enum FortniteAI.EAIScalableFloatScalingType
enum class EAIScalableFloatScalingType : uint8 {
	Disabled = 0,
	ReceivedDamageByTarget = 1,
	EAIScalableFloatScalingType_MAX = 2
};

// Enum FortniteAI.EAIBotBuildingTemplate
enum class EAIBotBuildingTemplate : uint8 {
	SingleWall = 0,
	SingleRamp = 1,
	SingleRoof = 2,
	SingleBrace = 3,
	SingleWallWindow = 4,
	MAX = 5
};

// Enum FortniteAI.EObstacleType
enum class EObstacleType : uint8 {
	IncomingSmashable = 0,
	BlockingSmashable = 1,
	BlockingDetectedTrap = 2,
	Unknown = 3,
	Count = 3,
	EObstacleType_MAX = 4
};

// Enum FortniteAI.EHarvestResult
enum class EHarvestResult : uint8 {
	None = 0,
	InProgress = 1,
	Success = 2,
	Fail = 3,
	EHarvestResult_MAX = 4
};

// Enum FortniteAI.EReachLocationValidationMode
enum class EReachLocationValidationMode : uint8 {
	None = 0,
	Storm = 1,
	Leash = 2,
	SoftLeash = 3,
	EReachLocationValidationMode_MAX = 4
};

// Enum FortniteAI.EBlackboardUpdateType
enum class EBlackboardUpdateType : uint8 {
	NoUpdate = 0,
	UpdateNow = 1,
	UpdateNextTick = 2,
	EBlackboardUpdateType_MAX = 3
};

// Enum FortniteAI.EBotControllerClamberStatus
enum class EBotControllerClamberStatus : uint8 {
	Invalid = 0,
	MoveStarted = 1,
	MoveDone = 2,
	MoveFailed = 3,
	EBotControllerClamberStatus_MAX = 4
};

// Enum FortniteAI.EDefensivePlayerStyleSource
enum class EDefensivePlayerStyleSource : uint8 {
	Unknown = 0,
	Escape = 1,
	MAX = 2
};

// Enum FortniteAI.BotDataOverrideCosmeticMode
enum class BotDataOverrideCosmeticMode : uint8 {
	SpecificLoadout = 0,
	CosmeticLibrary = 1,
	BotDataOverrideCosmeticMode_MAX = 2
};

// Enum FortniteAI.EFortAthenaAICanMoveState
enum class EFortAthenaAICanMoveState : uint8 {
	None = 0,
	Failed_AgentOffNavmesh = 1,
	Failed_GoalOffNavmesh = 2,
	Failed_Falling = 3,
	Success = 4,
	Success_Partial = 5,
	EFortAthenaAICanMoveState_MAX = 6
};

// Enum FortniteAI.EEvasiveManeuverType
enum class EEvasiveManeuverType : uint8 {
	Crouch = 0,
	Dodge = 1,
	Jump = 2,
	JetpackStrafe = 3,
	None = 4,
	EEvasiveManeuverType_MAX = 5
};

// Enum FortniteAI.EFreeFallingMode
enum class EFreeFallingMode : uint8 {
	Idle = 0,
	Random = 1,
	TowardNearestAlly = 2,
	PatrolPath = 3,
	EFreeFallingMode_MAX = 4
};

// Enum FortniteAI.EFocusingBehavior
enum class EFocusingBehavior : uint8 {
	FocusCurrentTarget = 0,
	IgnoreThreatAfterTimer = 1,
	IgnoreThreatAlways = 2,
	LookAtInvestigate = 3,
	LookAtAmbush = 4,
	LookAtHeardSound = 5,
	LookAtScanAround = 6,
	LookAtScanAroundOnly = 7,
	Invalid = 8,
	EFocusingBehavior_MAX = 9
};

// Enum FortniteAI.EAILootExcludeListReason
enum class EAILootExcludeListReason : uint8 {
	Invalid = 0,
	ExecutionError = 1,
	CannotReachLootLocation = 2,
	OutsideSafeZoneRadius = 3,
	NoInventorySpace = 4,
	LootStateUnavailable = 5,
	PathNotFound = 6,
	GoalOffNavmesh = 7,
	AgentBlocked = 8,
	IsolatedIsland = 9,
	UnsupportedItem = 10,
	Count = 11,
	EAILootExcludeListReason_MAX = 12
};

// Enum FortniteAI.EBotMovementState
enum class EBotMovementState : uint8 {
	None = 0,
	InProgress = 1,
	Failed_NoPathFound = 2,
	Failed_Aborted = 3,
	Failed_AgentOffNavmesh = 4,
	Failed_GoalOffNavmesh = 5,
	Failed_Blocked = 6,
	Failed_OffPath = 7,
	Failed_Falling = 8,
	Success = 9,
	Success_Partial = 10,
	Success_AlreadyAtGoal = 11,
	EBotMovementState_MAX = 12
};

// Enum FortniteAI.EBotUnstuckSteeringReason
enum class EBotUnstuckSteeringReason : uint8 {
	Unknown = 0,
	OffNavMesh = 1,
	IsolatedIsland = 2,
	EBotUnstuckSteeringReason_MAX = 3
};

// Enum FortniteAI.EPathTestQueryType
enum class EPathTestQueryType : uint8 {
	NavmeshRaycast2D = 0,
	HierarchicalQuery = 1,
	RegularPathFinding = 2,
	EPathTestQueryType_MAX = 3
};

// Enum FortniteAI.EExecutionStatus
enum class EExecutionStatus : uint8 {
	ExecutionError = 0,
	ExecutionDenied = 1,
	ExecutionSuccess = 2,
	ExecutionPending = 3,
	ExecutionAllowed = 4,
	EExecutionStatus_MAX = 5
};

// Enum FortniteAI.ELootElementType
enum class ELootElementType : uint8 {
	Pickup = 0,
	Chest = 1,
	SupplyDrop = 2,
	Invalid = 255,
	ELootElementType_MAX = 256
};

// Enum FortniteAI.EFortAthenaAIObjectTrackerQueryOrder
enum class EFortAthenaAIObjectTrackerQueryOrder : uint8 {
	None = 0,
	Distance = 1,
	EFortAthenaAIObjectTrackerQueryOrder_MAX = 2
};

// Enum FortniteAI.EFortAthenaAISpawnerDataComponentTriBool
enum class EFortAthenaAISpawnerDataComponentTriBool : uint8 {
	Yes = 0,
	No = 1,
	DoNotModify = 2,
	EFortAthenaAISpawnerDataComponentTriBool_MAX = 3
};

// Enum FortniteAI.EBehaviorTreeBranches
enum class EBehaviorTreeBranches : uint8 {
	CanUseDiving = 0,
	CanUseGliding = 1,
	CanReactToProjectile = 2,
	CanReactToTraps = 3,
	CanAvoidDangerArea = 4,
	CanBeConverted = 5,
	CanPropagateAwareness = 6,
	CanUseThreatenedBehaviors = 7,
	CanUseLastKnownPositionBehavior = 8,
	CanUseAlertedBehavior = 9,
	CanUseSmartObjects = 10,
	CanReviveDBNOTeammates = 11,
	CanPlayEmote = 12,
	CanConverse = 13,
	CanPatrolOnPath = 14,
	CanPatrolAround = 15,
	CanTeleportWhenStuck = 16,
	CanEmoteWhenStuck = 17,
	Count = 18,
	EBehaviorTreeBranches_MAX = 19
};

// Enum FortniteAI.EBehaviorTreeBranchesBitmask
enum class EBehaviorTreeBranchesBitmask : uint8 {
	CanUseDiving = 0,
	CanUseGliding = 1,
	CanReactToProjectile = 2,
	CanReactToTraps = 3,
	CanAvoidDangerArea = 4,
	CanBeConverted = 5,
	CanPropagateAwareness = 6,
	CanUseThreatenedBehaviors = 7,
	CanUseLastKnownPositionBehavior = 8,
	CanUseAlertedBehavior = 9,
	CanUseSmartObjects = 10,
	CanReviveDBNOTeammates = 11,
	CanPlayEmote = 12,
	CanConverse = 13,
	CanPatrolOnPath = 14,
	CanPatrolAround = 15,
	CanTeleportWhenStuck = 16,
	CanEmoteWhenStuck = 17,
	Count = 18,
	EBehaviorTreeBranchesBitmask_MAX = 19
};

// Enum FortniteAI.EBTSetBlackboardBoolExitActions
enum class EBTSetBlackboardBoolExitActions : uint8 {
	Invert = 0,
	Revert = 1,
	Keep = 2,
	EBTSetBlackboardBoolExitActions_MAX = 3
};

// Enum FortniteAI.ETeleportReason
enum class ETeleportReason : uint8 {
	AgentNotOnNavmesh = 0,
	AgentDestinationNotOnNavMesh = 1,
	AgentStuckInRepetitivePartialPaths = 2,
	AgentBlocked = 3,
	Unknown = 4,
	ETeleportReason_MAX = 5
};

// Enum FortniteAI.EGlideBehavior
enum class EGlideBehavior : uint8 {
	GlideFocusOnDestination = 0,
	GlideSurveyArea = 1,
	EGlideBehavior_MAX = 2
};

// Enum FortniteAI.EGlideMovementType
enum class EGlideMovementType : uint8 {
	GlideMovementLinear = 0,
	GlideMovementSpiral = 1,
	GlideMovementSerpentine = 2,
	EGlideMovementType_MAX = 3
};

// Enum FortniteAI.EActionState
enum class EActionState : uint8 {
	TryingToEquip = 0,
	EquippingItem = 1,
	UsingItem = 2,
	WaitingItemTermination = 3,
	WaitBeforeEquippingNextItem = 4,
	ActionEndedWithNoError = 5,
	ActionEndedWithError = 6,
	EActionState_MAX = 7
};

// Enum FortniteAI.SwitchSeatType
enum class SwitchSeatType : uint8 {
	ToDriver = 0,
	ToPassenger = 1,
	ToGunner = 2,
	ToSpotter = 3,
	SwitchSeatType_MAX = 4
};

// Enum FortniteAI.EEncampmentRole
enum class EEncampmentRole : uint8 {
	Guard = 0,
	Build = 1,
	Count = 2,
	EEncampmentRole_MAX = 3
};

// Enum FortniteAI.EPatrollingMode
enum class EPatrollingMode : uint8 {
	BackAndForth = 0,
	Loop = 1,
	StopAtEnd = 2,
	EPatrollingMode_MAX = 3
};

// Enum FortniteAI.EBotNamingMode
enum class EBotNamingMode : uint8 {
	RealName = 0,
	SkinName = 1,
	Anonymous = 2,
	Custom = 3,
	CharacterDataDisplayName = 4,
	CustomIncremental = 5,
	EBotNamingMode_MAX = 6
};

// Enum FortniteAI.SeatStatusType
enum class SeatStatusType : uint8 {
	Driver = 0,
	Passenger = 1,
	Gunner = 2,
	Spotter = 3,
	SeatStatusType_MAX = 4
};

// Enum FortniteAI.EFortCreativePatrolPathGroup
enum class EFortCreativePatrolPathGroup : uint8 {
	 = 0,
	 = 1,
	 = 2,
	 = 3,
	 = 4,
	 = 5,
	 = 6,
	 = 7,
	 = 8,
	 = 9,
	 = 10,
	 = 11,
	 = 12,
	 = 13,
	 = 14,
	 = 15,
	 = 16,
	 = 17,
	 = 18,
	 = 19,
	 = 20,
	 = 21,
	 = 22,
	 = 23,
	 = 24,
	 = 25,
	 = 26,
	 = 27,
	 = 28,
	 = 29,
	 = 30,
	 = 31,
	 = 32,
	 = 33,
	 = 34,
	 = 35,
	 = 36,
	 = 37,
	 = 38,
	 = 39,
	 = 40,
	 = 41,
	 = 42,
	 = 43,
	 = 44,
	 = 45,
	 = 46,
	 = 47,
	 = 48,
	 = 49,
	 = 50,
	 = 51,
	 = 52,
	 = 53,
	 = 54,
	 = 55,
	 = 56,
	 = 57,
	 = 58,
	 = 59,
	 = 60,
	 = 61,
	 = 62,
	 = 63,
	 = 64,
	 = 65,
	 = 66,
	 = 67,
	 = 68,
	 = 69,
	 = 70,
	 = 71,
	 = 72,
	 = 73,
	 = 74,
	 = 75,
	 = 76,
	 = 77,
	 = 78,
	 = 79,
	 = 80,
	 = 81,
	 = 82,
	 = 83,
	 = 84,
	 = 85,
	 = 86,
	 = 87,
	 = 88,
	 = 89,
	 = 90,
	 = 91,
	 = 92,
	 = 93,
	 = 94,
	 = 95,
	 = 96,
	 = 97,
	 = 98,
	 = 99,
	Group_None = 100,
	Group_MAX = 101
};

// Enum FortniteAI.EFortEncounterUtilityDesire
enum class EFortEncounterUtilityDesire : uint8 {
	Low = 0,
	Medium = 1,
	High = 2,
	VeryHigh = 3,
	Max_None = 4,
	EFortEncounterUtilityDesire_MAX = 5
};

// Enum FortniteAI.ERatingsEnforcementType
enum class ERatingsEnforcementType : uint8 {
	Default = 0,
	IgnoreMaximums = 1,
	IgnoreParty = 2,
	IgnorePartyMaximum = 3,
	ERatingsEnforcementType_MAX = 4
};

// Enum FortniteAI.EClampType
enum class EClampType : uint8 {
	Minimum = 0,
	Maximum = 1,
	EClampType_MAX = 2
};

// Enum FortniteAI.EFortIntensityCurveSequenceType
enum class EFortIntensityCurveSequenceType : uint8 {
	Sequence = 0,
	Loop = 1,
	Random = 2,
	Max_None = 3,
	EFortIntensityCurveSequenceType_MAX = 4
};

// Enum FortniteAI.EFortAreaFlag
enum class EFortAreaFlag : uint8 {
	Default = 0,
	Obstacle = 1,
	Smashable = 2,
	Unwalkable = 3,
	Interactable = 4,
	EFortAreaFlag_MAX = 5
};

// Enum FortniteAI.EFortNavLinkPattern
enum class EFortNavLinkPattern : uint8 {
	Floor = 0,
	Stairs = 1,
	Roof = 2,
	Manual = 3,
	EFortNavLinkPattern_MAX = 4
};

// Enum FortniteAI.ENavPathRendererStatus
enum class ENavPathRendererStatus : uint8 {
	INVALID = 0,
	CALCULATING = 1,
	SUCCESS = 2,
	FAILED = 3,
	ENavPathRendererStatus_MAX = 4
};

// Enum FortniteAI.EFortNamedNavmesh
enum class EFortNamedNavmesh : uint8 {
	Husk = 0,
	Smasher = 1,
	MAX = 2
};

// Enum FortniteAI.EPathObstacleAction
enum class EPathObstacleAction : uint8 {
	Melee = 0,
	Ignore = 1,
	AbortMoveAsFailed = 2,
	FinishMoveAsSucceeded = 3,
	EPathObstacleAction_MAX = 4
};

// Enum FortniteAI.EPathUndermineEvent
enum class EPathUndermineEvent : uint8 {
	Predicted = 0,
	Started = 1,
	Finished = 2,
	EPathUndermineEvent_MAX = 3
};

// Enum FortniteAI.EWardAffectType
enum class EWardAffectType : uint8 {
	AffectsBothStartAndEndPoints = 0,
	AffectsOnlyStartPoints = 1,
	AffectsOnlyEndPoints = 2,
	EWardAffectType_MAX = 3
};

// Enum FortniteAI.EDBNOPlayStyle
enum class EDBNOPlayStyle : uint8 {
	Thirsty = 0,
	Default = 1,
	Passive = 2,
	ThristyButPassiveOnPlayers = 3,
	DefaultButPassiveOnPlayers = 4,
	EDBNOPlayStyle_MAX = 5
};

// Enum FortniteAI.EStimType
enum class EStimType : uint8 {
	Seeing = 0,
	Seen = 1,
	MightHaveSeen = 2,
	Hurt = 3,
	Heard = 4,
	Obstacle = 5,
	Enemy = 6,
	Unknown = 7,
	Count = 7,
	EStimType_MAX = 8
};

// Enum FortniteAI.EPerceptionState
enum class EPerceptionState : uint8 {
	Threat_Seeing = 0,
	Threat_LKP = 1,
	Threat_Alerted = 2,
	ObstacleIncoming = 3,
	ObstacleBlockedBy = 4,
	ObstacleDetectedTrap = 5,
	Unknown = 6,
	Count = 6,
	Threat_Count = 3,
	EPerceptionState_MAX = 7
};

// Enum FortniteAI.ETrackingOffsetModifierCurve
enum class ETrackingOffsetModifierCurve : uint8 {
	Default = 0,
	CombatStart = 1,
	TargetLowHealth = 2,
	MAX = 3
};

// Enum FortniteAI.EPerceptionSoundType
enum class EPerceptionSoundType : uint8 {
	Default = 0,
	Explosion = 1,
	ProjectileFlyBy = 2,
	ProjectileImpact = 3,
	WeaponFiring = 4,
	Building = 5,
	MeleeImpact = 6,
	MAX = 7
};

// Enum FortniteAI.ELookAtType
enum class ELookAtType : uint8 {
	ScanAround = 0,
	Investigate = 1,
	HeardSound = 2,
	Ambush = 3,
	MAX = 4
};

// Enum FortniteAI.ELeashReturnLocationMode
enum class ELeashReturnLocationMode : uint8 {
	Closest = 0,
	Random = 1,
	ELeashReturnLocationMode_MAX = 2
};

// Enum FortniteAI.EOrientedConstructionBuildingType
enum class EOrientedConstructionBuildingType : uint8 {
	WallX = 0,
	WallY = 1,
	Floor = 2,
	StairsUpX = 3,
	StairsUpY = 4,
	StairsDownX = 5,
	StairsDownY = 6,
	Roof = 7,
	BraceLeftX = 8,
	BraceRightX = 9,
	BraceLeftY = 10,
	BraceRightY = 11,
	WallWindowX = 12,
	WallWindowY = 13,
	Count = 14,
	EOrientedConstructionBuildingType_MAX = 15
};

// Enum FortniteAI.EConstructionBuildingType
enum class EConstructionBuildingType : uint8 {
	Wall = 0,
	Floor = 1,
	Stairs = 2,
	Roof = 3,
	Brace = 4,
	WallWindow = 5,
	Count = 6,
	EConstructionBuildingType_MAX = 7
};

// Enum FortniteAI.EFortPointsFromNavGraphGoalPathDistanceFilterOperator
enum class EFortPointsFromNavGraphGoalPathDistanceFilterOperator : uint8 {
	AllGoalsInRange = 0,
	AnyGoalInRange = 1,
	EFortPointsFromNavGraphGoalPathDistanceFilterOperator_MAX = 2
};

// Enum FortniteAI.EFortTestGoalActorDot
enum class EFortTestGoalActorDot : uint8 {
	Dot3D = 0,
	Dot2D = 1,
	EFortTestGoalActorDot_MAX = 2
};

// Enum FortniteAI.EDistanceMode
enum class EDistanceMode : uint8 {
	DistItemToContext = 0,
	DistItemGoalActorToContext = 1,
	DistItemToItemGoalActor = 2,
	EDistanceMode_MAX = 3
};

// Enum FortniteAI.ECountAIAssignedToType
enum class ECountAIAssignedToType : uint8 {
	Goal = 0,
	Actor = 1,
	Assignment = 2,
	ECountAIAssignedToType_MAX = 3
};

// Enum FortniteAI.ETwoPointSolverRotationA
enum class ETwoPointSolverRotationA : uint8 {
	PointAToQuerier = 0,
	QuerierToPointA = 1,
	PointAToQuerierWithRandomOffset = 2,
	QuerierToPointAWithRandomOffset = 3,
	Custom = 4,
	ETwoPointSolverRotationA_MAX = 5
};

// Enum FortniteAI.EFortThreatDeactivationType
enum class EFortThreatDeactivationType : uint8 {
	Off = 0,
	Dormant = 1,
	EFortThreatDeactivationType_MAX = 2
};

// ScriptStruct FortniteAI.AIHotSpotSlotConfig
// Size: 0x38 (Inherited: 0x00)
struct FAIHotSpotSlotConfig {
	struct FVector Offset; // 0x00(0x18)
	struct FVector Direction; // 0x18(0x18)
	enum class EFortHotSpotSlot SlotType; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct FortniteAI.AIHotSpotSlotInfo
// Size: 0x10 (Inherited: 0x00)
struct FAIHotSpotSlotInfo {
	struct AAIHotSpot* HotSpot; // 0x00(0x08)
	int32_t SlotIndex; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct FortniteAI.AthenaMemoryBudgetInterfaces
// Size: 0x10 (Inherited: 0x00)
struct FAthenaMemoryBudgetInterfaces {
	struct TArray<struct TScriptInterface<IAthenaMemoryBudgetInterface>> Interfaces; // 0x00(0x10)
};

// ScriptStruct FortniteAI.ClientAILODMovementCompOptimizationConfiguration
// Size: 0x1e0 (Inherited: 0x00)
struct FClientAILODMovementCompOptimizationConfiguration {
	struct FScalableFloat bEnable; // 0x00(0x28)
	struct FScalableFloat bEnableSimulationDataOptimizations; // 0x28(0x28)
	struct FScalableFloat MinDistanceToApplyFrameSkippingWhenVisible; // 0x50(0x28)
	struct FScalableFloat FrameSkippingOnLOD1; // 0x78(0x28)
	struct FScalableFloat bRequireHittingPawnThresholdForLOD1; // 0xa0(0x28)
	struct FScalableFloat FrameSkippingOnLOD2; // 0xc8(0x28)
	struct FScalableFloat bRequireHittingPawnThresholdForLOD2; // 0xf0(0x28)
	struct FScalableFloat FrameSkippingOnLowestLOD; // 0x118(0x28)
	struct FScalableFloat FrameSkippingOnLowestLODWithSmallViewAngleRendered; // 0x140(0x28)
	struct FScalableFloat FrameSkippingOnLowestLODWithSmallViewAngleNotRendered; // 0x168(0x28)
	struct FScalableFloat FrameSkippingInvisible; // 0x190(0x28)
	struct FScalableFloat bForceInvisibleValueWhenNotRenderedForThreshold; // 0x1b8(0x28)
};

// ScriptStruct FortniteAI.ClientAILODSettings
// Size: 0x2f0 (Inherited: 0x00)
struct FClientAILODSettings {
	struct FScalableFloat ScoreMultiplier; // 0x00(0x28)
	struct FScalableFloat PreloadingPriorityOverride; // 0x28(0x28)
	struct FScalableFloat bSupportCharacterMovementOptimization; // 0x50(0x28)
	struct FClientAILODMovementCompOptimizationConfiguration MovementCompOptimizationConfiguration; // 0x78(0x1e0)
	struct FScalableFloat bAIPawnOnlyTickMeshWhenRendered; // 0x258(0x28)
	struct FScalableFloat bAIPawnApplyEffectOptimizations; // 0x280(0x28)
	char pad_2A8[0x48]; // 0x2a8(0x48)
};

// ScriptStruct FortniteAI.DroppingAgentData
// Size: 0x18 (Inherited: 0x00)
struct FDroppingAgentData {
	struct AAthenaAIController* AIController; // 0x00(0x08)
	struct ABuildingActor* MovementBase; // 0x08(0x08)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct FortniteAI.AIPopulationCountSnapshot
// Size: 0x14 (Inherited: 0x00)
struct FAIPopulationCountSnapshot {
	int32_t NumTotalSpawnedBots; // 0x00(0x04)
	int32_t NumAliveBots; // 0x04(0x04)
	int32_t NumAlivePlayerBots; // 0x08(0x04)
	int32_t NumAliveNPCBots; // 0x0c(0x04)
	int32_t NumAliveAIPawns; // 0x10(0x04)
};

// ScriptStruct FortniteAI.AthenaAIServiceGroupInfo
// Size: 0x20 (Inherited: 0x00)
struct FAthenaAIServiceGroupInfo {
	int32_t GroupId; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UFortPawnComponent_AIGroup* GroupLeader; // 0x08(0x08)
	struct TArray<struct UFortPawnComponent_AIGroup*> GroupMembers; // 0x10(0x10)
};

// ScriptStruct FortniteAI.CachedSupplyDrop
// Size: 0x28 (Inherited: 0x00)
struct FCachedSupplyDrop {
	struct AFortAthenaSupplyDrop* supplydrop; // 0x00(0x08)
	bool bInOctree; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FVector LastLocation; // 0x10(0x18)
};

// ScriptStruct FortniteAI.MovingLootInfo
// Size: 0x18 (Inherited: 0x00)
struct FMovingLootInfo {
	struct FVector LastLocationInOctree; // 0x00(0x18)
};

// ScriptStruct FortniteAI.BattleBusPOI
// Size: 0x90 (Inherited: 0x00)
struct FBattleBusPOI {
	struct FScalableFloat IsEnabled; // 0x00(0x28)
	struct FGameplayTagQuery POIFilterQuery; // 0x28(0x48)
	struct TArray<struct AFortPoiVolume*> ValidPOIVolumeList; // 0x70(0x10)
	char pad_80[0x10]; // 0x80(0x10)
};

// ScriptStruct FortniteAI.NavigationPOI
// Size: 0x80 (Inherited: 0x00)
struct FNavigationPOI {
	struct FScalableFloat IsEnabled; // 0x00(0x28)
	struct FGameplayTagQuery POIFilterQuery; // 0x28(0x48)
	struct TArray<struct AFortPoiVolume*> ValidPOIVolumeList; // 0x70(0x10)
};

// ScriptStruct FortniteAI.CachedPOIVolumeLocations
// Size: 0x20 (Inherited: 0x00)
struct FCachedPOIVolumeLocations {
	struct AFortPoiVolume* POIVolume; // 0x00(0x08)
	char pad_8[0x18]; // 0x08(0x18)
};

// ScriptStruct FortniteAI.FortServerBotInfo
// Size: 0x18 (Inherited: 0x00)
struct FFortServerBotInfo {
	struct AFortAthenaAIBotController* BotController; // 0x00(0x08)
	struct AFortPoiVolume* SelectedPoiVolume; // 0x08(0x08)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct FortniteAI.FortBotBackfillSpawnRequest
// Size: 0x18 (Inherited: 0x00)
struct FFortBotBackfillSpawnRequest {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct FortniteAI.MMRSpawningInfo
// Size: 0x28 (Inherited: 0x00)
struct FMMRSpawningInfo {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct FortniteAI.MMRSpawningBaseRuntimeInfo
// Size: 0x10 (Inherited: 0x00)
struct FMMRSpawningBaseRuntimeInfo {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct FortniteAI.MMRSpawningPlayerBotsRuntimeInfo
// Size: 0x38 (Inherited: 0x10)
struct FMMRSpawningPlayerBotsRuntimeInfo : FMMRSpawningBaseRuntimeInfo {
	char pad_10[0x10]; // 0x10(0x10)
	struct TArray<struct FMMRSpawningInfo> SpawningInfos; // 0x20(0x10)
	char pad_30[0x8]; // 0x30(0x08)
};

// ScriptStruct FortniteAI.UpdateBotSkillInfo
// Size: 0x0c (Inherited: 0x00)
struct FUpdateBotSkillInfo {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct FortniteAI.FortBotDisablePOIRequest
// Size: 0x10 (Inherited: 0x00)
struct FFortBotDisablePOIRequest {
	char pad_0[0x8]; // 0x00(0x08)
	struct UAthenaAIServicePlayerBots* CachedAIServicePlayerBots; // 0x08(0x08)
};

// ScriptStruct FortniteAI.UpdatedNavMeshTiles
// Size: 0x18 (Inherited: 0x00)
struct FUpdatedNavMeshTiles {
	struct AAthenaNavMesh* NavMesh; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct FortniteAI.NavMeshDetectedInfo
// Size: 0x30 (Inherited: 0x00)
struct FNavMeshDetectedInfo {
	struct AAthenaNavMesh* NavMesh; // 0x00(0x08)
	char pad_8[0x28]; // 0x08(0x28)
};

// ScriptStruct FortniteAI.BoxNavInvoker
// Size: 0x20 (Inherited: 0x00)
struct FBoxNavInvoker {
	struct AAthenaNavInvokerBox* Invoker; // 0x00(0x08)
	char pad_8[0x18]; // 0x08(0x18)
};

// ScriptStruct FortniteAI.NavDataSetVariantSettings
// Size: 0x30 (Inherited: 0x00)
struct FNavDataSetVariantSettings {
	struct TSoftObjectPtr<UWorld> Level; // 0x00(0x28)
	uint32_t OceanFloodLevel; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct FortniteAI.OverriddenSupportedAgentsByReleaseVersion
// Size: 0x0c (Inherited: 0x00)
struct FOverriddenSupportedAgentsByReleaseVersion {
	struct FFortReleaseVersion StartVersion; // 0x00(0x04)
	struct FFortReleaseVersion EndVersion; // 0x04(0x04)
	struct FNavAgentSelector OverriddenSupportedAgentsMask; // 0x08(0x04)
};

// ScriptStruct FortniteAI.TrapPerceptionSettings
// Size: 0x14 (Inherited: 0x00)
struct FTrapPerceptionSettings {
	char pad_0[0x14]; // 0x00(0x14)
};

// ScriptStruct FortniteAI.TrapDetectionState
// Size: 0x08 (Inherited: 0x00)
struct FTrapDetectionState {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct FortniteAI.BuildingActorHotSpotDirection
// Size: 0x28 (Inherited: 0x00)
struct FBuildingActorHotSpotDirection {
	struct UAIHotSpotConfig* HotSpotConfig; // 0x00(0x08)
	struct FVector Offset; // 0x08(0x18)
	char bMirrorX : 1; // 0x20(0x01)
	char bMirrorY : 1; // 0x20(0x01)
	char pad_20_2 : 6; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	enum class EFortHotSpotDirection Direction; // 0x24(0x01)
	enum class EHotspotTypeConfigMode TypeConfigUsage; // 0x25(0x01)
	char pad_26[0x2]; // 0x26(0x02)
};

// ScriptStruct FortniteAI.ClimbLinkData
// Size: 0x40 (Inherited: 0x00)
struct FClimbLinkData {
	char pad_0[0x38]; // 0x00(0x38)
	uint32_t UniqueLinkId; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct FortniteAI.DebugMinimapData
// Size: 0x1b0 (Inherited: 0x00)
struct FDebugMinimapData {
	bool bIsOverridden; // 0x00(0x01)
	char pad_1[0xf]; // 0x01(0x0f)
	struct FSlateBrush DebugMinimapIconBrush; // 0x10(0xc0)
	struct FVector2D DebugMinimapIconScale; // 0xd0(0x10)
	struct FSlateBrush DebugCompassIconBrush; // 0xe0(0xc0)
	struct FVector2D DebugCompassIconScale; // 0x1a0(0x10)
};

// ScriptStruct FortniteAI.PendingRequestManager
// Size: 0x30 (Inherited: 0x00)
struct FPendingRequestManager {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct FortniteAI.GoalSelectionQueryInfo
// Size: 0x28 (Inherited: 0x00)
struct FGoalSelectionQueryInfo {
	struct UEnvQuery* GoalSelectionQuery; // 0x00(0x08)
	struct FGameplayTagContainer RequiredGameplayTags; // 0x08(0x20)
};

// ScriptStruct FortniteAI.WeightedAIPerk
// Size: 0x30 (Inherited: 0x00)
struct FWeightedAIPerk {
	struct UFortAIPerkBase* PerkClass; // 0x00(0x08)
	struct FScalableFloat RandomWeight; // 0x08(0x28)
};

// ScriptStruct FortniteAI.PerkAvailabilityContainer
// Size: 0x18 (Inherited: 0x00)
struct FPerkAvailabilityContainer {
	struct TArray<struct FWeightedAIPerk> AvailablePerks; // 0x00(0x10)
	int32_t DesiredPerkCount; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct FortniteAI.AICustomTargetConfiguration
// Size: 0x20 (Inherited: 0x00)
struct FAICustomTargetConfiguration {
	struct FVector Offset; // 0x00(0x18)
	char ValidRequestTypes; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct FortniteAI.PendingSpawnInfo
// Size: 0x148 (Inherited: 0x00)
struct FPendingSpawnInfo {
	struct AFortAIPawn* PawnClassToSpawn; // 0x00(0x08)
	struct AActor* SpawnPoint; // 0x08(0x08)
	struct FVector SpawnLocation; // 0x10(0x18)
	struct FRotator SpawnRotation; // 0x28(0x18)
	struct AActor* SpawnSource; // 0x40(0x08)
	bool bSpawnedFromExternalSpawner; // 0x48(0x01)
	enum class EFortressAIType AIType; // 0x49(0x01)
	char pad_4A[0x6]; // 0x4a(0x06)
	struct AFortPlayerController* TargetPlayer; // 0x50(0x08)
	struct UFortAIEncounterInfo* EncounterInfo; // 0x58(0x08)
	float DifficultyLevel; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct UFortAISpawnGroup* SpawnGroup; // 0x68(0x08)
	struct FGuid SpawnGroupGuid; // 0x70(0x10)
	int32_t EnemyIndexInSpawnGroup; // 0x80(0x04)
	float TimeToSpawn; // 0x84(0x04)
	struct FGuid PendingSpawnInfoGuid; // 0x88(0x10)
	bool bIgnoreCollision; // 0x98(0x01)
	bool bKillBuildingActorsAtSpawnLocation; // 0x99(0x01)
	char pad_9A[0x2]; // 0x9a(0x02)
	float EncounterAILifespan; // 0x9c(0x04)
	float ScoreMultiplier; // 0xa0(0x04)
	bool bDebugSpawnedAI; // 0xa4(0x01)
	char pad_A5[0x3]; // 0xa5(0x03)
	struct TArray<struct UFortAbilitySet*> AbilitySetsToGrantOnSpawn; // 0xa8(0x10)
	struct TArray<struct UFortGameplayModifierItemDefinition*> ModifiersToApplyOnSpawn; // 0xb8(0x10)
	struct FFortAISpawnGroupUpgradeUIData UpgradeUIData; // 0xc8(0x70)
	struct FFortAIPawnLootDropData LootDropData; // 0x138(0x10)
};

// ScriptStruct FortniteAI.IntensityContribution
// Size: 0x48 (Inherited: 0x00)
struct FIntensityContribution {
	enum class EFortCombatFactors CombatFactor; // 0x00(0x01)
	enum class EFortAIDirectorFactor ContributingAIDirectorFactor; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float MaxContribution; // 0x04(0x04)
	bool bModifyContributionByCompletionPercentage; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FCurveTableRowHandle CompletionPercentageInitialMultiplier; // 0x10(0x10)
	struct FCurveTableRowHandle CompletionPercentageToStartReducingMultiplier; // 0x20(0x10)
	struct FCurveTableRowHandle CompletionPercentageToStopReducingMultiplier; // 0x30(0x10)
	bool bModifyByNumberOfCriticalEncounterGoals; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// ScriptStruct FortniteAI.IntensityData
// Size: 0x30 (Inherited: 0x00)
struct FIntensityData {
	struct TArray<struct FIntensityContribution> ContributingFactors; // 0x00(0x10)
	float ContributionsTotal; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct UBuildingEditModeMetadata*> ExceptionEditModes; // 0x18(0x10)
	float ExceptionEditModeWeight; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct FortniteAI.UtilityTypeFloatPair
// Size: 0x08 (Inherited: 0x00)
struct FUtilityTypeFloatPair {
	enum class EFortAIUtility Utility; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Value; // 0x04(0x04)
};

// ScriptStruct FortniteAI.UtilityContribution
// Size: 0x08 (Inherited: 0x00)
struct FUtilityContribution {
	float MaxContribution; // 0x00(0x04)
	enum class EFortCombatFactors ContributingFactor; // 0x04(0x01)
	enum class EFortAIDirectorFactor ContributingAIDirectorFactor; // 0x05(0x01)
	enum class EFortFactorContributionType ContributionType; // 0x06(0x01)
	char pad_7[0x1]; // 0x07(0x01)
};

// ScriptStruct FortniteAI.UtilityData
// Size: 0x40 (Inherited: 0x00)
struct FUtilityData {
	struct TArray<struct FUtilityContribution> ContributingFactors; // 0x00(0x10)
	float ContributionsTotal; // 0x10(0x04)
	bool bApplyRecentSelectionPenalty; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float RecentlySelectedPenaltyPercentage; // 0x18(0x04)
	float PenaltyFallOffRate; // 0x1c(0x04)
	struct FString DebugGraphName; // 0x20(0x10)
	struct FLinearColor DebugGraphColor; // 0x30(0x10)
};

// ScriptStruct FortniteAI.FortAIEncounterPIDControllerSettings
// Size: 0x30 (Inherited: 0x00)
struct FFortAIEncounterPIDControllerSettings {
	struct FCurveTableRowHandle ProportionalGain; // 0x00(0x10)
	struct FCurveTableRowHandle IntegralGain; // 0x10(0x10)
	struct FCurveTableRowHandle DerivativeGain; // 0x20(0x10)
};

// ScriptStruct FortniteAI.FortAIEncounterPIDController
// Size: 0x68 (Inherited: 0x00)
struct FFortAIEncounterPIDController {
	float ProportionalGain; // 0x00(0x04)
	float IntegralGain; // 0x04(0x04)
	float DerivativeGain; // 0x08(0x04)
	char pad_C[0x5c]; // 0x0c(0x5c)
};

// ScriptStruct FortniteAI.FortPlayerPerformanceEstimateSettings
// Size: 0x40 (Inherited: 0x00)
struct FFortPlayerPerformanceEstimateSettings {
	struct FCurveTableRowHandle PlayerPerformanceEstimateTransformMin; // 0x00(0x10)
	struct FCurveTableRowHandle PlayerPerformanceEstimateTransformOrigin; // 0x10(0x10)
	struct FCurveTableRowHandle PlayerPerformanceEstimateTransformMax; // 0x20(0x10)
	float EncounterPlayerPerformanceWeight; // 0x30(0x04)
	float PreviousWavePlayerPerformanceWeight; // 0x34(0x04)
	float CampaignPlayerPerformanceWeight; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct FortniteAI.FortEncounterPawnNumberCaps
// Size: 0x18 (Inherited: 0x00)
struct FFortEncounterPawnNumberCaps {
	bool bApplyPawnNumberCaps; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FCurveTableRowHandle> PawnCapsPerPlayerCount; // 0x08(0x10)
};

// ScriptStruct FortniteAI.FortAIEncounterSpawnGroupCap
// Size: 0x20 (Inherited: 0x00)
struct FFortAIEncounterSpawnGroupCap {
	struct FCurveTableRowHandle MinSpawnGroupNumberCap; // 0x00(0x10)
	struct FCurveTableRowHandle MaxSpawnGroupNumberCap; // 0x10(0x10)
};

// ScriptStruct FortniteAI.FortAIEncounterSpawnGroupCapsCategory
// Size: 0x140 (Inherited: 0x00)
struct FFortAIEncounterSpawnGroupCapsCategory {
	struct FGameplayTagQuery TagQuery; // 0x00(0x48)
	bool bApplyGroupPopulationCurveToCategoryMax; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct FCurveTableRowHandle InitialSpawnGroupAvailabilityDelaySeconds; // 0x50(0x10)
	struct FCurveTableRowHandle SpawnGroupAvailabilityDelaySeconds; // 0x60(0x10)
	struct FGameplayTagQuery UnlockingTagQuery; // 0x70(0x48)
	struct TArray<struct FFortAIEncounterSpawnGroupCap> SpawnGroupCapsPerPlayerCount; // 0xb8(0x10)
	float InitialSpawnGroupAvailabilityTime; // 0xc8(0x04)
	float NumActiveCategorySpawnGroups; // 0xcc(0x04)
	struct TArray<float> SpawnGroupAvailabilityTimes; // 0xd0(0x10)
	int32_t NumSpawnGroupAvailable; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct UObject* CategorySource; // 0xe8(0x08)
	char pad_F0[0x50]; // 0xf0(0x50)
};

// ScriptStruct FortniteAI.FortAIEncounterSpawnGroupCapsProfile
// Size: 0x30 (Inherited: 0x00)
struct FFortAIEncounterSpawnGroupCapsProfile {
	struct FGameplayTagContainer EncounterTypeTags; // 0x00(0x20)
	struct TArray<struct FFortAIEncounterSpawnGroupCapsCategory> PopulationCategories; // 0x20(0x10)
};

// ScriptStruct FortniteAI.FortAIEncounterSpawnPointsProfile
// Size: 0x40 (Inherited: 0x00)
struct FFortAIEncounterSpawnPointsProfile {
	struct FGameplayTagContainer EncounterTypeTags; // 0x00(0x20)
	struct TArray<struct FCurveTableRowHandle> MaxSpawnPointsPerPlayerCount; // 0x20(0x10)
	struct TArray<struct FCurveTableRowHandle> MinSpawnPointsPerPlayerCount; // 0x30(0x10)
};

// ScriptStruct FortniteAI.FortAIPawnUpgradeProbability
// Size: 0x58 (Inherited: 0x00)
struct FFortAIPawnUpgradeProbability {
	struct FGameplayTagQuery TagQuery; // 0x00(0x48)
	struct FCurveTableRowHandle UpgradeProbability; // 0x48(0x10)
};

// ScriptStruct FortniteAI.FortAISpawnGroupUpgradeData
// Size: 0x60 (Inherited: 0x00)
struct FFortAISpawnGroupUpgradeData {
	struct UFortAISpawnGroupUpgrade* SpawnGroupUpgrade; // 0x00(0x08)
	struct UFortAISpawnGroupUpgradeProbabilities* UpgradeProbabilities; // 0x08(0x08)
	struct UFortAISpawnGroupCapsCategorySet* SpawnGroupCapsCategories; // 0x10(0x08)
	struct FGameplayTagQuery EncounterTagRequirementsQuery; // 0x18(0x48)
};

// ScriptStruct FortniteAI.FortAIEncounterPawnDifficultyLevelModifier
// Size: 0x58 (Inherited: 0x00)
struct FFortAIEncounterPawnDifficultyLevelModifier {
	struct FGameplayTagQuery EncounterTagRequirementsQuery; // 0x00(0x48)
	struct FCurveTableRowHandle DifficultyLevelModifierCurve; // 0x48(0x10)
};

// ScriptStruct FortniteAI.FortPendingStoppedEncounterData
// Size: 0x10 (Inherited: 0x00)
struct FFortPendingStoppedEncounterData {
	struct UFortAIEncounterInfo* Encounter; // 0x00(0x08)
	enum class EFortObjectiveStatus ObjectiveStatus; // 0x08(0x01)
	bool bForceDestroyAI; // 0x09(0x01)
	bool bEncounterCompletedSuccessfully; // 0x0a(0x01)
	char pad_B[0x5]; // 0x0b(0x05)
};

// ScriptStruct FortniteAI.FortEncounterGroupLimitData
// Size: 0x0c (Inherited: 0x00)
struct FFortEncounterGroupLimitData {
	int32_t DesiredPawnNumCap; // 0x00(0x04)
	int32_t RemainingDesiredLimit; // 0x04(0x04)
	int32_t CurrentEncounterLimit; // 0x08(0x04)
};

// ScriptStruct FortniteAI.FortAIEncounterRequirements
// Size: 0x50 (Inherited: 0x00)
struct FFortAIEncounterRequirements {
	enum class EFortMissionType AssociatedMissionType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FGameplayTagQuery TagQuery; // 0x08(0x48)
};

// ScriptStruct FortniteAI.FortAIBaseLootDropRow
// Size: 0x40 (Inherited: 0x08)
struct FFortAIBaseLootDropRow : FTableRowBase {
	int32_t Priority; // 0x08(0x04)
	float ItemDropChance; // 0x0c(0x04)
	struct FName WorldItemLootTierGroup; // 0x10(0x04)
	struct FName WorldItemInstancedLootTierGroup; // 0x14(0x04)
	struct FName AccountItemLootTierGroup; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FGameplayTagContainer AITagsContainer; // 0x20(0x20)
};

// ScriptStruct FortniteAI.FortAILootDropModifierRow
// Size: 0x38 (Inherited: 0x08)
struct FFortAILootDropModifierRow : FTableRowBase {
	int32_t Priority; // 0x08(0x04)
	float ItemDropChanceMultiplier; // 0x0c(0x04)
	struct FName WorldItemLootTierGroup; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FGameplayTagContainer AITagsContainer; // 0x18(0x20)
};

// ScriptStruct FortniteAI.FortAILootDropModifiers
// Size: 0x60 (Inherited: 0x00)
struct FFortAILootDropModifiers {
	struct FFortAIEncounterRequirements Requirements; // 0x00(0x50)
	struct TArray<struct FDataTableRowHandle> LootDropModifierRows; // 0x50(0x10)
};

// ScriptStruct FortniteAI.LODAIUpdateInfo
// Size: 0x18 (Inherited: 0x00)
struct FLODAIUpdateInfo {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct FortniteAI.FortAIEncounterQueryData
// Size: 0x20 (Inherited: 0x00)
struct FFortAIEncounterQueryData {
	struct TArray<struct FVector> QueryLocations; // 0x00(0x10)
	struct TArray<struct AActor*> QueryActors; // 0x10(0x10)
};

// ScriptStruct FortniteAI.PlayerLODViewConeConfig
// Size: 0x80 (Inherited: 0x00)
struct FPlayerLODViewConeConfig {
	struct FScalableFloat ObserverVisionAngleDeg; // 0x00(0x28)
	struct FScalableFloat ViewConeMaxRadius; // 0x28(0x28)
	struct FScalableFloat AlwaysVisibleRadius; // 0x50(0x28)
	enum class EFortAILODLevel FortAILODLevel; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
};

// ScriptStruct FortniteAI.PlayerLODViewConeHysteresisConfig
// Size: 0x50 (Inherited: 0x00)
struct FPlayerLODViewConeHysteresisConfig {
	struct FScalableFloat AdditionalObserverVisionAngleDeg; // 0x00(0x28)
	struct FScalableFloat AdditionalRadius; // 0x28(0x28)
};

// ScriptStruct FortniteAI.FortAIDirectorPerLODConfig
// Size: 0x30 (Inherited: 0x00)
struct FFortAIDirectorPerLODConfig {
	struct FScalableFloat MaxNPCCosts; // 0x00(0x28)
	enum class EFortAILODLevel FortAILODLevel; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct FortniteAI.AIDirectorEventData
// Size: 0x30 (Inherited: 0x00)
struct FAIDirectorEventData {
	enum class EFortAIDirectorEvent event; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FCurveTableRowHandle DataMax; // 0x08(0x10)
	struct FCurveTableRowHandle CoolDownRate; // 0x18(0x10)
	enum class EFortAIDirectorEventContribution ContributionType; // 0x28(0x01)
	enum class EFortAIDirectorEventParticipant OwnerParticipantType; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
};

// ScriptStruct FortniteAI.FortAIDirectorFactorContribution
// Size: 0x0c (Inherited: 0x00)
struct FFortAIDirectorFactorContribution {
	enum class EFortAIDirectorEvent AIDirectorEvent; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float MaxContribution; // 0x04(0x04)
	enum class EFortAIDirectorFactorContribution ContributionType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct FortniteAI.FortAIDirectorFactorData
// Size: 0x20 (Inherited: 0x00)
struct FFortAIDirectorFactorData {
	enum class EFortAIDirectorFactor AIDirectorFactor; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FFortAIDirectorFactorContribution> ContributingEvents; // 0x08(0x10)
	float MaxValue; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct FortniteAI.SpawnGroupProgression
// Size: 0x08 (Inherited: 0x00)
struct FSpawnGroupProgression {
	struct UFortAISpawnGroup* SpawnGroup; // 0x00(0x08)
};

// ScriptStruct FortniteAI.AIEncounterSpawnGroupWeights
// Size: 0x18 (Inherited: 0x00)
struct FAIEncounterSpawnGroupWeights {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct FortniteAI.FortSpawnPointsPercentageCurve
// Size: 0x18 (Inherited: 0x08)
struct FFortSpawnPointsPercentageCurve : FTableRowBase {
	struct UCurveTable* SpawnPointsPercentageCurveTable; // 0x08(0x08)
	struct FName SpawnPointsPercentageCurveTableRow; // 0x10(0x04)
	float MaxRampTime; // 0x14(0x04)
};

// ScriptStruct FortniteAI.FortIntensityCurve
// Size: 0x38 (Inherited: 0x08)
struct FFortIntensityCurve : FTableRowBase {
	struct UCurveTable* IntensityCurveTable; // 0x08(0x08)
	struct FName IntensityCurveTableRow; // 0x10(0x04)
	float LowPlayerPerformancePeakIntensityThreshold; // 0x14(0x04)
	float NormalPlayerPerformancePeakIntensityThreshold; // 0x18(0x04)
	float HighPlayerPerformancePeakIntensityThreshold; // 0x1c(0x04)
	float MaxRampTime; // 0x20(0x04)
	float FadeEndIntensityThreshold; // 0x24(0x04)
	float StartIntensityOffsetFloor; // 0x28(0x04)
	float EndIntensityOffsetFloor; // 0x2c(0x04)
	float StartIntensityOffsetCeiling; // 0x30(0x04)
	float EndIntensityOffsetCeiling; // 0x34(0x04)
};

// ScriptStruct FortniteAI.CurrentIntensityAnalyticsBucket
// Size: 0x38 (Inherited: 0x00)
struct FCurrentIntensityAnalyticsBucket {
	char pad_0[0x38]; // 0x00(0x38)
};

// ScriptStruct FortniteAI.FortCurveSequenceInstanceInfo
// Size: 0x04 (Inherited: 0x00)
struct FFortCurveSequenceInstanceInfo {
	char pad_0[0x4]; // 0x00(0x04)
};

// ScriptStruct FortniteAI.FortSpawnPointsPercentageCurveSequenceInstanceInfo
// Size: 0x10 (Inherited: 0x04)
struct FFortSpawnPointsPercentageCurveSequenceInstanceInfo : FFortCurveSequenceInstanceInfo {
	char pad_4[0x4]; // 0x04(0x04)
	struct UFortSpawnPointsPercentageCurveSequence* SpawnPointsPercentageCurveSequence; // 0x08(0x08)
};

// ScriptStruct FortniteAI.FortIntensityCurveSequenceInstanceInfo
// Size: 0x10 (Inherited: 0x04)
struct FFortIntensityCurveSequenceInstanceInfo : FFortCurveSequenceInstanceInfo {
	char pad_4[0x4]; // 0x04(0x04)
	struct UFortIntensityCurveSequence* IntensityCurveSequence; // 0x08(0x08)
};

// ScriptStruct FortniteAI.SpawnGroupInstanceInfo
// Size: 0x108 (Inherited: 0x00)
struct FSpawnGroupInstanceInfo {
	struct UFortAISpawnGroup* SpawnGroup; // 0x00(0x08)
	int32_t NumActiveAlive; // 0x08(0x04)
	int32_t TotalGroupCost; // 0x0c(0x04)
	int32_t SpawnPointsUsed; // 0x10(0x04)
	int32_t NumEngaged; // 0x14(0x04)
	bool bReadyToSpawn; // 0x18(0x01)
	bool bFinishedSpawning; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)
	struct FGuid GroupGuid; // 0x1c(0x10)
	int32_t EnemySpawnDataIndex; // 0x2c(0x04)
	float TimeSelected; // 0x30(0x04)
	int32_t NextEnemyToSpawnIndex; // 0x34(0x04)
	struct FGameplayTagContainer UpgradeTags; // 0x38(0x20)
	struct FFortAISpawnGroupUpgradeUIData UpgradeUIData; // 0x58(0x70)
	struct TArray<struct FFortAIPawnUpgradeData> PawnUpgrades; // 0xc8(0x10)
	struct TArray<struct UFortGameplayModifierItemDefinition*> ModifiersForAllPawns; // 0xd8(0x10)
	struct TArray<struct AFortAIPawn*> PawnList; // 0xe8(0x10)
	struct TArray<struct AFortAIPawn*> LifespanExpiredList; // 0xf8(0x10)
};

// ScriptStruct FortniteAI.FortAIPawnUpgradeData
// Size: 0x48 (Inherited: 0x00)
struct FFortAIPawnUpgradeData {
	struct FCurveTableRowHandle SpawnPointsMultiplierCurve; // 0x00(0x10)
	struct FCurveTableRowHandle LifespanMultiplierCurve; // 0x10(0x10)
	struct FCurveTableRowHandle ScoreMultiplierCurve; // 0x20(0x10)
	struct UFortGameplayModifierItemDefinition* ModifierDefinition; // 0x30(0x08)
	struct TArray<struct UFortGameplayModifierItemDefinition*> AdditionalModifiers; // 0x38(0x10)
};

// ScriptStruct FortniteAI.FortSpawnAIRequest
// Size: 0x68 (Inherited: 0x00)
struct FFortSpawnAIRequest {
	struct FGuid SpawnGroupInstanceGuid; // 0x00(0x10)
	int32_t EnemyIndex; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FVector SpawnLocation; // 0x18(0x18)
	struct FRotator SpawnRotation; // 0x30(0x18)
	struct AActor* SpawnPoint; // 0x48(0x08)
	struct TArray<struct UFortAbilitySet*> AbilitySetsToGrantOnSpawn; // 0x50(0x10)
	bool bIgnoreCollisionWhenSpawning; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	float SpawnDelay; // 0x64(0x04)
};

// ScriptStruct FortniteAI.FortAISpawnerData
// Size: 0x78 (Inherited: 0x00)
struct FFortAISpawnerData {
	struct FGuid SpawnGroupInstanceGuid; // 0x00(0x10)
	struct FFortSpawnAIRequest ReservedSpawnRequest; // 0x10(0x68)
};

// ScriptStruct FortniteAI.FortEncounterAIDirectorFactor
// Size: 0x0c (Inherited: 0x00)
struct FFortEncounterAIDirectorFactor {
	float CurrentValue; // 0x00(0x04)
	float AccumulatedPeriodValue; // 0x04(0x04)
	float TotalPeriodTime; // 0x08(0x04)
};

// ScriptStruct FortniteAI.EncounterEnvironmentQueryInstance
// Size: 0x58 (Inherited: 0x00)
struct FEncounterEnvironmentQueryInstance {
	struct FEncounterEnvironmentQueryInfo EnvironmentQueryInfo; // 0x00(0x28)
	int32_t QueryID; // 0x28(0x04)
	bool bIsWaitingForQueryResults; // 0x2c(0x01)
	enum class EFortEncounterDirection ChosenDirection; // 0x2d(0x01)
	char pad_2E[0x2]; // 0x2e(0x02)
	struct TArray<struct FVector> QueryLocations; // 0x30(0x10)
	struct TArray<struct ABuildingRift*> FoundRifts; // 0x40(0x10)
	int32_t NumTimesUsed; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct FortniteAI.FortAIEncounterWaveProgressEstimation
// Size: 0x1c (Inherited: 0x00)
struct FFortAIEncounterWaveProgressEstimation {
	float SectionProgressEstimate; // 0x00(0x04)
	float SectionStartTime; // 0x04(0x04)
	float LastWaveProgressUpdateTime; // 0x08(0x04)
	float PeakAndFadeWavePercentage; // 0x0c(0x04)
	float MaxAdjustmentPerSecond; // 0x10(0x04)
	enum class EFortAIWaveProgressSection CurrentSection; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	int32_t NumberOfWaveSegments; // 0x18(0x04)
};

// ScriptStruct FortniteAI.FortGoalActorEncounterDataManagerPair
// Size: 0x10 (Inherited: 0x00)
struct FFortGoalActorEncounterDataManagerPair {
	struct AActor* GoalActor; // 0x00(0x08)
	struct AFortAIDirectorDataManager* EncounterDataManager; // 0x08(0x08)
};

// ScriptStruct FortniteAI.FortAIEncounterRift
// Size: 0x30 (Inherited: 0x00)
struct FFortAIEncounterRift {
	int32_t QueryID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FVector RiftLocation; // 0x08(0x18)
	struct ABuildingRift* RiftActor; // 0x20(0x08)
	struct FFortRiftReservationHandle RiftReservationHandle; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct FortniteAI.FortAIEncounterSpawnArea
// Size: 0x58 (Inherited: 0x00)
struct FFortAIEncounterSpawnArea {
	struct TArray<struct FEncounterEnvironmentQueryInstance> QueryInstances; // 0x00(0x10)
	struct TArray<struct FFortAIEncounterRift> PendingRifts; // 0x10(0x10)
	struct TArray<struct FFortAIEncounterRift> Rifts; // 0x20(0x10)
	struct TArray<struct FVector> UsedRiftLocations; // 0x30(0x10)
	struct TArray<struct UFortPathCostEstimator*> PathEstimators; // 0x40(0x10)
	bool bIsActive; // 0x50(0x01)
	bool bUsingFallbackQuery; // 0x51(0x01)
	enum class EFortEncounterSpawnLocationManagementMode SpawnLocationManagementMode; // 0x52(0x01)
	char pad_53[0x5]; // 0x53(0x05)
};

// ScriptStruct FortniteAI.FortAIEncounterRiftManagerInitializationData
// Size: 0x130 (Inherited: 0x00)
struct FFortAIEncounterRiftManagerInitializationData {
	struct UFortAIEncounterInfo* EncounterInfo; // 0x00(0x08)
	struct FFortEncounterSettings EncounterSettings; // 0x08(0xc0)
	struct FEncounterEnvironmentQueryInfo CurrentEnvironmentQueryInfo; // 0xc8(0x28)
	struct FEncounterEnvironmentQueryInfo FallbackEnvironmentQueryInfo; // 0xf0(0x28)
	struct ABuildingRift* RiftClassTemplate; // 0x118(0x08)
	int32_t NumRiftsToUse; // 0x120(0x04)
	int32_t MinRiftsToUse; // 0x124(0x04)
	float UpdateIntervalTimeSeconds; // 0x128(0x04)
	char pad_12C[0x4]; // 0x12c(0x04)
};

// ScriptStruct FortniteAI.FortAIEncounterQueryDirectionTracker
// Size: 0x48 (Inherited: 0x00)
struct FFortAIEncounterQueryDirectionTracker {
	bool bHasTriedPreviousDirections; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<enum class EFortEncounterDirection> PreviousQueryDirections; // 0x08(0x10)
	struct TArray<enum class EFortEncounterDirection> ChosenDirections; // 0x18(0x10)
	struct TArray<enum class EFortEncounterDirection> FailedDirections; // 0x28(0x10)
	struct TArray<enum class EFortEncounterDirection> AvailableDirections; // 0x38(0x10)
};

// ScriptStruct FortniteAI.FortAIGoalInfo
// Size: 0x28 (Inherited: 0x00)
struct FFortAIGoalInfo {
	struct TWeakObjectPtr<struct AActor> Actor; // 0x00(0x08)
	struct FVector Location; // 0x08(0x18)
	bool bActorAlwaysPerceived; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct FortniteAI.FortAIGoal
// Size: 0x38 (Inherited: 0x28)
struct FFortAIGoal : FFortAIGoalInfo {
	char pad_28[0x10]; // 0x28(0x10)
};

// ScriptStruct FortniteAI.AIDiscouragedGoalTimer
// Size: 0x38 (Inherited: 0x00)
struct FAIDiscouragedGoalTimer {
	struct FFortAIGoalInfo DiscouragedGoalInfo; // 0x00(0x28)
	double ExpirationTime; // 0x28(0x08)
	uint32_t NumberOfTimesMarkedForDiscouragement; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct FortniteAI.AIAssignmentInfo
// Size: 0xa8 (Inherited: 0x00)
struct FAIAssignmentInfo {
	struct TWeakObjectPtr<struct UFortAIAssignment> CurrentAssignment; // 0x00(0x08)
	struct FFortAIGoalInfo CurrentGoal; // 0x08(0x28)
	float TimeCurrentGoalWasChosen; // 0x30(0x04)
	float TimeExitedLastAssignmentOfType[0x4]; // 0x34(0x10)
	struct TWeakObjectPtr<struct UFortAIAssignment> PreviousAssignment; // 0x44(0x08)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FFortAIGoalInfo PreviousGoal; // 0x50(0x28)
	bool bWaitingForQueryResponse; // 0x78(0x01)
	bool bSuppressGoalUpdates; // 0x79(0x01)
	bool bReportEnemyGoalSelection; // 0x7a(0x01)
	char pad_7B[0x2d]; // 0x7b(0x2d)
};

// ScriptStruct FortniteAI.GoalSelectionCriteria
// Size: 0x28 (Inherited: 0x00)
struct FGoalSelectionCriteria {
	struct TSoftObjectPtr<UEnvQuery> GoalSelectionQuery; // 0x00(0x28)
};

// ScriptStruct FortniteAI.EncounterGoalSelectionTableEntry
// Size: 0x48 (Inherited: 0x00)
struct FEncounterGoalSelectionTableEntry {
	struct FGameplayTagContainer RequiredGameplayTags; // 0x00(0x20)
	struct FGoalSelectionCriteria GoalSelectionCriteria; // 0x20(0x28)
};

// ScriptStruct FortniteAI.PawnGoalSelectionCriteria
// Size: 0x50 (Inherited: 0x00)
struct FPawnGoalSelectionCriteria {
	struct FGameplayTagContainer IncludeEnemiesWithTags; // 0x00(0x20)
	struct FGameplayTagContainer ExcludeEnemiesWithTags; // 0x20(0x20)
	struct TArray<struct FGoalSelectionCriteria> GoalSelectionCriteria; // 0x40(0x10)
};

// ScriptStruct FortniteAI.PawnGoalSelectionTableEntry
// Size: 0x70 (Inherited: 0x00)
struct FPawnGoalSelectionTableEntry {
	struct FGameplayTagContainer RequiredGameplayTags; // 0x00(0x20)
	struct FPawnGoalSelectionCriteria PawnGoalSelectionCriteria; // 0x20(0x50)
};

// ScriptStruct FortniteAI.AutoAcquireSlot
// Size: 0x28 (Inherited: 0x10)
struct FAutoAcquireSlot : FAIHotSpotSlotInfo {
	char pad_10[0x18]; // 0x10(0x18)
};

// ScriptStruct FortniteAI.AISpawnCountInfo
// Size: 0x20 (Inherited: 0x00)
struct FAISpawnCountInfo {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct FortniteAI.FortAIPawnMaterialDefinition
// Size: 0x30 (Inherited: 0x00)
struct FFortAIPawnMaterialDefinition {
	struct TSoftObjectPtr<UMaterialInterface> Material; // 0x00(0x28)
	bool bRequireDynamicInstance; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct FortniteAI.FortAIPawnVariantDefinition
// Size: 0x68 (Inherited: 0x00)
struct FFortAIPawnVariantDefinition {
	struct AFortAIPawn* PawnClass; // 0x00(0x08)
	struct FCurveTableRowHandle VariantWeightCurve; // 0x08(0x10)
	float CurrentWeight; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FGameplayTagQuery RequiredTagsQuery; // 0x20(0x48)
};

// ScriptStruct FortniteAI.FortVariantSpawnPoints
// Size: 0x10 (Inherited: 0x08)
struct FFortVariantSpawnPoints : FTableRowBase {
	int32_t BudgetPoints; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct FortniteAI.FortAIRuntimePerkInfo
// Size: 0x40 (Inherited: 0x00)
struct FFortAIRuntimePerkInfo {
	char pad_0[0x40]; // 0x00(0x40)
};

// ScriptStruct FortniteAI.SpawnGroupEnemy
// Size: 0x10 (Inherited: 0x00)
struct FSpawnGroupEnemy {
	struct UFortAIPawnVariant* EnemyVariantClass; // 0x00(0x08)
	bool bOverrideVariantSpawnPointValue; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t SpawnValue; // 0x0c(0x04)
};

// ScriptStruct FortniteAI.FortSpawnGroupEncounterTypeData
// Size: 0x40 (Inherited: 0x00)
struct FFortSpawnGroupEncounterTypeData {
	struct FGameplayTagContainer EncounterTypeTags; // 0x00(0x20)
	struct FCurveTableRowHandle MaxGroupCategoryPopulationDensityCurve; // 0x20(0x10)
	struct FCurveTableRowHandle RespawnDelayCurve; // 0x30(0x10)
};

// ScriptStruct FortniteAI.FortAIPawnUpgrade
// Size: 0x58 (Inherited: 0x00)
struct FFortAIPawnUpgrade {
	struct FGameplayTagQuery TagQuery; // 0x00(0x48)
	struct TArray<struct FFortAIPawnUpgradeData> PawnUpgradeDataPerPlayerCount; // 0x48(0x10)
};

// ScriptStruct FortniteAI.FortMoveConfig
// Size: 0x38 (Inherited: 0x00)
struct FFortMoveConfig {
	char pad_0[0x28]; // 0x00(0x28)
	struct AActor* FocusTarget; // 0x28(0x08)
	struct AFortPawn* PushPawnClassOnBump; // 0x30(0x08)
};

// ScriptStruct FortniteAI.FortAIAssignmentIdentifier
// Size: 0x30 (Inherited: 0x00)
struct FFortAIAssignmentIdentifier {
	enum class EAssignmentType AssignmentType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FGameplayTagContainer AssignmentGameplayTags; // 0x08(0x20)
	enum class EFortTeam AssignmentTeam; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct FortniteAI.BuildingActorNavArea
// Size: 0x04 (Inherited: 0x00)
struct FBuildingActorNavArea {
	int32_t AreaBits; // 0x00(0x04)
};

// ScriptStruct FortniteAI.FortNavLinkPattern
// Size: 0x08 (Inherited: 0x00)
struct FFortNavLinkPattern {
	int32_t PatternBits; // 0x00(0x04)
	int32_t WildcardBits; // 0x04(0x04)
};

// ScriptStruct FortniteAI.AIHotSpotUseInfo
// Size: 0x18 (Inherited: 0x10)
struct FAIHotSpotUseInfo : FAIHotSpotSlotInfo {
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct FortniteAI.DistanceToTargetComparison
// Size: 0x38 (Inherited: 0x00)
struct FDistanceToTargetComparison {
	bool bUseOverriddenValue; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float OverriddenValue; // 0x04(0x04)
	struct FGameplayTagContainer DistanceDataTags; // 0x08(0x20)
	bool bUseAddedOffset; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float AddedOffset; // 0x2c(0x04)
	enum class EArithmeticKeyOperation Operator; // 0x30(0x01)
	enum class ETargetDistanceComparisonType ComparisonType; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
};

// ScriptStruct FortniteAI.AIScalableFloat
// Size: 0x38 (Inherited: 0x00)
struct FAIScalableFloat {
	struct FScalableFloat ScalableFloat; // 0x00(0x28)
	enum class EAIScalableFloatScalingType ScalingType; // 0x28(0x04)
	char pad_2C[0xc]; // 0x2c(0x0c)
};

// ScriptStruct FortniteAI.DigestedAimingCircleSettings
// Size: 0x160 (Inherited: 0x00)
struct FDigestedAimingCircleSettings {
	bool bUseAimingCircle; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float CircleCenterOffsetZ; // 0x04(0x04)
	struct FScalableFloat MinCircleOpeningAngleVerticalCurve; // 0x08(0x28)
	struct FScalableFloat MaxCircleOpeningAngleVerticalCurve; // 0x30(0x28)
	struct FScalableFloat MinCircleOpeningAngleHorizontalCurve; // 0x58(0x28)
	struct FScalableFloat MaxCircleOpeningAngleHorizontalCurve; // 0x80(0x28)
	float MinCursorRotationSpeed; // 0xa8(0x04)
	float MaxCursorRotationSpeed; // 0xac(0x04)
	float MinCursorUpdateInterval; // 0xb0(0x04)
	float MaxCursorUpdateInterval; // 0xb4(0x04)
	float MinCursorTrackingFrequency; // 0xb8(0x04)
	float MaxCursorTrackingFrequency; // 0xbc(0x04)
	struct FScalableFloat CircleShrinkCurve; // 0xc0(0x28)
	float MinDistanceForTimeBetweenHits; // 0xe8(0x04)
	float MaxDistanceForTimeBetweenHits; // 0xec(0x04)
	float MinTimeBetweenHitsAtMinRange; // 0xf0(0x04)
	float MaxTimeBetweenHitsAtMinRange; // 0xf4(0x04)
	float MinTimeBetweenHitsAtMaxRange; // 0xf8(0x04)
	float MaxTimeBetweenHitsAtMaxRange; // 0xfc(0x04)
	bool bForceMissEnabled; // 0x100(0x01)
	bool bPreventHeadshots; // 0x101(0x01)
	char pad_102[0x6]; // 0x102(0x06)
	struct FScalableFloat WeaponSpreadContributionToClampCurve; // 0x108(0x28)
	float KillingBlowGracePeriodAtMinRange; // 0x130(0x04)
	float KillingBlowGracePeriodAtMaxRange; // 0x134(0x04)
	struct FScalableFloat ExtraHitOddsCurve; // 0x138(0x28)
};

// ScriptStruct FortniteAI.AimingCircleSettings
// Size: 0x3e8 (Inherited: 0x00)
struct FAimingCircleSettings {
	struct FScalableFloat UseAimingCircle; // 0x00(0x28)
	struct FScalableFloat CircleCenterOffsetZ; // 0x28(0x28)
	struct FScalableFloat MinCircleOpeningAngleVerticalCurve; // 0x50(0x28)
	struct FScalableFloat MaxCircleOpeningAngleVerticalCurve; // 0x78(0x28)
	struct FScalableFloat MinCircleOpeningAngleHorizontalCurve; // 0xa0(0x28)
	struct FScalableFloat MaxCircleOpeningAngleHorizontalCurve; // 0xc8(0x28)
	struct FScalableFloat MinCursorRotationSpeed; // 0xf0(0x28)
	struct FScalableFloat MaxCursorRotationSpeed; // 0x118(0x28)
	struct FScalableFloat MinCursorUpdateInterval; // 0x140(0x28)
	struct FScalableFloat MaxCursorUpdateInterval; // 0x168(0x28)
	struct FScalableFloat MinCursorTrackingFrequency; // 0x190(0x28)
	struct FScalableFloat MaxCursorTrackingFrequency; // 0x1b8(0x28)
	struct FScalableFloat CircleShrinkCurve; // 0x1e0(0x28)
	struct FScalableFloat MinDistanceForTimeBetweenHits; // 0x208(0x28)
	struct FScalableFloat MaxDistanceForTimeBetweenHits; // 0x230(0x28)
	struct FScalableFloat MinTimeBetweenHitsAtMinRange; // 0x258(0x28)
	struct FScalableFloat MaxTimeBetweenHitsAtMinRange; // 0x280(0x28)
	struct FScalableFloat MinTimeBetweenHitsAtMaxRange; // 0x2a8(0x28)
	struct FScalableFloat MaxTimeBetweenHitsAtMaxRange; // 0x2d0(0x28)
	struct FScalableFloat ForceMissEnabled; // 0x2f8(0x28)
	struct FScalableFloat PreventHeadshots; // 0x320(0x28)
	struct FScalableFloat WeaponSpreadContributionToClampCurve; // 0x348(0x28)
	struct FScalableFloat KillingBlowGracePeriodAtMinRange; // 0x370(0x28)
	struct FScalableFloat KillingBlowGracePeriodAtMaxRange; // 0x398(0x28)
	struct FScalableFloat ExtraHitOddsCurve; // 0x3c0(0x28)
};

// ScriptStruct FortniteAI.TargetBasedAccuracy
// Size: 0x118 (Inherited: 0x00)
struct FTargetBasedAccuracy {
	struct FScalableFloat AimTrackingOffsetErrorMultiplier; // 0x00(0x28)
	struct FScalableFloat AimTrackingHeightOffsetErrorMultiplier; // 0x28(0x28)
	struct FScalableFloat AimTrackingDistanceErrorMultiplier; // 0x50(0x28)
	struct FScalableFloat AimTrackingReactionTimeMultiplier; // 0x78(0x28)
	struct FScalableFloat AimTrackingInterpTimeMultiplier; // 0xa0(0x28)
	struct FScalableFloat AimTrackingInAirVelocityThresholdMultiplier; // 0xc8(0x28)
	struct FScalableFloat AimTrackinginAirHeightDataThresholdMultiplier; // 0xf0(0x28)
};

// ScriptStruct FortniteAI.DigestedTargetBasedAccuracy
// Size: 0x1c (Inherited: 0x00)
struct FDigestedTargetBasedAccuracy {
	float AimTrackingOffsetErrorMultiplier; // 0x00(0x04)
	float AimTrackingHeightOffsetErrorMultiplier; // 0x04(0x04)
	float AimTrackingDistanceErrorMultiplier; // 0x08(0x04)
	float AimTrackingReactionTimeMultiplier; // 0x0c(0x04)
	float AimTrackingInterpTimeMultiplier; // 0x10(0x04)
	float AimTrackingInAirVelocityThresholdMultiplier; // 0x14(0x04)
	float AimTrackinginAirHeightDataThresholdMultiplier; // 0x18(0x04)
};

// ScriptStruct FortniteAI.TargetBasedAccuracyCategory
// Size: 0x138 (Inherited: 0x00)
struct FTargetBasedAccuracyCategory {
	struct FGameplayTagContainer Tags; // 0x00(0x20)
	struct FTargetBasedAccuracy TargetBasedAccuracy; // 0x20(0x118)
};

// ScriptStruct FortniteAI.DigestedTargetBasedAccuracyCategory
// Size: 0x40 (Inherited: 0x00)
struct FDigestedTargetBasedAccuracyCategory {
	struct FGameplayTagContainer Tags; // 0x00(0x20)
	struct FDigestedTargetBasedAccuracy TargetBasedAccuracy; // 0x20(0x1c)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct FortniteAI.WeaponAccuracy
// Size: 0x738 (Inherited: 0x00)
struct FWeaponAccuracy {
	struct FScalableFloat MaxTrackingOffsetError; // 0x00(0x28)
	struct FScalableFloat TargetingMaxTrackingOffsetError; // 0x28(0x28)
	struct FScalableFloat MaxTrackingDistanceFarError; // 0x50(0x28)
	struct FScalableFloat TargetingMaxTrackingDistanceFarError; // 0x78(0x28)
	struct FScalableFloat MaxTrackingDistanceNearError; // 0xa0(0x28)
	struct FScalableFloat TargetingMaxTrackingDistanceNearError; // 0xc8(0x28)
	struct FScalableFloat TrackingDistanceNearErrorProbability; // 0xf0(0x28)
	struct FScalableFloat TargetingActivationProbability; // 0x118(0x28)
	struct FScalableFloat FiringRestrictedToTargetingActive; // 0x140(0x28)
	struct FScalableFloat MinimumDistanceForAiming; // 0x168(0x28)
	struct FScalableFloat MinimumDistanceForPawnAiming; // 0x190(0x28)
	struct FScalableFloat IdealAttackRange; // 0x1b8(0x28)
	struct FScalableFloat TargetingIdealAttackRange; // 0x1e0(0x28)
	struct FScalableFloat MaxAttackRangeFactor; // 0x208(0x28)
	struct FScalableFloat ShouldAimAtTargetsFeet; // 0x230(0x28)
	struct FScalableFloat ShouldUseProjectileArcForAiming; // 0x258(0x28)
	struct FScalableFloat KeepAimingOnSameSideWhileFiring; // 0x280(0x28)
	struct FScalableFloat MaxTrackingHeightOffsetError; // 0x2a8(0x28)
	struct FScalableFloat MinRotationInterpSpeed; // 0x2d0(0x28)
	struct FScalableFloat MaxRotationInterpSpeed; // 0x2f8(0x28)
	struct FScalableFloat ConsiderProjectileTravelTime; // 0x320(0x28)
	bool bOverrideAimingCircleSettings; // 0x348(0x01)
	char pad_349[0x7]; // 0x349(0x07)
	struct FAimingCircleSettings AimingCircleSettingsOverride; // 0x350(0x3e8)
};

// ScriptStruct FortniteAI.WeaponAccuracyCategorySpecialization
// Size: 0x758 (Inherited: 0x00)
struct FWeaponAccuracyCategorySpecialization {
	struct FGameplayTagContainer Tags; // 0x00(0x20)
	struct FWeaponAccuracy WeaponAccuracy; // 0x20(0x738)
};

// ScriptStruct FortniteAI.WeaponAccuracyCategory
// Size: 0x768 (Inherited: 0x00)
struct FWeaponAccuracyCategory {
	struct FGameplayTagContainer Tags; // 0x00(0x20)
	struct FWeaponAccuracy WeaponAccuracy; // 0x20(0x738)
	struct TArray<struct FWeaponAccuracyCategorySpecialization> Specializations; // 0x758(0x10)
};

// ScriptStruct FortniteAI.DigestedWeaponAccuracy
// Size: 0x320 (Inherited: 0x00)
struct FDigestedWeaponAccuracy {
	struct FScalableFloat TrackingOffsetError; // 0x00(0x28)
	struct FScalableFloat TargetingTrackingOffsetError; // 0x28(0x28)
	struct FScalableFloat TrackingDistanceFarError; // 0x50(0x28)
	struct FScalableFloat TargetingTrackingDistanceFarError; // 0x78(0x28)
	struct FScalableFloat TrackingDistanceNearError; // 0xa0(0x28)
	struct FScalableFloat TargetingTrackingDistanceNearError; // 0xc8(0x28)
	struct FScalableFloat TrackingDistanceNearErrorProbability; // 0xf0(0x28)
	struct FScalableFloat TargetingActivationProbability; // 0x118(0x28)
	struct FScalableFloat FiringRestrictedToTargetingActive; // 0x140(0x28)
	float MinimumDistanceForAiming; // 0x168(0x04)
	float MinimumDistanceForPawnAiming; // 0x16c(0x04)
	float IdealAttackRange; // 0x170(0x04)
	float TargetingIdealAttackRange; // 0x174(0x04)
	float MaxAttackRange; // 0x178(0x04)
	float ChanceToAimAtTargetsFeet; // 0x17c(0x04)
	struct FScalableFloat ShouldUseProjectileArcForAiming; // 0x180(0x28)
	bool bKeepAimingOnSameSideWhileFiring; // 0x1a8(0x01)
	char pad_1A9[0x3]; // 0x1a9(0x03)
	float MaxTrackingHeightOffsetError; // 0x1ac(0x04)
	float MinRotationInterpSpeed; // 0x1b0(0x04)
	float MaxRotationInterpSpeed; // 0x1b4(0x04)
	bool bOverrideAimingCircleSettings; // 0x1b8(0x01)
	bool bConsiderProjectileTravelTime; // 0x1b9(0x01)
	char pad_1BA[0x6]; // 0x1ba(0x06)
	struct FDigestedAimingCircleSettings AimingCircleSettingsOverride; // 0x1c0(0x160)
};

// ScriptStruct FortniteAI.DigestedWeaponAccuracyCategorySpecialization
// Size: 0x340 (Inherited: 0x00)
struct FDigestedWeaponAccuracyCategorySpecialization {
	struct FGameplayTagContainer Tags; // 0x00(0x20)
	struct FDigestedWeaponAccuracy WeaponAccuracy; // 0x20(0x320)
};

// ScriptStruct FortniteAI.DigestedWeaponAccuracyCategory
// Size: 0x350 (Inherited: 0x00)
struct FDigestedWeaponAccuracyCategory {
	struct FGameplayTagContainer Tags; // 0x00(0x20)
	struct FDigestedWeaponAccuracy WeaponAccuracy; // 0x20(0x320)
	struct TArray<struct FDigestedWeaponAccuracyCategorySpecialization> Specializations; // 0x340(0x10)
};

// ScriptStruct FortniteAI.TrackingOffsetModifiers
// Size: 0x168 (Inherited: 0x00)
struct FTrackingOffsetModifiers {
	struct FScalableFloat CombatStartDuration; // 0x00(0x28)
	struct FScalableFloat TargetLowHealthThreshold; // 0x28(0x28)
	struct FScalableFloat Curves[0x3]; // 0x50(0x78)
	struct FScalableFloat DistanceCurves[0x3]; // 0xc8(0x78)
	struct FScalableFloat InAirHeightCurve; // 0x140(0x28)
};

// ScriptStruct FortniteAI.TrackingOffsetModifierInfo
// Size: 0x1b8 (Inherited: 0x00)
struct FTrackingOffsetModifierInfo {
	struct FScalableFloat MinSkill; // 0x00(0x28)
	struct FScalableFloat MaxSkill; // 0x28(0x28)
	struct FTrackingOffsetModifiers Modifiers; // 0x50(0x168)
};

// ScriptStruct FortniteAI.DigestedTrackingOffsetModifierCurves
// Size: 0x28 (Inherited: 0x00)
struct FDigestedTrackingOffsetModifierCurves {
	int32_t Values[0xa]; // 0x00(0x28)
};

// ScriptStruct FortniteAI.DigestedTrackingOffsetModifiers
// Size: 0x120 (Inherited: 0x00)
struct FDigestedTrackingOffsetModifiers {
	float CombatStartDuration; // 0x00(0x04)
	float TargetLowHealthThreshold; // 0x04(0x04)
	struct FDigestedTrackingOffsetModifierCurves Curves[0x3]; // 0x08(0x78)
	struct FDigestedTrackingOffsetModifierCurves DistanceCurves[0x3]; // 0x80(0x78)
	struct FDigestedTrackingOffsetModifierCurves InAirHeightCurve; // 0xf8(0x28)
};

// ScriptStruct FortniteAI.LookAtDigestedSetting
// Size: 0x10 (Inherited: 0x00)
struct FLookAtDigestedSetting {
	float LookAtDuration; // 0x00(0x04)
	float LookAtDurationDeviation; // 0x04(0x04)
	float LookAtDelay; // 0x08(0x04)
	float LookAtDelayDeviation; // 0x0c(0x04)
};

// ScriptStruct FortniteAI.FocusSetting
// Size: 0xf0 (Inherited: 0x00)
struct FFocusSetting {
	struct FGameplayTagQuery WeaponTagQuery; // 0x00(0x48)
	bool bRequireAmmoToMatch; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct FScalableFloat IgnoreThreatTimeWhenNotAttacking; // 0x50(0x28)
	struct FScalableFloat IgnoreThreatDeviationWhenNotAttacking; // 0x78(0x28)
	struct FScalableFloat IgnoreThreatDuration; // 0xa0(0x28)
	struct FScalableFloat IgnoreThreatDurationDeviation; // 0xc8(0x28)
};

// ScriptStruct FortniteAI.DigestedFocusSetting
// Size: 0x60 (Inherited: 0x00)
struct FDigestedFocusSetting {
	struct FGameplayTagQuery WeaponTagQuery; // 0x00(0x48)
	bool bRequireAmmoToMatch; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	float IgnoreThreatTimeWhenNotAttacking; // 0x4c(0x04)
	float IgnoreThreatDeviationWhenNotAttacking; // 0x50(0x04)
	float IgnoreThreatDuration; // 0x54(0x04)
	float IgnoreThreatDurationDeviation; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct FortniteAI.LookAtSetting
// Size: 0xa0 (Inherited: 0x00)
struct FLookAtSetting {
	struct FScalableFloat LookAtDuration; // 0x00(0x28)
	struct FScalableFloat LookAtDurationDeviation; // 0x28(0x28)
	struct FScalableFloat LookAtDelay; // 0x50(0x28)
	struct FScalableFloat LookAtDelayDeviation; // 0x78(0x28)
};

// ScriptStruct FortniteAI.FortAthenaAIBotBuildingQueue
// Size: 0x30 (Inherited: 0x00)
struct FFortAthenaAIBotBuildingQueue {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct FortniteAI.FortAthenaAIBotBuildDescriptor
// Size: 0x10 (Inherited: 0x00)
struct FFortAthenaAIBotBuildDescriptor {
	struct FIntVector Location; // 0x00(0x0c)
	enum class EOrientedConstructionBuildingType BuildingType; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct FortniteAI.AthenaFortAIBotWeightedBuildingList
// Size: 0x38 (Inherited: 0x00)
struct FAthenaFortAIBotWeightedBuildingList {
	struct FScalableFloat Weight; // 0x00(0x28)
	struct TArray<struct FFortAthenaAIBotBuildDescriptor> BuildDescriptors; // 0x28(0x10)
};

// ScriptStruct FortniteAI.AthenaFortAIBotDigestedWeightedBuildingList
// Size: 0x18 (Inherited: 0x00)
struct FAthenaFortAIBotDigestedWeightedBuildingList {
	float Weight; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FFortAthenaAIBotBuildDescriptor> BuildDescriptors; // 0x08(0x10)
};

// ScriptStruct FortniteAI.FortBotInventoryInfo
// Size: 0x18 (Inherited: 0x00)
struct FFortBotInventoryInfo {
	struct UFortItemDefinition* ItemDefinition; // 0x00(0x08)
	struct UFortWorldItem* FortItem; // 0x08(0x08)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct FortniteAI.MMRSpawningBracketBaseDataTableRow
// Size: 0x10 (Inherited: 0x08)
struct FMMRSpawningBracketBaseDataTableRow : FTableRowBase {
	int32_t MMRBracketLow; // 0x08(0x04)
	int32_t MMRBracketHigh; // 0x0c(0x04)
};

// ScriptStruct FortniteAI.MMRSpawningBracketNPCDataTableRow
// Size: 0x18 (Inherited: 0x10)
struct FMMRSpawningBracketNPCDataTableRow : FMMRSpawningBracketBaseDataTableRow {
	float Skill; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct FortniteAI.FortAthenaAIBotRunTimeCustomizationData
// Size: 0x0c (Inherited: 0x00)
struct FFortAthenaAIBotRunTimeCustomizationData {
	struct FGameplayTag PredefinedCosmeticSetTag; // 0x00(0x04)
	float CullDistanceSquared; // 0x04(0x04)
	bool bCheckForOverlaps; // 0x08(0x01)
	bool bHasCustomSquadId; // 0x09(0x01)
	char CustomSquadId; // 0x0a(0x01)
	char pad_B[0x1]; // 0x0b(0x01)
};

// ScriptStruct FortniteAI.SmartObjectActivityResult
// Size: 0x10 (Inherited: 0x00)
struct FSmartObjectActivityResult {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct FortniteAI.DigestedEvasiveManeuverSkillSettings
// Size: 0x58 (Inherited: 0x00)
struct FDigestedEvasiveManeuverSkillSettings {
	float JumpDelay; // 0x00(0x04)
	float JumpRandomDeviationDelay; // 0x04(0x04)
	float CrouchDelay; // 0x08(0x04)
	float CrouchRandomDeviationDelay; // 0x0c(0x04)
	float DodgeDelay; // 0x10(0x04)
	float DodgeRandomDeviationDelay; // 0x14(0x04)
	float CrouchOverlayWeight; // 0x18(0x04)
	float JumpOverlayWeight; // 0x1c(0x04)
	float NoOverlayWeight; // 0x20(0x04)
	float DodgeWeight; // 0x24(0x04)
	float DodgeJumpWeight; // 0x28(0x04)
	float DodgeDistanceMax; // 0x2c(0x04)
	float DodgeDistanceMin; // 0x30(0x04)
	float CrouchTimeMax; // 0x34(0x04)
	float CrouchTimeMin; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FString DebugName; // 0x40(0x10)
	char pad_50[0x8]; // 0x50(0x08)
};

// ScriptStruct FortniteAI.EvasiveManeuverSkillSettings
// Size: 0x258 (Inherited: 0x00)
struct FEvasiveManeuverSkillSettings {
	struct FScalableFloat CrouchOverlayWeight; // 0x00(0x28)
	struct FScalableFloat JumpOverlayWeight; // 0x28(0x28)
	struct FScalableFloat NoOverlayWeight; // 0x50(0x28)
	struct FScalableFloat DodgeWeight; // 0x78(0x28)
	struct FScalableFloat DodgeJumpWeight; // 0xa0(0x28)
	struct FScalableFloat JumpDelay; // 0xc8(0x28)
	struct FScalableFloat JumpRandomDeviationDelay; // 0xf0(0x28)
	struct FScalableFloat CrouchDelay; // 0x118(0x28)
	struct FScalableFloat CrouchRandomDeviationDelay; // 0x140(0x28)
	struct FScalableFloat DodgeDelay; // 0x168(0x28)
	struct FScalableFloat DodgeRandomDeviationDelay; // 0x190(0x28)
	struct FScalableFloat DodgeDistanceMax; // 0x1b8(0x28)
	struct FScalableFloat DodgeDistanceMin; // 0x1e0(0x28)
	struct FScalableFloat CrouchTimeMax; // 0x208(0x28)
	struct FScalableFloat CrouchTimeMin; // 0x230(0x28)
};

// ScriptStruct FortniteAI.DigestedEvasiveManeuverSkillSettingsSpecialization
// Size: 0xc0 (Inherited: 0x00)
struct FDigestedEvasiveManeuverSkillSettingsSpecialization {
	float OddsToBeUsed; // 0x00(0x04)
	float MaxDuration; // 0x04(0x04)
	float MaxDurationRandomDeviation; // 0x08(0x04)
	float Cooldown; // 0x0c(0x04)
	float CooldownRandomDeviation; // 0x10(0x04)
	float DistanceMinSquared; // 0x14(0x04)
	float DistanceMaxSquared; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FGameplayTagQuery WeaponTagQuery; // 0x20(0x48)
	struct FDigestedEvasiveManeuverSkillSettings EvasiveManeuverSkillSettings; // 0x68(0x58)
};

// ScriptStruct FortniteAI.EvasiveManeuverSkillSettingsSpecialization
// Size: 0x3c8 (Inherited: 0x00)
struct FEvasiveManeuverSkillSettingsSpecialization {
	struct FScalableFloat OddsToBeUsed; // 0x00(0x28)
	struct FScalableFloat MaxDuration; // 0x28(0x28)
	struct FScalableFloat MaxDurationRandomDeviation; // 0x50(0x28)
	struct FScalableFloat Cooldown; // 0x78(0x28)
	struct FScalableFloat CooldownRandomDeviation; // 0xa0(0x28)
	struct FString DebugName; // 0xc8(0x10)
	struct FScalableFloat DistanceMin; // 0xd8(0x28)
	struct FScalableFloat DistanceMax; // 0x100(0x28)
	struct FGameplayTagQuery WeaponTagQuery; // 0x128(0x48)
	struct FEvasiveManeuverSkillSettings EvasiveManeuverSkillSettings; // 0x170(0x258)
};

// ScriptStruct FortniteAI.FortBotHealingItems
// Size: 0x48 (Inherited: 0x00)
struct FFortBotHealingItems {
	struct FScalableFloat UseItemResourceThreshold; // 0x00(0x28)
	struct FGameplayTagContainer ItemTags; // 0x28(0x20)
};

// ScriptStruct FortniteAI.FortBotDigestedHealingItems
// Size: 0x28 (Inherited: 0x00)
struct FFortBotDigestedHealingItems {
	float UseItemResourceThreshold; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FGameplayTagContainer ItemTags; // 0x08(0x20)
};

// ScriptStruct FortniteAI.FortBotHealingItemsList
// Size: 0x10 (Inherited: 0x00)
struct FFortBotHealingItemsList {
	struct TArray<struct FFortBotHealingItems> HealthItems; // 0x00(0x10)
};

// ScriptStruct FortniteAI.FortBotDigestedHealingItemsList
// Size: 0x10 (Inherited: 0x00)
struct FFortBotDigestedHealingItemsList {
	struct TArray<struct FFortBotDigestedHealingItems> HealthItems; // 0x00(0x10)
};

// ScriptStruct FortniteAI.FortBotHealingItemsSpec
// Size: 0x58 (Inherited: 0x00)
struct FFortBotHealingItemsSpec {
	struct FGameplayTagQuery TagQuery; // 0x00(0x48)
	struct FFortBotHealingItemsList HealthItemsList; // 0x48(0x10)
};

// ScriptStruct FortniteAI.FortBotDigestedHealingItemsSpec
// Size: 0x58 (Inherited: 0x00)
struct FFortBotDigestedHealingItemsSpec {
	struct FGameplayTagQuery TagQuery; // 0x00(0x48)
	struct FFortBotDigestedHealingItemsList HealthItemsList; // 0x48(0x10)
};

// ScriptStruct FortniteAI.BotEquipWeaponInfo
// Size: 0x98 (Inherited: 0x00)
struct FBotEquipWeaponInfo {
	struct FGameplayTagQuery TagQuery; // 0x00(0x48)
	struct FScalableFloat DistanceEffectivenessWithThreat; // 0x48(0x28)
	struct FScalableFloat DistanceEffectivenessNoThreat; // 0x70(0x28)
};

// ScriptStruct FortniteAI.DigestedBotEquipWeaponInfo
// Size: 0x98 (Inherited: 0x00)
struct FDigestedBotEquipWeaponInfo {
	struct FGameplayTagQuery TagQuery; // 0x00(0x48)
	struct FScalableFloat DistanceEffectivenessWithThreat; // 0x48(0x28)
	struct FScalableFloat DistanceEffectivenessNoThreat; // 0x70(0x28)
};

// ScriptStruct FortniteAI.WeaponAmmoCheat
// Size: 0x58 (Inherited: 0x00)
struct FWeaponAmmoCheat {
	struct FGameplayTag WeaponTag; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FScalableFloat HasInfiniteAmmo; // 0x08(0x28)
	struct FScalableFloat CheckLoadedAmmoForInfiniteAmmo; // 0x30(0x28)
};

// ScriptStruct FortniteAI.BotKnockbackSettings
// Size: 0xc0 (Inherited: 0x00)
struct FBotKnockbackSettings {
	struct FGameplayTagQuery TagQuery; // 0x00(0x48)
	struct FScalableFloat ShouldAllowCharacterToBeLaunched; // 0x48(0x28)
	struct FScalableFloat ShouldStopActiveMovement; // 0x70(0x28)
	struct FScalableFloat IgnoreMoveInputDuration; // 0x98(0x28)
};

// ScriptStruct FortniteAI.DigestedBotKnockbackSettings
// Size: 0x50 (Inherited: 0x00)
struct FDigestedBotKnockbackSettings {
	struct FGameplayTagQuery TagQuery; // 0x00(0x48)
	bool bShouldAllowCharacterToBeLaunched; // 0x48(0x01)
	bool bShouldStopActiveMovement; // 0x49(0x01)
	char pad_4A[0x2]; // 0x4a(0x02)
	float IgnoreMoveInputDuration; // 0x4c(0x04)
};

// ScriptStruct FortniteAI.FortAthenaAIBotNameDataTableRow
// Size: 0x28 (Inherited: 0x08)
struct FFortAthenaAIBotNameDataTableRow : FTableRowBase {
	struct FString Name; // 0x08(0x10)
	struct FString UniqueId; // 0x18(0x10)
};

// ScriptStruct FortniteAI.FortAthenaAIBotNameRegionData
// Size: 0x38 (Inherited: 0x00)
struct FFortAthenaAIBotNameRegionData {
	struct FString RegionId; // 0x00(0x10)
	struct TSoftObjectPtr<UDataTable> NameDataTable; // 0x10(0x28)
};

// ScriptStruct FortniteAI.AlertLevelInfo
// Size: 0x10 (Inherited: 0x00)
struct FAlertLevelInfo {
	struct TArray<struct UAISenseConfig*> SensesConfig; // 0x00(0x10)
};

// ScriptStruct FortniteAI.DigestedPerceptionStateSettings
// Size: 0x38 (Inherited: 0x00)
struct FDigestedPerceptionStateSettings {
	float ForgetTime; // 0x00(0x04)
	float ForgetTimeDeviation; // 0x04(0x04)
	float ForgetDistance; // 0x08(0x04)
	float ForgetDistanceDeviation; // 0x0c(0x04)
	char pad_10[0x28]; // 0x10(0x28)
};

// ScriptStruct FortniteAI.SoundPerceptionDigestedSetting
// Size: 0x0c (Inherited: 0x00)
struct FSoundPerceptionDigestedSetting {
	float Loudness; // 0x00(0x04)
	float IgnoreTime; // 0x04(0x04)
	float OverrideReactionDistanceSq; // 0x08(0x04)
};

// ScriptStruct FortniteAI.SightReactionSpecialization
// Size: 0x70 (Inherited: 0x00)
struct FSightReactionSpecialization {
	struct FGameplayTagContainer Tags; // 0x00(0x20)
	struct FScalableFloat SightMinAdditionTime; // 0x20(0x28)
	struct FScalableFloat SightMaxAdditionTime; // 0x48(0x28)
};

// ScriptStruct FortniteAI.DigestedSightReactionSpecialization
// Size: 0x70 (Inherited: 0x00)
struct FDigestedSightReactionSpecialization {
	struct FGameplayTagContainer Tags; // 0x00(0x20)
	struct FScalableFloat SightMinAdditionTime; // 0x20(0x28)
	struct FScalableFloat SightMaxAdditionTime; // 0x48(0x28)
};

// ScriptStruct FortniteAI.FortAthenaAIBotDigestedTargetHeuristicSettings
// Size: 0x188 (Inherited: 0x00)
struct FFortAthenaAIBotDigestedTargetHeuristicSettings {
	struct FDigestedPerceptionStateSettings PerceptionStateSettings[0x6]; // 0x00(0x150)
	float ThreatDamageWeight; // 0x150(0x04)
	float ThreatDamageWeightMultiplier; // 0x154(0x04)
	struct FScalableFloat ThreatTimeSinceLastDamageMultiplier; // 0x158(0x28)
	float ThreatLoFWeight; // 0x180(0x04)
	float DBNOWeightModifier; // 0x184(0x04)
};

// ScriptStruct FortniteAI.FortAthenaAIBotDigestedTargetHeuristicSettingsSpecialization
// Size: 0x1d0 (Inherited: 0x00)
struct FFortAthenaAIBotDigestedTargetHeuristicSettingsSpecialization {
	struct FGameplayTagQuery TargetTagQuery; // 0x00(0x48)
	struct FFortAthenaAIBotDigestedTargetHeuristicSettings Settings; // 0x48(0x188)
};

// ScriptStruct FortniteAI.PerceptionStateSettings
// Size: 0xc8 (Inherited: 0x00)
struct FPerceptionStateSettings {
	struct FScalableFloat ForgetTime; // 0x00(0x28)
	struct FScalableFloat ForgetTimeDeviation; // 0x28(0x28)
	struct FScalableFloat ForgetDistance; // 0x50(0x28)
	struct FScalableFloat ForgetDistanceDeviation; // 0x78(0x28)
	struct FScalableFloat ThreatDistanceWeight; // 0xa0(0x28)
};

// ScriptStruct FortniteAI.SoundPerceptionSetting
// Size: 0x78 (Inherited: 0x00)
struct FSoundPerceptionSetting {
	struct FScalableFloat Loudness; // 0x00(0x28)
	struct FScalableFloat IgnoreTime; // 0x28(0x28)
	struct FScalableFloat OverrideReactionDistance; // 0x50(0x28)
};

// ScriptStruct FortniteAI.FortAthenaAIBotTargetHeuristicSettings
// Size: 0x320 (Inherited: 0x00)
struct FFortAthenaAIBotTargetHeuristicSettings {
	struct FPerceptionStateSettings ThreatSeeingPerceptionSettings; // 0x00(0xc8)
	struct FPerceptionStateSettings ThreatLKPPerceptionSettings; // 0xc8(0xc8)
	struct FPerceptionStateSettings ThreatAlertedPerceptionSettings; // 0x190(0xc8)
	struct FScalableFloat ThreatDamageWeight; // 0x258(0x28)
	struct FScalableFloat ThreatDamageWeightMultiplier; // 0x280(0x28)
	struct FScalableFloat ThreatTimeSinceLastDamageMultiplier; // 0x2a8(0x28)
	struct FScalableFloat ThreatLoFWeight; // 0x2d0(0x28)
	struct FScalableFloat DBNOWeightModifier; // 0x2f8(0x28)
};

// ScriptStruct FortniteAI.FortAthenaAIBotTargetHeuristicSettingsSpecialization
// Size: 0x368 (Inherited: 0x00)
struct FFortAthenaAIBotTargetHeuristicSettingsSpecialization {
	struct FGameplayTagQuery TargetTagQuery; // 0x00(0x48)
	struct FFortAthenaAIBotTargetHeuristicSettings Settings; // 0x48(0x320)
};

// ScriptStruct FortniteAI.PlaystyleSwitchToAggressiveDataDigested
// Size: 0x58 (Inherited: 0x00)
struct FPlaystyleSwitchToAggressiveDataDigested {
	struct FGameplayTagQuery TagQueryToMatch; // 0x00(0x48)
	float TurnToAggressiveMinimumDistanceSquared; // 0x48(0x04)
	float TurnToAggressiveTime; // 0x4c(0x04)
	float DamageThresholdToSwitchToAggressive; // 0x50(0x04)
	float SwitchBackToDefensivePreventionTime; // 0x54(0x04)
};

// ScriptStruct FortniteAI.PlaystyleSwitchToAggressiveData
// Size: 0xe8 (Inherited: 0x00)
struct FPlaystyleSwitchToAggressiveData {
	struct FGameplayTagQuery TagQueryToMatch; // 0x00(0x48)
	struct FScalableFloat TurnToAggressiveMinimumDistance; // 0x48(0x28)
	struct FScalableFloat TurnToAggressiveTime; // 0x70(0x28)
	struct FScalableFloat SwitchBackToDefensivePreventionTime; // 0x98(0x28)
	struct FScalableFloat DamageThresholdToSwitchToAggressive; // 0xc0(0x28)
};

// ScriptStruct FortniteAI.RangedWeaponSkill
// Size: 0xf0 (Inherited: 0x00)
struct FRangedWeaponSkill {
	struct FScalableFloat DelayBetweenShots; // 0x00(0x28)
	struct FScalableFloat DelayDeviationTimeBetweenShots; // 0x28(0x28)
	struct FScalableFloat TriggerHoldDuration; // 0x50(0x28)
	struct FScalableFloat TriggerHoldDeviationTime; // 0x78(0x28)
	struct FScalableFloat DelayBeforeFirstShot; // 0xa0(0x28)
	struct FScalableFloat ShotDelayAfterTargeting; // 0xc8(0x28)
};

// ScriptStruct FortniteAI.RangedWeaponSkillCategorySpecialization
// Size: 0x110 (Inherited: 0x00)
struct FRangedWeaponSkillCategorySpecialization {
	struct FGameplayTagContainer Tags; // 0x00(0x20)
	struct FRangedWeaponSkill WeaponSkill; // 0x20(0xf0)
};

// ScriptStruct FortniteAI.RangedWeaponSkillCategory
// Size: 0x120 (Inherited: 0x00)
struct FRangedWeaponSkillCategory {
	struct FGameplayTagContainer Tags; // 0x00(0x20)
	struct FRangedWeaponSkill WeaponSkill; // 0x20(0xf0)
	struct TArray<struct FRangedWeaponSkillCategorySpecialization> Specializations; // 0x110(0x10)
};

// ScriptStruct FortniteAI.DigestedRangedWeaponSkill
// Size: 0x18 (Inherited: 0x00)
struct FDigestedRangedWeaponSkill {
	float DelayBetweenShots; // 0x00(0x04)
	float DelayDeviationTimeBetweenShots; // 0x04(0x04)
	float TriggerHoldDuration; // 0x08(0x04)
	float TriggerHoldDeviationTime; // 0x0c(0x04)
	float DelayBeforeFirstShot; // 0x10(0x04)
	float ShotDelayAfterTargeting; // 0x14(0x04)
};

// ScriptStruct FortniteAI.DigestedRangedWeaponSkillCategorySpecialization
// Size: 0x38 (Inherited: 0x00)
struct FDigestedRangedWeaponSkillCategorySpecialization {
	struct FGameplayTagContainer Tags; // 0x00(0x20)
	struct FDigestedRangedWeaponSkill WeaponSkill; // 0x20(0x18)
};

// ScriptStruct FortniteAI.DigestedRangedWeaponSkillCategory
// Size: 0x48 (Inherited: 0x00)
struct FDigestedRangedWeaponSkillCategory {
	struct FGameplayTagContainer Tags; // 0x00(0x20)
	struct FDigestedRangedWeaponSkill WeaponSkill; // 0x20(0x18)
	struct TArray<struct FDigestedRangedWeaponSkillCategorySpecialization> Specializations; // 0x38(0x10)
};

// ScriptStruct FortniteAI.VehicleDigestedPIDController
// Size: 0x0c (Inherited: 0x00)
struct FVehicleDigestedPIDController {
	float KP; // 0x00(0x04)
	float KI; // 0x04(0x04)
	float KD; // 0x08(0x04)
};

// ScriptStruct FortniteAI.VehiclePIDController
// Size: 0x78 (Inherited: 0x00)
struct FVehiclePIDController {
	struct FScalableFloat KP; // 0x00(0x28)
	struct FScalableFloat KI; // 0x28(0x28)
	struct FScalableFloat KD; // 0x50(0x28)
};

// ScriptStruct FortniteAI.VehicleDigestedAppendToPath
// Size: 0x08 (Inherited: 0x00)
struct FVehicleDigestedAppendToPath {
	float MinimumPathLengthToEndOfPath; // 0x00(0x04)
	float MinTimeSinceLastAppend; // 0x04(0x04)
};

// ScriptStruct FortniteAI.VehicleAppendToPath
// Size: 0x50 (Inherited: 0x00)
struct FVehicleAppendToPath {
	struct FScalableFloat MinimumPathLengthToEndOfPath; // 0x00(0x28)
	struct FScalableFloat MinTimeSinceLastAppend; // 0x28(0x28)
};

// ScriptStruct FortniteAI.VehicleDigestedTurnInPlace
// Size: 0x18 (Inherited: 0x00)
struct FVehicleDigestedTurnInPlace {
	float MovingAngleBegin; // 0x00(0x04)
	float MovingAngleEnd; // 0x04(0x04)
	float IdleAngleBegin; // 0x08(0x04)
	float IdleAngleEnd; // 0x0c(0x04)
	float MinMovingSpeed; // 0x10(0x04)
	bool bMissedPathPointReverse; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct FortniteAI.VehicleTurnInPlace
// Size: 0xd0 (Inherited: 0x00)
struct FVehicleTurnInPlace {
	struct FScalableFloat MovingAngleBegin; // 0x00(0x28)
	struct FScalableFloat MovingAngleEnd; // 0x28(0x28)
	struct FScalableFloat IdleAngleBegin; // 0x50(0x28)
	struct FScalableFloat IdleAngleEnd; // 0x78(0x28)
	struct FScalableFloat MinMovingSpeed; // 0xa0(0x28)
	bool bMissedPathPointReverse; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
};

// ScriptStruct FortniteAI.DigestedVehicleDriving
// Size: 0x98 (Inherited: 0x00)
struct FDigestedVehicleDriving {
	bool bCanTurnInPlace; // 0x00(0x01)
	bool bAvoidanceEnabled; // 0x01(0x01)
	bool bPreventTurningWhenStopping; // 0x02(0x01)
	char pad_3[0x5]; // 0x03(0x05)
	struct FGameplayTagQuery AvoidanceTagQuery; // 0x08(0x48)
	bool bReverseSwapLeftAndRight; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float MinimumForwardPIDValueForStopping; // 0x54(0x04)
	float MinimumDistanceLeftForBoosting; // 0x58(0x04)
	struct FVehicleDigestedPIDController ForwardPIDController; // 0x5c(0x0c)
	struct FVehicleDigestedPIDController SteeringPIDController; // 0x68(0x0c)
	struct FVehicleDigestedAppendToPath AppendToPath; // 0x74(0x08)
	struct FVehicleDigestedTurnInPlace TurnInPlace; // 0x7c(0x18)
	char pad_94[0x4]; // 0x94(0x04)
};

// ScriptStruct FortniteAI.DigestedVehicleDrivingCategory
// Size: 0xb8 (Inherited: 0x00)
struct FDigestedVehicleDrivingCategory {
	struct FGameplayTagContainer Tags; // 0x00(0x20)
	struct FDigestedVehicleDriving VehicleDriving; // 0x20(0x98)
};

// ScriptStruct FortniteAI.VehicleDriving
// Size: 0x2e0 (Inherited: 0x00)
struct FVehicleDriving {
	bool bCanTurnInPlace; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FVehicleTurnInPlace TurnInPlace; // 0x08(0xd0)
	struct FScalableFloat ReverseSwapLeftAndRight; // 0xd8(0x28)
	struct FScalableFloat MinimumForwardPIDValueForStopping; // 0x100(0x28)
	struct FScalableFloat MinimumDistanceLeftForBoosting; // 0x128(0x28)
	struct FVehiclePIDController ForwardPIDController; // 0x150(0x78)
	struct FVehiclePIDController SteeringPIDController; // 0x1c8(0x78)
	bool bAvoidanceEnabled; // 0x240(0x01)
	bool bPreventTurningWhenStopping; // 0x241(0x01)
	char pad_242[0x6]; // 0x242(0x06)
	struct FGameplayTagQuery AvoidanceTagQuery; // 0x248(0x48)
	struct FVehicleAppendToPath AppendToPath; // 0x290(0x50)
};

// ScriptStruct FortniteAI.VehicleDrivingCategory
// Size: 0x300 (Inherited: 0x00)
struct FVehicleDrivingCategory {
	struct FGameplayTagContainer Tags; // 0x00(0x20)
	struct FVehicleDriving VehicleDriving; // 0x20(0x2e0)
};

// ScriptStruct FortniteAI.MovementEvaluatorInfo
// Size: 0x10 (Inherited: 0x00)
struct FMovementEvaluatorInfo {
	char pad_0[0x8]; // 0x00(0x08)
	struct UFortAthenaAIBotEvaluator_Movement* MovementEval; // 0x08(0x08)
};

// ScriptStruct FortniteAI.FortAthenaAILODSetting
// Size: 0x01 (Inherited: 0x00)
struct FFortAthenaAILODSetting {
	bool bIsValid; // 0x00(0x01)
};

// ScriptStruct FortniteAI.FortAILODSetting_AIEvaluator
// Size: 0x68 (Inherited: 0x01)
struct FFortAILODSetting_AIEvaluator : FFortAthenaAILODSetting {
	char pad_1[0x7]; // 0x01(0x07)
	struct FScalableFloat IntervalMultiplier; // 0x08(0x28)
	char pad_30[0x8]; // 0x30(0x08)
	struct FScalableFloat RandomDeviationMultiplier; // 0x38(0x28)
	char pad_60[0x8]; // 0x60(0x08)
};

// ScriptStruct FortniteAI.FortAILODSetting_CharacterMovement
// Size: 0x188 (Inherited: 0x01)
struct FFortAILODSetting_CharacterMovement : FFortAthenaAILODSetting {
	char pad_1[0x7]; // 0x01(0x07)
	struct FScalableFloat Interval; // 0x08(0x28)
	struct FScalableFloat RandomDeviation; // 0x30(0x28)
	struct FScalableFloat MinimumDynamicInterval; // 0x58(0x28)
	struct FScalableFloat MaximumDotDifferenceBetweenInputVectors; // 0x80(0x28)
	struct FScalableFloat bDisableAvoidance; // 0xa8(0x28)
	struct FScalableFloat bBotsEnableNavWalkingMode; // 0xd0(0x28)
	struct FScalableFloat bBotsEnablePhysNavWalkingPathFollowingMode; // 0xf8(0x28)
	struct FScalableFloat bSweepWhileNavWalking; // 0x120(0x28)
	struct FScalableFloat bGenerateOverlapInNavWalking; // 0x148(0x28)
	char pad_170[0x18]; // 0x170(0x18)
};

// ScriptStruct FortniteAI.FortAILODSetting_FortWeaponRanged
// Size: 0x68 (Inherited: 0x01)
struct FFortAILODSetting_FortWeaponRanged : FFortAthenaAILODSetting {
	char pad_1[0x7]; // 0x01(0x07)
	struct FScalableFloat Interval; // 0x08(0x28)
	char pad_30[0x8]; // 0x30(0x08)
	struct FScalableFloat RandomDeviation; // 0x38(0x28)
	char pad_60[0x8]; // 0x60(0x08)
};

// ScriptStruct FortniteAI.FortAILODSetting_GenericTickingObject
// Size: 0x38 (Inherited: 0x01)
struct FFortAILODSetting_GenericTickingObject : FFortAthenaAILODSetting {
	char pad_1[0x7]; // 0x01(0x07)
	struct FScalableFloat TickMultiplier; // 0x08(0x28)
	char pad_30[0x8]; // 0x30(0x08)
};

// ScriptStruct FortniteAI.FortAthenaAIObjectTrackerQuerySimplified
// Size: 0x80 (Inherited: 0x00)
struct FFortAthenaAIObjectTrackerQuerySimplified {
	enum class EFortAthenaAIObjectTrackerQueryOrder PickOrder; // 0x00(0x01)
	bool bMustBeUsable; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FGameplayTagQuery RequiredTagsQuery; // 0x08(0x48)
	struct FVector MaximumDistance; // 0x50(0x18)
	struct AFortPlayspace* RequiredToBeInPlayspace; // 0x68(0x08)
	char pad_70[0x10]; // 0x70(0x10)
};

// ScriptStruct FortniteAI.FortAthenaAIObjectTrackerQuery
// Size: 0x98 (Inherited: 0x80)
struct FFortAthenaAIObjectTrackerQuery : FFortAthenaAIObjectTrackerQuerySimplified {
	struct FVector StartLocation; // 0x80(0x18)
};

// ScriptStruct FortniteAI.AITrackedObjectsSet
// Size: 0x100 (Inherited: 0x00)
struct FAITrackedObjectsSet {
	char pad_0[0x100]; // 0x00(0x100)
};

// ScriptStruct FortniteAI.FortAIRuntimePerkInfo_Bunker
// Size: 0x68 (Inherited: 0x40)
struct FFortAIRuntimePerkInfo_Bunker : FFortAIRuntimePerkInfo {
	float OddsToBeUsedAgainstUnknownThreat; // 0x40(0x04)
	float OddsToUseRoofBuilding; // 0x44(0x04)
	float OddsToBuildForwardRamp; // 0x48(0x04)
	float InitialBuildDelay; // 0x4c(0x04)
	float SamePieceBuildDelay; // 0x50(0x04)
	float SamePieceBuildDelayRandomDeviation; // 0x54(0x04)
	float DifferentPieceBuildDelay; // 0x58(0x04)
	float DifferentPieceBuildDelayRandomDeviation; // 0x5c(0x04)
	float OddsToSelectRandomMaterial; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// ScriptStruct FortniteAI.FortAIRuntimePerkInfo_EvasiveManeuvers
// Size: 0xa0 (Inherited: 0x40)
struct FFortAIRuntimePerkInfo_EvasiveManeuvers : FFortAIRuntimePerkInfo {
	char pad_40[0x58]; // 0x40(0x58)
	float DistanceMinSquared; // 0x98(0x04)
	float DistanceMaxSquared; // 0x9c(0x04)
};

// ScriptStruct FortniteAI.FortSmartObjectSlotDefinitionData
// Size: 0x0c (Inherited: 0x01)
struct FFortSmartObjectSlotDefinitionData : FSmartObjectSlotDefinitionData {
	float CooldownOnFinished; // 0x00(0x04)
	float CooldownOnInterrupted; // 0x04(0x04)
	float Radius; // 0x08(0x04)
};

// ScriptStruct FortniteAI.SmartObjectRecentlyUsed
// Size: 0x14 (Inherited: 0x00)
struct FSmartObjectRecentlyUsed {
	char pad_0[0x14]; // 0x00(0x14)
};

// ScriptStruct FortniteAI.AIRuntimeParametersSmartObjectActivityCondition
// Size: 0x48 (Inherited: 0x00)
struct FAIRuntimeParametersSmartObjectActivityCondition {
	struct FGameplayTagQuery SmartObjectActivityConditionTagQuery; // 0x00(0x48)
};

// ScriptStruct FortniteAI.AIRuntimeParametersSmartObjectActivityConfig
// Size: 0x58 (Inherited: 0x00)
struct FAIRuntimeParametersSmartObjectActivityConfig {
	struct FGameplayTagQuery ActivityRequirements; // 0x00(0x48)
	float MaxDetectionRadius; // 0x48(0x04)
	float MaxDetectionRadiusSqr; // 0x4c(0x04)
	float ActivityCooldownOnFinished; // 0x50(0x04)
	float ActivityCooldownOnInterrupted; // 0x54(0x04)
};

// ScriptStruct FortniteAI.AIRuntimeParametersSmartObjectActivity
// Size: 0xb0 (Inherited: 0x00)
struct FAIRuntimeParametersSmartObjectActivity {
	struct FAIRuntimeParametersSmartObjectActivityCondition SmartObjectActivityCondition; // 0x00(0x48)
	struct FAIRuntimeParametersSmartObjectActivityConfig SmartObjectActivityConfig; // 0x48(0x58)
	char bEnabled : 1; // 0xa0(0x01)
	char pad_A0_1 : 7; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	int32_t ActivityId; // 0xa4(0x04)
	float LastUseTimestamp; // 0xa8(0x04)
	float Cooldown; // 0xac(0x04)
};

// ScriptStruct FortniteAI.FortAthenaAISmartObjectActivityCondition
// Size: 0x48 (Inherited: 0x00)
struct FFortAthenaAISmartObjectActivityCondition {
	struct FGameplayTagQuery SmartObjectActivityConditionTagQuery; // 0x00(0x48)
};

// ScriptStruct FortniteAI.FortAthenaAISmartObjectActivityConfig
// Size: 0xc0 (Inherited: 0x00)
struct FFortAthenaAISmartObjectActivityConfig {
	struct FGameplayTagQuery ActivityRequirements; // 0x00(0x48)
	struct FScalableFloat MaxDetectionRadius; // 0x48(0x28)
	struct FScalableFloat ActivityCooldownOnFinished; // 0x70(0x28)
	struct FScalableFloat ActivityCooldownOnInterrupted; // 0x98(0x28)
};

// ScriptStruct FortniteAI.SpawnerDataComponentAffiliationSharedBBConfiguration
// Size: 0x40 (Inherited: 0x00)
struct FSpawnerDataComponentAffiliationSharedBBConfiguration {
	struct FGameplayTag FactionTag; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FScalableFloat MaximumDistance; // 0x08(0x28)
	struct FGameplayTag SharedBlackboardTag; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct UBlackboardData* SharedBlackboard; // 0x38(0x08)
};

// ScriptStruct FortniteAI.ConstructionBuildingList
// Size: 0x90 (Inherited: 0x00)
struct FConstructionBuildingList {
	struct FConstructionBuildingInfo BuildingList[0x6]; // 0x00(0x90)
};

// ScriptStruct FortniteAI.ConstructionBuildingInfo
// Size: 0x18 (Inherited: 0x00)
struct FConstructionBuildingInfo {
	struct ABuildingSMActor* BuildingActorClass[0x3]; // 0x00(0x18)
};

// ScriptStruct FortniteAI.FortAthenaAIWeightedCosmeticLoadout
// Size: 0x190 (Inherited: 0x00)
struct FFortAthenaAIWeightedCosmeticLoadout {
	struct FFortAthenaLoadout CosmeticLoadout; // 0x00(0x168)
	struct FScalableFloat Weight; // 0x168(0x28)
};

// ScriptStruct FortniteAI.InitialGameplayEffectInfo
// Size: 0x10 (Inherited: 0x00)
struct FInitialGameplayEffectInfo {
	struct UGameplayEffect* GameplayEffect; // 0x00(0x08)
	float Level; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct FortniteAI.TeleportSettings
// Size: 0x38 (Inherited: 0x00)
struct FTeleportSettings {
	struct FScalableFloat CheckTeleportConditionsTimeInterval; // 0x00(0x28)
	float TeleportRange; // 0x28(0x04)
	float TimeNeededOutsideTeleportRange; // 0x2c(0x04)
	struct FGameplayTag TeleportAbilityTag; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct FortniteAI.AILootInfoRowEntry
// Size: 0x60 (Inherited: 0x00)
struct FAILootInfoRowEntry {
	struct FGameplayTagQuery OptionalTagQuery; // 0x00(0x48)
	char bShouldDropInventoryOnDeath : 1; // 0x48(0x01)
	char bShouldDropLootOnDeath : 1; // 0x48(0x01)
	char bShouldGrantLootOnSpawn : 1; // 0x48(0x01)
	char pad_48_3 : 5; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct TArray<struct FName> LootTiers; // 0x50(0x10)
};

// ScriptStruct FortniteAI.FortAthenaAILootInfoDataTableRow
// Size: 0x18 (Inherited: 0x08)
struct FFortAthenaAILootInfoDataTableRow : FTableRowBase {
	struct TArray<struct FAILootInfoRowEntry> LootDroppingBehaviors; // 0x08(0x10)
};

// ScriptStruct FortniteAI.WeightedAIInventoryLoadout
// Size: 0x38 (Inherited: 0x00)
struct FWeightedAIInventoryLoadout {
	struct FScalableFloat Weight; // 0x00(0x28)
	struct TArray<struct FItemAndCount> Items; // 0x28(0x10)
};

// ScriptStruct FortniteAI.FortBotTargetInfo
// Size: 0x118 (Inherited: 0x00)
struct FFortBotTargetInfo {
	struct AActor* SourceActor; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct AActor* SupportingActor; // 0x10(0x08)
	char pad_18[0x18]; // 0x18(0x18)
	struct ABuildingActor* AlternateTargetingActor; // 0x30(0x08)
	char pad_38[0xe0]; // 0x38(0xe0)
};

// ScriptStruct FortniteAI.FortBotThreatActorInfo
// Size: 0x18 (Inherited: 0x00)
struct FFortBotThreatActorInfo {
	struct AActor* ThreatActor; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct FortniteAI.FortBotTargetHandler
// Size: 0x40 (Inherited: 0x00)
struct FFortBotTargetHandler {
	char pad_0[0x18]; // 0x00(0x18)
	struct TArray<struct FFortBotTargetInfo> Targets; // 0x18(0x10)
	char pad_28[0x18]; // 0x28(0x18)
};

// ScriptStruct FortniteAI.BotDelayedStimulus
// Size: 0x68 (Inherited: 0x00)
struct FBotDelayedStimulus {
	struct AActor* SourceActor; // 0x00(0x08)
	char pad_8[0x60]; // 0x08(0x60)
};

// ScriptStruct FortniteAI.BotPerceivedSound
// Size: 0x28 (Inherited: 0x00)
struct FBotPerceivedSound {
	struct AActor* SourceActor; // 0x00(0x08)
	char pad_8[0x20]; // 0x08(0x20)
};

// ScriptStruct FortniteAI.PatrolPathLeash
// Size: 0x50 (Inherited: 0x00)
struct FPatrolPathLeash {
	struct FGameplayTagQuery TagQuery; // 0x00(0x48)
	float Width; // 0x48(0x04)
	float Height; // 0x4c(0x04)
};

// ScriptStruct FortniteAI.FortAthenaPlayMontageStateTreeTaskWrapper
// Size: 0x30 (Inherited: 0x30)
struct FFortAthenaPlayMontageStateTreeTaskWrapper : FStateTreeBlueprintTaskWrapper {
};

// ScriptStruct FortniteAI.GameDifficultyInfo
// Size: 0x98 (Inherited: 0x08)
struct FGameDifficultyInfo : FTableRowBase {
	bool bIsOnboarding; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float Difficulty; // 0x0c(0x04)
	float DifficultyMatchmakingMinOverride; // 0x10(0x04)
	float DifficultyMatchmakingMaxOverride; // 0x14(0x04)
	int32_t LootLevel; // 0x18(0x04)
	enum class ERatingsEnforcementType RatingsEnforcement; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	int32_t RequiredRating; // 0x20(0x04)
	int32_t MaximumRating; // 0x24(0x04)
	int32_t PvPRating; // 0x28(0x04)
	int32_t RecommendedRating; // 0x2c(0x04)
	float ScoreBonus; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FString LootTierGroup; // 0x38(0x10)
	struct FString BonusLootTierGroup; // 0x48(0x10)
	struct FString DifficultyIncreaseLootTierGroup; // 0x58(0x10)
	int32_t NumDifficultyIncreases; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct FText ThreatDisplayName; // 0x70(0x18)
	struct FName ColorParamName; // 0x88(0x04)
	int32_t DefaultPlayerLives; // 0x8c(0x04)
	struct FName PlayerStatClampRowName; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
};

// ScriptStruct FortniteAI.AttributeClamp
// Size: 0x40 (Inherited: 0x00)
struct FAttributeClamp {
	struct FGameplayAttribute Attribute; // 0x00(0x38)
	enum class EClampType ClampType; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float ClampValue; // 0x3c(0x04)
};

// ScriptStruct FortniteAI.PlayerClampInfo
// Size: 0x18 (Inherited: 0x08)
struct FPlayerClampInfo : FTableRowBase {
	struct TArray<struct FAttributeClamp> AttributeClamps; // 0x08(0x10)
};

// ScriptStruct FortniteAI.GameRewardOverridesInfo
// Size: 0x40 (Inherited: 0x08)
struct FGameRewardOverridesInfo : FTableRowBase {
	struct FString MissionName; // 0x08(0x10)
	struct FString OverrideRewardsTag; // 0x18(0x10)
	int32_t LootLevel; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FString LootTierGroup; // 0x30(0x10)
};

// ScriptStruct FortniteAI.FortInstensityCurveSequenceProgression
// Size: 0x18 (Inherited: 0x00)
struct FFortInstensityCurveSequenceProgression {
	struct UFortIntensityCurveSequence* CurveSequence; // 0x00(0x08)
	struct FCurveTableRowHandle SelectionWeight; // 0x08(0x10)
};

// ScriptStruct FortniteAI.NavAgentData
// Size: 0x28 (Inherited: 0x00)
struct FNavAgentData {
	struct FName AgentName; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FCurveTableRowHandle BuildingActorHealthToNavAreaStrengthHandle; // 0x08(0x10)
	struct FCurveTableRowHandle PlayerBuiltBuildingActorHealthToNavAreaStrengthHandle; // 0x18(0x10)
};

// ScriptStruct FortniteAI.PathRendererDetails
// Size: 0x18 (Inherited: 0x00)
struct FPathRendererDetails {
	struct TArray<struct FVector> PathPoints; // 0x00(0x10)
	enum class ENavPathRendererStatus PathStatus; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct FortniteAI.PathRendererInfo
// Size: 0x28 (Inherited: 0x00)
struct FPathRendererInfo {
	struct TScriptInterface<IFortNavPathRendererInfoInterface> PathRendererInterface; // 0x00(0x10)
	char pad_10[0x18]; // 0x10(0x18)
};

// ScriptStruct FortniteAI.MetaNavCachedEntry
// Size: 0x1e8 (Inherited: 0x00)
struct FMetaNavCachedEntry {
	char pad_0[0x1e8]; // 0x00(0x1e8)
};

// ScriptStruct FortniteAI.FortAthenaAIFormationSlotRuntime
// Size: 0x20 (Inherited: 0x00)
struct FFortAthenaAIFormationSlotRuntime {
	struct FVector LocalLocation; // 0x00(0x18)
	struct AFortPawn* UserPawn; // 0x18(0x08)
};

// ScriptStruct FortniteAI.FortPingInfo
// Size: 0x168 (Inherited: 0x00)
struct FFortPingInfo {
	char pad_0[0x8]; // 0x00(0x08)
	struct FFortWorldMarkerData MarkerData; // 0x08(0x160)
};

// ScriptStruct FortniteAI.FortPointOnCurveRange
// Size: 0x08 (Inherited: 0x00)
struct FFortPointOnCurveRange {
	float MinPercentage; // 0x00(0x04)
	float MaxPercentage; // 0x04(0x04)
};

// ScriptStruct FortniteAI.FortPointsOnCurve
// Size: 0x38 (Inherited: 0x00)
struct FFortPointsOnCurve {
	struct TSoftObjectPtr<UCurveFloat> Curve; // 0x00(0x28)
	struct TArray<struct FFortPointOnCurveRange> RangesForPointsOnCurve; // 0x28(0x10)
};

// ScriptStruct FortniteAI.FortGameplayTagQueryPerDifficulty
// Size: 0x60 (Inherited: 0x00)
struct FFortGameplayTagQueryPerDifficulty {
	struct FDataTableRowHandle DifficultyInfo; // 0x00(0x10)
	struct FGameplayTagQuery TagQueryToMatch; // 0x10(0x48)
	float Difficulty; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct FortniteAI.GoalDistanceData
// Size: 0xa0 (Inherited: 0x00)
struct FGoalDistanceData {
	bool bIgnoreScreeningDistance; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FAIDataProviderFloatValue ScreeningTestMaxDistance; // 0x08(0x38)
	struct TSoftObjectPtr<UCurveFloat> TestScoreCurve; // 0x40(0x28)
	struct FAIDataProviderFloatValue CurveDistanceScale; // 0x68(0x38)
};

// ScriptStruct FortniteAI.ThreatGridIndex
// Size: 0x08 (Inherited: 0x00)
struct FThreatGridIndex {
	int32_t X; // 0x00(0x04)
	int32_t Y; // 0x04(0x04)
};

// ScriptStruct FortniteAI.ThreatLocationInfo
// Size: 0x88 (Inherited: 0x0c)
struct FThreatLocationInfo : FFastArraySerializerItem {
	char pad_C[0x4]; // 0x0c(0x04)
	struct FVector CloudLocation; // 0x10(0x18)
	struct FBox ThreatVolume; // 0x28(0x38)
	struct AFortThreatVisualsManager* ThreatVisualsManager; // 0x60(0x08)
	struct TWeakObjectPtr<struct AThreatCloud> CloudActor; // 0x68(0x08)
	char pad_70[0x1]; // 0x70(0x01)
	bool bThreatActivated; // 0x71(0x01)
	enum class EFortThreatDeactivationType DeactivationType; // 0x72(0x01)
	char pad_73[0x15]; // 0x73(0x15)
};

// ScriptStruct FortniteAI.ThreatLocationArray
// Size: 0x118 (Inherited: 0x108)
struct FThreatLocationArray : FFastArraySerializer {
	struct TArray<struct FThreatLocationInfo> Locations; // 0x108(0x10)
};

// ScriptStruct FortniteAI.StormWind
// Size: 0x68 (Inherited: 0x0c)
struct FStormWind : FFastArraySerializerItem {
	char pad_C[0x4]; // 0x0c(0x04)
	struct FVector Location; // 0x10(0x18)
	struct FVector Direction; // 0x28(0x18)
	float Radius; // 0x40(0x04)
	float Magnitude; // 0x44(0x04)
	struct AFortThreatVisualsManager* ThreatVisualsManager; // 0x48(0x08)
	struct TArray<struct UFortAIEncounterInfo*> Encounters; // 0x50(0x10)
	struct FFortWindImpulseHandle WindHandle; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// ScriptStruct FortniteAI.StormWindArray
// Size: 0x118 (Inherited: 0x108)
struct FStormWindArray : FFastArraySerializer {
	struct TArray<struct FStormWind> StormWinds; // 0x108(0x10)
};

// ScriptStruct FortniteAI.MMRSpawningDataTableInfo
// Size: 0x18 (Inherited: 0x00)
struct FMMRSpawningDataTableInfo {
	struct UFortAthenaAISpawnerData* AISpawnerData; // 0x00(0x08)
	float Skill; // 0x08(0x04)
	float Weight; // 0x0c(0x04)
	int32_t SpawingItemIndex; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct FortniteAI.MMRPhaseSpawningDataTableInfo
// Size: 0x18 (Inherited: 0x00)
struct FMMRPhaseSpawningDataTableInfo {
	int32_t GamePhaseIndexToSpawn; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FMMRSpawningDataTableInfo> SpawningItems; // 0x08(0x10)
};

// ScriptStruct FortniteAI.MMRSpawningBracketBotDataTableRow
// Size: 0x20 (Inherited: 0x10)
struct FMMRSpawningBracketBotDataTableRow : FMMRSpawningBracketBaseDataTableRow {
	struct TArray<struct FMMRPhaseSpawningDataTableInfo> PhaseSpawningItems; // 0x10(0x10)
};

