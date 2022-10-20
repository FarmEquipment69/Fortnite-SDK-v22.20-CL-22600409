// BlueprintGeneratedClass PlayerRiderComponent.PlayerRiderComponent_C
// Size: 0x740 (Inherited: 0x638)
struct UPlayerRiderComponent_C : UControllingRiderComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x638(0x08)
	struct FGameplayTagContainer T_PlayerIsRiding; // 0x640(0x20)
	struct UGameplayEffect* GE_PlayerIsRiding; // 0x660(0x08)
	struct AFortPlayerPawn* FortPlayerRef; // 0x668(0x08)
	double JumpOnMountDistanceCheck; // 0x670(0x08)
	struct FMulticastInlineDelegate RiderUINewStats; // 0x678(0x10)
	struct FMulticastInlineDelegate RiderUIEnd; // 0x688(0x10)
	double targetEnergy; // 0x698(0x08)
	double targetHealth; // 0x6a0(0x08)
	struct FGameplayTagContainer T_CannotRideBucket; // 0x6a8(0x20)
	struct FMulticastInlineDelegate RiderUIUpdateEnergy; // 0x6c8(0x10)
	struct FMulticastInlineDelegate RiderUIUpdateHealth; // 0x6d8(0x10)
	struct AActor* CachedRidableActor; // 0x6e8(0x08)
	struct FGameplayTagContainer Cannot Ride Rider Bucket; // 0x6f0(0x20)
	struct FGameplayTag JumpOnCreature_Cue_Tag; // 0x710(0x04)
	char pad_714[0x4]; // 0x714(0x04)
	struct UGameplayEffect* GE_PlayerPetting; // 0x718(0x08)
	struct FGameplayTagContainer Tag Quests Wildlife Pet; // 0x720(0x20)

	void GetRidingInfoFromTarget(double& JumpAttachGroundHeightMin, double& JumpAttachGroundHeightBuffer, bool& UsesAltRidingMessage); // Function PlayerRiderComponent.PlayerRiderComponent_C.GetRidingInfoFromTarget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnRep_targetHealth(); // Function PlayerRiderComponent.PlayerRiderComponent_C.OnRep_targetHealth // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnRep_targetEnergy(); // Function PlayerRiderComponent.PlayerRiderComponent_C.OnRep_targetEnergy // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void GetJumpInfo(struct AActor* TargetActor, struct UActorComponent*& TargetActorComponent, double& JumpAttach_GroundHeightMin, double& JumpAttach_GroundHeightBuffer, bool& UseAltRidingMessage); // Function PlayerRiderComponent.PlayerRiderComponent_C.GetJumpInfo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void TestIfValidForRidingAttempt(struct UObject* Object, bool& Success, struct UObject*& TargetObject, bool& UseAltRidingMessage); // Function PlayerRiderComponent.PlayerRiderComponent_C.TestIfValidForRidingAttempt // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ToggleRiding(struct AActor* PlayerPawn, struct AActor* Target, bool ShouldRide, bool& bChangedRiding); // Function PlayerRiderComponent.PlayerRiderComponent_C.ToggleRiding // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void EventReceived_E5B5FB5340DB5660002329825657B406(struct FGameplayEventData Payload); // Function PlayerRiderComponent.PlayerRiderComponent_C.EventReceived_E5B5FB5340DB5660002329825657B406 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Added_42EF586645CCFF06FFA4D9A5D59B1298(); // Function PlayerRiderComponent.PlayerRiderComponent_C.Added_42EF586645CCFF06FFA4D9A5D59B1298 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Added_A83C775344FE0F6BDAAC4B971F57425E(); // Function PlayerRiderComponent.PlayerRiderComponent_C.Added_A83C775344FE0F6BDAAC4B971F57425E // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void EventReceived_3DA19BC649FB853BA2CC0FADFF8D08F6(struct FGameplayEventData Payload); // Function PlayerRiderComponent.PlayerRiderComponent_C.EventReceived_3DA19BC649FB853BA2CC0FADFF8D08F6 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ToggleRidingAlternative(); // Function PlayerRiderComponent.PlayerRiderComponent_C.ToggleRidingAlternative // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ReceiveBeginPlay(); // Function PlayerRiderComponent.PlayerRiderComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void HandleStartedRiding(struct URidableComponent* Ridable); // Function PlayerRiderComponent.PlayerRiderComponent_C.HandleStartedRiding // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void HandleStoppedRiding(struct URidableComponent* Ridable); // Function PlayerRiderComponent.PlayerRiderComponent_C.HandleStoppedRiding // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ToggleRidingOnServer(struct UObject* TargetObject, bool UseAltRidingMessage); // Function PlayerRiderComponent.PlayerRiderComponent_C.ToggleRidingOnServer // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetTargetHealth(double targetHealth); // Function PlayerRiderComponent.PlayerRiderComponent_C.SetTargetHealth // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void RiderUIStartClient(struct FText Name, struct FSlateBrush Icon, struct AActor* Ridable); // Function PlayerRiderComponent.PlayerRiderComponent_C.RiderUIStartClient // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void RiderUIEndClient(struct AActor* Ridable); // Function PlayerRiderComponent.PlayerRiderComponent_C.RiderUIEndClient // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void MovementModeChanged(struct ACharacter* Character, enum class EMovementMode PrevMovementMode, char PreviousCustomMode); // Function PlayerRiderComponent.PlayerRiderComponent_C.MovementModeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleTrackingRidables(); // Function PlayerRiderComponent.PlayerRiderComponent_C.HandleTrackingRidables // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void MountLanded(struct FHitResult& Hit); // Function PlayerRiderComponent.PlayerRiderComponent_C.MountLanded // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleRequestPettingStart(); // Function PlayerRiderComponent.PlayerRiderComponent_C.HandleRequestPettingStart // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void HandleRequestPettingStop(); // Function PlayerRiderComponent.PlayerRiderComponent_C.HandleRequestPettingStop // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_PlayerRiderComponent(int32_t EntryPoint); // Function PlayerRiderComponent.PlayerRiderComponent_C.ExecuteUbergraph_PlayerRiderComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
	void RiderUIUpdateHealth__DelegateSignature(double Health); // Function PlayerRiderComponent.PlayerRiderComponent_C.RiderUIUpdateHealth__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void RiderUIUpdateEnergy__DelegateSignature(double Energy); // Function PlayerRiderComponent.PlayerRiderComponent_C.RiderUIUpdateEnergy__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void RiderUIEnd__DelegateSignature(struct AActor* RidableActor); // Function PlayerRiderComponent.PlayerRiderComponent_C.RiderUIEnd__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void RiderUINewStats__DelegateSignature(struct FText Name, struct FSlateBrush Icon, struct AActor* RidableActor); // Function PlayerRiderComponent.PlayerRiderComponent_C.RiderUINewStats__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

