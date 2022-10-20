// BlueprintGeneratedClass GAB_CarryPlayer.GAB_CarryPlayer_C
// Size: 0xb84 (Inherited: 0xb50)
struct UGAB_CarryPlayer_C : UFortGameplayAbility_CarryPlayer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb50(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0xb58(0x08)
	struct FName DBNOCarryHolster; // 0xb60(0x04)
	bool bCompletedPickup; // 0xb64(0x01)
	char pad_B65[0x3]; // 0xb65(0x03)
	struct FVector PickupLocation; // 0xb68(0x18)
	int32_t CarryLongDistanceThreshold; // 0xb80(0x04)

	void OnCancelled_C4440F1640E9A8D79E44FD8C23525824(); // Function GAB_CarryPlayer.GAB_CarryPlayer_C.OnCancelled_C4440F1640E9A8D79E44FD8C23525824 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnInterrupted_C4440F1640E9A8D79E44FD8C23525824(); // Function GAB_CarryPlayer.GAB_CarryPlayer_C.OnInterrupted_C4440F1640E9A8D79E44FD8C23525824 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnBlendOut_C4440F1640E9A8D79E44FD8C23525824(); // Function GAB_CarryPlayer.GAB_CarryPlayer_C.OnBlendOut_C4440F1640E9A8D79E44FD8C23525824 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnCompleted_C4440F1640E9A8D79E44FD8C23525824(); // Function GAB_CarryPlayer.GAB_CarryPlayer_C.OnCompleted_C4440F1640E9A8D79E44FD8C23525824 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void K2_ActivateAbility(); // Function GAB_CarryPlayer.GAB_CarryPlayer_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void K2_OnEndAbility(bool bWasCancelled); // Function GAB_CarryPlayer.GAB_CarryPlayer_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GAB_CarryPlayer(int32_t EntryPoint); // Function GAB_CarryPlayer.GAB_CarryPlayer_C.ExecuteUbergraph_GAB_CarryPlayer // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

