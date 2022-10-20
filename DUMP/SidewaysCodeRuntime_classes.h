// Class SidewaysCodeRuntime.FortControllerComponent_Sideways
// Size: 0xa8 (Inherited: 0xa0)
struct UFortControllerComponent_Sideways : UFortControllerComponent {
	struct FTimerHandle UpdateClosestSidewaysHandle; // 0xa0(0x08)
};

// Class SidewaysCodeRuntime.PlayspaceComponent_SidewaysDimension
// Size: 0x148 (Inherited: 0xf8)
struct UPlayspaceComponent_SidewaysDimension : UFortPlayspaceComponent {
	char pad_F8[0x48]; // 0xf8(0x48)
	struct UAthenaAIServiceLoot* CachedAIServiceLoot; // 0x140(0x08)
};

// Class SidewaysCodeRuntime.PlayspaceComponent_SidewaysEncounter
// Size: 0xf8 (Inherited: 0xf8)
struct UPlayspaceComponent_SidewaysEncounter : UFortPlayspaceComponent {
};

// Class SidewaysCodeRuntime.SidewaysCheatManager
// Size: 0x28 (Inherited: 0x28)
struct USidewaysCheatManager : UChildCheatManager {

	void SetSidewaysState(enum class ESidewaysState SidewaysState); // Function SidewaysCodeRuntime.SidewaysCheatManager.SetSidewaysState // (Final|BlueprintAuthorityOnly|Exec|Native|Public) // @ game+0x66da9d0
};

// Class SidewaysCodeRuntime.SidewaysFeatureAction_HoldGlobalData
// Size: 0x60 (Inherited: 0x28)
struct USidewaysFeatureAction_HoldGlobalData : UGameFeatureAction {
	struct TSoftObjectPtr<UMaterialParameterCollection> SidewaysMaterialParameterCollection; // 0x28(0x28)
	struct FName SidewaysBubbleLocationParameterNamesForLocalPlayers[0x2]; // 0x50(0x08)
	struct FName SidewaysBubbleRadiusParameterNamesForLocalPlayers[0x2]; // 0x58(0x08)
};

// Class SidewaysCodeRuntime.SidewaysLibrary
// Size: 0x28 (Inherited: 0x28)
struct USidewaysLibrary : UBlueprintFunctionLibrary {

	struct USidewaysStateComponent* GetSidewaysStateComponent(struct AActor* Owner); // Function SidewaysCodeRuntime.SidewaysLibrary.GetSidewaysStateComponent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x66da860
};

// Class SidewaysCodeRuntime.SidewaysPlayspace
// Size: 0x620 (Inherited: 0x620)
struct ASidewaysPlayspace : AFortPlayspace {

	void RefreshActorsInSideways(); // Function SidewaysCodeRuntime.SidewaysPlayspace.RefreshActorsInSideways // (Final|Native|Public|BlueprintCallable) // @ game+0x66da974
	void NotifySizeChanged(); // Function SidewaysCodeRuntime.SidewaysPlayspace.NotifySizeChanged // (Final|Native|Public|BlueprintCallable) // @ game+0x66da8e0
};

// Class SidewaysCodeRuntime.SidewaysStateComponent
// Size: 0xc8 (Inherited: 0xa0)
struct USidewaysStateComponent : UGameFrameworkComponent {
	enum class ESidewaysState SidewaysState; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct ASidewaysPlayspace* SidewaysPlayspace; // 0xa8(0x08)
	struct FMulticastInlineDelegate OnSidewaysStateChangedDelegate; // 0xb0(0x10)
	char pad_C0[0x8]; // 0xc0(0x08)

	void SetSidewaysState(enum class ESidewaysState NewState, struct ASidewaysPlayspace* NewSidewaysPlayspace); // Function SidewaysCodeRuntime.SidewaysStateComponent.SetSidewaysState // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x66daa34
	void OnRep_SidewaysState(enum class ESidewaysState LastSidewaysState); // Function SidewaysCodeRuntime.SidewaysStateComponent.OnRep_SidewaysState // (Final|Native|Protected) // @ game+0x66da8f4
	void OnRep_SidewaysPlayspace(struct ASidewaysPlayspace* NewSidewaysPlayspace); // Function SidewaysCodeRuntime.SidewaysStateComponent.OnRep_SidewaysPlayspace // (Final|Native|Protected) // @ game+0x636963c
	void HandleSidewaysStateChanged(struct ASidewaysPlayspace* NewSidewaysPlayspace, enum class ESidewaysState OldState, enum class ESidewaysState NewState); // Function SidewaysCodeRuntime.SidewaysStateComponent.HandleSidewaysStateChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	enum class ESidewaysState GetSidewaysState(); // Function SidewaysCodeRuntime.SidewaysStateComponent.GetSidewaysState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x21f44cc
};

// Class SidewaysCodeRuntime.SidewaysStateComponent_Player
// Size: 0x118 (Inherited: 0xc8)
struct USidewaysStateComponent_Player : USidewaysStateComponent {
	struct TSoftObjectPtr<UMaterialParameterCollection> SidewaysMaterialParameterCollection; // 0xc8(0x28)
	struct FName SidewaysBubbleLocationParameterNamesForLocalPlayers[0x2]; // 0xf0(0x08)
	struct FName SidewaysBubbleRadiusParameterNamesForLocalPlayers[0x2]; // 0xf8(0x08)
	float ExtraCorruptionRadius; // 0x100(0x04)
	float MinRadiusToHaveAnyCorruption; // 0x104(0x04)
	float MaxRadiusForScalingExtraCorruptionRadius; // 0x108(0x04)
	float UpdateFrequency; // 0x10c(0x04)
	char pad_110[0x8]; // 0x110(0x08)
};

// Class SidewaysCodeRuntime.SidewaysVolume
// Size: 0x310 (Inherited: 0x310)
struct ASidewaysVolume : AGameplayVolume {
};

