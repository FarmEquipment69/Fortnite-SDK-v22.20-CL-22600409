// BlueprintGeneratedClass BP_ControllerRequirement_CheckLivingWorldManagerBudget.BP_ControllerRequirement_CheckLivingWorldManagerBudget_C
// Size: 0x48 (Inherited: 0x30)
struct UBP_ControllerRequirement_CheckLivingWorldManagerBudget_C : UFortControllerRequirement {
	int32_t RequiredBudget; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FDataTableRowHandle EventRowHandle; // 0x38(0x10)

	bool IsRequirementMetInternal(struct FControllerRequirementTestContext& RequestContext); // Function BP_ControllerRequirement_CheckLivingWorldManagerBudget.BP_ControllerRequirement_CheckLivingWorldManagerBudget_C.IsRequirementMetInternal // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xd67374
};

