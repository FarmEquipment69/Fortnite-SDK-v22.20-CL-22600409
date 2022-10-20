// Class PictureInPictureFNEvents.LiveEventHUDAd
// Size: 0x2b8 (Inherited: 0x2b8)
struct ULiveEventHUDAd : UUserWidget {

	void ShowAdvertisement(bool& Result); // Function PictureInPictureFNEvents.LiveEventHUDAd.ShowAdvertisement // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
};

// Class PictureInPictureFNEvents.PictureInPictureFNEventsCheatManager
// Size: 0x28 (Inherited: 0x28)
struct UPictureInPictureFNEventsCheatManager : UChildCheatManager {

	void StopPiPBouncingLlama(); // Function PictureInPictureFNEvents.PictureInPictureFNEventsCheatManager.StopPiPBouncingLlama // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x24841e4
	void StartPiPBouncingLlama(); // Function PictureInPictureFNEvents.PictureInPictureFNEventsCheatManager.StartPiPBouncingLlama // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x24841e4
	void SelectPiPEvent(struct FString EventName); // Function PictureInPictureFNEvents.PictureInPictureFNEventsCheatManager.SelectPiPEvent // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x5c90b24
	void RemovePiPEvent(struct FString EventName); // Function PictureInPictureFNEvents.PictureInPictureFNEventsCheatManager.RemovePiPEvent // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x651e628
	void ListPiPEvents(); // Function PictureInPictureFNEvents.PictureInPictureFNEventsCheatManager.ListPiPEvents // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x24841e4
	void ListAllPiPEvents(); // Function PictureInPictureFNEvents.PictureInPictureFNEventsCheatManager.ListAllPiPEvents // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x24841e4
	void AddPiPEvent(struct FString EventName, struct FString VUID); // Function PictureInPictureFNEvents.PictureInPictureFNEventsCheatManager.AddPiPEvent // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x6520cfc
};

// Class PictureInPictureFNEvents.PictureInPictureFNEventsClient
// Size: 0xa8 (Inherited: 0xa8)
struct UPictureInPictureFNEventsClient : UPictureInPictureClient {
};

// Class PictureInPictureFNEvents.PictureInPictureFNEventsController
// Size: 0x588 (Inherited: 0x558)
struct UPictureInPictureFNEventsController : UPictureInPictureMediaController {
	struct UPictureInPictureFNEventsClient* FNEventsClient; // 0x558(0x08)
	struct ULiveEventHUDAd* HUDAdvertWidget; // 0x560(0x08)
	char pad_568[0x20]; // 0x568(0x20)

	void UpdateClientLoginState(struct TArray<struct FPiPPartnerSource>& UpdatedSources); // Function PictureInPictureFNEvents.PictureInPictureFNEventsController.UpdateClientLoginState // (Final|Native|Private|HasOutParms) // @ game+0x1c1bbc4
	void OnClientLogoutSuccess(); // Function PictureInPictureFNEvents.PictureInPictureFNEventsController.OnClientLogoutSuccess // (Final|Native|Private) // @ game+0x689f284
	void OnClientLoginSuccess(); // Function PictureInPictureFNEvents.PictureInPictureFNEventsController.OnClientLoginSuccess // (Final|Native|Private) // @ game+0x689f270
	void HandleFNMediaRemoveEventsStream(struct FString InEventName); // Function PictureInPictureFNEvents.PictureInPictureFNEventsController.HandleFNMediaRemoveEventsStream // (Final|Native|Protected) // @ game+0x689f11c
	void HandleFNMediaEventsStreams(struct FFortMediaEventsStreamAssets& VideoStreamAssets); // Function PictureInPictureFNEvents.PictureInPictureFNEventsController.HandleFNMediaEventsStreams // (Final|Native|Protected|HasOutParms) // @ game+0x689f050
	void ExitEvent(); // Function PictureInPictureFNEvents.PictureInPictureFNEventsController.ExitEvent // (Final|Native|Private) // @ game+0x689f034
	void AddPartnerActionAnalytics(struct FString InPartnerName, enum class PictureInPictureAction InActionType); // Function PictureInPictureFNEvents.PictureInPictureFNEventsController.AddPartnerActionAnalytics // (Final|Native|Private) // @ game+0x689ee9c
};

