// BlueprintGeneratedClass VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C
// Size: 0x358 (Inherited: 0x288)
struct AVaultCharacterPlacementHelper_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UStaticMeshComponent* floor; // 0x290(0x08)
	struct UStaticMeshComponent* CharacterPlacement; // 0x298(0x08)
	struct USceneComponent* Root; // 0x2a0(0x08)
	char pad_2A8[0x8]; // 0x2a8(0x08)
	struct FTransform OriginalTransform; // 0x2b0(0x60)
	struct FVector OffsetTranslate; // 0x310(0x18)
	struct FRotator OffsetRotate; // 0x328(0x18)
	bool Athena; // 0x340(0x01)
	char pad_341[0x7]; // 0x341(0x07)
	struct FMulticastInlineDelegate OnZoomLevelUpdated; // 0x348(0x10)

	void UpdatePosition For Camera(enum class EFrontEndCamera FrontEndCamera); // Function VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.UpdatePosition For Camera // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UserConstructionScript(); // Function VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ReceiveBeginPlay(); // Function VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void (enum class ESubGame SubGame); // Function VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C. // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnFrontEndCameraChanged(enum class EFrontEndCamera NewCamera, enum class EFrontEndCamera OldCamera); // Function VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.OnFrontEndCameraChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_VaultCharacterPlacementHelper(int32_t EntryPoint); // Function VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.ExecuteUbergraph_VaultCharacterPlacementHelper // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
	void OnZoomLevelUpdated__DelegateSignature(double CurrentZoomLevel); // Function VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.OnZoomLevelUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

