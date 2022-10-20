// Enum RidingCodeRuntime.ERidingControlInputStyle
enum class ERidingControlInputStyle : uint8 {
	SteeringControl = 0,
	DirectControl = 1,
	ERidingControlInputStyle_MAX = 2
};

// ScriptStruct RidingCodeRuntime.RidingControlInputStateReliable
// Size: 0x01 (Inherited: 0x00)
struct FRidingControlInputStateReliable {
	char bIsJumping : 1; // 0x00(0x01)
	char bIsUsingAbility : 1; // 0x00(0x01)
	char bIsPetting : 1; // 0x00(0x01)
	char pad_0_3 : 5; // 0x00(0x01)
};

// ScriptStruct RidingCodeRuntime.RidingControlInputStateUnreliable
// Size: 0x02 (Inherited: 0x00)
struct FRidingControlInputStateUnreliable {
	char RightAlphaQuantized; // 0x00(0x01)
	char ForwardAlphaQuantized; // 0x01(0x01)
};

// ScriptStruct RidingCodeRuntime.RidingControlInputState
// Size: 0x0c (Inherited: 0x00)
struct FRidingControlInputState {
	float RightAlpha; // 0x00(0x04)
	float ForwardAlpha; // 0x04(0x04)
	char bIsJumping : 1; // 0x08(0x01)
	char pad_8_1 : 1; // 0x08(0x01)
	char bIsUsingAbility : 1; // 0x08(0x01)
	char pad_8_3 : 1; // 0x08(0x01)
	char bIsPetting : 1; // 0x08(0x01)
	char pad_8_5 : 3; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct RidingCodeRuntime.RidingPlaylistBlacklistTableRow
// Size: 0x28 (Inherited: 0x08)
struct FRidingPlaylistBlacklistTableRow : FTableRowBase {
	struct FGameplayTagContainer PlaylistTags; // 0x08(0x20)
};

// ScriptStruct RidingCodeRuntime.PrimaryFireAnimMontageAnimCoreTypeOverride
// Size: 0x60 (Inherited: 0x00)
struct FPrimaryFireAnimMontageAnimCoreTypeOverride {
	enum class EFortWeaponCoreAnimation CoreTypeToOverride; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FFortGameplayAbilityMontageInfo OverridingMontageInfo; // 0x08(0x58)
};

// ScriptStruct RidingCodeRuntime.PrimaryFireAnimMontageTagOverride
// Size: 0x60 (Inherited: 0x00)
struct FPrimaryFireAnimMontageTagOverride {
	struct FGameplayTag TagOverride; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FFortGameplayAbilityMontageInfo OverridingMontageInfo; // 0x08(0x58)
};

// ScriptStruct RidingCodeRuntime.RidingAttachmentBoundsOverride
// Size: 0x38 (Inherited: 0x00)
struct FRidingAttachmentBoundsOverride {
	bool bUseOverride; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FVector AttachSoftBounds; // 0x08(0x18)
	struct FVector AttachHardBounds; // 0x20(0x18)
};

// ScriptStruct RidingCodeRuntime.RidingPettingData
// Size: 0x108 (Inherited: 0x00)
struct FRidingPettingData {
	struct FFortGameplayAbilityMontageInfo RiderMalePettingMontageInfo; // 0x00(0x58)
	struct FFortGameplayAbilityMontageInfo RiderFemalePettingMontageInfo; // 0x58(0x58)
	struct FFortGameplayAbilityMontageInfo RidablePettingMontageInfo; // 0xb0(0x58)
};

// ScriptStruct RidingCodeRuntime.RiderDismountLaunchVelocity
// Size: 0xa8 (Inherited: 0x00)
struct FRiderDismountLaunchVelocity {
	struct FScalableFloat DismountVelocityMultiplier; // 0x00(0x28)
	struct FScalableFloat DismountVelocityBaseForwardVelocity; // 0x28(0x28)
	struct FScalableFloat DismountVelocityBaseRightVelocity; // 0x50(0x28)
	struct FScalableFloat DismountVelocityBaseUpVelocity; // 0x78(0x28)
	bool bApplyDismountVelocityMultiplierToZVelocity; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
};

// ScriptStruct RidingCodeRuntime.RidingAnalyticsData_Base
// Size: 0x58 (Inherited: 0x00)
struct FRidingAnalyticsData_Base {
	char pad_0[0x8]; // 0x00(0x08)
	struct TSoftObjectPtr<URiderComponent> Rider; // 0x08(0x28)
	struct TSoftObjectPtr<URidableComponent> Ridable; // 0x30(0x28)
};

// ScriptStruct RidingCodeRuntime.RidingAnalyticsData_Started
// Size: 0x58 (Inherited: 0x58)
struct FRidingAnalyticsData_Started : FRidingAnalyticsData_Base {
};

// ScriptStruct RidingCodeRuntime.RidingAnalyticsData_Stopped
// Size: 0x90 (Inherited: 0x58)
struct FRidingAnalyticsData_Stopped : FRidingAnalyticsData_Base {
	float TotalRidingTime; // 0x58(0x04)
	float RiderStartHealth; // 0x5c(0x04)
	float RiderStartShield; // 0x60(0x04)
	float RiderEndHealth; // 0x64(0x04)
	float RiderEndShield; // 0x68(0x04)
	float TotalDistanceTraveled; // 0x6c(0x04)
	int32_t JumpUseCount; // 0x70(0x04)
	int32_t AbilityUseCount; // 0x74(0x04)
	float RiderDamageDealt; // 0x78(0x04)
	float RiderDamageTaken; // 0x7c(0x04)
	float RiderHealingReceived; // 0x80(0x04)
	float RiderShieldGained; // 0x84(0x04)
	char bRidableEliminated : 1; // 0x88(0x01)
	char bRidableExhausted : 1; // 0x88(0x01)
	char pad_88_2 : 6; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
};

