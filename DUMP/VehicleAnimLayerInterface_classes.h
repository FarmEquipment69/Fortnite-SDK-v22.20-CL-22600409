// AnimBlueprintGeneratedClass VehicleAnimLayerInterface.VehicleAnimLayerInterface_C
// Size: 0x28 (Inherited: 0x28)
struct UVehicleAnimLayerInterface_C : UAnimLayerInterface {

	void VehicleFinalPoseOverride(struct FPoseLink InFinalPose, struct FPoseLink& VehicleFinalPoseOverride); // Function VehicleAnimLayerInterface.VehicleAnimLayerInterface_C.VehicleFinalPoseOverride // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void VehicleSplitBodyOverride(struct FPoseLink InPoseSplitBody, struct FPoseLink InPoseUpperAndLowerBody, struct FFortAnimInput_TurnInPlace TurnInPlace, struct FPoseLink InPoseUpperAndLowerBodyRemoveRoot, struct FPoseLink& VehicleSplitBodyOverride); // Function VehicleAnimLayerInterface.VehicleAnimLayerInterface_C.VehicleSplitBodyOverride // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void VehicleLowerBodyOverride(struct FPoseLink InPoseLowerBodyDefault, struct FPoseLink InPoseUpperBody, struct FPoseLink& VehicleLowerBodyOverride); // Function VehicleAnimLayerInterface.VehicleAnimLayerInterface_C.VehicleLowerBodyOverride // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void VehicleFullBodyOverride(struct FPoseLink InPoseFullBody, struct FPoseLink& VehicleFullBodyOverride); // Function VehicleAnimLayerInterface.VehicleAnimLayerInterface_C.VehicleFullBodyOverride // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

