// BlueprintGeneratedClass GAB_Melee_Generic_EventGraph.GAB_Melee_Generic_EventGraph_C
// Size: 0xb51 (Inherited: 0xb20)
struct UGAB_Melee_Generic_EventGraph_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	bool Stamina Lockout; // 0xb28(0x01)
	bool Debug; // 0xb29(0x01)
	char pad_B2A[0x2]; // 0xb2a(0x02)
	int32_t DebugSpecificHitNumber; // 0xb2c(0x04)
	int32_t Counter; // 0xb30(0x04)
	char pad_B34[0x4]; // 0xb34(0x04)
	struct UGameplayEffect* GE_KnockBackImmunity; // 0xb38(0x08)
	struct FActiveGameplayEffectHandle GEH_KnockBackImmunity; // 0xb40(0x08)
	struct FName N_SavedCollisionChannel; // 0xb48(0x04)
	struct FGameplayTag TC_Triggered; // 0xb4c(0x04)
	bool ParentHandlesMontage,Targeting,Commit; // 0xb50(0x01)

	void Get_Is_Actor_B_Within_HalfAngle_Of_Actor_A_Facing(struct AActor* Actor_A, struct AActor* Actor_B, double Half_Angle_Of_Actor_A_Facing, bool& IsWithinHalfAngle); // Function GAB_Melee_Generic_EventGraph.GAB_Melee_Generic_EventGraph_C.Get_Is_Actor_B_Within_HalfAngle_Of_Actor_A_Facing // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xd67374
	void GetLocationAtDistanceFromActorFacing(struct AActor* Actor, double Distance, double Rotation(Pitch), double Rotation(Yaw), struct FVector& Location); // Function GAB_Melee_Generic_EventGraph.GAB_Melee_Generic_EventGraph_C.GetLocationAtDistanceFromActorFacing // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xd67374
	void Get_X_Y_Distance_Between_Vectors(struct FVector vector1, struct FVector vector2, double& X_Y_Distance); // Function GAB_Melee_Generic_EventGraph.GAB_Melee_Generic_EventGraph_C.Get_X_Y_Distance_Between_Vectors // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xd67374
	void SetPawnCollision(struct AFortPawn* FortPawn, bool CollisionOn); // Function GAB_Melee_Generic_EventGraph.GAB_Melee_Generic_EventGraph_C.SetPawnCollision // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetKnockbackImmunity(bool ImmunityOn); // Function GAB_Melee_Generic_EventGraph.GAB_Melee_Generic_EventGraph_C.SetKnockbackImmunity // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Completed_8C20D6D3411A3D7E54D6049F69DF10BE(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GAB_Melee_Generic_EventGraph.GAB_Melee_Generic_EventGraph_C.Completed_8C20D6D3411A3D7E54D6049F69DF10BE // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Cancelled_8C20D6D3411A3D7E54D6049F69DF10BE(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GAB_Melee_Generic_EventGraph.GAB_Melee_Generic_EventGraph_C.Cancelled_8C20D6D3411A3D7E54D6049F69DF10BE // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Triggered_8C20D6D3411A3D7E54D6049F69DF10BE(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GAB_Melee_Generic_EventGraph.GAB_Melee_Generic_EventGraph_C.Triggered_8C20D6D3411A3D7E54D6049F69DF10BE // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void K2_ActivateAbility(); // Function GAB_Melee_Generic_EventGraph.GAB_Melee_Generic_EventGraph_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnTriggeredFromAnimNotify(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GAB_Melee_Generic_EventGraph.GAB_Melee_Generic_EventGraph_C.OnTriggeredFromAnimNotify // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GAB_Melee_Generic_EventGraph(int32_t EntryPoint); // Function GAB_Melee_Generic_EventGraph.GAB_Melee_Generic_EventGraph_C.ExecuteUbergraph_GAB_Melee_Generic_EventGraph // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

