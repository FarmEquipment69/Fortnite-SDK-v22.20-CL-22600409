// BlueprintGeneratedClass BannerLibrary.BannerLibrary_C
// Size: 0x28 (Inherited: 0x28)
struct UBannerLibrary_C : UBlueprintFunctionLibrary {

	void UpdateBannerIconOnMaterial(struct UMaterialInstanceDynamic* Material, struct UTexture* Icon, struct UObject* __WorldContext); // Function BannerLibrary.BannerLibrary_C.UpdateBannerIconOnMaterial // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateBannerColorOnMaterial(struct UMaterialInstanceDynamic* Material, struct FLinearColor PrimaryBGColor, struct FLinearColor SecondaryBGColor, struct UObject* __WorldContext); // Function BannerLibrary.BannerLibrary_C.UpdateBannerColorOnMaterial // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void GenericUpdateMaterial(struct UMaterialInstanceDynamic* Target, struct UTexture* BannerIcon, struct FLinearColor BG_PrimaryColor, struct FLinearColor BG_SecondaryColor, struct UTexture* ShapeIcon, struct UObject* __WorldContext); // Function BannerLibrary.BannerLibrary_C.GenericUpdateMaterial // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

