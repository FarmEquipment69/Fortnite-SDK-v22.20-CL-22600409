// Enum Constraints.EHandleEvent
enum class EHandleEvent : uint8 {
	LocalTransformUpdated = 0,
	GlobalTransformUpdated = 1,
	ComponentUpdated = 2,
	Max = 3
};

// ScriptStruct Constraints.ConstraintAndActiveChannel
// Size: 0x100 (Inherited: 0x00)
struct FConstraintAndActiveChannel {
	struct TSoftObjectPtr<UTickableConstraint> Constraint; // 0x00(0x28)
	struct FMovieSceneConstraintChannel ActiveChannel; // 0x28(0xd8)
};

// ScriptStruct Constraints.MovieSceneConstraintChannel
// Size: 0xd8 (Inherited: 0xd8)
struct FMovieSceneConstraintChannel : FMovieSceneBoolChannel {
};

// ScriptStruct Constraints.ConstraintTickFunction
// Size: 0x40 (Inherited: 0x28)
struct FConstraintTickFunction : FTickFunction {
	char pad_28[0x18]; // 0x28(0x18)
};

