// Class AugmentedReality.ARActor
// Size: 0x288 (Inherited: 0x288)
struct AARActor : AActor {

	struct UARComponent* AddARComponent(struct UARComponent* InComponentClass, struct FGuid& NativeID); // Function AugmentedReality.ARActor.AddARComponent // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x8dd996c
};

// Class AugmentedReality.ARBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UARBlueprintLibrary : UBlueprintFunctionLibrary {

	void UnpinComponent(struct USceneComponent* ComponentToUnpin); // Function AugmentedReality.ARBlueprintLibrary.UnpinComponent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8ddd648
	bool ToggleARCapture(bool bOnOff, enum class EARCaptureType CaptureType); // Function AugmentedReality.ARBlueprintLibrary.ToggleARCapture // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8ddd584
	void StopARSession(); // Function AugmentedReality.ARBlueprintLibrary.StopARSession // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8ddd570
	void StartARSession(struct UARSessionConfig* SessionConfig); // Function AugmentedReality.ARBlueprintLibrary.StartARSession // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8ddd454
	void SetEnabledXRCamera(bool bOnOff); // Function AugmentedReality.ARBlueprintLibrary.SetEnabledXRCamera // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8ddd3e4
	void SetARWorldScale(float InWorldScale); // Function AugmentedReality.ARBlueprintLibrary.SetARWorldScale // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8ddd280
	void SetARWorldOriginLocationAndRotation(struct FVector OriginLocation, struct FRotator OriginRotation, bool bIsTransformInWorldSpace, bool bMaintainUpDirection); // Function AugmentedReality.ARBlueprintLibrary.SetARWorldOriginLocationAndRotation // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x8ddd120
	void SetAlignmentTransform(struct FTransform& InAlignmentTransform); // Function AugmentedReality.ARBlueprintLibrary.SetAlignmentTransform // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x8ddd2f4
	bool SaveARPinToLocalStore(struct FName InSaveName, struct UARPin* InPin); // Function AugmentedReality.ARBlueprintLibrary.SaveARPinToLocalStore // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8ddd060
	struct FIntPoint ResizeXRCamera(struct FIntPoint& InSize); // Function AugmentedReality.ARBlueprintLibrary.ResizeXRCamera // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x8ddcfcc
	void RemovePin(struct UARPin* PinToRemove); // Function AugmentedReality.ARBlueprintLibrary.RemovePin // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8ddcf5c
	void RemoveARPinFromLocalStore(struct FName InSaveName); // Function AugmentedReality.ARBlueprintLibrary.RemoveARPinFromLocalStore // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8ddcedc
	void RemoveAllARPinsFromLocalStore(); // Function AugmentedReality.ARBlueprintLibrary.RemoveAllARPinsFromLocalStore // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8ddcf48
	struct UARPin* PinComponentToTraceResult(struct USceneComponent* ComponentToPin, struct FARTraceResult& TraceResult, struct FName DebugName); // Function AugmentedReality.ARBlueprintLibrary.PinComponentToTraceResult // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x8ddcd7c
	bool PinComponentToARPin(struct USceneComponent* ComponentToPin, struct UARPin* Pin); // Function AugmentedReality.ARBlueprintLibrary.PinComponentToARPin // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8ddccb8
	struct UARPin* PinComponent(struct USceneComponent* ComponentToPin, struct FTransform& PinToWorldTransform, struct UARTrackedGeometry* TrackedGeometry, struct FName DebugName); // Function AugmentedReality.ARBlueprintLibrary.PinComponent // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x8ddcafc
	void PauseARSession(); // Function AugmentedReality.ARBlueprintLibrary.PauseARSession // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8ddcae8
	struct TMap<struct FName, struct UARPin*> LoadARPinsFromLocalStore(); // Function AugmentedReality.ARBlueprintLibrary.LoadARPinsFromLocalStore // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8ddc99c
	struct TArray<struct FARTraceResult> LineTraceTrackedObjects3D(struct FVector Start, struct FVector End, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon); // Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects3D // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x8ddc5bc
	struct TArray<struct FARTraceResult> LineTraceTrackedObjects(struct FVector2D ScreenCoord, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon); // Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x8ddc7dc
	bool IsSessionTypeSupported(enum class EARSessionType SessionType); // Function AugmentedReality.ARBlueprintLibrary.IsSessionTypeSupported // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x8ddc53c
	bool IsSessionTrackingFeatureSupported(enum class EARSessionType SessionType, enum class EARSessionTrackingFeature SessionTrackingFeature); // Function AugmentedReality.ARBlueprintLibrary.IsSessionTrackingFeatureSupported // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x8ddc47c
	bool IsSceneReconstructionSupported(enum class EARSessionType SessionType, enum class EARSceneReconstruction SceneReconstructionMethod); // Function AugmentedReality.ARBlueprintLibrary.IsSceneReconstructionSupported // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x8ddc3bc
	bool IsARSupported(); // Function AugmentedReality.ARBlueprintLibrary.IsARSupported // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8ddc398
	bool IsARPinLocalStoreSupported(); // Function AugmentedReality.ARBlueprintLibrary.IsARPinLocalStoreSupported // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x8ddc374
	bool IsARPinLocalStoreReady(); // Function AugmentedReality.ARBlueprintLibrary.IsARPinLocalStoreReady // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x8ddc350
	enum class EARWorldMappingState GetWorldMappingStatus(); // Function AugmentedReality.ARBlueprintLibrary.GetWorldMappingStatus // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x8ddc32c
	enum class EARTrackingQualityReason GetTrackingQualityReason(); // Function AugmentedReality.ARBlueprintLibrary.GetTrackingQualityReason // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x8ddc308
	enum class EARTrackingQuality GetTrackingQuality(); // Function AugmentedReality.ARBlueprintLibrary.GetTrackingQuality // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x8ddc2e4
	struct TArray<struct FARVideoFormat> GetSupportedVideoFormats(enum class EARSessionType SessionType); // Function AugmentedReality.ARBlueprintLibrary.GetSupportedVideoFormats // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8ddc070
	struct UARSessionConfig* GetSessionConfig(); // Function AugmentedReality.ARBlueprintLibrary.GetSessionConfig // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x8ddc04c
	struct TArray<struct FVector> GetPointCloud(); // Function AugmentedReality.ARBlueprintLibrary.GetPointCloud // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x8ddbfd8
	struct UARTexture* GetPersonSegmentationImage(); // Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationImage // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8ddbfb0
	struct UARTexture* GetPersonSegmentationDepthImage(); // Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationDepthImage // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8ddbf88
	bool GetObjectClassificationAtLocation(struct FVector& InWorldLocation, enum class EARObjectClassification& OutClassification, struct FVector& OutClassificationLocation, float MaxLocationDiff); // Function AugmentedReality.ARBlueprintLibrary.GetObjectClassificationAtLocation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x8ddbe0c
	int32_t GetNumberOfTrackedFacesSupported(); // Function AugmentedReality.ARBlueprintLibrary.GetNumberOfTrackedFacesSupported // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8ddbde8
	struct UARLightEstimate* GetCurrentLightEstimate(); // Function AugmentedReality.ARBlueprintLibrary.GetCurrentLightEstimate // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x8ddb180
	bool GetCameraIntrinsics(struct FARCameraIntrinsics& OutCameraIntrinsics); // Function AugmentedReality.ARBlueprintLibrary.GetCameraIntrinsics // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x8ddb0dc
	struct UARTextureCameraImage* GetCameraImage(); // Function AugmentedReality.ARBlueprintLibrary.GetCameraImage // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8ddb08c
	struct UARTextureCameraDepth* GetCameraDepth(); // Function AugmentedReality.ARBlueprintLibrary.GetCameraDepth // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8ddb03c
	float GetARWorldScale(); // Function AugmentedReality.ARBlueprintLibrary.GetARWorldScale // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x8dda9a0
	struct UARTexture* GetARTexture(enum class EARTextureType TextureType); // Function AugmentedReality.ARBlueprintLibrary.GetARTexture // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8dda920
	struct FARSessionStatus GetARSessionStatus(); // Function AugmentedReality.ARBlueprintLibrary.GetARSessionStatus // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x8dda8a8
	struct TArray<struct UARTrackedPose*> GetAllTrackedPoses(); // Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoses // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8ddafc8
	struct TArray<struct UARTrackedPoint*> GetAllTrackedPoints(); // Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoints // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8ddaf54
	struct TArray<struct UARPlaneGeometry*> GetAllTrackedPlanes(); // Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPlanes // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8ddaee0
	struct TArray<struct UARTrackedImage*> GetAllTrackedImages(); // Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedImages // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8ddae6c
	struct TArray<struct UAREnvironmentCaptureProbe*> GetAllTrackedEnvironmentCaptureProbes(); // Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedEnvironmentCaptureProbes // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8ddadf8
	struct TArray<struct FARPose2D> GetAllTracked2DPoses(); // Function AugmentedReality.ARBlueprintLibrary.GetAllTracked2DPoses // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8ddad58
	struct TArray<struct UARPin*> GetAllPins(); // Function AugmentedReality.ARBlueprintLibrary.GetAllPins // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8ddace4
	struct TArray<struct UARTrackedGeometry*> GetAllGeometriesByClass(struct UARTrackedGeometry* GeometryClass); // Function AugmentedReality.ARBlueprintLibrary.GetAllGeometriesByClass // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8ddaa98
	struct TArray<struct UARTrackedGeometry*> GetAllGeometries(); // Function AugmentedReality.ARBlueprintLibrary.GetAllGeometries // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8ddaa24
	struct FTransform GetAlignmentTransform(); // Function AugmentedReality.ARBlueprintLibrary.GetAlignmentTransform // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x8dda9c8
	struct TArray<struct UARTrackedPoint*> FindTrackedPointsByName(struct FString PointName); // Function AugmentedReality.ARBlueprintLibrary.FindTrackedPointsByName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8dda73c
	void DebugDrawTrackedGeometry(struct UARTrackedGeometry* TrackedGeometry, struct UObject* WorldContextObject, struct FLinearColor Color, float OutlineThickness, float PersistForSeconds); // Function AugmentedReality.ARBlueprintLibrary.DebugDrawTrackedGeometry // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x8dda57c
	void DebugDrawPin(struct UARPin* ARPin, struct UObject* WorldContextObject, struct FLinearColor Color, float Scale, float PersistForSeconds); // Function AugmentedReality.ARBlueprintLibrary.DebugDrawPin // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x8dda3bc
	void CalculateClosestIntersection(struct TArray<struct FVector>& StartPoints, struct TArray<struct FVector>& EndPoints, struct FVector& ClosestIntersection); // Function AugmentedReality.ARBlueprintLibrary.CalculateClosestIntersection // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x8dda260
	void CalculateAlignmentTransform(struct FTransform& TransformInFirstCoordinateSystem, struct FTransform& TransformInSecondCoordinateSystem, struct FTransform& AlignmentTransform); // Function AugmentedReality.ARBlueprintLibrary.CalculateAlignmentTransform // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x8dda03c
	bool AddTrackedPointWithName(struct FTransform& WorldTransform, struct FString PointName, bool bDeletePointsWithSameName); // Function AugmentedReality.ARBlueprintLibrary.AddTrackedPointWithName // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x8dd9de8
	struct UARCandidateImage* AddRuntimeCandidateImage(struct UARSessionConfig* SessionConfig, struct UTexture2D* CandidateTexture, struct FString FriendlyName, float PhysicalWidth); // Function AugmentedReality.ARBlueprintLibrary.AddRuntimeCandidateImage // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8dd9bac
	bool AddManualEnvironmentCaptureProbe(struct FVector Location, struct FVector Extent); // Function AugmentedReality.ARBlueprintLibrary.AddManualEnvironmentCaptureProbe // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x8dd9ac0
};

