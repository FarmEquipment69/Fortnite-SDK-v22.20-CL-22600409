// Class StateTreeModule.StateTree
// Size: 0x190 (Inherited: 0x30)
struct UStateTree : UDataAsset {
	struct UStateTreeSchema* Schema; // 0x30(0x08)
	struct TArray<struct FCompactStateTreeState> States; // 0x38(0x10)
	struct TArray<struct FCompactStateTransition> Transitions; // 0x48(0x10)
	struct FInstancedStructArray Nodes; // 0x58(0x10)
	struct FStateTreeInstanceData DefaultInstanceData; // 0x68(0x30)
	struct FStateTreeInstanceData SharedInstanceData; // 0x98(0x30)
	char pad_C8[0x18]; // 0xc8(0x18)
	struct TArray<struct FStateTreeExternalDataDesc> NamedExternalDataDescs; // 0xe0(0x10)
	struct FStateTreePropertyBindings PropertyBindings; // 0xf0(0x68)
	struct FInstancedPropertyBag Parameters; // 0x158(0x10)
	struct FStateTreeIndex8 ParametersDataViewIndex; // 0x168(0x01)
	char pad_169[0x1]; // 0x169(0x01)
	uint16_t EvaluatorsBegin; // 0x16a(0x02)
	uint16_t EvaluatorsNum; // 0x16c(0x02)
	char pad_16E[0x2]; // 0x16e(0x02)
	struct TArray<struct FStateTreeExternalDataDesc> ExternalDataDescs; // 0x170(0x10)
	int32_t ExternalDataBaseIndex; // 0x180(0x04)
	int32_t NumDataViews; // 0x184(0x04)
	char pad_188[0x8]; // 0x188(0x08)
};

// Class StateTreeModule.StateTreeNodeBlueprintBase
// Size: 0x40 (Inherited: 0x28)
struct UStateTreeNodeBlueprintBase : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct TArray<struct FStateTreeBlueprintPropertyInfo> PropertyInfos; // 0x30(0x10)

	void SendEvent(struct FStateTreeEvent& event); // Function StateTreeModule.StateTreeNodeBlueprintBase.SendEvent // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6f664c0
};

// Class StateTreeModule.StateTreeConditionBlueprintBase
// Size: 0x40 (Inherited: 0x40)
struct UStateTreeConditionBlueprintBase : UStateTreeNodeBlueprintBase {

	bool ReceiveTestCondition(struct AActor* OwnerActor); // Function StateTreeModule.StateTreeConditionBlueprintBase.ReceiveTestCondition // (Event|Public|BlueprintEvent|Const) // @ game+0xd67374
};

// Class StateTreeModule.StateTreeEvaluatorBlueprintBase
// Size: 0x40 (Inherited: 0x40)
struct UStateTreeEvaluatorBlueprintBase : UStateTreeNodeBlueprintBase {

	void ReceiveTreeStop(struct AActor* OwnerActor); // Function StateTreeModule.StateTreeEvaluatorBlueprintBase.ReceiveTreeStop // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ReceiveTreeStart(struct AActor* OwnerActor); // Function StateTreeModule.StateTreeEvaluatorBlueprintBase.ReceiveTreeStart // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ReceiveTick(struct AActor* OwnerActor, float DeltaTime); // Function StateTreeModule.StateTreeEvaluatorBlueprintBase.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ReceiveStateCompleted(struct AActor* OwnerActor, enum class EStateTreeRunStatus CompletionStatus, struct FStateTreeActiveStates CompletedState); // Function StateTreeModule.StateTreeEvaluatorBlueprintBase.ReceiveStateCompleted // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ReceiveExitState(struct AActor* OwnerActor, enum class EStateTreeStateChangeType ChangeType, struct FStateTreeTransitionResult& TRANSITION); // Function StateTreeModule.StateTreeEvaluatorBlueprintBase.ReceiveExitState // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void ReceiveEvaluate(struct AActor* OwnerActor, enum class EStateTreeEvaluationType EvalType, float DeltaTime); // Function StateTreeModule.StateTreeEvaluatorBlueprintBase.ReceiveEvaluate // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ReceiveEnterState(struct AActor* OwnerActor, enum class EStateTreeStateChangeType ChangeType, struct FStateTreeTransitionResult& TRANSITION); // Function StateTreeModule.StateTreeEvaluatorBlueprintBase.ReceiveEnterState // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
};

// Class StateTreeModule.StateTreeSchema
// Size: 0x28 (Inherited: 0x28)
struct UStateTreeSchema : UObject {
};

// Class StateTreeModule.StateTreeTaskBlueprintBase
// Size: 0x40 (Inherited: 0x40)
struct UStateTreeTaskBlueprintBase : UStateTreeNodeBlueprintBase {

	enum class EStateTreeRunStatus ReceiveTick(struct AActor* OwnerActor, float DeltaTime); // Function StateTreeModule.StateTreeTaskBlueprintBase.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ReceiveStateCompleted(struct AActor* OwnerActor, enum class EStateTreeRunStatus CompletionStatus, struct FStateTreeActiveStates CompletedActiveStates); // Function StateTreeModule.StateTreeTaskBlueprintBase.ReceiveStateCompleted // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ReceiveExitState(struct AActor* OwnerActor, enum class EStateTreeStateChangeType ChangeType, struct FStateTreeTransitionResult& TRANSITION); // Function StateTreeModule.StateTreeTaskBlueprintBase.ReceiveExitState // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	enum class EStateTreeRunStatus ReceiveEnterState(struct AActor* OwnerActor, enum class EStateTreeStateChangeType ChangeType, struct FStateTreeTransitionResult& TRANSITION); // Function StateTreeModule.StateTreeTaskBlueprintBase.ReceiveEnterState // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x6f6977c
};

