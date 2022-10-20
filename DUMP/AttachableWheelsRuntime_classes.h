// Class AttachableWheelsRuntime.AttachableWheel
// Size: 0x308 (Inherited: 0x288)
struct AAttachableWheel : AActor {
	struct UStaticMeshComponent* WheelMeshComponent; // 0x288(0x08)
	struct FRotator WheelOrientation; // 0x290(0x18)
	float WheelDistance; // 0x2a8(0x04)
	char pad_2AC[0x4]; // 0x2ac(0x04)
	struct UPhysicsConstraintComponent* AxleConstraint; // 0x2b0(0x08)
	struct FAttachableWheelAttachData AttachData; // 0x2b8(0x50)

	void OnRep_AttachData(struct FAttachableWheelAttachData& AttachDataPrev); // Function AttachableWheelsRuntime.AttachableWheel.OnRep_AttachData // (Final|Native|Protected|HasOutParms) // @ game+0x725e9e0
	void OnPhysicsStateChanged(struct UPrimitiveComponent* PrimitiveComponent, enum class EComponentPhysicsStateChange StateChange); // Function AttachableWheelsRuntime.AttachableWheel.OnPhysicsStateChanged // (Final|Native|Protected) // @ game+0x725e91c
	void OnDetached(struct UPrimitiveComponent* DetachedComponent); // Function AttachableWheelsRuntime.AttachableWheel.OnDetached // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnAttached(struct UPrimitiveComponent* AttachedComponent); // Function AttachableWheelsRuntime.AttachableWheel.OnAttached // (Event|Public|BlueprintEvent) // @ game+0xd67374
	bool GetWorldSpaceAttachData(struct FAttachableWheelAttachData& OutAttachData, struct UPrimitiveComponent* PrimitiveComponent); // Function AttachableWheelsRuntime.AttachableWheel.GetWorldSpaceAttachData // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x725e6ec
	struct UPrimitiveComponent* GetAttachedComponent(); // Function AttachableWheelsRuntime.AttachableWheel.GetAttachedComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x725e3a8
	void DrawDebug(); // Function AttachableWheelsRuntime.AttachableWheel.DrawDebug // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x24841e4
	bool DetachFrom(struct UPrimitiveComponent* InComponent); // Function AttachableWheelsRuntime.AttachableWheel.DetachFrom // (Final|Native|Public|BlueprintCallable) // @ game+0x725e2b4
	void Detach(); // Function AttachableWheelsRuntime.AttachableWheel.Detach // (Final|Native|Public|BlueprintCallable) // @ game+0x725e210
	bool AttachTo(struct UPrimitiveComponent* InComponent, struct FVector& WorldLocation, struct FVector& AxleDirection); // Function AttachableWheelsRuntime.AttachableWheel.AttachTo // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x725e0e8
	bool AttachInPlace(struct UPrimitiveComponent* InComponent); // Function AttachableWheelsRuntime.AttachableWheel.AttachInPlace // (Final|Native|Public|BlueprintCallable) // @ game+0x725e058
};

// Class AttachableWheelsRuntime.AttachableWheelsComponent
// Size: 0xf0 (Inherited: 0xa0)
struct UAttachableWheelsComponent : UActorComponent {
	struct TSet<struct AAttachableWheel*> AttachedWheels; // 0xa0(0x50)

	void OnWheelDetached(struct AAttachableWheel* AttachedWheel); // Function AttachableWheelsRuntime.AttachableWheelsComponent.OnWheelDetached // (RequiredAPI|Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnWheelAttached(struct AAttachableWheel* AttachedWheel); // Function AttachableWheelsRuntime.AttachableWheelsComponent.OnWheelAttached // (RequiredAPI|Event|Public|BlueprintEvent) // @ game+0xd67374
	bool HandleWheelDetached_Internal(struct AAttachableWheel* AttachedWheel); // Function AttachableWheelsRuntime.AttachableWheelsComponent.HandleWheelDetached_Internal // (Final|Native|Protected) // @ game+0x725e88c
	bool HandleWheelAttached_Internal(struct AAttachableWheel* AttachedWheel); // Function AttachableWheelsRuntime.AttachableWheelsComponent.HandleWheelAttached_Internal // (Final|Native|Protected) // @ game+0x725e7fc
	struct TArray<struct AAttachableWheel*> GetAttachedWheels(); // Function AttachableWheelsRuntime.AttachableWheelsComponent.GetAttachedWheels // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x725e5b0
	struct AAttachableWheel* GetAttachedWheelClosestOnAxis(struct FVector& Point, float& OutClosetDistanceToAxis, struct FVector& OutClosestPointOnAxis, struct FVector& OutClosestAxis); // Function AttachableWheelsRuntime.AttachableWheelsComponent.GetAttachedWheelClosestOnAxis // (Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x725e414
	void DrawDebug(); // Function AttachableWheelsRuntime.AttachableWheelsComponent.DrawDebug // (Final|RequiredAPI|Native|Public|BlueprintCallable|Const) // @ game+0x24841e4
	int32_t DetachAllWheels(); // Function AttachableWheelsRuntime.AttachableWheelsComponent.DetachAllWheels // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x725e224
};

