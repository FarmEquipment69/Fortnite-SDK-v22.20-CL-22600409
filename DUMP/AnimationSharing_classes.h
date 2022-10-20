// Class AnimationSharing.AnimSharingStateInstance
// Size: 0x370 (Inherited: 0x350)
struct UAnimSharingStateInstance : UAnimInstance {
	struct UAnimSequence* AnimationToPlay; // 0x348(0x08)
	float PermutationTimeOffset; // 0x350(0x04)
	float PlayRate; // 0x354(0x04)
	bool bStateBool; // 0x358(0x01)
	struct UAnimSharingInstance* Instance; // 0x360(0x08)
	char pad_369[0x7]; // 0x369(0x07)

	void GetInstancedActors(struct TArray<struct AActor*>& Actors); // Function AnimationSharing.AnimSharingStateInstance.GetInstancedActors // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x6afb008
};

// Class AnimationSharing.AnimSharingTransitionInstance
// Size: 0x360 (Inherited: 0x350)
struct UAnimSharingTransitionInstance : UAnimInstance {
	struct TWeakObjectPtr<struct USkeletalMeshComponent> FromComponent; // 0x348(0x08)
	struct TWeakObjectPtr<struct USkeletalMeshComponent> ToComponent; // 0x350(0x08)
	float BlendTime; // 0x358(0x04)
	bool bBlendBool; // 0x35c(0x01)
};

// Class AnimationSharing.AnimSharingAdditiveInstance
// Size: 0x360 (Inherited: 0x350)
struct UAnimSharingAdditiveInstance : UAnimInstance {
	struct TWeakObjectPtr<struct USkeletalMeshComponent> BaseComponent; // 0x348(0x08)
	struct TWeakObjectPtr<struct UAnimSequence> AdditiveAnimation; // 0x350(0x08)
	float Alpha; // 0x358(0x04)
	bool bStateBool; // 0x35c(0x01)
};

// Class AnimationSharing.AnimSharingInstance
// Size: 0x120 (Inherited: 0x28)
struct UAnimSharingInstance : UObject {
	struct TArray<struct AActor*> RegisteredActors; // 0x28(0x10)
	char pad_38[0x50]; // 0x38(0x50)
	struct UAnimationSharingStateProcessor* StateProcessor; // 0x88(0x08)
	char pad_90[0x38]; // 0x90(0x38)
	struct TArray<struct UAnimSequence*> UsedAnimationSequences; // 0xc8(0x10)
	char pad_D8[0x10]; // 0xd8(0x10)
	struct UEnum* StateEnum; // 0xe8(0x08)
	struct AActor* SharingActor; // 0xf0(0x08)
	char pad_F8[0x28]; // 0xf8(0x28)
};

// Class AnimationSharing.AnimationSharingManager
// Size: 0x88 (Inherited: 0x28)
struct UAnimationSharingManager : UObject {
	struct TArray<struct USkeleton*> Skeletons; // 0x28(0x10)
	struct TArray<struct UAnimSharingInstance*> PerSkeletonData; // 0x38(0x10)
	char pad_48[0x40]; // 0x48(0x40)

	void RegisterActorWithSkeletonBP(struct AActor* InActor, struct USkeleton* SharingSkeleton); // Function AnimationSharing.AnimationSharingManager.RegisterActorWithSkeletonBP // (Final|Native|Public|BlueprintCallable) // @ game+0x6afb240
	struct UAnimationSharingManager* GetAnimationSharingManager(struct UObject* WorldContextObject); // Function AnimationSharing.AnimationSharingManager.GetAnimationSharingManager // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6afaf88
	bool CreateAnimationSharingManager(struct UObject* WorldContextObject, struct UAnimationSharingSetup* Setup); // Function AnimationSharing.AnimationSharingManager.CreateAnimationSharingManager // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6afaea8
	bool AnimationSharingEnabled(); // Function AnimationSharing.AnimationSharingManager.AnimationSharingEnabled // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x6afae8c
};

// Class AnimationSharing.AnimationSharingSetup
// Size: 0x48 (Inherited: 0x28)
struct UAnimationSharingSetup : UObject {
	struct TArray<struct FPerSkeletonAnimationSharingSetup> SkeletonSetups; // 0x28(0x10)
	struct FAnimationSharingScalability ScalabilitySettings; // 0x38(0x10)
};

// Class AnimationSharing.AnimationSharingStateProcessor
// Size: 0x50 (Inherited: 0x28)
struct UAnimationSharingStateProcessor : UObject {
	struct TSoftObjectPtr<UEnum> AnimationStateEnum; // 0x28(0x28)

	void ProcessActorState(int32_t& OutState, struct AActor* InActor, char CurrentState, char OnDemandState, bool& bShouldProcess); // Function AnimationSharing.AnimationSharingStateProcessor.ProcessActorState // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x6afb0a4
	struct UEnum* GetAnimationStateEnum(); // Function AnimationSharing.AnimationSharingStateProcessor.GetAnimationStateEnum // (Native|Event|Public|BlueprintEvent) // @ game+0x273be80
};