// Class AugmentedReality.ARTraceResultLibrary
// Size: 0x28 (Inherited: 0x28)
struct UARTraceResultLibrary : UBlueprintFunctionLibrary {

	struct UARTrackedGeometry* GetTrackedGeometry(struct FARTraceResult& TraceResult); // Function AugmentedReality.ARTraceResultLibrary.GetTrackedGeometry // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x8ddc204
	enum class EARLineTraceChannels GetTraceChannel(struct FARTraceResult& TraceResult); // Function AugmentedReality.ARTraceResultLibrary.GetTraceChannel // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x8ddc128
	struct FTransform GetLocalTransform(struct FARTraceResult& TraceResult); // Function AugmentedReality.ARTraceResultLibrary.GetLocalTransform // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x8ddbce0
	struct FTransform GetLocalToWorldTransform(struct FARTraceResult& TraceResult); // Function AugmentedReality.ARTraceResultLibrary.GetLocalToWorldTransform // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x8ddbbcc
	struct FTransform GetLocalToTrackingTransform(struct FARTraceResult& TraceResult); // Function AugmentedReality.ARTraceResultLibrary.GetLocalToTrackingTransform // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x8ddb280
	float GetDistanceFromCamera(struct FARTraceResult& TraceResult); // Function AugmentedReality.ARTraceResultLibrary.GetDistanceFromCamera // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x8ddb1a4
};

// Class AugmentedReality.ARBaseAsyncTaskBlueprintProxy
// Size: 0x50 (Inherited: 0x30)
struct UARBaseAsyncTaskBlueprintProxy : UBlueprintAsyncActionBase {
	char pad_30[0x20]; // 0x30(0x20)
};

// Class AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy
// Size: 0x80 (Inherited: 0x50)
struct UARSaveWorldAsyncTaskBlueprintProxy : UARBaseAsyncTaskBlueprintProxy {
	struct FMulticastInlineDelegate OnSuccess; // 0x50(0x10)
	struct FMulticastInlineDelegate OnFailed; // 0x60(0x10)
	char pad_70[0x10]; // 0x70(0x10)

	struct UARSaveWorldAsyncTaskBlueprintProxy* ARSaveWorld(struct UObject* WorldContextObject); // Function AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy.ARSaveWorld // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8dd98d0
};

// Class AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy
// Size: 0xb0 (Inherited: 0x50)
struct UARGetCandidateObjectAsyncTaskBlueprintProxy : UARBaseAsyncTaskBlueprintProxy {
	struct FMulticastInlineDelegate OnSuccess; // 0x50(0x10)
	struct FMulticastInlineDelegate OnFailed; // 0x60(0x10)
	char pad_70[0x40]; // 0x70(0x40)

	struct UARGetCandidateObjectAsyncTaskBlueprintProxy* ARGetCandidateObject(struct UObject* WorldContextObject, struct FVector Location, struct FVector Extent); // Function AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy.ARGetCandidateObject // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x8dd9774
};

// Class AugmentedReality.ARComponent
// Size: 0x320 (Inherited: 0x2a0)
struct UARComponent : USceneComponent {
	struct FGuid NativeID; // 0x2a0(0x10)
	char pad_2B0[0x30]; // 0x2b0(0x30)
	bool bUseDefaultReplication; // 0x2e0(0x01)
	char pad_2E1[0x7]; // 0x2e1(0x07)
	struct UMaterialInterface* DefaultMeshMaterial; // 0x2e8(0x08)
	struct UMaterialInterface* DefaultWireframeMeshMaterial; // 0x2f0(0x08)
	struct UMRMeshComponent* MRMeshComponent; // 0x2f8(0x08)
	struct UARTrackedGeometry* MyTrackedGeometry; // 0x300(0x08)
	char pad_308[0x18]; // 0x308(0x18)

