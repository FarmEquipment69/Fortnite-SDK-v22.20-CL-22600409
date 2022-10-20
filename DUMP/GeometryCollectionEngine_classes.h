// Class GeometryCollectionEngine.GeometryCollectionComponent
// Size: 0xb20 (Inherited: 0x580)
struct UGeometryCollectionComponent : UMeshComponent {
	struct AChaosSolverActor* ChaosSolverActor; // 0x580(0x08)
	char pad_588[0xe8]; // 0x588(0xe8)
	struct UGeometryCollection* RestCollection; // 0x670(0x08)
	struct TArray<struct AFieldSystemActor*> InitializationFields; // 0x678(0x10)
	bool Simulating; // 0x688(0x01)
	char pad_689[0x7]; // 0x689(0x07)
	enum class EObjectStateTypeEnum ObjectType; // 0x690(0x01)
	bool bForceMotionBlur; // 0x691(0x01)
	bool EnableClustering; // 0x692(0x01)
	char pad_693[0x1]; // 0x693(0x01)
	int32_t ClusterGroupIndex; // 0x694(0x04)
	int32_t MaxClusterLevel; // 0x698(0x04)
	char pad_69C[0x4]; // 0x69c(0x04)
	struct TArray<float> DamageThreshold; // 0x6a0(0x10)
	bool bUseSizeSpecificDamageThreshold; // 0x6b0(0x01)
	bool bAllowRemovalOnSleep; // 0x6b1(0x01)
	bool bAllowRemovalOnBreak; // 0x6b2(0x01)
	enum class EClusterConnectionTypeEnum ClusterConnectionType; // 0x6b3(0x01)
	int32_t CollisionGroup; // 0x6b4(0x04)
	float CollisionSampleFraction; // 0x6b8(0x04)
	float LinearEtherDrag; // 0x6bc(0x04)
	float AngularEtherDrag; // 0x6c0(0x04)
	char pad_6C4[0x4]; // 0x6c4(0x04)
	struct UChaosPhysicalMaterial* PhysicalMaterial; // 0x6c8(0x08)
	enum class EInitialVelocityTypeEnum InitialVelocityType; // 0x6d0(0x01)
	char pad_6D1[0x7]; // 0x6d1(0x07)
	struct FVector InitialLinearVelocity; // 0x6d8(0x18)
	struct FVector InitialAngularVelocity; // 0x6f0(0x18)
	struct UPhysicalMaterial* PhysicalMaterialOverride; // 0x708(0x08)
	struct FGeomComponentCacheParameters CacheParameters; // 0x710(0x50)
	struct TArray<struct FTransform> RestTransforms; // 0x760(0x10)
	struct FMulticastInlineDelegate NotifyGeometryCollectionPhysicsStateChange; // 0x770(0x10)
	struct FMulticastInlineDelegate NotifyGeometryCollectionPhysicsLoadingStateChange; // 0x780(0x10)
	char pad_790[0x18]; // 0x790(0x18)
	struct FMulticastInlineDelegate OnChaosBreakEvent; // 0x7a8(0x10)
	struct FMulticastInlineDelegate OnChaosRemovalEvent; // 0x7b8(0x10)
	struct FMulticastInlineDelegate OnChaosCrumblingEvent; // 0x7c8(0x10)
	float DesiredCacheTime; // 0x7d8(0x04)
	bool CachePlayback; // 0x7dc(0x01)
	char pad_7DD[0x3]; // 0x7dd(0x03)
	struct FMulticastInlineDelegate OnChaosPhysicsCollision; // 0x7e0(0x10)
	bool bNotifyBreaks; // 0x7f0(0x01)
	bool bNotifyCollisions; // 0x7f1(0x01)
	bool bNotifyTrailing; // 0x7f2(0x01)
	bool bNotifyRemovals; // 0x7f3(0x01)
	bool bNotifyCrumblings; // 0x7f4(0x01)
	bool bCrumblingEventIncludesChildren; // 0x7f5(0x01)
	bool bStoreVelocities; // 0x7f6(0x01)
	bool bShowBoneColors; // 0x7f7(0x01)
	bool bEnableReplication; // 0x7f8(0x01)
	bool bEnableAbandonAfterLevel; // 0x7f9(0x01)
	char pad_7FA[0x2]; // 0x7fa(0x02)
	int32_t ReplicationAbandonClusterLevel; // 0x7fc(0x04)
	struct FGeometryCollectionRepData RepData; // 0x800(0x28)
	char pad_828[0x2b8]; // 0x828(0x2b8)
	struct UBodySetup* DummyBodySetup; // 0xae0(0x08)
	char pad_AE8[0x8]; // 0xae8(0x08)
	struct TArray<struct UInstancedStaticMeshComponent*> EmbeddedGeometryComponents; // 0xaf0(0x10)
	char pad_B00[0x20]; // 0xb00(0x20)

