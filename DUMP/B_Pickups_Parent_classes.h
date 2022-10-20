// BlueprintGeneratedClass B_Pickups_Parent.B_Pickups_Parent_C
// Size: 0x57c (Inherited: 0x3f8)
struct AB_Pickups_Parent_C : AFortPickupsParent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3f8(0x08)
	struct USceneComponent* Root; // 0x400(0x08)
	float MobileSelectedTL_LerpInteactoIcon_FF208F9641BE589B76EF698B94309EA7; // 0x408(0x04)
	float MobileSelectedTL_LerpObject_FF208F9641BE589B76EF698B94309EA7; // 0x40c(0x04)
	enum class ETimelineDirection MobileSelectedTL__Direction_FF208F9641BE589B76EF698B94309EA7; // 0x410(0x01)
	char pad_411[0x7]; // 0x411(0x07)
	struct UTimelineComponent* MobileSelectedTL; // 0x418(0x08)
	struct UStaticMeshComponent* Static_Mesh_Pickup; // 0x420(0x08)
	struct USkeletalMeshComponent* Skeletal_Mesh_Pickup; // 0x428(0x08)
	struct UPrimitiveComponent* SkeletalOrStaticMeshAssetPrimitive; // 0x430(0x08)
	int32_t CurrentElementIndex; // 0x438(0x04)
	bool Tossed; // 0x43c(0x01)
	char pad_43D[0x3]; // 0x43d(0x03)
	double Component Radius (Scaled); // 0x440(0x08)
	double Component Radius Multiplier; // 0x448(0x08)
	struct TArray<struct FLinearColor> Outline Rarity Colors; // 0x450(0x10)
	double Component Radius; // 0x460(0x08)
	double Picked Up Delay Before Glow; // 0x468(0x08)
	double Picked Up Fade In Time; // 0x470(0x08)
	double Picked Up Hold Time; // 0x478(0x08)
	double Picked Up Fade Out Time; // 0x480(0x08)
	double Picked Up Sweep Speed; // 0x488(0x08)
	struct UParticleSystem* Picked Up Trail PS; // 0x490(0x08)
	struct TArray<double> Sparkle Spawn Rate (Picked Up); // 0x498(0x10)
	struct TArray<double> Lifetime (Picked Up); // 0x4a8(0x10)
	struct UForceFeedbackEffect* PickupForceFeedback; // 0x4b8(0x08)
	struct TArray<struct FString> Names of Materials And Parents Exempt from Repartening; // 0x4c0(0x10)
	bool HasUniqueMaterialIds; // 0x4d0(0x01)
	char pad_4D1[0x7]; // 0x4d1(0x07)
	struct UParticleSystemComponent* BackgroundParticleSystem; // 0x4d8(0x08)
	struct TArray<struct FLinearColor> BackgroundRarityColors; // 0x4e0(0x10)
	double Random Rotation; // 0x4f0(0x08)
	struct FVector MobileSelectedOffset; // 0x4f8(0x18)
	struct FVector MobileSelectedScale; // 0x510(0x18)
	struct UStaticMeshComponent* MobileInteractIcon; // 0x528(0x08)
	struct FVector MobileInteractIconLocation; // 0x530(0x18)
	struct FVector MobileInteractIconScale; // 0x548(0x18)
	struct UMaterialInterface* MobileInteractionMaterial; // 0x560(0x08)
	bool PickedUp; // 0x568(0x01)
	char pad_569[0x3]; // 0x569(0x03)
	struct FLinearColor MissionItemOutlineColor; // 0x56c(0x10)

	void Mobile Interation Icon Setup(); // Function B_Pickups_Parent.B_Pickups_Parent_C.Mobile Interation Icon Setup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetVisibleMobileInteractIcon(bool Visible); // Function B_Pickups_Parent.B_Pickups_Parent_C.SetVisibleMobileInteractIcon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetActiveBackgroundParticleSystem(bool Active, bool Reset); // Function B_Pickups_Parent.B_Pickups_Parent_C.SetActiveBackgroundParticleSystem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetHiddenBackgroundVisualComponents(bool Hidden); // Function B_Pickups_Parent.B_Pickups_Parent_C.SetHiddenBackgroundVisualComponents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void DestroyBackgroundVisualComponents(); // Function B_Pickups_Parent.B_Pickups_Parent_C.DestroyBackgroundVisualComponents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ScaleHologramTimingsForPvP(); // Function B_Pickups_Parent.B_Pickups_Parent_C.ScaleHologramTimingsForPvP // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetHologramPickedUpParams(bool Tier 0); // Function B_Pickups_Parent.B_Pickups_Parent_C.SetHologramPickedUpParams // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SpawnPickedUpTrailPS(); // Function B_Pickups_Parent.B_Pickups_Parent_C.SpawnPickedUpTrailPS // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UserConstructionScript(); // Function B_Pickups_Parent.B_Pickups_Parent_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void MobileSelectedTL__FinishedFunc(); // Function B_Pickups_Parent.B_Pickups_Parent_C.MobileSelectedTL__FinishedFunc // (BlueprintEvent) // @ game+0xd67374
	void MobileSelectedTL__UpdateFunc(); // Function B_Pickups_Parent.B_Pickups_Parent_C.MobileSelectedTL__UpdateFunc // (BlueprintEvent) // @ game+0xd67374
	void EnableBacchusHighlight(); // Function B_Pickups_Parent.B_Pickups_Parent_C.EnableBacchusHighlight // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void DisableBacchusHighlight(); // Function B_Pickups_Parent.B_Pickups_Parent_C.DisableBacchusHighlight // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void HideBackgroundAndSpotlight(); // Function B_Pickups_Parent.B_Pickups_Parent_C.HideBackgroundAndSpotlight // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnAttached(); // Function B_Pickups_Parent.B_Pickups_Parent_C.OnAttached // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnTossed(); // Function B_Pickups_Parent.B_Pickups_Parent_C.OnTossed // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ReceiveTick(float DeltaSeconds); // Function B_Pickups_Parent.B_Pickups_Parent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnAboutToEnterBackpack(struct AFortPawn* PickupTarget); // Function B_Pickups_Parent.B_Pickups_Parent_C.OnAboutToEnterBackpack // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnPickedUp(struct AFortPawn* PickupTarget); // Function B_Pickups_Parent.B_Pickups_Parent_C.OnPickedUp // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ReceiveBeginPlay(); // Function B_Pickups_Parent.B_Pickups_Parent_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_B_Pickups_Parent(int32_t EntryPoint); // Function B_Pickups_Parent.B_Pickups_Parent_C.ExecuteUbergraph_B_Pickups_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