	void UpdateVisualization(); // Function AugmentedReality.ARComponent.UpdateVisualization // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x73eda74
	void SetNativeID(struct FGuid NativeID); // Function AugmentedReality.ARComponent.SetNativeID // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x8de1680
	void ReceiveRemove(); // Function AugmentedReality.ARComponent.ReceiveRemove // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnRep_Payload(); // Function AugmentedReality.ARComponent.OnRep_Payload // (Native|Protected) // @ game+0x73e7dcc
	struct UMRMeshComponent* GetMRMesh(); // Function AugmentedReality.ARComponent.GetMRMesh // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x752c2e8
};

// Class AugmentedReality.ARPlaneComponent
// Size: 0x3f0 (Inherited: 0x320)
struct UARPlaneComponent : UARComponent {
	struct FARPlaneUpdatePayload ReplicatedPayload; // 0x320(0xd0)

	void SetPlaneComponentDebugMode(enum class EPlaneComponentDebugMode NewDebugMode); // Function AugmentedReality.ARPlaneComponent.SetPlaneComponentDebugMode // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8de1894
	void SetObjectClassificationDebugColors(struct TMap<enum class EARObjectClassification, struct FLinearColor>& InColors); // Function AugmentedReality.ARPlaneComponent.SetObjectClassificationDebugColors // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x8de1704
	void ServerUpdatePayload(struct FARPlaneUpdatePayload NewPayload); // Function AugmentedReality.ARPlaneComponent.ServerUpdatePayload // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x8de1194
	void ReceiveUpdate(struct FARPlaneUpdatePayload& Payload); // Function AugmentedReality.ARPlaneComponent.ReceiveUpdate // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void ReceiveAdd(struct FARPlaneUpdatePayload& Payload); // Function AugmentedReality.ARPlaneComponent.ReceiveAdd // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	struct TMap<enum class EARObjectClassification, struct FLinearColor> GetObjectClassificationDebugColors(); // Function AugmentedReality.ARPlaneComponent.GetObjectClassificationDebugColors // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x8de0960
};

// Class AugmentedReality.ARPointComponent
// Size: 0x330 (Inherited: 0x320)
struct UARPointComponent : UARComponent {
	struct FARPointUpdatePayload ReplicatedPayload; // 0x320(0x01)
	char pad_321[0xf]; // 0x321(0x0f)

	void ServerUpdatePayload(struct FARPointUpdatePayload NewPayload); // Function AugmentedReality.ARPointComponent.ServerUpdatePayload // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x8de126c
	void ReceiveUpdate(struct FARPointUpdatePayload& Payload); // Function AugmentedReality.ARPointComponent.ReceiveUpdate // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void ReceiveAdd(struct FARPointUpdatePayload& Payload); // Function AugmentedReality.ARPointComponent.ReceiveAdd // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
};

// Class AugmentedReality.ARFaceComponent
// Size: 0x3b0 (Inherited: 0x320)
struct UARFaceComponent : UARComponent {
	enum class EARFaceTransformMixing TransformSetting; // 0x320(0x01)
	bool bUpdateVertexNormal; // 0x321(0x01)
	bool bFaceOutOfScreen; // 0x322(0x01)
	char pad_323[0x5]; // 0x323(0x05)
	struct FARFaceUpdatePayload ReplicatedPayload; // 0x328(0x60)
	char pad_388[0x28]; // 0x388(0x28)

	void SetFaceComponentDebugMode(enum class EFaceComponentDebugMode NewDebugMode); // Function AugmentedReality.ARFaceComponent.SetFaceComponentDebugMode // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8de150c
	void ServerUpdatePayload(struct FARFaceUpdatePayload NewPayload); // Function AugmentedReality.ARFaceComponent.ServerUpdatePayload // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x8de0da0
	void ReceiveUpdate(struct FARFaceUpdatePayload& Payload); // Function AugmentedReality.ARFaceComponent.ReceiveUpdate // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void ReceiveAdd(struct FARFaceUpdatePayload& Payload); // Function AugmentedReality.ARFaceComponent.ReceiveAdd // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
};

// Class AugmentedReality.ARImageComponent
// Size: 0x3c0 (Inherited: 0x320)
struct UARImageComponent : UARComponent {
	struct FARImageUpdatePayload ReplicatedPayload; // 0x320(0xa0)

	void SetImageComponentDebugMode(enum class EImageComponentDebugMode NewDebugMode); // Function AugmentedReality.ARImageComponent.SetImageComponentDebugMode // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8de1604
	void ServerUpdatePayload(struct FARImageUpdatePayload NewPayload); // Function AugmentedReality.ARImageComponent.ServerUpdatePayload // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x8de0f50
	void ReceiveUpdate(struct FARImageUpdatePayload& Payload); // Function AugmentedReality.ARImageComponent.ReceiveUpdate // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void ReceiveAdd(struct FARImageUpdatePayload& Payload); // Function AugmentedReality.ARImageComponent.ReceiveAdd // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
};

// Class AugmentedReality.ARQRCodeComponent
// Size: 0x3d0 (Inherited: 0x320)
struct UARQRCodeComponent : UARComponent {
	struct FARQRCodeUpdatePayload ReplicatedPayload; // 0x320(0xb0)

	void SetQRCodeComponentDebugMode(enum class EQRCodeComponentDebugMode NewDebugMode); // Function AugmentedReality.ARQRCodeComponent.SetQRCodeComponentDebugMode // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8de198c
	void ServerUpdatePayload(struct FARQRCodeUpdatePayload NewPayload); // Function AugmentedReality.ARQRCodeComponent.ServerUpdatePayload // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x8de1430
	void ReceiveUpdate(struct FARQRCodeUpdatePayload& Payload); // Function AugmentedReality.ARQRCodeComponent.ReceiveUpdate // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void ReceiveAdd(struct FARQRCodeUpdatePayload& Payload); // Function AugmentedReality.ARQRCodeComponent.ReceiveAdd // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
};

// Class AugmentedReality.ARPoseComponent
// Size: 0x390 (Inherited: 0x320)
struct UARPoseComponent : UARComponent {
	struct FARPoseUpdatePayload ReplicatedPayload; // 0x320(0x70)

	void SetPoseComponentDebugMode(enum class EPoseComponentDebugMode NewDebugMode); // Function AugmentedReality.ARPoseComponent.SetPoseComponentDebugMode // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8de1910
	void ServerUpdatePayload(struct FARPoseUpdatePayload NewPayload); // Function AugmentedReality.ARPoseComponent.ServerUpdatePayload // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x8de1308
	void ReceiveUpdate(struct FARPoseUpdatePayload& Payload); // Function AugmentedReality.ARPoseComponent.ReceiveUpdate // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void ReceiveAdd(struct FARPoseUpdatePayload& Payload); // Function AugmentedReality.ARPoseComponent.ReceiveAdd // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
};

// Class AugmentedReality.AREnvironmentProbeComponent
// Size: 0x380 (Inherited: 0x320)
struct UAREnvironmentProbeComponent : UARComponent {
	struct FAREnvironmentProbeUpdatePayload ReplicatedPayload; // 0x320(0x60)

	void ServerUpdatePayload(struct FAREnvironmentProbeUpdatePayload NewPayload); // Function AugmentedReality.AREnvironmentProbeComponent.ServerUpdatePayload // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x8de0c94
	void ReceiveUpdate(struct FAREnvironmentProbeUpdatePayload& Payload); // Function AugmentedReality.AREnvironmentProbeComponent.ReceiveUpdate // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void ReceiveAdd(struct FAREnvironmentProbeUpdatePayload& Payload); // Function AugmentedReality.AREnvironmentProbeComponent.ReceiveAdd // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
};

// Class AugmentedReality.ARObjectComponent
// Size: 0x380 (Inherited: 0x320)
struct UARObjectComponent : UARComponent {
	struct FARObjectUpdatePayload ReplicatedPayload; // 0x320(0x60)

