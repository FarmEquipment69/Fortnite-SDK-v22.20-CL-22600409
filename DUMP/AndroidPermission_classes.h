// Class AndroidPermission.AndroidPermissionCallbackProxy
// Size: 0x50 (Inherited: 0x28)
struct UAndroidPermissionCallbackProxy : UObject {
	struct FMulticastInlineDelegate OnPermissionsGrantedDynamicDelegate; // 0x28(0x10)
	char pad_38[0x18]; // 0x38(0x18)
};

// Class AndroidPermission.AndroidPermissionFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAndroidPermissionFunctionLibrary : UBlueprintFunctionLibrary {

	bool CheckPermission(struct FString Permission); // Function AndroidPermission.AndroidPermissionFunctionLibrary.CheckPermission // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6af6f74
	struct UAndroidPermissionCallbackProxy* AcquirePermissions(struct TArray<struct FString>& Permissions); // Function AndroidPermission.AndroidPermissionFunctionLibrary.AcquirePermissions // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x6af6e90
};

