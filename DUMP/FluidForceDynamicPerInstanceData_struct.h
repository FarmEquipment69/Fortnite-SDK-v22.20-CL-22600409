// UserDefinedStruct FluidForceDynamicPerInstanceData.FluidForceDynamicPerInstanceData
// Size: 0x148 (Inherited: 0x00)
struct FFluidForceDynamicPerInstanceData {
	struct FFluidForceDynamic ForceInfo_2_A6A35E3243FAF59D161A5FBAA2F6F2B1; // 0x00(0x70)
	struct FVector ComponentLocation_13_959307184C8E5CCACA55FC8378D92CFD; // 0x70(0x18)
	struct FVector ComponentVelocity_5_4F6589474918826DF8A6468CF0F2C361; // 0x88(0x18)
	float BoundsRadius_30_ADFF818743BE39AC4A481D995CB50D03; // 0xa0(0x04)
	float WaterLevel_34_A4E505D148073B883CA7B1B09A3E34A8; // 0xa4(0x04)
	struct TMap<struct FName, struct FVector> SocketLocationMap_21_ABF6AA244A5F84728A5E83BE2328C7FA; // 0xa8(0x50)
	struct TMap<struct FName, struct FVector> SocketVelocityMap_26_82B0E24B45935A12E1949F918A59A537; // 0xf8(0x50)
};

