// BlueprintGeneratedClass TeamMemberPedestal.TeamMemberPedestal_C
// Size: 0x9c0 (Inherited: 0x550)
struct ATeamMemberPedestal_C : AFortTeamMemberPedestal {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UStaticMeshComponent* SM_Character_ShadowBlob; // 0x558(0x08)
	struct UStaticMeshComponent* SM_ObserverPlaceholder; // 0x560(0x08)
	struct UStaticMeshComponent* SM_LobbyFXSkipMatch; // 0x568(0x08)
	struct UStaticMeshComponent* SM_LobbyLightDisc_Floating_FX; // 0x570(0x08)
	struct UStaticMeshComponent* CharacterPlacement; // 0x578(0x08)
	struct UParticleSystemComponent* P_FE_Smoke; // 0x580(0x08)
	struct USceneComponent* LightsParent; // 0x588(0x08)
	struct UParticleSystemComponent* PS-NoPlayer-Sparkle; // 0x590(0x08)
	struct UParticleSystemComponent* PS-NoPlayer-Swirl02; // 0x598(0x08)
	struct UParticleSystemComponent* PS-NoPlayer-Swirl01; // 0x5a0(0x08)
	struct UStaticMeshComponent* SM_Lobby_Character_Pad_Light_Ring; // 0x5a8(0x08)
	struct UStaticMeshComponent* SM_Lobby_Character_Pad; // 0x5b0(0x08)
	struct UStaticMeshComponent* SM_Lobby_Character_TopSpot; // 0x5b8(0x08)
	struct UPointLightComponent* UnderlightBluePoint02; // 0x5c0(0x08)
	struct UPointLightComponent* UnderlightBluePoint01; // 0x5c8(0x08)
	struct USpotLightComponent* UnderlightBlue02; // 0x5d0(0x08)
	struct USpotLightComponent* UnderlightBlue01; // 0x5d8(0x08)
	struct USpotLightComponent* RimSpotLight; // 0x5e0(0x08)
	struct USpotLightComponent* TopSpotLight; // 0x5e8(0x08)
	float Timeline_2_NewTrack_1_5B2A92484943393ABEA8BF9AE94A7E65; // 0x5f0(0x04)
	float Timeline_2_NewTrack_0_5B2A92484943393ABEA8BF9AE94A7E65; // 0x5f4(0x04)
	enum class ETimelineDirection Timeline_2__Direction_5B2A92484943393ABEA8BF9AE94A7E65; // 0x5f8(0x01)
	char pad_5F9[0x7]; // 0x5f9(0x07)
	struct UTimelineComponent* ; // 0x600(0x08)
	float Timeline_1_NewTrack_0_C7A2C78B4F1CEAE900A2CABA9772C922; // 0x608(0x04)
	enum class ETimelineDirection Timeline_1__Direction_C7A2C78B4F1CEAE900A2CABA9772C922; // 0x60c(0x01)
	char pad_60D[0x3]; // 0x60d(0x03)
	struct UTimelineComponent* ; // 0x610(0x08)
	float Timeline_0_NewTrack_0_29F162B244A0FAE20371E7AE14A584FA; // 0x618(0x04)
	enum class ETimelineDirection Timeline_0__Direction_29F162B244A0FAE20371E7AE14A584FA; // 0x61c(0x01)
	char pad_61D[0x3]; // 0x61d(0x03)
	struct UTimelineComponent* ; // 0x620(0x08)
	float FadeInPodium_NewTrack_0_AF4A58DF4085C76AD6B3168E661AB7DD; // 0x628(0x04)
	enum class ETimelineDirection FadeInPodium__Direction_AF4A58DF4085C76AD6B3168E661AB7DD; // 0x62c(0x01)
	char pad_62D[0x3]; // 0x62d(0x03)
	struct UTimelineComponent* FadeInPodium; // 0x630(0x08)
	bool PreviewMesh; // 0x638(0x01)
	char pad_639[0x7]; // 0x639(0x07)
	struct UStaticMesh* Mesh; // 0x640(0x08)
	bool bIsPlayerSelected; // 0x648(0x01)
	char pad_649[0x7]; // 0x649(0x07)
	struct UMaterialInstanceDynamic* MID_Pad; // 0x650(0x08)
	struct FMulticastInlineDelegate Debug_OnFriendLFGRequest; // 0x658(0x10)
	struct UOverlay* Hovered_InputAction; // 0x668(0x08)
	struct ULobbyPlayerPadGadgets_C* Gadgets; // 0x670(0x08)
	struct ULobbyPlayerAddPlayer_C* PlayerAdd; // 0x678(0x08)
	struct AFortPlayerPawn* LastAnimatedPlayerPawn; // 0x680(0x08)
	bool bAllowPartySuggestions; // 0x688(0x01)
	char pad_689[0x7]; // 0x689(0x07)
	double OffsetLobbyAddPlayer; // 0x690(0x08)
	bool bPlayerPodiumHovered; // 0x698(0x01)
	char pad_699[0x7]; // 0x699(0x07)
	struct UMaterialInstanceDynamic* MID_Pad_Light_Ring; // 0x6a0(0x08)
	struct UMaterialInstanceDynamic* MID_Top_Light_Ring; // 0x6a8(0x08)
	bool FxActive; // 0x6b0(0x01)
	char pad_6B1[0x7]; // 0x6b1(0x07)
	struct UMaterialInstanceDynamic* MID_Holo; // 0x6b8(0x08)
	struct UMaterialInterface* HoloMaterial; // 0x6c0(0x08)
	struct USizeBox* Hovered_WithPlayer_InputAction; // 0x6c8(0x08)
	bool NewLobbyLayout; // 0x6d0(0x01)
	char pad_6D1[0x7]; // 0x6d1(0x07)
	double LightBrightnessScale; // 0x6d8(0x08)
	double TopSpotLight_Brightness; // 0x6e0(0x08)
	double TopSpotLight_Brightness_Hovered; // 0x6e8(0x08)
	double RimSpotLight_Brightness; // 0x6f0(0x08)
	double UnderlightBlueSpot_Brightness; // 0x6f8(0x08)
	double UnderlightBlueSpot_Brightness_Hovered; // 0x700(0x08)
	double UnderlightBluePoint_Brightness; // 0x708(0x08)
	double UnderlightBluePoint_Brightness_Hovered; // 0x710(0x08)
	bool debugHoveredLighting; // 0x718(0x01)
	char pad_719[0x7]; // 0x719(0x07)
	struct TArray<struct FMcpVariantChannelInfo> ; // 0x720(0x10)
	struct UMaterialInstanceDynamic* MID_SkipMatchFX; // 0x730(0x08)
	bool isPopulated; // 0x738(0x01)
	char pad_739[0x7]; // 0x739(0x07)
	struct UMaterialInstanceDynamic* MID Pad FX; // 0x740(0x08)
	char pad_748[0x8]; // 0x748(0x08)
	struct FFortTeamMemberInfo TeamMemberInfo; // 0x750(0x250)
	struct UMaterialInstanceDynamic* MID_ObserverScreen; // 0x9a0(0x08)
	struct UMaterialInstanceDynamic* MID Observer Screen Frame; // 0x9a8(0x08)
	struct UMaterialInstanceDynamic* MID_FakeBlobShadow; // 0x9b0(0x08)
	struct USizeBox* Hovered_WithPlayer_InputAction_AddFriend; // 0x9b8(0x08)

