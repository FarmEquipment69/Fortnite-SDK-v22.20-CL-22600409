// Class Constraints.TransformableHandle
// Size: 0x40 (Inherited: 0x28)
struct UTransformableHandle : UObject {
	char pad_28[0x18]; // 0x28(0x18)
};

// Class Constraints.ConstraintsActor
// Size: 0x290 (Inherited: 0x288)
struct AConstraintsActor : AActor {
	struct UConstraintsManager* ConstraintsManager; // 0x288(0x08)
};

// Class Constraints.TickableConstraint
// Size: 0x70 (Inherited: 0x28)
struct UTickableConstraint : UObject {
	struct FConstraintTickFunction ConstraintTick; // 0x28(0x40)
	bool Active; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class Constraints.ConstraintsManager
// Size: 0x48 (Inherited: 0x28)
struct UConstraintsManager : UObject {
	struct FMulticastSparseDelegate OnConstraintAdded_BP; // 0x28(0x01)
	struct FMulticastSparseDelegate OnConstraintRemoved_BP; // 0x29(0x01)
	char pad_2A[0xe]; // 0x2a(0x0e)
	struct TArray<struct UTickableConstraint*> Constraints; // 0x38(0x10)
};

// Class Constraints.ConstraintsScriptingLibrary
// Size: 0x28 (Inherited: 0x28)
struct UConstraintsScriptingLibrary : UBlueprintFunctionLibrary {

	bool RemoveConstraint(struct UWorld* InWorld, int32_t InIndex); // Function Constraints.ConstraintsScriptingLibrary.RemoveConstraint // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9092d5c
	struct UConstraintsManager* GetManager(struct UWorld* InWorld); // Function Constraints.ConstraintsScriptingLibrary.GetManager // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9092cdc
	struct UTransformableComponentHandle* CreateTransformableComponentHandle(struct UWorld* InWorld, struct USceneComponent* InSceneComponent, struct FName& InSocketName); // Function Constraints.ConstraintsScriptingLibrary.CreateTransformableComponentHandle // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9092b20
	struct UTickableTransformConstraint* CreateFromType(struct UWorld* InWorld, enum class ETransformConstraintType InType); // Function Constraints.ConstraintsScriptingLibrary.CreateFromType // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9092838
	bool AddConstraint(struct UWorld* InWorld, struct UTransformableHandle* InParentHandle, struct UTransformableHandle* InChildHandle, struct UTickableTransformConstraint* InConstraint, bool bMaintainOffset); // Function Constraints.ConstraintsScriptingLibrary.AddConstraint // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x909240c
};

// Class Constraints.TransformableComponentHandle
// Size: 0x50 (Inherited: 0x40)
struct UTransformableComponentHandle : UTransformableHandle {
	struct TWeakObjectPtr<struct USceneComponent> Component; // 0x40(0x08)
	struct FName SocketName; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class Constraints.TickableTransformConstraint
// Size: 0x90 (Inherited: 0x70)
struct UTickableTransformConstraint : UTickableConstraint {
	struct UTransformableHandle* ParentTRSHandle; // 0x70(0x08)
	struct UTransformableHandle* ChildTRSHandle; // 0x78(0x08)
	bool bMaintainOffset; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	float Weight; // 0x84(0x04)
	bool bDynamicOffset; // 0x88(0x01)
	enum class ETransformConstraintType Type; // 0x89(0x01)
	char pad_8A[0x6]; // 0x8a(0x06)
};

// Class Constraints.TickableTranslationConstraint
// Size: 0xb0 (Inherited: 0x90)
struct UTickableTranslationConstraint : UTickableTransformConstraint {
	char pad_90[0x8]; // 0x90(0x08)
	struct FVector OffsetTranslation; // 0x98(0x18)
};

// Class Constraints.TickableRotationConstraint
// Size: 0xc0 (Inherited: 0x90)
struct UTickableRotationConstraint : UTickableTransformConstraint {
	char pad_90[0x10]; // 0x90(0x10)
	struct FQuat OffsetRotation; // 0xa0(0x20)
};

// Class Constraints.TickableScaleConstraint
// Size: 0xa8 (Inherited: 0x90)
struct UTickableScaleConstraint : UTickableTransformConstraint {
	struct FVector OffsetScale; // 0x90(0x18)
};

// Class Constraints.TickableParentConstraint
// Size: 0x110 (Inherited: 0x90)
struct UTickableParentConstraint : UTickableTransformConstraint {
	char pad_90[0x10]; // 0x90(0x10)
	struct FTransform OffsetTransform; // 0xa0(0x60)
	bool bScaling; // 0x100(0x01)
	char pad_101[0xf]; // 0x101(0x0f)
};

// Class Constraints.TickableLookAtConstraint
// Size: 0xa8 (Inherited: 0x90)
struct UTickableLookAtConstraint : UTickableTransformConstraint {
	struct FVector Axis; // 0x90(0x18)
};

