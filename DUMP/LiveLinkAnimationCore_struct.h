// ScriptStruct LiveLinkAnimationCore.AnimNode_LiveLinkPose
// Size: 0x48 (Inherited: 0x10)
struct FAnimNode_LiveLinkPose : FAnimNode_Base {
	struct FPoseLink InputPose; // 0x10(0x10)
	struct FLiveLinkSubjectName LiveLinkSubjectName; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct ULiveLinkRetargetAsset* RetargetAsset; // 0x28(0x08)
	struct ULiveLinkRetargetAsset* CurrentRetargetAsset; // 0x30(0x08)
	char pad_38[0x10]; // 0x38(0x10)
};

// ScriptStruct LiveLinkAnimationCore.LiveLinkInstanceProxy
// Size: 0x8d0 (Inherited: 0x880)
struct FLiveLinkInstanceProxy : FAnimInstanceProxy {
	struct FAnimNode_LiveLinkPose PoseNode; // 0x880(0x48)
	char pad_8C8[0x8]; // 0x8c8(0x08)
};

