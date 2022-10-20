// WidgetBlueprintGeneratedClass GameFeatureStatus.GameFeatureStatus_C
// Size: 0x400 (Inherited: 0x3a0)
struct UGameFeatureStatus_C : UAthenaGameFeatureStatus {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3a0(0x08)
	struct UWidgetAnimation* Downloading_Error; // 0x3a8(0x08)
	struct UWidgetAnimation* Downloading; // 0x3b0(0x08)
	struct UImage* Image_ErrorIcon; // 0x3b8(0x08)
	struct UImage* Image_Pause; // 0x3c0(0x08)
	struct UWidgetSwitcher* Switcher_ProgressOrError; // 0x3c8(0x08)
	struct FLinearColor Progress; // 0x3d0(0x10)
	struct FLinearColor Error; // 0x3e0(0x10)
	struct FLinearColor Paused; // 0x3f0(0x10)

	void HandleStatusChanged(enum class EAthenaGameFeatureStatus CurrentStatus); // Function GameFeatureStatus.GameFeatureStatus_C.HandleStatusChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnStatusChanged(enum class EAthenaGameFeatureStatus NewStatus); // Function GameFeatureStatus.GameFeatureStatus_C.OnStatusChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GameFeatureStatus(int32_t EntryPoint); // Function GameFeatureStatus.GameFeatureStatus_C.ExecuteUbergraph_GameFeatureStatus // (Final|UbergraphFunction) // @ game+0xd67374
};

