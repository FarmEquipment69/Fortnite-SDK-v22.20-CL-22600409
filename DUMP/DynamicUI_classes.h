// Class DynamicUI.DynamicUIScene
// Size: 0x68 (Inherited: 0x30)
struct UDynamicUIScene : UDataAsset {
	char LayerID; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct TArray<struct FDynamicUIAllowed> Allowed; // 0x38(0x10)
	struct TArray<struct FDynamicUIUnallowed> Unallowed; // 0x48(0x10)
	struct TArray<struct FDynamicUIPreload> Preload; // 0x58(0x10)
};

// Class DynamicUI.DynamicUIDirectorBase
// Size: 0x2a8 (Inherited: 0x288)
struct ADynamicUIDirectorBase : AActor {
	struct TArray<struct UDynamicUIScene*> DefaultScenes; // 0x288(0x10)
	struct TWeakObjectPtr<struct ULocalPlayer> OwningLocalPlayer; // 0x298(0x08)
	bool bEnabledDuringReplay; // 0x2a0(0x01)
	char pad_2A1[0x7]; // 0x2a1(0x07)

	void RemoveScene(struct UDynamicUIScene* Scene); // Function DynamicUI.DynamicUIDirectorBase.RemoveScene // (Final|Native|Public|BlueprintCallable) // @ game+0x6389448
	struct APlayerController* GetOwningLocalPlayerController(); // Function DynamicUI.DynamicUIDirectorBase.GetOwningLocalPlayerController // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x26bd928
	struct ULocalPlayer* GetOwningLocalPlayer(); // Function DynamicUI.DynamicUIDirectorBase.GetOwningLocalPlayer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x63893dc
	void AddScene(struct UDynamicUIScene* Scene); // Function DynamicUI.DynamicUIDirectorBase.AddScene // (Final|Native|Public|BlueprintCallable) // @ game+0x2357440
};

// Class DynamicUI.DynamicUIConstraintBase
// Size: 0x90 (Inherited: 0x28)
struct UDynamicUIConstraintBase : UObject {
	char pad_28[0x48]; // 0x28(0x48)
	struct FVector2D Offset; // 0x70(0x10)
	struct UDynamicUIConstraintOverrideBase* ConstraintOverride; // 0x80(0x08)
	char bUseOffset : 1; // 0x88(0x01)
	char bUseOverride : 1; // 0x88(0x01)
	char pad_88_2 : 6; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
};

// Class DynamicUI.DynamicUIConstraintPosition
// Size: 0xa8 (Inherited: 0x90)
struct UDynamicUIConstraintPosition : UDynamicUIConstraintBase {
	struct FVector2D Position; // 0x90(0x10)
	enum class EDynamicUIAnchor Anchor; // 0xa0(0x04)
	char bUseSafeZone : 1; // 0xa4(0x01)
	char pad_A4_1 : 7; // 0xa4(0x01)
	char pad_A5[0x3]; // 0xa5(0x03)
};

// Class DynamicUI.DynamicUIConstraintAlignment
// Size: 0xa8 (Inherited: 0x90)
struct UDynamicUIConstraintAlignment : UDynamicUIConstraintBase {
	enum class EHorizontalAlignment HorizontalAlignment; // 0x90(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x91(0x01)
	char pad_92[0x2]; // 0x92(0x02)
	enum class EDynamicUIAnchor Anchor; // 0x94(0x04)
	struct FDynamicUIAspectRatio MaxAspectRatio; // 0x98(0x08)
	char bUseSafeZone : 1; // 0xa0(0x01)
	char bUseMaxAspectRatio : 1; // 0xa0(0x01)
	char pad_A0_2 : 6; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
};

// Class DynamicUI.DynamicUIConstraintWidget
// Size: 0xf0 (Inherited: 0x90)
struct UDynamicUIConstraintWidget : UDynamicUIConstraintBase {
	enum class EDynamicUIAnchor Anchor; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
	struct FDynamicUIConstraintTarget TargetWidget; // 0x98(0x38)
	enum class EDynamicUIAnchor TargetAnchor; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct TArray<struct UDynamicUIConstraintBase*> Fallbacks; // 0xd8(0x10)
	char bConstrainToUnallowedWidgets : 1; // 0xe8(0x01)
	char bUseFallbacks : 1; // 0xe8(0x01)
	char pad_E8_2 : 6; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
};

// Class DynamicUI.DynamicUIConstraintContainer
// Size: 0xb8 (Inherited: 0x90)
struct UDynamicUIConstraintContainer : UDynamicUIConstraintBase {
	struct TArray<struct FDynamicUIConstraintTarget> WidgetsToContain; // 0x90(0x10)
	struct FMargin Padding; // 0xa0(0x10)
	char bMustMatchAllWidgets : 1; // 0xb0(0x01)
	char pad_B0_1 : 7; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
};