	void SetRestCollection(struct UGeometryCollection* RestCollectionIn); // Function GeometryCollectionEngine.GeometryCollectionComponent.SetRestCollection // (Final|Native|Public|BlueprintCallable) // @ game+0x901b934
	void SetNotifyRemovals(bool bNewNotifyRemovals); // Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyRemovals // (Final|Native|Public|BlueprintCallable) // @ game+0x901b770
	void SetNotifyCrumblings(bool bNewNotifyCrumblings); // Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyCrumblings // (Final|Native|Public|BlueprintCallable) // @ game+0x901b6e0
	void SetNotifyBreaks(bool bNewNotifyBreaks); // Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyBreaks // (Final|Native|Public|BlueprintCallable) // @ game+0x901b650
	void ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo& CollisionInfo); // Function GeometryCollectionEngine.GeometryCollectionComponent.ReceivePhysicsCollision // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void NotifyGeometryCollectionPhysicsStateChange__DelegateSignature(struct UGeometryCollectionComponent* FracturedComponent); // DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsStateChange__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xd67374
	void NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(struct UGeometryCollectionComponent* FracturedComponent); // DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xd67374
	int32_t GetInitialLevel(int32_t ItemIndex); // Function GeometryCollectionEngine.GeometryCollectionComponent.GetInitialLevel // (Final|Native|Public|BlueprintCallable) // @ game+0x901b0c8
	void CrumbleCluster(int32_t ItemIndex); // Function GeometryCollectionEngine.GeometryCollectionComponent.CrumbleCluster // (Final|Native|Public|BlueprintCallable) // @ game+0x901b00c
	void ApplyPhysicsField(bool Enabled, enum class EGeometryCollectionPhysicsTypeEnum Target, struct UFieldSystemMetaData* MetaData, struct UFieldNodeBase* Field); // Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyPhysicsField // (Final|Native|Public|BlueprintCallable) // @ game+0x901ac84
	void ApplyLinearVelocity(int32_t ItemIndex, struct FVector& LinearVelocity); // Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyLinearVelocity // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x901ab88
	void ApplyKinematicField(float Radius, struct FVector Position); // Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyKinematicField // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x901aaac
	void ApplyInternalStrain(int32_t ItemIndex, struct FVector& Location, float Radius, int32_t PropagationDepth, float PropagationFactor, float Strain); // Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyInternalStrain // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x901a8c8
	void ApplyExternalStrain(int32_t ItemIndex, struct FVector& Location, float Radius, int32_t PropagationDepth, float PropagationFactor, float Strain); // Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyExternalStrain // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x901a6e4
	void ApplyBreakingLinearVelocity(int32_t ItemIndex, struct FVector& LinearVelocity); // Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyBreakingLinearVelocity // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x901a60c
	void ApplyBreakingAngularVelocity(int32_t ItemIndex, struct FVector& AngularVelocity); // Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyBreakingAngularVelocity // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x901a60c
	void ApplyAngularVelocity(int32_t ItemIndex, struct FVector& AngularVelocity); // Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyAngularVelocity // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x901a510
};

// Class GeometryCollectionEngine.ChaosDestructionListener
// Size: 0x550 (Inherited: 0x2a0)
struct UChaosDestructionListener : USceneComponent {
	char bIsCollisionEventListeningEnabled : 1; // 0x2a0(0x01)
	char bIsBreakingEventListeningEnabled : 1; // 0x2a0(0x01)
	char bIsTrailingEventListeningEnabled : 1; // 0x2a0(0x01)
	char bIsRemovalEventListeningEnabled : 1; // 0x2a0(0x01)
	char pad_2A0_4 : 4; // 0x2a0(0x01)
	char pad_2A1[0x3]; // 0x2a1(0x03)
	struct FChaosCollisionEventRequestSettings CollisionEventRequestSettings; // 0x2a4(0x18)
	struct FChaosBreakingEventRequestSettings BreakingEventRequestSettings; // 0x2bc(0x18)
	struct FChaosTrailingEventRequestSettings TrailingEventRequestSettings; // 0x2d4(0x18)
	struct FChaosRemovalEventRequestSettings RemovalEventRequestSettings; // 0x2ec(0x10)
	char pad_2FC[0x4]; // 0x2fc(0x04)
	struct TSet<struct AChaosSolverActor*> ChaosSolverActors; // 0x300(0x50)
	struct TSet<struct AGeometryCollectionActor*> GeometryCollectionActors; // 0x350(0x50)
	struct FMulticastInlineDelegate OnCollisionEvents; // 0x3a0(0x10)
	struct FMulticastInlineDelegate OnBreakingEvents; // 0x3b0(0x10)
	struct FMulticastInlineDelegate OnTrailingEvents; // 0x3c0(0x10)
	struct FMulticastInlineDelegate OnRemovalEvents; // 0x3d0(0x10)
	char pad_3E0[0x170]; // 0x3e0(0x170)