	void ServerUpdatePayload(struct FARObjectUpdatePayload NewPayload); // Function AugmentedReality.ARObjectComponent.ServerUpdatePayload // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x8de0c94
	void ReceiveUpdate(struct FARObjectUpdatePayload& Payload); // Function AugmentedReality.ARObjectComponent.ReceiveUpdate // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void ReceiveAdd(struct FARObjectUpdatePayload& Payload); // Function AugmentedReality.ARObjectComponent.ReceiveAdd // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
};

// Class AugmentedReality.ARMeshComponent
// Size: 0x3b0 (Inherited: 0x320)
struct UARMeshComponent : UARComponent {
	struct FARMeshUpdatePayload ReplicatedPayload; // 0x320(0x90)

	void ServerUpdatePayload(struct FARMeshUpdatePayload NewPayload); // Function AugmentedReality.ARMeshComponent.ServerUpdatePayload // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x8de1078
	void ReceiveUpdate(struct FARMeshUpdatePayload& Payload); // Function AugmentedReality.ARMeshComponent.ReceiveUpdate // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void ReceiveAdd(struct FARMeshUpdatePayload& Payload); // Function AugmentedReality.ARMeshComponent.ReceiveAdd // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
};

// Class AugmentedReality.ARGeoAnchorComponent
// Size: 0x3c0 (Inherited: 0x320)
struct UARGeoAnchorComponent : UARComponent {
	struct FARGeoAnchorUpdatePayload ReplicatedPayload; // 0x320(0xa0)

	void SetGeoAnchorComponentDebugMode(enum class EGeoAnchorComponentDebugMode NewDebugMode); // Function AugmentedReality.ARGeoAnchorComponent.SetGeoAnchorComponentDebugMode // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8de1588
	void ServerUpdatePayload(struct FARGeoAnchorUpdatePayload NewPayload); // Function AugmentedReality.ARGeoAnchorComponent.ServerUpdatePayload // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x8de0e74
	void ReceiveUpdate(struct FARGeoAnchorUpdatePayload& Payload); // Function AugmentedReality.ARGeoAnchorComponent.ReceiveUpdate // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void ReceiveAdd(struct FARGeoAnchorUpdatePayload& Payload); // Function AugmentedReality.ARGeoAnchorComponent.ReceiveAdd // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
};

// Class AugmentedReality.ARDependencyHandler
// Size: 0x28 (Inherited: 0x28)
struct UARDependencyHandler : UObject {

	void StartARSessionLatent(struct UObject* WorldContextObject, struct UARSessionConfig* SessionConfig, struct FLatentActionInfo LatentInfo); // Function AugmentedReality.ARDependencyHandler.StartARSessionLatent // (Native|Public|BlueprintCallable) // @ game+0x8de1a08
	void RequestARSessionPermission(struct UObject* WorldContextObject, struct UARSessionConfig* SessionConfig, struct FLatentActionInfo LatentInfo, enum class EARServicePermissionRequestResult& OutPermissionResult); // Function AugmentedReality.ARDependencyHandler.RequestARSessionPermission // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8de0b24
	void InstallARService(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo, enum class EARServiceInstallRequestResult& OutInstallResult); // Function AugmentedReality.ARDependencyHandler.InstallARService // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8de09f8
	struct UARDependencyHandler* GetARDependencyHandler(); // Function AugmentedReality.ARDependencyHandler.GetARDependencyHandler // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8de07c0
	void CheckARServiceAvailability(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo, enum class EARServiceAvailability& OutAvailability); // Function AugmentedReality.ARDependencyHandler.CheckARServiceAvailability // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8de0500
};

// Class AugmentedReality.ARGeoTrackingSupport
// Size: 0x28 (Inherited: 0x28)
struct UARGeoTrackingSupport : UObject {

	struct UARGeoTrackingSupport* GetGeoTrackingSupport(); // Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingSupport // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8de093c
	enum class EARGeoTrackingStateReason GetGeoTrackingStateReason(); // Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingStateReason // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x648e35c
	enum class EARGeoTrackingState GetGeoTrackingState(); // Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingState // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x26aa344
	enum class EARGeoTrackingAccuracy GetGeoTrackingAccuracy(); // Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingAccuracy // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x74b2ee4
	bool AddGeoAnchorAtLocationWithAltitude(float Longitude, float Latitude, float AltitudeMeters, struct FString OptionalAnchorName); // Function AugmentedReality.ARGeoTrackingSupport.AddGeoAnchorAtLocationWithAltitude // (Native|Public|BlueprintCallable) // @ game+0x8de02d8
	bool AddGeoAnchorAtLocation(float Longitude, float Latitude, struct FString OptionalAnchorName); // Function AugmentedReality.ARGeoTrackingSupport.AddGeoAnchorAtLocation // (Native|Public|BlueprintCallable) // @ game+0x8de00e8
};

// Class AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy
// Size: 0xa0 (Inherited: 0x50)
struct UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy : UARBaseAsyncTaskBlueprintProxy {
	struct FMulticastInlineDelegate OnSuccess; // 0x50(0x10)
	struct FMulticastInlineDelegate OnFailed; // 0x60(0x10)
	char pad_70[0x30]; // 0x70(0x30)

	void GeoTrackingAvailabilityDelegate__DelegateSignature(bool bIsAvailable, struct FString Error); // DelegateFunction AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.GeoTrackingAvailabilityDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xd67374
	struct UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* CheckGeoTrackingAvailabilityAtLocation(struct UObject* WorldContextObject, float Longitude, float Latitude); // Function AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.CheckGeoTrackingAvailabilityAtLocation // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8de06c8
	struct UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* CheckGeoTrackingAvailability(struct UObject* WorldContextObject); // Function AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.CheckGeoTrackingAvailability // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8de062c
};

// Class AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy
// Size: 0xa8 (Inherited: 0x50)
struct UGetGeoLocationAsyncTaskBlueprintProxy : UARBaseAsyncTaskBlueprintProxy {
	struct FMulticastInlineDelegate OnSuccess; // 0x50(0x10)
	struct FMulticastInlineDelegate OnFailed; // 0x60(0x10)
	char pad_70[0x38]; // 0x70(0x38)

	void GetGeoLocationDelegate__DelegateSignature(float Longitude, float Latitude, float Altitude, struct FString Error); // DelegateFunction AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy.GetGeoLocationDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xd67374
	struct UGetGeoLocationAsyncTaskBlueprintProxy* GetGeoLocationAtWorldPosition(struct UObject* WorldContextObject, struct FVector& WorldPosition); // Function AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy.GetGeoLocationAtWorldPosition // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x8de0838
};

// Class AugmentedReality.ARLifeCycleComponent
// Size: 0x2d0 (Inherited: 0x2a0)
struct UARLifeCycleComponent : USceneComponent {
	struct FMulticastInlineDelegate OnARActorSpawnedDelegate; // 0x2a0(0x10)
	struct FMulticastInlineDelegate OnARActorToBeDestroyedDelegate; // 0x2b0(0x10)
	char pad_2C0[0x10]; // 0x2c0(0x10)

	void ServerSpawnARActor(struct UObject* ComponentClass, struct FGuid NativeID); // Function AugmentedReality.ARLifeCycleComponent.ServerSpawnARActor // (Final|Net|NetReliableNative|Event|Private|NetServer|HasDefaults|NetValidate) // @ game+0x8de25ac
	void ServerDestroyARActor(struct AARActor* Actor); // Function AugmentedReality.ARLifeCycleComponent.ServerDestroyARActor // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x8de24c0
	void InstanceARActorToBeDestroyedDelegate__DelegateSignature(struct AARActor* Actor); // DelegateFunction AugmentedReality.ARLifeCycleComponent.InstanceARActorToBeDestroyedDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xd67374
	void InstanceARActorSpawnedDelegate__DelegateSignature(struct UObject* ComponentClass, struct FGuid NativeID, struct AARActor* SpawnedActor); // DelegateFunction AugmentedReality.ARLifeCycleComponent.InstanceARActorSpawnedDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasDefaults) // @ game+0xd67374
};

