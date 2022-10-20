// Enum AIPatrolPath.EAIPatrolPathVersion
enum class EAIPatrolPathVersion : uint8 {
	InitialVersion = 0,
	TemplateFromQuickBarVersion = 1,
	VersionPlusOne = 2,
	LatestVersion = 1,
	EAIPatrolPathVersion_MAX = 3
};

// Enum AIPatrolPath.SegmentPathStatus
enum class SegmentPathStatus : uint8 {
	INVALID = 0,
	CALCULATING = 1,
	RECALCULATING_PENDING = 2,
	PATH_FAILED = 3,
	PATH_SUCCESS = 4,
	SegmentPathStatus_MAX = 5
};

// ScriptStruct AIPatrolPath.PatrolPathSegmentDetails
// Size: 0xd8 (Inherited: 0x00)
struct FPatrolPathSegmentDetails {
	char pad_0[0xa8]; // 0x00(0xa8)
	struct UNavigationPath* Path; // 0xa8(0x08)
	struct UAIPatrolPathComponent* Start; // 0xb0(0x08)
	struct UAIPatrolPathComponent* End; // 0xb8(0x08)
	char pad_C0[0x18]; // 0xc0(0x18)
};

