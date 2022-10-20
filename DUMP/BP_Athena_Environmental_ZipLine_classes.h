// BlueprintGeneratedClass BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C
// Size: 0xdb0 (Inherited: 0xc30)
struct ABP_Athena_Environmental_ZipLine_C : AFortAthenaZipline {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc30(0x08)
	struct UCapsuleComponent* InteractCapsule; // 0xc38(0x08)
	struct UStaticMeshComponent* SM_Line; // 0xc40(0x08)
	struct UCapsuleComponent* OverlapCapsule; // 0xc48(0x08)
	struct USceneComponent* Zipline; // 0xc50(0x08)
	struct USceneComponent* Scene; // 0xc58(0x08)
	struct FVector StartLocation; // 0xc60(0x18)
	struct FVector TargetLocation; // 0xc78(0x18)
	struct FVector MotorOffset; // 0xc90(0x18)
	double LineThickness; // 0xca8(0x08)
	double LineCollisionThickness; // 0xcb0(0x08)
	struct ABuildingActor* PoleA; // 0xcb8(0x08)
	struct ABuildingActor* PoleB; // 0xcc0(0x08)
	struct FCurveTableRowHandle SpeedCTHandle; // 0xcc8(0x10)
	struct FCurveTableRowHandle ZipLineEnabledCTHandle; // 0xcd8(0x10)
	struct FCurveTableRowHandle LineCollisionRadiusCTHandle; // 0xce8(0x10)
	struct FCurveTableRowHandle BuildingCheckBoxExtentsCTHandle; // 0xcf8(0x10)
	struct FName BackendName; // 0xd08(0x04)
	char pad_D0C[0x4]; // 0xd0c(0x04)
	struct UFortQuestItemDefinition* QuestItem; // 0xd10(0x08)
	double LineExtendBeyondPoleLength; // 0xd18(0x08)
	struct FVector PoleASocketLocation; // 0xd20(0x18)
	struct FVector PoleBSocketLocation; // 0xd38(0x18)
	struct AFortPlayerPawn* PlayerPawn; // 0xd50(0x08)
	struct TArray<struct AFortPlayerPawn*> PlayersPendingMovementModeChange; // 0xd58(0x10)
	double CollisionHeightAboveLine; // 0xd68(0x08)
	struct FVector PlayerOffsetToLine_Hoverboard; // 0xd70(0x18)
	struct FTimerHandle EndOverlapReleaseTimer; // 0xd88(0x08)
	struct FGameplayTagContainer BlockInteractTags; // 0xd90(0x20)

	bool BlueprintCanInteract(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted, enum class TInteractionType InteractionType); // Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.BlueprintCanInteract // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xd67374
	void CalculatePositionsOfPoles(); // Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.CalculatePositionsOfPoles // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Setup Overlap Bindings(); // Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.Setup Overlap Bindings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleEnterZipline(struct AFortPlayerPawn* InPlayerPawn); // Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.HandleEnterZipline // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void CheckForBuildings(struct AFortPlayerPawn* Player, bool& BuildingNearby?); // Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.CheckForBuildings // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void QuestCheckForUse(struct AFortPlayerController* FortPlayerController); // Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.QuestCheckForUse // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void GetCharacterCustomMovementMode(struct APawn* Character, enum class EFortCustomMovement& CustomMovementMode, enum class EMovementMode& MovementMode); // Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.GetCharacterCustomMovementMode // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void StartZipLining(struct AFortPlayerPawn* FortPlayerPawn, struct UPrimitiveComponent* InteractComponent); // Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.StartZipLining // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UserConstructionScript(); // Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ReceiveBeginPlay(); // Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void HandleOnMapInfoInitialized(); // Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.HandleOnMapInfoInitialized // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleOnMovementModeChanged(struct ACharacter* Character, enum class EMovementMode PrevMovementMode, char PreviousCustomMode); // Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.HandleOnMovementModeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleOnBeginOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.HandleOnBeginOverlap // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleOnEndOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.HandleOnEndOverlap // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ReleaseZipline(); // Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.ReleaseZipline // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandlePoleDied(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.HandlePoleDied // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_BP_Athena_Environmental_ZipLine(int32_t EntryPoint); // Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.ExecuteUbergraph_BP_Athena_Environmental_ZipLine // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