// Class AugmentedReality.ARLightEstimate
// Size: 0x28 (Inherited: 0x28)
struct UARLightEstimate : UObject {
};

// Class AugmentedReality.ARBasicLightEstimate
// Size: 0x40 (Inherited: 0x28)
struct UARBasicLightEstimate : UARLightEstimate {
	float AmbientIntensityLumens; // 0x28(0x04)
	float AmbientColorTemperatureKelvin; // 0x2c(0x04)
	struct FLinearColor AmbientColor; // 0x30(0x10)

	float GetAmbientIntensityLumens(); // Function AugmentedReality.ARBasicLightEstimate.GetAmbientIntensityLumens // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x686ef70
	float GetAmbientColorTemperatureKelvin(); // Function AugmentedReality.ARBasicLightEstimate.GetAmbientColorTemperatureKelvin // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8de221c
	struct FLinearColor GetAmbientColor(); // Function AugmentedReality.ARBasicLightEstimate.GetAmbientColor // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x8de2204
};

// Class AugmentedReality.AROriginActor
// Size: 0x288 (Inherited: 0x288)
struct AAROriginActor : AActor {
};

// Class AugmentedReality.ARPin
// Size: 0x150 (Inherited: 0x28)
struct UARPin : UObject {
	struct UARTrackedGeometry* TrackedGeometry; // 0x28(0x08)
	struct USceneComponent* PinnedComponent; // 0x30(0x08)
	char pad_38[0x8]; // 0x38(0x08)
	struct FTransform LocalToTrackingTransform; // 0x40(0x60)
	struct FTransform LocalToAlignedTrackingTransform; // 0xa0(0x60)
	enum class EARTrackingState TrackingState; // 0x100(0x01)
	char pad_101[0x1f]; // 0x101(0x1f)
	struct FMulticastInlineDelegate OnARTrackingStateChanged; // 0x120(0x10)
	struct FMulticastInlineDelegate OnARTransformUpdated; // 0x130(0x10)
	char pad_140[0x10]; // 0x140(0x10)

	enum class EARTrackingState GetTrackingState(); // Function AugmentedReality.ARPin.GetTrackingState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x22cf200
	struct UARTrackedGeometry* GetTrackedGeometry(); // Function AugmentedReality.ARPin.GetTrackedGeometry // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8de2478
	struct USceneComponent* GetPinnedComponent(); // Function AugmentedReality.ARPin.GetPinnedComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x765951c
	struct FTransform GetLocalToWorldTransform(); // Function AugmentedReality.ARPin.GetLocalToWorldTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x8de23ac
	struct FTransform GetLocalToTrackingTransform(); // Function AugmentedReality.ARPin.GetLocalToTrackingTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x8de2354
	struct FName GetDebugName(); // Function AugmentedReality.ARPin.GetDebugName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8de22a4
	void DebugDraw(struct UWorld* World, struct FLinearColor& Color, float Scale, float PersistForSeconds); // Function AugmentedReality.ARPin.DebugDraw // (Native|Public|HasOutParms|HasDefaults|Const) // @ game+0x8de20b8
};

// Class AugmentedReality.ARSessionConfig
// Size: 0x110 (Inherited: 0x30)
struct UARSessionConfig : UDataAsset {
	bool bGenerateMeshDataFromTrackedGeometry; // 0x30(0x01)
	bool bGenerateCollisionForMeshData; // 0x31(0x01)
	bool bGenerateNavMeshForMeshData; // 0x32(0x01)
	bool bUseMeshDataForOcclusion; // 0x33(0x01)
	bool bRenderMeshDataInWireframe; // 0x34(0x01)
	bool bTrackSceneObjects; // 0x35(0x01)
	bool bUsePersonSegmentationForOcclusion; // 0x36(0x01)
	bool bUseSceneDepthForOcclusion; // 0x37(0x01)
	bool bUseAutomaticImageScaleEstimation; // 0x38(0x01)
	bool bUseStandardOnboardingUX; // 0x39(0x01)
	enum class EARWorldAlignment WorldAlignment; // 0x3a(0x01)
	enum class EARSessionType SessionType; // 0x3b(0x01)
	enum class EARPlaneDetectionMode PlaneDetectionMode; // 0x3c(0x01)
	bool bHorizontalPlaneDetection; // 0x3d(0x01)
	bool bVerticalPlaneDetection; // 0x3e(0x01)
	bool bEnableAutoFocus; // 0x3f(0x01)
	enum class EARLightEstimationMode LightEstimationMode; // 0x40(0x01)
	enum class EARFrameSyncMode FrameSyncMode; // 0x41(0x01)
	bool bEnableAutomaticCameraOverlay; // 0x42(0x01)
	bool bEnableAutomaticCameraTracking; // 0x43(0x01)
	bool bResetCameraTracking; // 0x44(0x01)
	bool bResetTrackedObjects; // 0x45(0x01)
	char pad_46[0x2]; // 0x46(0x02)
	struct TArray<struct UARCandidateImage*> CandidateImages; // 0x48(0x10)
	int32_t MaxNumSimultaneousImagesTracked; // 0x58(0x04)
	enum class EAREnvironmentCaptureProbeType EnvironmentCaptureProbeType; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	struct TArray<char> WorldMapData; // 0x60(0x10)
	struct TArray<struct UARCandidateObject*> CandidateObjects; // 0x70(0x10)
	struct FARVideoFormat DesiredVideoFormat; // 0x80(0x0c)
	bool bUseOptimalVideoFormat; // 0x8c(0x01)
	enum class EARFaceTrackingDirection FaceTrackingDirection; // 0x8d(0x01)
	enum class EARFaceTrackingUpdate FaceTrackingUpdate; // 0x8e(0x01)
	char pad_8F[0x1]; // 0x8f(0x01)
	int32_t MaxNumberOfTrackedFaces; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
	struct TArray<char> SerializedARCandidateImageDatabase; // 0x98(0x10)
	enum class EARSessionTrackingFeature EnabledSessionTrackingFeature; // 0xa8(0x01)
	enum class EARSceneReconstruction SceneReconstructionMethod; // 0xa9(0x01)
	char pad_AA[0x6]; // 0xaa(0x06)
	struct UARPlaneComponent* PlaneComponentClass; // 0xb0(0x08)
	struct UARPointComponent* PointComponentClass; // 0xb8(0x08)
	struct UARFaceComponent* FaceComponentClass; // 0xc0(0x08)
	struct UARImageComponent* ImageComponentClass; // 0xc8(0x08)
	struct UARQRCodeComponent* QRCodeComponentClass; // 0xd0(0x08)
	struct UARPoseComponent* PoseComponentClass; // 0xd8(0x08)
	struct UAREnvironmentProbeComponent* EnvironmentProbeComponentClass; // 0xe0(0x08)
	struct UARObjectComponent* ObjectComponentClass; // 0xe8(0x08)
	struct UARMeshComponent* MeshComponentClass; // 0xf0(0x08)
	struct UARGeoAnchorComponent* GeoAnchorComponentClass; // 0xf8(0x08)
	struct UMaterialInterface* DefaultMeshMaterial; // 0x100(0x08)
	struct UMaterialInterface* DefaultWireframeMeshMaterial; // 0x108(0x08)