	void SortTrailingEvents(struct TArray<struct FChaosTrailingEventData>& TrailingEvents, enum class EChaosTrailingSortMethod SortMethod); // Function GeometryCollectionEngine.ChaosDestructionListener.SortTrailingEvents // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x901c174
	void SortRemovalEvents(struct TArray<struct FChaosRemovalEventData>& RemovalEvents, enum class EChaosRemovalSortMethod SortMethod); // Function GeometryCollectionEngine.ChaosDestructionListener.SortRemovalEvents // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x901c074
	void SortCollisionEvents(struct TArray<struct FChaosCollisionEventData>& CollisionEvents, enum class EChaosCollisionSortMethod SortMethod); // Function GeometryCollectionEngine.ChaosDestructionListener.SortCollisionEvents // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x901bf74
	void SortBreakingEvents(struct TArray<struct FChaosBreakingEventData>& BreakingEvents, enum class EChaosBreakingSortMethod SortMethod); // Function GeometryCollectionEngine.ChaosDestructionListener.SortBreakingEvents // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x901be74
	void SetTrailingEventRequestSettings(struct FChaosTrailingEventRequestSettings& InSettings); // Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventRequestSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x901bdc8
	void SetTrailingEventEnabled(bool bIsEnabled); // Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x901bd34
	void SetRemovalEventRequestSettings(struct FChaosRemovalEventRequestSettings& InSettings); // Function GeometryCollectionEngine.ChaosDestructionListener.SetRemovalEventRequestSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x901b894
	void SetRemovalEventEnabled(bool bIsEnabled); // Function GeometryCollectionEngine.ChaosDestructionListener.SetRemovalEventEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x901b800
	void SetCollisionEventRequestSettings(struct FChaosCollisionEventRequestSettings& InSettings); // Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventRequestSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x901b5a4
	void SetCollisionEventEnabled(bool bIsEnabled); // Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x901b514
	void SetBreakingEventRequestSettings(struct FChaosBreakingEventRequestSettings& InSettings); // Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventRequestSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x901b468
	void SetBreakingEventEnabled(bool bIsEnabled); // Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x901b3d4
	void RemoveGeometryCollectionActor(struct AGeometryCollectionActor* GeometryCollectionActor); // Function GeometryCollectionEngine.ChaosDestructionListener.RemoveGeometryCollectionActor // (Final|Native|Public|BlueprintCallable) // @ game+0x901b2c8
	void RemoveChaosSolverActor(struct AChaosSolverActor* ChaosSolverActor); // Function GeometryCollectionEngine.ChaosDestructionListener.RemoveChaosSolverActor // (Final|Native|Public|BlueprintCallable) // @ game+0x64a2a4c
	bool IsEventListening(); // Function GeometryCollectionEngine.ChaosDestructionListener.IsEventListening // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x901b154
	void AddGeometryCollectionActor(struct AGeometryCollectionActor* GeometryCollectionActor); // Function GeometryCollectionEngine.ChaosDestructionListener.AddGeometryCollectionActor // (Final|Native|Public|BlueprintCallable) // @ game+0x901a3d0
	void AddChaosSolverActor(struct AChaosSolverActor* ChaosSolverActor); // Function GeometryCollectionEngine.ChaosDestructionListener.AddChaosSolverActor // (Final|Native|Public|BlueprintCallable) // @ game+0x64a2a4c
};

