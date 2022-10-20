// Class EntityActor.EntityActorPlayerComponent
// Size: 0xe8 (Inherited: 0x68)
struct UEntityActorPlayerComponent : UEntityDataBackedComponent {
	struct FUniqueNetIdRepl PlayerId; // 0x68(0x30)
	struct TSoftObjectPtr<APlayerController> PlayerControllerCache; // 0x98(0x28)
	struct TSoftObjectPtr<APlayerState> PlayerStateCache; // 0xc0(0x28)

	void OnRep_PlayerID(); // Function EntityActor.EntityActorPlayerComponent.OnRep_PlayerID // (Native|Protected) // @ game+0x12f1cf0
};

// Class EntityActor.ActorToEntityAdapterComponent
// Size: 0xc0 (Inherited: 0xa0)
struct UActorToEntityAdapterComponent : UActorComponent {
	char pad_A0[0x8]; // 0xa0(0x08)
	struct TArray<struct UEntityComponent*> SerializedComponents; // 0xa8(0x10)
	char bForceOwnerReplication : 1; // 0xb8(0x01)
	char pad_B8_1 : 7; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
};

// Class EntityActor.EntityAbilityInterface
// Size: 0x28 (Inherited: 0x28)
struct UEntityAbilityInterface : UInterface {
};

// Class EntityActor.EntityActorCollisionComponent
// Size: 0x100 (Inherited: 0x80)
struct UEntityActorCollisionComponent : UEntityEnableableComponent {
	char pad_80[0x48]; // 0x80(0x48)
	struct FName ShadowVar_CollisionProfileName; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct TSoftObjectPtr<UPrimitiveComponent> PrimitiveComponentCache; // 0xd0(0x28)
	char pad_F8[0x2]; // 0xf8(0x02)
	enum class ECollisionShapeMode CollisionShapeMode; // 0xfa(0x01)
	char pad_FB[0x5]; // 0xfb(0x05)

	void OnRep_PrimitiveComponent(); // Function EntityActor.EntityActorCollisionComponent.OnRep_PrimitiveComponent // (Final|Native|Private) // @ game+0x5c7763c
	void OnRep_CollisionProfileName(); // Function EntityActor.EntityActorCollisionComponent.OnRep_CollisionProfileName // (Final|Native|Private) // @ game+0x5c7763c
	void OnNativeComponentHit(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult& Hit); // Function EntityActor.EntityActorCollisionComponent.OnNativeComponentHit // (Final|Native|Private|HasOutParms|HasDefaults) // @ game+0x5c77474
	void OnNativeComponentEndOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function EntityActor.EntityActorCollisionComponent.OnNativeComponentEndOverlap // (Final|Native|Private) // @ game+0x5c77338
	void OnNativeComponentBeginOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function EntityActor.EntityActorCollisionComponent.OnNativeComponentBeginOverlap // (Final|Native|Private|HasOutParms) // @ game+0x5c77138
	void OnEnabledChanged(bool bIsEnabled); // Function EntityActor.EntityActorCollisionComponent.OnEnabledChanged // (Final|Native|Private) // @ game+0x5c77038
};

// Class EntityActor.EntityActorComponent
// Size: 0x90 (Inherited: 0x60)
struct UEntityActorComponent : UEntityComponent {
	char pad_60[0x8]; // 0x60(0x08)
	struct UActorComponent* ActorComponent; // 0x68(0x08)
	bool bCreatedActorComponent; // 0x70(0x01)
	char pad_71[0x1f]; // 0x71(0x1f)

	void OnRep_ActorComponent(); // Function EntityActor.EntityActorComponent.OnRep_ActorComponent // (Final|Native|Private) // @ game+0x12f1cf0
};

// Class EntityActor.EntityActorCustomReplicationComponent
// Size: 0x68 (Inherited: 0x60)
struct UEntityActorCustomReplicationComponent : UEntityComponent {
	enum class EEntityActorReplicationOverrideType ReplicationOverride; // 0x60(0x01)
	enum class EEntityActorReplicationRelevancyBucketType ReplicationRelevancyBucketType; // 0x61(0x01)
	char pad_62[0x2]; // 0x62(0x02)
	float CustomReplicationRelevancyRange; // 0x64(0x04)
};

