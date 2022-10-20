// Class GameplayBehaviorsModule.BlackboardKeyType_GameplayTag
// Size: 0x30 (Inherited: 0x30)
struct UBlackboardKeyType_GameplayTag : UBlackboardKeyType {
};

// Class GameplayBehaviorsModule.BTDecorator_GameplayTagQuery
// Size: 0xe8 (Inherited: 0x68)
struct UBTDecorator_GameplayTagQuery : UBTDecorator {
	struct FBlackboardKeySelector ActorForGameplayTagQuery; // 0x68(0x28)
	struct FGameplayTagQuery GameplayTagQuery; // 0x90(0x48)
	struct TArray<struct FGameplayTag> QueryTags; // 0xd8(0x10)
};

// Class GameplayBehaviorsModule.BTTask_StopGameplayBehavior
// Size: 0x78 (Inherited: 0x70)
struct UBTTask_StopGameplayBehavior : UBTTaskNode {
	struct UGameplayBehavior* BehaviorToStop; // 0x70(0x08)
};

// Class GameplayBehaviorsModule.GameplayBehavior
// Size: 0x88 (Inherited: 0x28)
struct UGameplayBehavior : UObject {
	char pad_28[0x14]; // 0x28(0x14)
	struct FGameplayTag ActionTag; // 0x3c(0x04)
	char pad_40[0x18]; // 0x40(0x18)
	struct TArray<struct AActor*> RelevantActors; // 0x58(0x10)
	struct AActor* TransientSmartObjectOwner; // 0x68(0x08)
	struct AActor* TransientAvatar; // 0x70(0x08)
	struct TArray<struct UGameplayTask*> ActiveTasks; // 0x78(0x10)

	void K2_TriggerBehavior(struct AActor* Avatar, struct UGameplayBehaviorConfig* Config, struct AActor* SmartObjectOwner); // Function GameplayBehaviorsModule.GameplayBehavior.K2_TriggerBehavior // (Final|Native|Public|BlueprintCallable) // @ game+0x7136240
	void K2_OnTriggeredPawn(struct APawn* Avatar, struct UGameplayBehaviorConfig* Config, struct AActor* SmartObjectOwner); // Function GameplayBehaviorsModule.GameplayBehavior.K2_OnTriggeredPawn // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void K2_OnTriggeredCharacter(struct ACharacter* Avatar, struct UGameplayBehaviorConfig* Config, struct AActor* SmartObjectOwner); // Function GameplayBehaviorsModule.GameplayBehavior.K2_OnTriggeredCharacter // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void K2_OnTriggered(struct AActor* Avatar, struct UGameplayBehaviorConfig* Config, struct AActor* SmartObjectOwner); // Function GameplayBehaviorsModule.GameplayBehavior.K2_OnTriggered // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void K2_OnFinishedPawn(struct APawn* Avatar, bool bWasInterrupted); // Function GameplayBehaviorsModule.GameplayBehavior.K2_OnFinishedPawn // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void K2_OnFinishedCharacter(struct ACharacter* Avatar, bool bWasInterrupted); // Function GameplayBehaviorsModule.GameplayBehavior.K2_OnFinishedCharacter // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void K2_OnFinished(struct AActor* Avatar, bool bWasInterrupted); // Function GameplayBehaviorsModule.GameplayBehavior.K2_OnFinished // (Event|Public|BlueprintEvent) // @ game+0xd67374
	int32_t K2_GetNextActorIndexInSequence(int32_t CurrentIndex); // Function GameplayBehaviorsModule.GameplayBehavior.K2_GetNextActorIndexInSequence // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7136190
	void K2_EndBehavior(struct AActor* Avatar); // Function GameplayBehaviorsModule.GameplayBehavior.K2_EndBehavior // (Final|Native|Public|BlueprintCallable) // @ game+0x713610c
	void K2_AbortBehavior(struct AActor* Avatar); // Function GameplayBehaviorsModule.GameplayBehavior.K2_AbortBehavior // (Final|Native|Public|BlueprintCallable) // @ game+0x7136088
};

// Class GameplayBehaviorsModule.GameplayBehaviorConfig
// Size: 0x30 (Inherited: 0x28)
struct UGameplayBehaviorConfig : UObject {
	struct UGameplayBehavior* BehaviorClass; // 0x28(0x08)
};