// Class GeometryCollectionEngine.GeometryCollectionActor
// Size: 0x298 (Inherited: 0x288)
struct AGeometryCollectionActor : AActor {
	struct UGeometryCollectionComponent* GeometryCollectionComponent; // 0x288(0x08)
	struct UGeometryCollectionDebugDrawComponent* GeometryCollectionDebugDrawComponent; // 0x290(0x08)

	bool RaycastSingle(struct FVector Start, struct FVector End, struct FHitResult& OutHit); // Function GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x901b170
};

// Class GeometryCollectionEngine.GeometryCollectionCache
// Size: 0x50 (Inherited: 0x28)
struct UGeometryCollectionCache : UObject {
	struct FRecordedTransformTrack RecordedData; // 0x28(0x10)
	struct UGeometryCollection* SupportedCollection; // 0x38(0x08)
	struct FGuid CompatibleCollectionState; // 0x40(0x10)
};

// Class GeometryCollectionEngine.GeometryCollectionDebugDrawActor
// Size: 0x348 (Inherited: 0x288)
struct AGeometryCollectionDebugDrawActor : AActor {
	struct FGeometryCollectionDebugDrawWarningMessage WarningMessage; // 0x288(0x01)
	char pad_289[0x7]; // 0x289(0x07)
	struct FGeometryCollectionDebugDrawActorSelectedRigidBody SelectedRigidBody; // 0x290(0x18)
	bool bDebugDrawWholeCollection; // 0x2a8(0x01)
	bool bDebugDrawHierarchy; // 0x2a9(0x01)
	bool bDebugDrawClustering; // 0x2aa(0x01)
	enum class EGeometryCollectionDebugDrawActorHideGeometry HideGeometry; // 0x2ab(0x01)
	bool bShowRigidBodyId; // 0x2ac(0x01)
	bool bShowRigidBodyCollision; // 0x2ad(0x01)
	bool bCollisionAtOrigin; // 0x2ae(0x01)
	bool bShowRigidBodyTransform; // 0x2af(0x01)
	bool bShowRigidBodyInertia; // 0x2b0(0x01)
	bool bShowRigidBodyVelocity; // 0x2b1(0x01)
	bool bShowRigidBodyForce; // 0x2b2(0x01)
	bool bShowRigidBodyInfos; // 0x2b3(0x01)
	bool bShowTransformIndex; // 0x2b4(0x01)
	bool bShowTransform; // 0x2b5(0x01)
	bool bShowParent; // 0x2b6(0x01)
	bool bShowLevel; // 0x2b7(0x01)
	bool bShowConnectivityEdges; // 0x2b8(0x01)
	bool bShowGeometryIndex; // 0x2b9(0x01)
	bool bShowGeometryTransform; // 0x2ba(0x01)
	bool bShowBoundingBox; // 0x2bb(0x01)
	bool bShowFaces; // 0x2bc(0x01)
	bool bShowFaceIndices; // 0x2bd(0x01)
	bool bShowFaceNormals; // 0x2be(0x01)
	bool bShowSingleFace; // 0x2bf(0x01)
	int32_t SingleFaceIndex; // 0x2c0(0x04)
	bool bShowVertices; // 0x2c4(0x01)
	bool bShowVertexIndices; // 0x2c5(0x01)
	bool bShowVertexNormals; // 0x2c6(0x01)
	bool bUseActiveVisualization; // 0x2c7(0x01)
	float PointThickness; // 0x2c8(0x04)
	float LineThickness; // 0x2cc(0x04)
	bool bTextShadow; // 0x2d0(0x01)
	char pad_2D1[0x3]; // 0x2d1(0x03)
	float TextScale; // 0x2d4(0x04)
	float NormalScale; // 0x2d8(0x04)
	float AxisScale; // 0x2dc(0x04)
	float ArrowScale; // 0x2e0(0x04)
	struct FColor RigidBodyIdColor; // 0x2e4(0x04)
	float RigidBodyTransformScale; // 0x2e8(0x04)
	struct FColor RigidBodyCollisionColor; // 0x2ec(0x04)
	struct FColor RigidBodyInertiaColor; // 0x2f0(0x04)
	struct FColor RigidBodyVelocityColor; // 0x2f4(0x04)
	struct FColor RigidBodyForceColor; // 0x2f8(0x04)
	struct FColor RigidBodyInfoColor; // 0x2fc(0x04)
	struct FColor TransformIndexColor; // 0x300(0x04)
	float TransformScale; // 0x304(0x04)
	struct FColor LevelColor; // 0x308(0x04)
	struct FColor ParentColor; // 0x30c(0x04)
	float ConnectivityEdgeThickness; // 0x310(0x04)
	struct FColor GeometryIndexColor; // 0x314(0x04)
	float GeometryTransformScale; // 0x318(0x04)
	struct FColor BoundingBoxColor; // 0x31c(0x04)
	struct FColor FaceColor; // 0x320(0x04)
	struct FColor FaceIndexColor; // 0x324(0x04)
	struct FColor FaceNormalColor; // 0x328(0x04)
	struct FColor SingleFaceColor; // 0x32c(0x04)
	struct FColor VertexColor; // 0x330(0x04)
	struct FColor VertexIndexColor; // 0x334(0x04)
	struct FColor VertexNormalColor; // 0x338(0x04)
	char pad_33C[0x4]; // 0x33c(0x04)
	struct UBillboardComponent* SpriteComponent; // 0x340(0x08)
};

