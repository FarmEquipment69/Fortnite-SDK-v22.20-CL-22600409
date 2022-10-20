// BlueprintGeneratedClass B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C
// Size: 0x680 (Inherited: 0x4e0)
struct AB_AthenaMapMarkerBase_C : AFortPlayerMarkerBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UStaticMeshComponent* PingMarkerProto; // 0x4e8(0x08)
	struct UStaticMeshComponent* SM-Target; // 0x4f0(0x08)
	float OnProtoMarkerPlaced_RampPow_83EEC58A4783B077FB03728C433B4B7E; // 0x4f8(0x04)
	float OnProtoMarkerPlaced_Pinch_83EEC58A4783B077FB03728C433B4B7E; // 0x4fc(0x04)
	float OnProtoMarkerPlaced_Glow_83EEC58A4783B077FB03728C433B4B7E; // 0x500(0x04)
	enum class ETimelineDirection OnProtoMarkerPlaced__Direction_83EEC58A4783B077FB03728C433B4B7E; // 0x504(0x01)
	char pad_505[0x3]; // 0x505(0x03)
	struct UTimelineComponent* OnProtoMarkerPlaced; // 0x508(0x08)
	bool bUseProtoMarker; // 0x510(0x01)
	char pad_511[0x7]; // 0x511(0x07)
	struct UMaterialInstanceDynamic* MIDProtoMarker; // 0x518(0x08)
	struct FFortWorldMarkerData MarkerData; // 0x520(0x160)

	void UserConstructionScript(); // Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnProtoMarkerPlaced__FinishedFunc(); // Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.OnProtoMarkerPlaced__FinishedFunc // (BlueprintEvent) // @ game+0xd67374
	void OnProtoMarkerPlaced__UpdateFunc(); // Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.OnProtoMarkerPlaced__UpdateFunc // (BlueprintEvent) // @ game+0xd67374
	void OnMarkerPlaced(); // Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.OnMarkerPlaced // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnSetupMarker(struct FFortWorldMarkerData& MarkerData); // Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.OnSetupMarker // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnMarkerColorChanged(struct FLinearColor InColor); // Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.OnMarkerColorChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_B_AthenaMapMarkerBase(int32_t EntryPoint); // Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.ExecuteUbergraph_B_AthenaMapMarkerBase // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

