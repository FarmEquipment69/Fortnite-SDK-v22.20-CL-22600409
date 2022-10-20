// BlueprintGeneratedClass BP_Artemis_SnowSurfaceCoverageMap.BP_Artemis_SnowSurfaceCoverageMap_C
// Size: 0x3d8 (Inherited: 0x288)
struct ABP_Artemis_SnowSurfaceCoverageMap_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x290(0x08)
	struct TArray<struct FVector2D> SnowmaskOffsets; // 0x298(0x10)
	struct FVector LandscapeBias; // 0x2a8(0x18)
	struct FVector LandscapeSize; // 0x2c0(0x18)
	struct UTextureRenderTarget2D* SnowRT_BitArray; // 0x2d8(0x08)
	struct FVector2D RenderTargetResolution; // 0x2e0(0x10)
	struct UMaterialInterface* RTMaterial; // 0x2f0(0x08)
	double CoverageThreshold; // 0x2f8(0x08)
	struct TMap<struct FString, enum class Bp_E_Artemis_SnowSurfaceCoverageMap> SnowProgressionServer; // 0x300(0x50)
	double DebugDrawBitArrayDuration; // 0x350(0x08)
	bool AllowBitArrayPopulation; // 0x358(0x01)
	bool Release&ClearRenderTargetBitArrayOnCompletion; // 0x359(0x01)
	char pad_35A[0x6]; // 0x35a(0x06)
	struct FMulticastInlineDelegate s19BitArrayPopulated; // 0x360(0x10)
	bool BitArraySuccesfullyPopulated; // 0x370(0x01)
	char pad_371[0x7]; // 0x371(0x07)
	struct UTextureRenderTarget2D* SnowRT_DiskAsset; // 0x378(0x08)
	struct FBP_Artemis_SnowSurfaceCoverageMap_Struct SnowProgressionState; // 0x380(0x08)
	struct TMap<struct FString, enum class Bp_E_Artemis_SnowSurfaceCoverageMap> SnowProgressionClient; // 0x388(0x50)

	void FindAndSetSnowProgressionPhase(struct TMap<struct FString, enum class Bp_E_Artemis_SnowSurfaceCoverageMap>& SnowProgressionEvents); // Function BP_Artemis_SnowSurfaceCoverageMap.BP_Artemis_SnowSurfaceCoverageMap_C.FindAndSetSnowProgressionPhase // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnRep_SnowProgressionState(); // Function BP_Artemis_SnowSurfaceCoverageMap.BP_Artemis_SnowSurfaceCoverageMap_C.OnRep_SnowProgressionState // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void GetSnowProgressionPhase(enum class Bp_E_Artemis_SnowSurfaceCoverageMap& SnowProgressionPhase); // Function BP_Artemis_SnowSurfaceCoverageMap.BP_Artemis_SnowSurfaceCoverageMap_C.GetSnowProgressionPhase // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void ClearRenderTargetOnDisk(); // Function BP_Artemis_SnowSurfaceCoverageMap.BP_Artemis_SnowSurfaceCoverageMap_C.ClearRenderTargetOnDisk // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void RemoveSnowOnClient(); // Function BP_Artemis_SnowSurfaceCoverageMap.BP_Artemis_SnowSurfaceCoverageMap_C.RemoveSnowOnClient // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateSnowVisuals(); // Function BP_Artemis_SnowSurfaceCoverageMap.BP_Artemis_SnowSurfaceCoverageMap_C.UpdateSnowVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void IgnoreCalendarEventsWarningLog(); // Function BP_Artemis_SnowSurfaceCoverageMap.BP_Artemis_SnowSurfaceCoverageMap_C.IgnoreCalendarEventsWarningLog // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnRep_SnowProgression(); // Function BP_Artemis_SnowSurfaceCoverageMap.BP_Artemis_SnowSurfaceCoverageMap_C.OnRep_SnowProgression // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void QuerySnowCalendarEvents(struct TMap<struct FString, enum class Bp_E_Artemis_SnowSurfaceCoverageMap>& Events, bool& EventFound, struct FString& FoundEventName, double& EventTimespanRatio); // Function BP_Artemis_SnowSurfaceCoverageMap.BP_Artemis_SnowSurfaceCoverageMap_C.QuerySnowCalendarEvents // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Release&ClearRenderTarget(); // Function BP_Artemis_SnowSurfaceCoverageMap.BP_Artemis_SnowSurfaceCoverageMap_C.Release&ClearRenderTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetupRT(); // Function BP_Artemis_SnowSurfaceCoverageMap.BP_Artemis_SnowSurfaceCoverageMap_C.SetupRT // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PopulateBitArray(); // Function BP_Artemis_SnowSurfaceCoverageMap.BP_Artemis_SnowSurfaceCoverageMap_C.PopulateBitArray // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateSnowProgressionMPC(); // Function BP_Artemis_SnowSurfaceCoverageMap.BP_Artemis_SnowSurfaceCoverageMap_C.UpdateSnowProgressionMPC // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UserConstructionScript(); // Function BP_Artemis_SnowSurfaceCoverageMap.BP_Artemis_SnowSurfaceCoverageMap_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnReady_60D0298240509AEB035A67BBB4E888A1(); // Function BP_Artemis_SnowSurfaceCoverageMap.BP_Artemis_SnowSurfaceCoverageMap_C.OnReady_60D0298240509AEB035A67BBB4E888A1 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ReceiveBeginPlay(); // Function BP_Artemis_SnowSurfaceCoverageMap.BP_Artemis_SnowSurfaceCoverageMap_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void SetAllowBitArrayPopulation(bool AllowBitArrayPopulation); // Function BP_Artemis_SnowSurfaceCoverageMap.BP_Artemis_SnowSurfaceCoverageMap_C.SetAllowBitArrayPopulation // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetSnowProgressionPhase(int32_t Index); // Function BP_Artemis_SnowSurfaceCoverageMap.BP_Artemis_SnowSurfaceCoverageMap_C.SetSnowProgressionPhase // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_Artemis_SnowSurfaceCoverageMap.BP_Artemis_SnowSurfaceCoverageMap_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void CallClearRenderTargetOnDisk(); // Function BP_Artemis_SnowSurfaceCoverageMap.BP_Artemis_SnowSurfaceCoverageMap_C.CallClearRenderTargetOnDisk // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_BP_Artemis_SnowSurfaceCoverageMap(int32_t EntryPoint); // Function BP_Artemis_SnowSurfaceCoverageMap.BP_Artemis_SnowSurfaceCoverageMap_C.ExecuteUbergraph_BP_Artemis_SnowSurfaceCoverageMap // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
	void s19BitArrayPopulated__DelegateSignature(); // Function BP_Artemis_SnowSurfaceCoverageMap.BP_Artemis_SnowSurfaceCoverageMap_C.s19BitArrayPopulated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