// Class GeometryCollectionEngine.GeometryCollectionDebugDrawComponent
// Size: 0xb8 (Inherited: 0xa0)
struct UGeometryCollectionDebugDrawComponent : UActorComponent {
	struct AGeometryCollectionDebugDrawActor* GeometryCollectionDebugDrawActor; // 0xa0(0x08)
	struct AGeometryCollectionRenderLevelSetActor* GeometryCollectionRenderLevelSetActor; // 0xa8(0x08)
	char pad_B0[0x8]; // 0xb0(0x08)
};

// Class GeometryCollectionEngine.GeometryCollection
// Size: 0x118 (Inherited: 0x28)
struct UGeometryCollection : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	bool EnableClustering; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32_t ClusterGroupIndex; // 0x34(0x04)
	int32_t MaxClusterLevel; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<float> DamageThreshold; // 0x40(0x10)
	bool PerClusterOnlyDamageThreshold; // 0x50(0x01)
	enum class EClusterConnectionTypeEnum ClusterConnectionType; // 0x51(0x01)
	char pad_52[0x2]; // 0x52(0x02)
	float ConnectionGraphBoundsFilteringMargin; // 0x54(0x04)
	struct TArray<struct UMaterialInterface*> Materials; // 0x58(0x10)
	struct TArray<struct FGeometryCollectionEmbeddedExemplar> EmbeddedGeometryExemplar; // 0x68(0x10)
	bool bUseFullPrecisionUVs; // 0x78(0x01)
	bool bStripOnCook; // 0x79(0x01)
	bool EnableNanite; // 0x7a(0x01)
	bool bMassAsDensity; // 0x7b(0x01)
	float Mass; // 0x7c(0x04)
	float MinimumMassClamp; // 0x80(0x04)
	bool bImportCollisionFromSource; // 0x84(0x01)
	bool bRemoveOnMaxSleep; // 0x85(0x01)
	char pad_86[0x2]; // 0x86(0x02)
	struct FVector2D MaximumSleepTime; // 0x88(0x10)
	struct FVector2D RemovalDuration; // 0x98(0x10)
	bool bSlowMovingAsSleeping; // 0xa8(0x01)
	char pad_A9[0x3]; // 0xa9(0x03)
	float SlowMovingVelocityThreshold; // 0xac(0x04)
	struct TArray<struct FGeometryCollectionSizeSpecificData> SizeSpecificData; // 0xb0(0x10)
	bool EnableRemovePiecesOnFracture; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)
	struct TArray<struct UMaterialInterface*> RemoveOnFractureMaterials; // 0xc8(0x10)
	struct UDataflow* Dataflow; // 0xd8(0x08)
	struct FGuid PersistentGuid; // 0xe0(0x10)
	struct FGuid StateGuid; // 0xf0(0x10)
	int32_t BoneSelectedMaterialIndex; // 0x100(0x04)
	char pad_104[0x14]; // 0x104(0x14)
};

// Class GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor
// Size: 0x380 (Inherited: 0x288)
struct AGeometryCollectionRenderLevelSetActor : AActor {
	struct UVolumeTexture* TargetVolumeTexture; // 0x288(0x08)
	struct UMaterial* RayMarchMaterial; // 0x290(0x08)
	float SurfaceTolerance; // 0x298(0x04)
	float Isovalue; // 0x29c(0x04)
	bool Enabled; // 0x2a0(0x01)
	bool RenderVolumeBoundingBox; // 0x2a1(0x01)
	char pad_2A2[0xde]; // 0x2a2(0xde)
};

