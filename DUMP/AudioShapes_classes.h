// Class AudioShapes.AudioShapeComponent
// Size: 0x140 (Inherited: 0xa8)
struct UAudioShapeComponent : UAudioGameplayComponent {
	char pad_A8[0x8]; // 0xa8(0x08)
	float MaxDistanceOffset; // 0xb0(0x04)
	float SmoothingDistance; // 0xb4(0x04)
	float FadeTime; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct FMulticastInlineDelegate OnAudibleStateChanged; // 0xc0(0x10)
	struct TMap<struct FName, struct UAudioComponent*> AudioComponents; // 0xd0(0x50)
	struct TArray<struct APlayerController*> LocalControllers; // 0x120(0x10)
	char pad_130[0x10]; // 0x130(0x10)

	void UpdateAudioShape(struct TArray<struct APlayerController*>& InLocalControllers); // Function AudioShapes.AudioShapeComponent.UpdateAudioShape // (Final|Native|Public|HasOutParms) // @ game+0x6faa310
};

// Class AudioShapes.AudioShapePrimitiveComponent
// Size: 0x1c8 (Inherited: 0x140)
struct UAudioShapePrimitiveComponent : UAudioShapeComponent {
	struct USoundBase* SoundOnEdge; // 0x140(0x08)
	struct USoundBase* SoundOnInside; // 0x148(0x08)
	struct FMulticastInlineDelegate OnInsideStateChanged; // 0x150(0x10)
	bool bUseOwningActorTransform; // 0x160(0x01)
	bool bAutoRefreshShape; // 0x161(0x01)
	char pad_162[0x6]; // 0x162(0x06)
	struct FVector ActorTransformScale; // 0x168(0x18)
	char pad_180[0x48]; // 0x180(0x48)

	bool GetIsPlayerInside(); // Function AudioShapes.AudioShapePrimitiveComponent.GetIsPlayerInside // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6fa9e2c
	struct UAudioComponent* GetInsideAudioComponent(); // Function AudioShapes.AudioShapePrimitiveComponent.GetInsideAudioComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x6fa9e08
	struct UAudioComponent* GetEdgeAudioComponent(); // Function AudioShapes.AudioShapePrimitiveComponent.GetEdgeAudioComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x6fa9de4
};

// Class AudioShapes.AudioShapeBoxComponent
// Size: 0x230 (Inherited: 0x1c8)
struct UAudioShapeBoxComponent : UAudioShapePrimitiveComponent {
	char pad_1C8[0x8]; // 0x1c8(0x08)
	struct FTransform BoxTransform; // 0x1d0(0x60)

	void SetBoxTransform(struct FTransform& InTransform); // Function AudioShapes.AudioShapeBoxComponent.SetBoxTransform // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x6fa9f90
};

// Class AudioShapes.AudioShapeCylinderComponent
// Size: 0x1d0 (Inherited: 0x1c8)
struct UAudioShapeCylinderComponent : UAudioShapePrimitiveComponent {
	float HalfHeight; // 0x1c8(0x04)
	float Radius; // 0x1cc(0x04)

	void SetRadius(float InRadius); // Function AudioShapes.AudioShapeCylinderComponent.SetRadius // (Final|Native|Public|BlueprintCallable) // @ game+0x6faa1ec
	void SetHalfHeight(float InHalfHeight); // Function AudioShapes.AudioShapeCylinderComponent.SetHalfHeight // (Final|Native|Public|BlueprintCallable) // @ game+0x6faa160
};

// Class AudioShapes.AudioShapeLineComponent
// Size: 0x1f8 (Inherited: 0x1c8)
struct UAudioShapeLineComponent : UAudioShapePrimitiveComponent {
	struct FVector StartPoint; // 0x1c8(0x18)
	struct FVector EndPoint; // 0x1e0(0x18)

	void SetStartPoint(struct FVector& InStartPoint); // Function AudioShapes.AudioShapeLineComponent.SetStartPoint // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x6faa278
	void SetEndPoint(struct FVector& InEndPoint); // Function AudioShapes.AudioShapeLineComponent.SetEndPoint // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x6faa0c8
};

// Class AudioShapes.AudioShapeLineListComponent
// Size: 0x1e0 (Inherited: 0x1c8)
struct UAudioShapeLineListComponent : UAudioShapePrimitiveComponent {
	struct TArray<struct FVector> PointList; // 0x1c8(0x10)
	bool bClosedLoop; // 0x1d8(0x01)
	char pad_1D9[0x7]; // 0x1d9(0x07)

	bool UpdatePoint(int32_t InIndex, struct FVector& InPoint); // Function AudioShapes.AudioShapeLineListComponent.UpdatePoint // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x6faa3ac
	bool RemovePoint(int32_t InIndex); // Function AudioShapes.AudioShapeLineListComponent.RemovePoint // (Final|Native|Public|BlueprintCallable) // @ game+0x6fa9eec
	void GetPoints(struct TArray<struct FVector>& OutPoints); // Function AudioShapes.AudioShapeLineListComponent.GetPoints // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x6fa9e48
	int32_t AddPoint(struct FVector& InPoint); // Function AudioShapes.AudioShapeLineListComponent.AddPoint // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x6fa9d14
};

// Class AudioShapes.AudioShapeSphereComponent
// Size: 0x1d0 (Inherited: 0x1c8)
struct UAudioShapeSphereComponent : UAudioShapePrimitiveComponent {
	float Radius; // 0x1c8(0x04)
	char pad_1CC[0x4]; // 0x1cc(0x04)

	void SetRadius(float InRadius); // Function AudioShapes.AudioShapeSphereComponent.SetRadius // (Final|Native|Public|BlueprintCallable) // @ game+0x6faa160
};

// Class AudioShapes.AudioShapeSubsystem
// Size: 0x88 (Inherited: 0x30)
struct UAudioShapeSubsystem : UWorldSubsystem {
	char pad_30[0x28]; // 0x30(0x28)
	struct TArray<struct UAudioShapeComponent*> AudioShapes; // 0x58(0x10)
	struct TArray<struct APlayerController*> LocalControllers; // 0x68(0x10)
	char pad_78[0x10]; // 0x78(0x10)
};

