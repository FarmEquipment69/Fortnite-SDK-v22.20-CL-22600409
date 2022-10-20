// UserDefinedStruct FluidForceDynamic.FluidForceDynamic
// Size: 0x70 (Inherited: 0x00)
struct FFluidForceDynamic {
	enum class FluidDynamicForceMeshType ForceType_28_DDC16EE543D2DFD3BA29C49D32198C9C; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float ForceRadius_32_C31B527C4C367A5CA5E1DF8E49E76234; // 0x04(0x04)
	float ForceStrength_33_2CAA30794D1EFF60AE1C3491D011CECF; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct USceneComponent* ForceComponent_34_ABF6640F40D37677EF6F809E09046055; // 0x10(0x08)
	struct UMaterialInterface* MaterialOverride_25_5A792CE8489A59E5D9B24F9E4DCFE94A; // 0x18(0x08)
	struct FFluidForceSocketInfo SkeletalMeshSetup_31_51A4130440BAFFBA1DA0FE83E942A30A; // 0x20(0x50)
};

