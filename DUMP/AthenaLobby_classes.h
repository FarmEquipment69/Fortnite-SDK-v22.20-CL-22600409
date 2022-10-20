// WidgetBlueprintGeneratedClass AthenaLobby.AthenaLobby_C
// Size: 0x7e8 (Inherited: 0x7b0)
struct UAthenaLobby_C : UAthenaLobbyBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x7b0(0x08)
	struct UFeaturedCreativeContent_C* FeaturedCreativeContent; // 0x7b8(0x08)
	struct UFancyToastWidget_C* StoreToastWidget; // 0x7c0(0x08)
	struct UStoreToastRequest* StoreToastRequest; // 0x7c8(0x08)
	struct FTimerHandle TryShowToast; // 0x7d0(0x08)
	struct FDataTableRowHandle InputAction_InspectChallenges; // 0x7d8(0x10)

	void HandleLobbyColorSchemeChange(struct FLinearColor NewColorScheme, bool UseDefaultScheme); // Function AthenaLobby.AthenaLobby_C.HandleLobbyColorSchemeChange // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ConfigureGenericLinkButton(); // Function AthenaLobby.AthenaLobby_C.ConfigureGenericLinkButton // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void StartAthenaLobbyMusic(); // Function AthenaLobby.AthenaLobby_C.StartAthenaLobbyMusic // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnFailure_DA5E62624D068772EA890193344BA4AE(); // Function AthenaLobby.AthenaLobby_C.OnFailure_DA5E62624D068772EA890193344BA4AE // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnSuccess_DA5E62624D068772EA890193344BA4AE(); // Function AthenaLobby.AthenaLobby_C.OnSuccess_DA5E62624D068772EA890193344BA4AE // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnComplete_9036807A49B907A7A1B78EB727BAB97A(struct UUserWidget* UserWidget); // Function AthenaLobby.AthenaLobby_C.OnComplete_9036807A49B907A7A1B78EB727BAB97A // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BP_OnActivated(); // Function AthenaLobby.AthenaLobby_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function AthenaLobby.AthenaLobby_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void BP_OnDeactivated(); // Function AthenaLobby.AthenaLobby_C.BP_OnDeactivated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void DisplayStoreUpdated(struct UStoreToastRequest* StoreUpdatedRequest); // Function AthenaLobby.AthenaLobby_C.DisplayStoreUpdated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void AttemptToShowToast(); // Function AthenaLobby.AthenaLobby_C.AttemptToShowToast // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void TryToastAgainNextFrame(); // Function AthenaLobby.AthenaLobby_C.TryToastAgainNextFrame // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BndEvt__StoreToastWidget_K2Node_ComponentBoundEvent_2_OnFinishedToast__DelegateSignature(); // Function AthenaLobby.AthenaLobby_C.BndEvt__StoreToastWidget_K2Node_ComponentBoundEvent_2_OnFinishedToast__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void OnPlaylistChanged(enum class EFortLobbyType LobbyType, struct UFortPlaylistAthena* PlaylistData); // Function AthenaLobby.AthenaLobby_C.OnPlaylistChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void DisplayGlyphQuestUpdated(int32_t NewGlyphs); // Function AthenaLobby.AthenaLobby_C.DisplayGlyphQuestUpdated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnMatchmakingWidgetChanged(); // Function AthenaLobby.AthenaLobby_C.OnMatchmakingWidgetChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_AthenaLobby(int32_t EntryPoint); // Function AthenaLobby.AthenaLobby_C.ExecuteUbergraph_AthenaLobby // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