	bool ShouldResetTrackedObjects(); // Function AugmentedReality.ARSessionConfig.ShouldResetTrackedObjects // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8de2f9c
	bool ShouldResetCameraTracking(); // Function AugmentedReality.ARSessionConfig.ShouldResetCameraTracking // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8de2f88
	bool ShouldRenderCameraOverlay(); // Function AugmentedReality.ARSessionConfig.ShouldRenderCameraOverlay // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x734252c
	bool ShouldEnableCameraTracking(); // Function AugmentedReality.ARSessionConfig.ShouldEnableCameraTracking // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8de2f74
	bool ShouldEnableAutoFocus(); // Function AugmentedReality.ARSessionConfig.ShouldEnableAutoFocus // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8de2f60
	void SetWorldMapData(struct TArray<char> WorldMapData); // Function AugmentedReality.ARSessionConfig.SetWorldMapData // (Final|Native|Public|BlueprintCallable) // @ game+0x8de2e7c
	void SetSessionTrackingFeatureToEnable(enum class EARSessionTrackingFeature InSessionTrackingFeature); // Function AugmentedReality.ARSessionConfig.SetSessionTrackingFeatureToEnable // (Final|Native|Public|BlueprintCallable) // @ game+0x8de2e00
	void SetSceneReconstructionMethod(enum class EARSceneReconstruction InSceneReconstructionMethod); // Function AugmentedReality.ARSessionConfig.SetSceneReconstructionMethod // (Final|Native|Public|BlueprintCallable) // @ game+0x8de2d84
	void SetResetTrackedObjects(bool bNewValue); // Function AugmentedReality.ARSessionConfig.SetResetTrackedObjects // (Final|Native|Public|BlueprintCallable) // @ game+0x8de2d08
	void SetResetCameraTracking(bool bNewValue); // Function AugmentedReality.ARSessionConfig.SetResetCameraTracking // (Final|Native|Public|BlueprintCallable) // @ game+0x8de2c8c
	void SetFaceTrackingUpdate(enum class EARFaceTrackingUpdate InUpdate); // Function AugmentedReality.ARSessionConfig.SetFaceTrackingUpdate // (Final|Native|Public|BlueprintCallable) // @ game+0x8de2b24
	void SetFaceTrackingDirection(enum class EARFaceTrackingDirection InDirection); // Function AugmentedReality.ARSessionConfig.SetFaceTrackingDirection // (Final|Native|Public|BlueprintCallable) // @ game+0x8de2aa8
	void SetEnableAutoFocus(bool bNewValue); // Function AugmentedReality.ARSessionConfig.SetEnableAutoFocus // (Final|Native|Public|BlueprintCallable) // @ game+0x8de2a2c
	void SetDesiredVideoFormat(struct FARVideoFormat NewFormat); // Function AugmentedReality.ARSessionConfig.SetDesiredVideoFormat // (Final|Native|Public|BlueprintCallable) // @ game+0x8de29a0
	void SetCandidateObjectList(struct TArray<struct UARCandidateObject*>& InCandidateObjects); // Function AugmentedReality.ARSessionConfig.SetCandidateObjectList // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8de2804
	struct TArray<char> GetWorldMapData(); // Function AugmentedReality.ARSessionConfig.GetWorldMapData // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8de24a4
	enum class EARWorldAlignment GetWorldAlignment(); // Function AugmentedReality.ARSessionConfig.GetWorldAlignment // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8de2490
	enum class EARSessionType GetSessionType(); // Function AugmentedReality.ARSessionConfig.GetSessionType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8de2464
	enum class EARSceneReconstruction GetSceneReconstructionMethod(); // Function AugmentedReality.ARSessionConfig.GetSceneReconstructionMethod // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8de244c
	enum class EARPlaneDetectionMode GetPlaneDetectionMode(); // Function AugmentedReality.ARSessionConfig.GetPlaneDetectionMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8de2428
	int32_t GetMaxNumSimultaneousImagesTracked(); // Function AugmentedReality.ARSessionConfig.GetMaxNumSimultaneousImagesTracked // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7137138
	enum class EARLightEstimationMode GetLightEstimationMode(); // Function AugmentedReality.ARSessionConfig.GetLightEstimationMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7303fb8
	enum class EARFrameSyncMode GetFrameSyncMode(); // Function AugmentedReality.ARSessionConfig.GetFrameSyncMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8de2340
	enum class EARFaceTrackingUpdate GetFaceTrackingUpdate(); // Function AugmentedReality.ARSessionConfig.GetFaceTrackingUpdate // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8de2328
	enum class EARFaceTrackingDirection GetFaceTrackingDirection(); // Function AugmentedReality.ARSessionConfig.GetFaceTrackingDirection // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8de2310
	enum class EAREnvironmentCaptureProbeType GetEnvironmentCaptureProbeType(); // Function AugmentedReality.ARSessionConfig.GetEnvironmentCaptureProbeType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8de22fc
	enum class EARSessionTrackingFeature GetEnabledSessionTrackingFeature(); // Function AugmentedReality.ARSessionConfig.GetEnabledSessionTrackingFeature // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8de22e4
	struct FARVideoFormat GetDesiredVideoFormat(); // Function AugmentedReality.ARSessionConfig.GetDesiredVideoFormat // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8de22bc
	struct TArray<struct UARCandidateObject*> GetCandidateObjectList(); // Function AugmentedReality.ARSessionConfig.GetCandidateObjectList // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8de2230
	struct TArray<struct UARCandidateImage*> GetCandidateImageList(); // Function AugmentedReality.ARSessionConfig.GetCandidateImageList // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x689a494
	void AddCandidateObject(struct UARCandidateObject* CandidateObject); // Function AugmentedReality.ARSessionConfig.AddCandidateObject // (Final|Native|Public|BlueprintCallable) // @ game+0x8de1d30
	void AddCandidateImage(struct UARCandidateImage* NewCandidateImage); // Function AugmentedReality.ARSessionConfig.AddCandidateImage // (Final|Native|Public|BlueprintCallable) // @ game+0x8de1c94
};

// Class AugmentedReality.ARSharedWorldGameMode
// Size: 0x3d8 (Inherited: 0x370)
struct AARSharedWorldGameMode : AGameMode {
	int32_t BufferSizePerChunk; // 0x370(0x04)
	char pad_374[0x64]; // 0x374(0x64)

	void SetPreviewImageData(struct TArray<char> ImageData); // Function AugmentedReality.ARSharedWorldGameMode.SetPreviewImageData // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x8de2ba0
	void SetARWorldSharingIsReady(); // Function AugmentedReality.ARSharedWorldGameMode.SetARWorldSharingIsReady // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x8de27a4
	void SetARSharedWorldData(struct TArray<char> ARWorldData); // Function AugmentedReality.ARSharedWorldGameMode.SetARSharedWorldData // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x8de26b8
	struct AARSharedWorldGameState* GetARSharedWorldGameState(); // Function AugmentedReality.ARSharedWorldGameMode.GetARSharedWorldGameState // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x67b94c0
};

// Class AugmentedReality.ARSharedWorldGameState
// Size: 0x328 (Inherited: 0x2f0)
struct AARSharedWorldGameState : AGameState {
	struct TArray<char> PreviewImageData; // 0x2f0(0x10)
	struct TArray<char> ARWorldData; // 0x300(0x10)
	int32_t PreviewImageBytesTotal; // 0x310(0x04)
	int32_t ARWorldBytesTotal; // 0x314(0x04)
	int32_t PreviewImageBytesDelivered; // 0x318(0x04)
	int32_t ARWorldBytesDelivered; // 0x31c(0x04)
	char pad_320[0x8]; // 0x320(0x08)

	void K2_OnARWorldMapIsReady(); // Function AugmentedReality.ARSharedWorldGameState.K2_OnARWorldMapIsReady // (Event|Public|BlueprintEvent) // @ game+0xd67374
};

// Class AugmentedReality.ARSharedWorldPlayerController
// Size: 0x800 (Inherited: 0x7f8)
struct AARSharedWorldPlayerController : APlayerController {
	char pad_7F8[0x8]; // 0x7f8(0x08)