// Class DynamicUI.DynamicUIConstraintOverrideBase
// Size: 0x28 (Inherited: 0x28)
struct UDynamicUIConstraintOverrideBase : UObject {
};

// Class DynamicUI.DynamicUIConstraintPlatformOverride
// Size: 0xd0 (Inherited: 0x28)
struct UDynamicUIConstraintPlatformOverride : UDynamicUIConstraintOverrideBase {
	struct TMap<struct FName, struct UDynamicUIConstraintBase*> PlatformVisibilityControls; // 0x28(0x50)
	struct TMap<enum class ECommonInputType, struct UDynamicUIConstraintBase*> InputTypeVisibilityControls; // 0x78(0x50)
	char pad_C8[0x8]; // 0xc8(0x08)
};

// Class DynamicUI.DynamicUIManager
// Size: 0x98 (Inherited: 0x30)
struct UDynamicUIManager : UWorldSubsystem {
	char pad_30[0x18]; // 0x30(0x18)
	struct TMap<struct TWeakObjectPtr<struct ULocalPlayer>, struct FDynamicUIPlayerData> PlayerDataMap; // 0x48(0x50)

	void RemoveScenes(struct TArray<struct UDynamicUIScene*> Scenes, struct APlayerController*& Player); // Function DynamicUI.DynamicUIManager.RemoveScenes // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x6389b98
	void RemoveSceneFromFirstLocalPlayer(struct UDynamicUIScene* Scene); // Function DynamicUI.DynamicUIManager.RemoveSceneFromFirstLocalPlayer // (Final|Native|Protected|BlueprintCallable) // @ game+0x6389854
	void RemoveScene(struct UDynamicUIScene* Scene, struct APlayerController*& Player); // Function DynamicUI.DynamicUIManager.RemoveScene // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x63894c8
	void AddSceneToFirstLocalPlayer(struct UDynamicUIScene* Scene); // Function DynamicUI.DynamicUIManager.AddSceneToFirstLocalPlayer // (Final|Native|Protected|BlueprintCallable) // @ game+0x6388f48
	void AddScenes(struct TArray<struct UDynamicUIScene*> Scenes, struct APlayerController*& Player); // Function DynamicUI.DynamicUIManager.AddScenes // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x6389298
	void AddScene(struct UDynamicUIScene* Scene, struct APlayerController*& Player); // Function DynamicUI.DynamicUIManager.AddScene // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x6388bb0
};

// Class DynamicUI.DynamicUISizeBase
// Size: 0x80 (Inherited: 0x28)
struct UDynamicUISizeBase : UObject {
	char pad_28[0x48]; // 0x28(0x48)
	struct UDynamicUISizeOverrideBase* SizeOverride; // 0x70(0x08)
	char bUseOverride : 1; // 0x78(0x01)
	char pad_78_1 : 7; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
};

// Class DynamicUI.DynamicUISizeFixed
// Size: 0x88 (Inherited: 0x80)
struct UDynamicUISizeFixed : UDynamicUISizeBase {
	struct FVector2f Size; // 0x80(0x08)
};

// Class DynamicUI.DynamicUISizeScale
// Size: 0x88 (Inherited: 0x80)
struct UDynamicUISizeScale : UDynamicUISizeBase {
	struct FVector2f Scale; // 0x80(0x08)
};

// Class DynamicUI.DynamicUISizeOverrideBase
// Size: 0x28 (Inherited: 0x28)
struct UDynamicUISizeOverrideBase : UObject {
};

// Class DynamicUI.DynamicUISizeOverridePlatform
// Size: 0xd0 (Inherited: 0x28)
struct UDynamicUISizeOverridePlatform : UDynamicUISizeOverrideBase {
	struct TMap<struct FName, struct UDynamicUISizeBase*> PlatformOverrides; // 0x28(0x50)
	struct TMap<enum class ECommonInputType, struct UDynamicUISizeBase*> InputTypeOverrides; // 0x78(0x50)
	char pad_C8[0x8]; // 0xc8(0x08)
};

// Class DynamicUI.DynamicUITransitionableWidgetInterface
// Size: 0x28 (Inherited: 0x28)
struct UDynamicUITransitionableWidgetInterface : UInterface {

	void BroadcastTransitionCompleted(); // Function DynamicUI.DynamicUITransitionableWidgetInterface.BroadcastTransitionCompleted // (Native|Protected|BlueprintCallable) // @ game+0x63893c8
};

// Class DynamicUI.DynamicUIVisualizerWidget
// Size: 0x2e0 (Inherited: 0x2b8)
struct UDynamicUIVisualizerWidget : UUserWidget {
	struct TArray<struct UDynamicUIScene*> Scenes; // 0x2b8(0x10)
	bool bRefresh; // 0x2c8(0x01)
	char pad_2C9[0x17]; // 0x2c9(0x17)
};

