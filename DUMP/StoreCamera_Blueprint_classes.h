// BlueprintGeneratedClass StoreCamera_Blueprint.StoreCamera_Blueprint_C
// Size: 0xa90 (Inherited: 0x9e0)
struct AStoreCamera_Blueprint_C : AFortCameraBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x9e0(0x08)
	struct UStaticMeshComponent* Mesh-DarkenBG; // 0x9e8(0x08)
	struct UCameraComponent* CameraPlaceholderGround; // 0x9f0(0x08)
	float ChoicePack_NewTrack_0_ACA3841D4D5084BE3482FA8EBB7CE9C0; // 0x9f8(0x04)
	enum class ETimelineDirection ChoicePack__Direction_ACA3841D4D5084BE3482FA8EBB7CE9C0; // 0x9fc(0x01)
	char pad_9FD[0x3]; // 0x9fd(0x03)
	struct UTimelineComponent* ChoicePack; // 0xa00(0x08)
	float Timeline_0_NewTrack_0_6555812E4B246E6144D3C99FC49F7FE9; // 0xa08(0x04)
	enum class ETimelineDirection Timeline_0__Direction_6555812E4B246E6144D3C99FC49F7FE9; // 0xa0c(0x01)
	char pad_A0D[0x3]; // 0xa0d(0x03)
	struct UTimelineComponent* ; // 0xa10(0x08)
	struct FVector CameraGroundLoc; // 0xa18(0x18)
	struct FRotator CameraGroundRot; // 0xa30(0x18)
	struct FVector CameraOriginalLoc; // 0xa48(0x18)
	struct FRotator CameraOriginalRot; // 0xa60(0x18)
	bool CameraInStartPos; // 0xa78(0x01)
	char pad_A79[0x7]; // 0xa79(0x07)
	struct AStorePinataMaster_Parent_C* PinataInLevel; // 0xa80(0x08)
	struct AStoreCardReveal_Parent_C* CardRevealInLevel; // 0xa88(0x08)

	void UserConstructionScript(); // Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Timeline_0__FinishedFunc(); // Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0xd67374
	void Timeline_0__UpdateFunc(); // Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0xd67374
	void ChoicePack__FinishedFunc(); // Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.ChoicePack__FinishedFunc // (BlueprintEvent) // @ game+0xd67374
	void ChoicePack__UpdateFunc(); // Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.ChoicePack__UpdateFunc // (BlueprintEvent) // @ game+0xd67374
	void BP_OnActivated(struct AFortPlayerController* PlayerController); // Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.BP_OnActivated // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void BP_OnDeactivated(struct AFortPlayerController* PlayerController); // Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.BP_OnDeactivated // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OpeningCameraTransition(); // Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.OpeningCameraTransition // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ResetCamera(); // Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.ResetCamera // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void DarkenBGVisibility(bool Enable); // Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.DarkenBGVisibility // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ChoicePackFOV-Out(); // Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.ChoicePackFOV-Out // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ChoicePackFOV-In(); // Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.ChoicePackFOV-In // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_StoreCamera_Blueprint(int32_t EntryPoint); // Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.ExecuteUbergraph_StoreCamera_Blueprint // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

