// Enum DynamicUI.EDynamicUIStrength
enum class EDynamicUIStrength : uint8 {
	Weak = 0,
	Medium = 1,
	Strong = 2,
	Required = 3,
	EDynamicUIStrength_MAX = 4
};

// Enum DynamicUI.EDynamicUIAnchor
enum class EDynamicUIAnchor : uint8 {
	TopLeft = 0,
	TopCenter = 1,
	TopRight = 2,
	CenterLeft = 3,
	CenterCenter = 4,
	CenterRight = 5,
	BottomLeft = 6,
	BottomCenter = 7,
	BottomRight = 8,
	EDynamicUIAnchor_MAX = 9
};

// Enum DynamicUI.EDynamicUIAspectRatio
enum class EDynamicUIAspectRatio : uint8 {
	 = 0,
	 = 1,
	 = 2,
	 = 3,
	 = 4,
	 = 5,
	Custom = 6,
	EDynamicUIAspectRatio_MAX = 7
};

// Enum DynamicUI.EDynamicUIZOrder
enum class EDynamicUIZOrder : int32 {
	Back = 1000,
	Middle = 2000,
	Front = 3000,
	Custom = 2500,
	CustomMin = 0,
	CustomMax = 5000,
	Loading = 30000,
	Top = 50000,
	EDynamicUIZOrder_MAX = 50001
};

// Enum DynamicUI.EDynamicUIUnallowedBehavior
enum class EDynamicUIUnallowedBehavior : uint8 {
	Hide = 0,
	Collapse = 1,
	Destroy = 2,
	EDynamicUIUnallowedBehavior_MAX = 3
};

// Enum DynamicUI.EDynamicUIDebugDisplayMode
enum class EDynamicUIDebugDisplayMode : uint8 {
	Hide = 0,
	ShowSelected = 1,
	ShowAll = 2,
	EDynamicUIDebugDisplayMode_MAX = 3
};

// ScriptStruct DynamicUI.DynamicUIAspectRatio
// Size: 0x08 (Inherited: 0x00)
struct FDynamicUIAspectRatio {
	enum class EDynamicUIAspectRatio AspectRatio; // 0x00(0x04)
	float CustomAspectRatio; // 0x04(0x04)
};

// ScriptStruct DynamicUI.DynamicUIConstraintTarget
// Size: 0x38 (Inherited: 0x00)
struct FDynamicUIConstraintTarget {
	struct FName WidgetPath; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TSoftClassPtr<UObject> WidgetClass; // 0x08(0x28)
	struct FName UniqueId; // 0x30(0x04)
	char bUseUniqueID : 1; // 0x34(0x01)
	char pad_34_1 : 7; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
};

// ScriptStruct DynamicUI.DynamicUIAllowed
// Size: 0x78 (Inherited: 0x00)
struct FDynamicUIAllowed {
	struct TSoftClassPtr<UObject> Widget; // 0x00(0x28)
	enum class EDynamicUIZOrder ZOrder; // 0x28(0x04)
	int32_t CustomZOrder; // 0x2c(0x04)
	struct FName UniqueId; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TSoftObjectPtr<UCommonInputActionDomain> ActionDomain; // 0x38(0x28)
	struct UDynamicUIConstraintBase* LayoutConstraint; // 0x60(0x08)
	struct UDynamicUISizeBase* SizeModifier; // 0x68(0x08)
	char LayerIDOverride; // 0x70(0x01)
	char bIsUnique : 1; // 0x71(0x01)
	char bUseActionDomain : 1; // 0x71(0x01)
	char bUseLayerOverride : 1; // 0x71(0x01)
	char pad_71_3 : 5; // 0x71(0x01)
	char pad_72[0x6]; // 0x72(0x06)
};

// ScriptStruct DynamicUI.DynamicUIUnallowed
// Size: 0x38 (Inherited: 0x00)
struct FDynamicUIUnallowed {
	struct TSoftClassPtr<UObject> Widget; // 0x00(0x28)
	struct FName UniqueId; // 0x28(0x04)
	enum class EDynamicUIUnallowedBehavior Behavior; // 0x2c(0x04)
	char bTargetAll : 1; // 0x30(0x01)
	char bUseUniqueID : 1; // 0x30(0x01)
	char pad_30_2 : 6; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct DynamicUI.DynamicUIPreload
// Size: 0x28 (Inherited: 0x00)
struct FDynamicUIPreload {
	struct TSoftClassPtr<UObject> Widget; // 0x00(0x28)
};

// ScriptStruct DynamicUI.DynamicUISceneData
// Size: 0x01 (Inherited: 0x00)
struct FDynamicUISceneData {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct DynamicUI.DynamicUIDirectorData
// Size: 0x38 (Inherited: 0x00)
struct FDynamicUIDirectorData {
	struct TSoftClassPtr<UObject> DirectorClass; // 0x00(0x28)
	struct TWeakObjectPtr<struct AActor> Instance; // 0x28(0x08)
	char pad_30[0x8]; // 0x30(0x08)
};

// ScriptStruct DynamicUI.DynamicUIPlayerData
// Size: 0x90 (Inherited: 0x00)
struct FDynamicUIPlayerData {
	char pad_0[0x40]; // 0x00(0x40)
	struct TMap<struct FString, struct FDynamicUIDirectorData> ActiveDirectors; // 0x40(0x50)
};