// Class GameplayBehaviorsModule.GameplayBehaviorConfig_Animation
// Size: 0x68 (Inherited: 0x30)
struct UGameplayBehaviorConfig_Animation : UGameplayBehaviorConfig {
	struct TSoftObjectPtr<UAnimMontage> AnimMontage; // 0x30(0x28)
	float PlayRate; // 0x58(0x04)
	struct FName StartSectionName; // 0x5c(0x04)
	char bLoop : 1; // 0x60(0x01)
	char pad_60_1 : 7; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// Class GameplayBehaviorsModule.GameplayBehaviorConfig_BehaviorTree
// Size: 0x60 (Inherited: 0x30)
struct UGameplayBehaviorConfig_BehaviorTree : UGameplayBehaviorConfig {
	struct TSoftObjectPtr<UBehaviorTree> BehaviorTree; // 0x30(0x28)
	char bRevertToPreviousBTOnFinish : 1; // 0x58(0x01)
	char pad_58_1 : 7; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
};

// Class GameplayBehaviorsModule.GameplayBehaviorsBlueprintFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UGameplayBehaviorsBlueprintFunctionLibrary : UBlueprintFunctionLibrary {

	void SetValueAsGameplayTagForBlackboardComp(struct UBlackboardComponent* BlackboardComp, struct FName& KeyName, struct FGameplayTagContainer GameplayTagValue); // Function GameplayBehaviorsModule.GameplayBehaviorsBlueprintFunctionLibrary.SetValueAsGameplayTagForBlackboardComp // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x7136630
	void SetBlackboardValueAsGameplayTag(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, struct FGameplayTagContainer Value); // Function GameplayBehaviorsModule.GameplayBehaviorsBlueprintFunctionLibrary.SetBlackboardValueAsGameplayTag // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x7136458
	struct FGameplayTagContainer GetBlackboardValueAsGameplayTagFromBlackboardComp(struct UBlackboardComponent* BlackboardComp, struct FName& KeyName); // Function GameplayBehaviorsModule.GameplayBehaviorsBlueprintFunctionLibrary.GetBlackboardValueAsGameplayTagFromBlackboardComp // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x7135fa0
	struct FGameplayTagContainer GetBlackboardValueAsGameplayTag(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Function GameplayBehaviorsModule.GameplayBehaviorsBlueprintFunctionLibrary.GetBlackboardValueAsGameplayTag // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x7135e58
	void AddGameplayTagFilterToBlackboardKeySelector(struct FBlackboardKeySelector& InSelector, struct UObject* Owner, struct FName PropertyName); // Function GameplayBehaviorsModule.GameplayBehaviorsBlueprintFunctionLibrary.AddGameplayTagFilterToBlackboardKeySelector // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x7135d34
};

// Class GameplayBehaviorsModule.GameplayBehaviorSubsystem
// Size: 0x80 (Inherited: 0x30)
struct UGameplayBehaviorSubsystem : UWorldSubsystem {
	struct TMap<struct AActor*, struct FAgentGameplayBehaviors> AgentGameplayBehaviors; // 0x30(0x50)
};

// Class GameplayBehaviorsModule.GameplayBehavior_AnimationBased
// Size: 0x98 (Inherited: 0x88)
struct UGameplayBehavior_AnimationBased : UGameplayBehavior {
	struct TArray<struct FMontagePlaybackData> ActivePlayback; // 0x88(0x10)

	void OnMontageFinished(struct UAnimMontage* Montage, bool bInterrupted, struct AActor* InAvatar); // Function GameplayBehaviorsModule.GameplayBehavior_AnimationBased.OnMontageFinished // (Final|Native|Protected) // @ game+0x713634c
};

// Class GameplayBehaviorsModule.GameplayBehavior_BehaviorTree
// Size: 0xa8 (Inherited: 0x88)
struct UGameplayBehavior_BehaviorTree : UGameplayBehavior {
	struct UBehaviorTree* PreviousBT; // 0x88(0x08)
	struct AAIController* AIController; // 0x90(0x08)
	bool bSingleRun; // 0x98(0x01)
	char pad_99[0xf]; // 0x99(0x0f)
};