// Class EntityActor.EntityActorLocalInputComponent
// Size: 0x68 (Inherited: 0x60)
struct UEntityActorLocalInputComponent : UEntityComponent {
	enum class EAutoReceiveInput AutoReceiveControllerInput; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// Class EntityActor.EntityActorPositionComponent
// Size: 0x88 (Inherited: 0x68)
struct UEntityActorPositionComponent : UEntityPositionComponent {
	struct FVector ShadowVar_Location; // 0x68(0x18)
	char pad_80[0x8]; // 0x80(0x08)

	void OnRootComponentChanged(struct USceneComponent* InRootComponent, bool bIsRootComponent); // Function EntityActor.EntityActorPositionComponent.OnRootComponentChanged // (Final|Native|Private) // @ game+0x5c77714
};

// Class EntityActor.EntityActorRotationComponent
// Size: 0x90 (Inherited: 0x68)
struct UEntityActorRotationComponent : UEntityRotationComponent {
	struct FRotator ShadowVar_Rotation; // 0x68(0x18)
	char pad_80[0x10]; // 0x80(0x10)

	void OnRootComponentChanged(struct USceneComponent* InRootComponent, bool bIsRootComponent); // Function EntityActor.EntityActorRotationComponent.OnRootComponentChanged // (Final|Native|Private) // @ game+0x5c777dc
};

// Class EntityActor.EntityActorScaleComponent
// Size: 0x88 (Inherited: 0x68)
struct UEntityActorScaleComponent : UEntityScaleComponent {
	struct FVector ShadowVar_Scale; // 0x68(0x18)
	char pad_80[0x8]; // 0x80(0x08)

	void OnRootComponentChanged(struct USceneComponent* InRootComponent, bool bIsRootComponent); // Function EntityActor.EntityActorScaleComponent.OnRootComponentChanged // (Final|Native|Private) // @ game+0x5c778a4
};

// Class EntityActor.EntityActorSkeletalMeshRenderComponent
// Size: 0x80 (Inherited: 0x60)
struct UEntityActorSkeletalMeshRenderComponent : UEntityComponent {
	char pad_60[0x8]; // 0x60(0x08)
	bool bAddedMeshRenderComponent; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct USkeletalMesh* ShadowVar_SkeletalMesh; // 0x70(0x08)
	enum class ECollisionEnabled ShadowVar_EnableCollision; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
};

// Class EntityActor.EntityActorStaticMeshRenderComponent
// Size: 0xa8 (Inherited: 0x90)
struct UEntityActorStaticMeshRenderComponent : UEntityActorComponent {
	struct TArray<struct UMaterialInterface*> ShadowVar_MeshMaterials; // 0x90(0x10)
	enum class ECollisionEnabled ShadowVar_EnableCollision; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	float ShadowVar_MaxDrawDistance; // 0xa4(0x04)

	void OnRep_MeshMaterials(); // Function EntityActor.EntityActorStaticMeshRenderComponent.OnRep_MeshMaterials // (Final|Native|Private) // @ game+0x5c776b8
	void OnRep_MaxDrawDistance(); // Function EntityActor.EntityActorStaticMeshRenderComponent.OnRep_MaxDrawDistance // (Final|Native|Private) // @ game+0x5c7769c
	void OnRep_EnableCollision(); // Function EntityActor.EntityActorStaticMeshRenderComponent.OnRep_EnableCollision // (Final|Native|Private) // @ game+0x5c77680
};

// Class EntityActor.EntityActorSubsystem
// Size: 0x68 (Inherited: 0x30)
struct UEntityActorSubsystem : UWorldSubsystem {
	char pad_30[0x38]; // 0x30(0x38)
};

// Class EntityActor.EntityActorTextDisplayComponent
// Size: 0xb8 (Inherited: 0x90)
struct UEntityActorTextDisplayComponent : UEntityActorComponent {
	struct FText DisplayText; // 0x90(0x18)
	float ShadowVar_WorldSize; // 0xa8(0x04)
	struct FColor ShadowVar_TextRenderColor; // 0xac(0x04)
	bool bAddedTextRenderComponent; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)