	void ServerMarkReadyForReceiving(); // Function AugmentedReality.ARSharedWorldPlayerController.ServerMarkReadyForReceiving // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x8de2560
	void ClientUpdatePreviewImageData(int32_t Offset, struct TArray<char> Buffer); // Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdatePreviewImageData // (Net|NetReliableNative|Event|Public|NetClient|NetValidate) // @ game+0x8de1fb8
	void ClientUpdateARWorldData(int32_t Offset, struct TArray<char> Buffer); // Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdateARWorldData // (Net|NetReliableNative|Event|Public|NetClient|NetValidate) // @ game+0x8de1eb8
	void ClientInitSharedWorld(int32_t PreviewImageSize, int32_t ARWorldDataSize); // Function AugmentedReality.ARSharedWorldPlayerController.ClientInitSharedWorld // (Net|NetReliableNative|Event|Public|NetClient|NetValidate) // @ game+0x8de1dd0
};

// Class AugmentedReality.ARSkyLight
// Size: 0x2a8 (Inherited: 0x298)
struct AARSkyLight : ASkyLight {
	struct UAREnvironmentCaptureProbe* CaptureProbe; // 0x298(0x08)
	char pad_2A0[0x8]; // 0x2a0(0x08)

	void SetEnvironmentCaptureProbe(struct UAREnvironmentCaptureProbe* InCaptureProbe); // Function AugmentedReality.ARSkyLight.SetEnvironmentCaptureProbe // (Final|Native|Public|BlueprintCallable) // @ game+0x8de3e8c
};

// Class AugmentedReality.ARTexture
// Size: 0x180 (Inherited: 0x158)
struct UARTexture : UTexture {
	enum class EARTextureType TextureType; // 0x158(0x01)
	char pad_159[0x3]; // 0x159(0x03)
	float Timestamp; // 0x15c(0x04)
	struct FGuid ExternalTextureGuid; // 0x160(0x10)
	struct FVector2D Size; // 0x170(0x10)
};

// Class AugmentedReality.ARTextureCameraImage
// Size: 0x180 (Inherited: 0x180)
struct UARTextureCameraImage : UARTexture {
};

// Class AugmentedReality.ARTextureCameraDepth
// Size: 0x188 (Inherited: 0x180)
struct UARTextureCameraDepth : UARTexture {
	enum class EARDepthQuality DepthQuality; // 0x180(0x01)
	enum class EARDepthAccuracy DepthAccuracy; // 0x181(0x01)
	bool bIsTemporallySmoothed; // 0x182(0x01)
	char pad_183[0x5]; // 0x183(0x05)
};

// Class AugmentedReality.AREnvironmentCaptureProbeTexture
// Size: 0x188 (Inherited: 0x160)
struct UAREnvironmentCaptureProbeTexture : UTextureCube {
	enum class EARTextureType TextureType; // 0x160(0x01)
	char pad_161[0x3]; // 0x161(0x03)
	float Timestamp; // 0x164(0x04)
	struct FGuid ExternalTextureGuid; // 0x168(0x10)
	struct FVector2D Size; // 0x178(0x10)
};

// Class AugmentedReality.ARTraceResultDummy
// Size: 0x28 (Inherited: 0x28)
struct UARTraceResultDummy : UObject {
};

// Class AugmentedReality.ARTrackedGeometry
// Size: 0x160 (Inherited: 0x28)
struct UARTrackedGeometry : UObject {
	struct FGuid UniqueId; // 0x28(0x10)
	char pad_38[0x8]; // 0x38(0x08)
	struct FTransform LocalToTrackingTransform; // 0x40(0x60)
	struct FTransform LocalToAlignedTrackingTransform; // 0xa0(0x60)
	enum class EARTrackingState TrackingState; // 0x100(0x01)
	char pad_101[0xf]; // 0x101(0x0f)
	struct UMRMeshComponent* UnderlyingMesh; // 0x110(0x08)
	enum class EARObjectClassification ObjectClassification; // 0x118(0x01)
	enum class EARSpatialMeshUsageFlags SpatialMeshUsageFlags; // 0x119(0x01)
	char pad_11A[0x16]; // 0x11a(0x16)
	int32_t LastUpdateFrameNumber; // 0x130(0x04)
	char pad_134[0xc]; // 0x134(0x0c)
	struct FName DebugName; // 0x140(0x04)
	char pad_144[0x1c]; // 0x144(0x1c)

	bool IsTracked(); // Function AugmentedReality.ARTrackedGeometry.IsTracked // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8de3d2c
	bool HasSpatialMeshUsageFlag(enum class EARSpatialMeshUsageFlags InFlag); // Function AugmentedReality.ARTrackedGeometry.HasSpatialMeshUsageFlag // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8de3c9c
	struct UMRMeshComponent* GetUnderlyingMesh(); // Function AugmentedReality.ARTrackedGeometry.GetUnderlyingMesh // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x8de3ba8
	enum class EARTrackingState GetTrackingState(); // Function AugmentedReality.ARTrackedGeometry.GetTrackingState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x22cf200
	enum class EARObjectClassification GetObjectClassification(); // Function AugmentedReality.ARTrackedGeometry.GetObjectClassification // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8de39bc
	struct FString GetName(); // Function AugmentedReality.ARTrackedGeometry.GetName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8de3948
	struct FTransform GetLocalToWorldTransform(); // Function AugmentedReality.ARTrackedGeometry.GetLocalToWorldTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x8de38cc
	struct FTransform GetLocalToTrackingTransform(); // Function AugmentedReality.ARTrackedGeometry.GetLocalToTrackingTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x8de2354
	float GetLastUpdateTimestamp(); // Function AugmentedReality.ARTrackedGeometry.GetLastUpdateTimestamp // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8de37cc
	int32_t GetLastUpdateFrameNumber(); // Function AugmentedReality.ARTrackedGeometry.GetLastUpdateFrameNumber // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8de37b4
	struct FName GetDebugName(); // Function AugmentedReality.ARTrackedGeometry.GetDebugName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x749ec3c
};

// Class AugmentedReality.ARPlaneGeometry
// Size: 0x1b0 (Inherited: 0x160)
struct UARPlaneGeometry : UARTrackedGeometry {
	enum class EARPlaneOrientation Orientation; // 0x158(0x01)
	struct FVector Center; // 0x160(0x18)
	struct FVector Extent; // 0x178(0x18)
	struct TArray<struct FVector> BoundaryPolygon; // 0x190(0x10)
	struct UARPlaneGeometry* SubsumedBy; // 0x1a0(0x08)
	char pad_1A9[0x7]; // 0x1a9(0x07)

	struct UARPlaneGeometry* GetSubsumedBy(); // Function AugmentedReality.ARPlaneGeometry.GetSubsumedBy // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8de3b74
	enum class EARPlaneOrientation GetOrientation(); // Function AugmentedReality.ARPlaneGeometry.GetOrientation // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8de3b5c
	struct FVector GetExtent(); // Function AugmentedReality.ARPlaneGeometry.GetExtent // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x8de36ac
	struct FVector GetCenter(); // Function AugmentedReality.ARPlaneGeometry.GetCenter // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x8de3640
	struct TArray<struct FVector> GetBoundaryPolygonInLocalSpace(); // Function AugmentedReality.ARPlaneGeometry.GetBoundaryPolygonInLocalSpace // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8de3570
};

// Class AugmentedReality.ARTrackedPoint
// Size: 0x160 (Inherited: 0x160)
struct UARTrackedPoint : UARTrackedGeometry {
};

// Class AugmentedReality.ARTrackedImage
// Size: 0x170 (Inherited: 0x160)
struct UARTrackedImage : UARTrackedGeometry {
	struct UARCandidateImage* DetectedImage; // 0x158(0x08)
	struct FVector2D EstimatedSize; // 0x160(0x10)

	struct FVector2D GetEstimateSize(); // Function AugmentedReality.ARTrackedImage.GetEstimateSize // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x8de3668
	struct UARCandidateImage* GetDetectedImage(); // Function AugmentedReality.ARTrackedImage.GetDetectedImage // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x277b038
};

// Class AugmentedReality.ARTrackedQRCode
// Size: 0x190 (Inherited: 0x170)
struct UARTrackedQRCode : UARTrackedImage {
	struct FString QRCode; // 0x170(0x10)
	int32_t Version; // 0x180(0x04)
	char pad_184[0xc]; // 0x184(0x0c)
};

