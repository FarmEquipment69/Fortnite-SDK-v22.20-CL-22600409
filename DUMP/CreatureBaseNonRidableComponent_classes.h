// BlueprintGeneratedClass CreatureBaseNonRidableComponent.CreatureBaseNonRidableComponent_C
// Size: 0xba (Inherited: 0xa0)
struct UCreatureBaseNonRidableComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa0(0x08)
	double Jump Attach Ground Height Min; // 0xa8(0x08)
	double Jump Attach Ground Height Buffer; // 0xb0(0x08)
	bool Uses Alt Riding Message; // 0xb8(0x01)
	bool KillOnRideAttempt; // 0xb9(0x01)

	void GetRidingInfoFromTarget(double& JumpAttachGroundHeightMin, double& JumpAttachGroundHeightBuffer, bool& UsesAltRidingMessage); // Function CreatureBaseNonRidableComponent.CreatureBaseNonRidableComponent_C.GetRidingInfoFromTarget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ToggleRidingAlternative(); // Function CreatureBaseNonRidableComponent.CreatureBaseNonRidableComponent_C.ToggleRidingAlternative // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void AlternateRidingEvent(); // Function CreatureBaseNonRidableComponent.CreatureBaseNonRidableComponent_C.AlternateRidingEvent // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_CreatureBaseNonRidableComponent(int32_t EntryPoint); // Function CreatureBaseNonRidableComponent.CreatureBaseNonRidableComponent_C.ExecuteUbergraph_CreatureBaseNonRidableComponent // (Final|UbergraphFunction) // @ game+0xd67374
};

