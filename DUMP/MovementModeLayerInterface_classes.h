// AnimBlueprintGeneratedClass MovementModeLayerInterface.MovementModeLayerInterface_C
// Size: 0x28 (Inherited: 0x28)
struct UMovementModeLayerInterface_C : UAnimLayerInterface {

	void MovementMode_AimOffset(struct FPoseLink InAimOffsetsPose, struct FPoseLink InSourcePosePreAimOffsets, struct FPoseLink& MovementMode_AimOffset); // Function MovementModeLayerInterface.MovementModeLayerInterface_C.MovementMode_AimOffset // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void MovementMode_FinalPoseOverride(struct FPoseLink InFinalPose, struct FPoseLink& MovementMode_FinalPoseOverride); // Function MovementModeLayerInterface.MovementModeLayerInterface_C.MovementMode_FinalPoseOverride // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void MovementMode_FullBodyOverride(struct FPoseLink InputPoseFullBody, struct FPoseLink& MovementMode_FullBodyOverride); // Function MovementModeLayerInterface.MovementModeLayerInterface_C.MovementMode_FullBodyOverride // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void MovementMode_SourcePose(struct FPoseLink InSourcePoseBase, struct FPoseLink& MovementMode_SourcePose); // Function MovementModeLayerInterface.MovementModeLayerInterface_C.MovementMode_SourcePose // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void MovementMode_LocomotionAdditives(struct FPoseLink InLocomotionAdditivesPose, struct FPoseLink& MovementMode_LocomotionAdditives); // Function MovementModeLayerInterface.MovementModeLayerInterface_C.MovementMode_LocomotionAdditives // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void MovementMode_LowerBodyOverride(struct FPoseLink InLowerBodyPose, struct FPoseLink InSourcePose, struct FPoseLink InSourcePosePreUpperBodySlot, struct FPoseLink& MovementMode_LowerBodyOverride); // Function MovementModeLayerInterface.MovementModeLayerInterface_C.MovementMode_LowerBodyOverride // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