// Class AugmentedReality.ARFaceGeometry
// Size: 0x2c0 (Inherited: 0x160)
struct UARFaceGeometry : UARTrackedGeometry {
	struct FVector LookAtTarget; // 0x158(0x18)
	bool bIsTracked; // 0x170(0x01)
	struct TMap<enum class EARFaceBlendShape, float> BlendShapes; // 0x178(0x50)
	char pad_1C9[0x37]; // 0x1c9(0x37)
	struct FTransform LeftEyeTransform; // 0x200(0x60)
	struct FTransform RightEyeTransform; // 0x260(0x60)

	struct FTransform GetWorldSpaceEyeTransform(enum class EAREye Eye); // Function AugmentedReality.ARFaceGeometry.GetWorldSpaceEyeTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x8de3bc0
	struct FTransform GetLocalSpaceEyeTransform(enum class EAREye Eye); // Function AugmentedReality.ARFaceGeometry.GetLocalSpaceEyeTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x8de3804
	float GetBlendShapeValue(enum class EARFaceBlendShape BlendShape); // Function AugmentedReality.ARFaceGeometry.GetBlendShapeValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8de3430
	struct TMap<enum class EARFaceBlendShape, float> GetBlendShapes(); // Function AugmentedReality.ARFaceGeometry.GetBlendShapes // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8de34c0
};

// Class AugmentedReality.AREnvironmentCaptureProbe
// Size: 0x180 (Inherited: 0x160)
struct UAREnvironmentCaptureProbe : UARTrackedGeometry {
	struct FVector Extent; // 0x158(0x18)
	struct UAREnvironmentCaptureProbeTexture* EnvironmentCaptureTexture; // 0x170(0x08)

	struct FVector GetExtent(); // Function AugmentedReality.AREnvironmentCaptureProbe.GetExtent // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x8de3684
	struct UAREnvironmentCaptureProbeTexture* GetEnvironmentCaptureTexture(); // Function AugmentedReality.AREnvironmentCaptureProbe.GetEnvironmentCaptureTexture // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x7613380
};

// Class AugmentedReality.ARTrackedObject
// Size: 0x160 (Inherited: 0x160)
struct UARTrackedObject : UARTrackedGeometry {
	struct UARCandidateObject* DetectedObject; // 0x158(0x08)

	struct UARCandidateObject* GetDetectedObject(); // Function AugmentedReality.ARTrackedObject.GetDetectedObject // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x277b038
};

// Class AugmentedReality.ARTrackedPose
// Size: 0x1b0 (Inherited: 0x160)
struct UARTrackedPose : UARTrackedGeometry {
	struct FARPose3D TrackedPose; // 0x158(0x50)

	struct FARPose3D GetTrackedPoseData(); // Function AugmentedReality.ARTrackedPose.GetTrackedPoseData // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8de3b8c
};

// Class AugmentedReality.ARMeshGeometry
// Size: 0x160 (Inherited: 0x160)
struct UARMeshGeometry : UARTrackedGeometry {

	bool GetObjectClassificationAtLocation(struct FVector& InWorldLocation, enum class EARObjectClassification& OutClassification, struct FVector& OutClassificationLocation, float MaxLocationDiff); // Function AugmentedReality.ARMeshGeometry.GetObjectClassificationAtLocation // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x8de39d4
};

// Class AugmentedReality.ARGeoAnchor
// Size: 0x170 (Inherited: 0x160)
struct UARGeoAnchor : UARTrackedGeometry {
	char pad_160[0x10]; // 0x160(0x10)

	float GetLongitude(); // Function AugmentedReality.ARGeoAnchor.GetLongitude // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x69f5e4c
	float GetLatitude(); // Function AugmentedReality.ARGeoAnchor.GetLatitude // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8de37ec
	enum class EARAltitudeSource GetAltitudeSource(); // Function AugmentedReality.ARGeoAnchor.GetAltitudeSource // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8de3418
	float GetAltitudeMeters(); // Function AugmentedReality.ARGeoAnchor.GetAltitudeMeters // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x745fe08
};

// Class AugmentedReality.ARTrackableNotifyComponent
// Size: 0x1f0 (Inherited: 0xa0)
struct UARTrackableNotifyComponent : UActorComponent {
	struct FMulticastInlineDelegate OnAddTrackedGeometry; // 0xa0(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedGeometry; // 0xb0(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedGeometry; // 0xc0(0x10)
	struct FMulticastInlineDelegate OnAddTrackedPlane; // 0xd0(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedPlane; // 0xe0(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedPlane; // 0xf0(0x10)
	struct FMulticastInlineDelegate OnAddTrackedPoint; // 0x100(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedPoint; // 0x110(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedPoint; // 0x120(0x10)
	struct FMulticastInlineDelegate OnAddTrackedImage; // 0x130(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedImage; // 0x140(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedImage; // 0x150(0x10)
	struct FMulticastInlineDelegate OnAddTrackedFace; // 0x160(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedFace; // 0x170(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedFace; // 0x180(0x10)
	struct FMulticastInlineDelegate OnAddTrackedEnvProbe; // 0x190(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedEnvProbe; // 0x1a0(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedEnvProbe; // 0x1b0(0x10)
	struct FMulticastInlineDelegate OnAddTrackedObject; // 0x1c0(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedObject; // 0x1d0(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedObject; // 0x1e0(0x10)
};

// Class AugmentedReality.ARTypesDummyClass
// Size: 0x28 (Inherited: 0x28)
struct UARTypesDummyClass : UObject {
};

// Class AugmentedReality.ARCandidateImage
// Size: 0x58 (Inherited: 0x30)
struct UARCandidateImage : UDataAsset {
	struct UTexture2D* CandidateTexture; // 0x30(0x08)
	struct FString FriendlyName; // 0x38(0x10)
	float Width; // 0x48(0x04)
	float Height; // 0x4c(0x04)
	enum class EARCandidateImageOrientation Orientation; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)

	float GetPhysicalWidth(); // Function AugmentedReality.ARCandidateImage.GetPhysicalWidth // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x29ee8e4
	float GetPhysicalHeight(); // Function AugmentedReality.ARCandidateImage.GetPhysicalHeight // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x29ee8d0
	enum class EARCandidateImageOrientation GetOrientation(); // Function AugmentedReality.ARCandidateImage.GetOrientation // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7274144
	struct FString GetFriendlyName(); // Function AugmentedReality.ARCandidateImage.GetFriendlyName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8de36d4
	struct UTexture2D* GetCandidateTexture(); // Function AugmentedReality.ARCandidateImage.GetCandidateTexture // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x765951c
};

// Class AugmentedReality.ARCandidateObject
// Size: 0x88 (Inherited: 0x30)
struct UARCandidateObject : UDataAsset {
	struct TArray<char> CandidateObjectData; // 0x30(0x10)
	struct FString FriendlyName; // 0x40(0x10)
	struct FBox BoundingBox; // 0x50(0x38)

	void SetFriendlyName(struct FString NewName); // Function AugmentedReality.ARCandidateObject.SetFriendlyName // (Final|Native|Public|BlueprintCallable) // @ game+0x8de3f50
	void SetCandidateObjectData(struct TArray<char>& InCandidateObject); // Function AugmentedReality.ARCandidateObject.SetCandidateObjectData // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8de3dec
	void SetBoundingBox(struct FBox& InBoundingBox); // Function AugmentedReality.ARCandidateObject.SetBoundingBox // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x8de3d48
	struct FString GetFriendlyName(); // Function AugmentedReality.ARCandidateObject.GetFriendlyName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8de3744
	struct TArray<char> GetCandidateObjectData(); // Function AugmentedReality.ARCandidateObject.GetCandidateObjectData // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8de3624
	struct FBox GetBoundingBox(); // Function AugmentedReality.ARCandidateObject.GetBoundingBox // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x8de35ec
};

