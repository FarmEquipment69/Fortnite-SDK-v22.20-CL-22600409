// BlueprintGeneratedClass BP_BotController_NPC_Base.BP_BotController_NPC_Base_C
// Size: 0x12c8 (Inherited: 0x1278)
struct ABP_BotController_NPC_Base_C : ABP_PhoebeController_NonParticipant_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1278(0x08)
	struct UFortAthenaNpcPatrollingComponent* FortAthenaNpcPatrolling; // 0x1280(0x08)
	struct UGameplayEffect* GE_Patrolling; // 0x1288(0x08)
	struct FActiveGameplayEffectHandle GE_PatrollingSpeedHandle; // 0x1290(0x08)
	struct FRotator SavedRotationRate; // 0x1298(0x18)
	struct FRotator PatrollingRotationRate; // 0x12b0(0x18)

	void BndEvt__FortAthenaNpcPatrolling_K2Node_ComponentBoundEvent_0_PatrollingComponentOnStartPatrolling__DelegateSignature(); // Function BP_BotController_NPC_Base.BP_BotController_NPC_Base_C.BndEvt__FortAthenaNpcPatrolling_K2Node_ComponentBoundEvent_0_PatrollingComponentOnStartPatrolling__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__FortAthenaNpcPatrolling_K2Node_ComponentBoundEvent_1_PatrollingComponentOnStopPatrolling__DelegateSignature(); // Function BP_BotController_NPC_Base.BP_BotController_NPC_Base_C.BndEvt__FortAthenaNpcPatrolling_K2Node_ComponentBoundEvent_1_PatrollingComponentOnStopPatrolling__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_BP_BotController_NPC_Base(int32_t EntryPoint); // Function BP_BotController_NPC_Base.BP_BotController_NPC_Base_C.ExecuteUbergraph_BP_BotController_NPC_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