	void SetWorldSize(float Value); // Function EntityActor.EntityActorTextDisplayComponent.SetWorldSize // (Final|Native|Public) // @ game+0x5c77de8
	void SetVerticalAlignment(enum class EVerticalTextAligment Value); // Function EntityActor.EntityActorTextDisplayComponent.SetVerticalAlignment // (Final|Native|Public) // @ game+0x5c77d44
	void SetTextRenderColor(struct FColor Value); // Function EntityActor.EntityActorTextDisplayComponent.SetTextRenderColor // (Final|Native|Public|HasDefaults) // @ game+0x5c77cc8
	void SetText(struct FText Text); // Function EntityActor.EntityActorTextDisplayComponent.SetText // (Final|Native|Public) // @ game+0x5c77c2c
	void SetRelativeScale(struct FVector RelativeScale); // Function EntityActor.EntityActorTextDisplayComponent.SetRelativeScale // (Final|Native|Public|HasDefaults) // @ game+0x5c77b70
	void SetRelativeRotation(struct FRotator RelativeRotation); // Function EntityActor.EntityActorTextDisplayComponent.SetRelativeRotation // (Final|Native|Public|HasDefaults) // @ game+0x5c77aa0
	void SetRelativeLocation(struct FVector RelativeLocation); // Function EntityActor.EntityActorTextDisplayComponent.SetRelativeLocation // (Final|Native|Public|HasDefaults) // @ game+0x5c77a10
	void SetHorizontalAlignment(enum class EHorizTextAligment Value); // Function EntityActor.EntityActorTextDisplayComponent.SetHorizontalAlignment // (Final|Native|Public) // @ game+0x5c7796c
	void OnRep_WorldSize(); // Function EntityActor.EntityActorTextDisplayComponent.OnRep_WorldSize // (Final|Native|Private) // @ game+0x5c776f8
	void OnRep_TextRenderColor(); // Function EntityActor.EntityActorTextDisplayComponent.OnRep_TextRenderColor // (Final|Native|Private) // @ game+0x5c776cc
	void OnRep_DisplayText(); // Function EntityActor.EntityActorTextDisplayComponent.OnRep_DisplayText // (Final|Native|Private) // @ game+0x5c7766c
	float GetWorldSize(); // Function EntityActor.EntityActorTextDisplayComponent.GetWorldSize // (Final|Native|Public|Const) // @ game+0x5c77010
	enum class EVerticalTextAligment GetVerticalAlignment(); // Function EntityActor.EntityActorTextDisplayComponent.GetVerticalAlignment // (Final|Native|Public) // @ game+0x5c76fb8
	struct FColor GetTextRenderColor(); // Function EntityActor.EntityActorTextDisplayComponent.GetTextRenderColor // (Final|Native|Public|HasDefaults|Const) // @ game+0x5c76f58
	struct FText GetText(); // Function EntityActor.EntityActorTextDisplayComponent.GetText // (Final|Native|Public|Const) // @ game+0x5c76ed4
	struct FVector GetRelativeLocation(); // Function EntityActor.EntityActorTextDisplayComponent.GetRelativeLocation // (Final|Native|Public|HasDefaults) // @ game+0x5c76e68
	enum class EHorizTextAligment GetHorizontalAlignment(); // Function EntityActor.EntityActorTextDisplayComponent.GetHorizontalAlignment // (Final|Native|Public) // @ game+0x5c76e10
};

// Class EntityActor.EntityDynamicActivationComponent
// Size: 0xb8 (Inherited: 0x80)
struct UEntityDynamicActivationComponent : UEntityEnableableComponent {
	char pad_80[0x8]; // 0x80(0x08)
	float TransitionTargetTime; // 0x88(0x04)
	bool bTargetState; // 0x8c(0x01)
	char pad_8D[0x3]; // 0x8d(0x03)
	struct TArray<struct UEntityComponent*> LinkedComponents; // 0x90(0x10)
	char pad_A0[0x18]; // 0xa0(0x18)

	void OnRep_TransitionTarget(); // Function EntityActor.EntityDynamicActivationComponent.OnRep_TransitionTarget // (Final|Native|Private) // @ game+0x5c776e4
	void OnEnabledChanged(bool bIsEnabled); // Function EntityActor.EntityDynamicActivationComponent.OnEnabledChanged // (Final|Native|Public) // @ game+0x5c770b8
};

// Class EntityActor.EntityToActorAdapterComponent
// Size: 0x68 (Inherited: 0x60)
struct UEntityToActorAdapterComponent : UEntityComponent {
	char pad_60[0x8]; // 0x60(0x08)
};

// Class EntityActor.SimObject
// Size: 0x290 (Inherited: 0x288)
struct ASimObject : AActor {
	char pad_288[0x8]; // 0x288(0x08)
};

