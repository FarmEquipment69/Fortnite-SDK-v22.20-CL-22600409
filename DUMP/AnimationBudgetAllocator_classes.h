// Class AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAnimationBudgetBlueprintLibrary : UBlueprintFunctionLibrary {

	void SetAnimationBudgetParameters(struct UObject* WorldContextObject, struct FAnimationBudgetAllocatorParameters& InParameters); // Function AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary.SetAnimationBudgetParameters // (Final|Native|Static|Private|HasOutParms|BlueprintCallable) // @ game+0x6af7bf8
	void EnableAnimationBudget(struct UObject* WorldContextObject, bool bEnabled); // Function AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary.EnableAnimationBudget // (Final|Native|Static|Private|BlueprintCallable) // @ game+0x6af7af0
};

// Class AnimationBudgetAllocator.SkeletalMeshComponentBudgeted
// Size: 0xf50 (Inherited: 0xf20)
struct USkeletalMeshComponentBudgeted : USkeletalMeshComponent {
	char pad_F20[0x20]; // 0xf20(0x20)
	char bAutoRegisterWithBudgetAllocator : 1; // 0xf40(0x01)
	char bAutoCalculateSignificance : 1; // 0xf40(0x01)
	char bShouldUseActorRenderedFlag : 1; // 0xf40(0x01)
	char pad_F40_3 : 5; // 0xf40(0x01)
	char pad_F41[0xf]; // 0xf41(0x0f)

	void SetAutoRegisterWithBudgetAllocator(bool bInAutoRegisterWithBudgetAllocator); // Function AnimationBudgetAllocator.SkeletalMeshComponentBudgeted.SetAutoRegisterWithBudgetAllocator // (Final|Native|Public|BlueprintCallable) // @ game+0x6af7d20
};

