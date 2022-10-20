// ScriptStruct ImagePlate.ImagePlateParameters
// Size: 0x40 (Inherited: 0x00)
struct FImagePlateParameters {
	struct UMaterialInterface* Material; // 0x00(0x08)
	struct FName TextureParameterName; // 0x08(0x04)
	bool bFillScreen; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FVector2D FillScreenAmount; // 0x10(0x10)
	struct FVector2D FixedSize; // 0x20(0x10)
	struct UTexture* RenderTexture; // 0x30(0x08)
	struct UMaterialInstanceDynamic* DynamicMaterial; // 0x38(0x08)
};