	void SetFNCrew(); // Function TeamMemberPedestal.TeamMemberPedestal_C.SetFNCrew // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Update Add Friend Button Interaction Enabled(bool IsHovered); // Function TeamMemberPedestal.TeamMemberPedestal_C.Update Add Friend Button Interaction Enabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetSparkleParticlesEnabled(bool IsEnabled); // Function TeamMemberPedestal.TeamMemberPedestal_C.SetSparkleParticlesEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void StopLobbyAnimation(); // Function TeamMemberPedestal.TeamMemberPedestal_C.StopLobbyAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetFakeBlobShadowVisiblity(bool Visible); // Function TeamMemberPedestal.TeamMemberPedestal_C.SetFakeBlobShadowVisiblity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnPartyDataChanged(struct FFortTeamMemberInfo& Member Info); // Function TeamMemberPedestal.TeamMemberPedestal_C.OnPartyDataChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnTeamMemberStateChanged(struct FFortTeamMemberInfo Team Member Info); // Function TeamMemberPedestal.TeamMemberPedestal_C.OnTeamMemberStateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PlayLobbyAnimation(); // Function TeamMemberPedestal.TeamMemberPedestal_C.PlayLobbyAnimation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void RefreshWidgets(); // Function TeamMemberPedestal.TeamMemberPedestal_C.RefreshWidgets // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnFrontEndCameraChanged(enum class EFrontEndCamera New Camera, enum class EFrontEndCamera Old Camera); // Function TeamMemberPedestal.TeamMemberPedestal_C.OnFrontEndCameraChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void InitializeContextEvents(); // Function TeamMemberPedestal.TeamMemberPedestal_C.InitializeContextEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleHoverInputActions(bool bIsHovered); // Function TeamMemberPedestal.TeamMemberPedestal_C.HandleHoverInputActions // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void InitializeInputActionRefs(); // Function TeamMemberPedestal.TeamMemberPedestal_C.InitializeInputActionRefs // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UserConstructionScript(); // Function TeamMemberPedestal.TeamMemberPedestal_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void FadeInPodium__FinishedFunc(); // Function TeamMemberPedestal.TeamMemberPedestal_C.FadeInPodium__FinishedFunc // (BlueprintEvent) // @ game+0xd67374
	void FadeInPodium__UpdateFunc(); // Function TeamMemberPedestal.TeamMemberPedestal_C.FadeInPodium__UpdateFunc // (BlueprintEvent) // @ game+0xd67374
	void Timeline_0__FinishedFunc(); // Function TeamMemberPedestal.TeamMemberPedestal_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0xd67374
	void Timeline_0__UpdateFunc(); // Function TeamMemberPedestal.TeamMemberPedestal_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0xd67374
	void Timeline_1__FinishedFunc(); // Function TeamMemberPedestal.TeamMemberPedestal_C.Timeline_1__FinishedFunc // (BlueprintEvent) // @ game+0xd67374
	void Timeline_1__UpdateFunc(); // Function TeamMemberPedestal.TeamMemberPedestal_C.Timeline_1__UpdateFunc // (BlueprintEvent) // @ game+0xd67374
	void Timeline_2__FinishedFunc(); // Function TeamMemberPedestal.TeamMemberPedestal_C.Timeline_2__FinishedFunc // (BlueprintEvent) // @ game+0xd67374
	void Timeline_2__UpdateFunc(); // Function TeamMemberPedestal.TeamMemberPedestal_C.Timeline_2__UpdateFunc // (BlueprintEvent) // @ game+0xd67374
	void OnLoaded_D1FFD29E4F2735025D7C19B62CBA97B9(struct UObject* Loaded); // Function TeamMemberPedestal.TeamMemberPedestal_C.OnLoaded_D1FFD29E4F2735025D7C19B62CBA97B9 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleClientEvent_StoreTabClosed(struct UObject* EventSource, struct UObject* EventFocus, struct FFortClientEvent& ClientEvent); // Function TeamMemberPedestal.TeamMemberPedestal_C.HandleClientEvent_StoreTabClosed // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ReceiveBeginPlay(); // Function TeamMemberPedestal.TeamMemberPedestal_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnIsCurrentlyInMatchChanged(bool bIsInMatch); // Function TeamMemberPedestal.TeamMemberPedestal_C.OnIsCurrentlyInMatchChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnPedestalIsPopulatedChanged(bool bIsPopulated, bool bOwningSquadContainsLocalPlayer); // Function TeamMemberPedestal.TeamMemberPedestal_C.OnPedestalIsPopulatedChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void SpawnPad(); // Function TeamMemberPedestal.TeamMemberPedestal_C.SpawnPad // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HidePad(); // Function TeamMemberPedestal.TeamMemberPedestal_C.HidePad // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnGameReadinessChanged(enum class EGameReadiness GameReadiness); // Function TeamMemberPedestal.TeamMemberPedestal_C.OnGameReadinessChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnNewSquadEstablished(bool bMultipleSquadsPopulated, bool bOwningSquadContainsLocalPlayer, struct FAthenaTeamDisplayInfo& OwningSquadStyle); // Function TeamMemberPedestal.TeamMemberPedestal_C.OnNewSquadEstablished // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnOwningPedestalGroupEstablished(int32_t SquadIdx, bool bSquadHasLocalPlayer, bool bIsPopulated); // Function TeamMemberPedestal.TeamMemberPedestal_C.OnOwningPedestalGroupEstablished // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnConnectedToCampaignLobby(); // Function TeamMemberPedestal.TeamMemberPedestal_C.OnConnectedToCampaignLobby // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnItemClicked(); // Function TeamMemberPedestal.TeamMemberPedestal_C.OnItemClicked // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnTeamMemberSet(bool bHasValidTeamMember); // Function TeamMemberPedestal.TeamMemberPedestal_C.OnTeamMemberSet // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void HandleClientEvent_StoreTabSelected(struct UObject* EventSource, struct UObject* EventFocus, struct FFortClientEvent& ClientEvent); // Function TeamMemberPedestal.TeamMemberPedestal_C.HandleClientEvent_StoreTabSelected // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnHovered(); // Function TeamMemberPedestal.TeamMemberPedestal_C.OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnUnhovered(); // Function TeamMemberPedestal.TeamMemberPedestal_C.OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnPreviewActorSpawned(); // Function TeamMemberPedestal.TeamMemberPedestal_C.OnPreviewActorSpawned // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnAvatarChanged(struct UTexture2D* AvatarImage, struct FColor AvatarBackground, struct FColor HighlightColor); // Function TeamMemberPedestal.TeamMemberPedestal_C.OnAvatarChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void TransitionToCharacterScreen(bool bool); // Function TeamMemberPedestal.TeamMemberPedestal_C.TransitionToCharacterScreen // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void TransitionToLoadingScreen(bool bool); // Function TeamMemberPedestal.TeamMemberPedestal_C.TransitionToLoadingScreen // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void TransitionfromCharactertoLoadingscreen(bool bool); // Function TeamMemberPedestal.TeamMemberPedestal_C.TransitionfromCharactertoLoadingscreen // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnDisconnectedToCampaignLobby(); // Function TeamMemberPedestal.TeamMemberPedestal_C.OnDisconnectedToCampaignLobby // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_TeamMemberPedestal(int32_t EntryPoint); // Function TeamMemberPedestal.TeamMemberPedestal_C.ExecuteUbergraph_TeamMemberPedestal // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
	void Debug_OnFriendLFGRequest__DelegateSignature(int32_t PlayerIndex); // Function TeamMemberPedestal.TeamMemberPedestal_C.Debug_OnFriendLFGRequest__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

