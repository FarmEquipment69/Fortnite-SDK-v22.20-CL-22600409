// WidgetBlueprintGeneratedClass ConvertedMarkerInfo.ConvertedMarkerInfo_C
// Size: 0x3d8 (Inherited: 0x2e0)
struct UConvertedMarkerInfo_C : UCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UImage* Image_Avatar; // 0x2e8(0x08)
	struct UImage* Image_Command; // 0x2f0(0x08)
	struct UCommonVisibilitySwitcher* ImageSwitcher; // 0x2f8(0x08)
	struct UImage* SquadMarker; // 0x300(0x08)
	struct FTimerHandle DBNOPulseTimer; // 0x308(0x08)
	struct FGameplayTagContainer RelevantPlaylistTags; // 0x310(0x20)
	bool bIsTalking; // 0x330(0x01)
	bool bShowBackgroundOverridden; // 0x331(0x01)
	bool bEnemyVersion; // 0x332(0x01)
	char pad_333[0x5]; // 0x333(0x05)
	struct TSoftObjectPtr<UTexture2D> Icon_Move; // 0x338(0x28)
	struct TSoftObjectPtr<UTexture2D> Icon_Hold; // 0x360(0x28)
	struct TSoftObjectPtr<UTexture2D> Icon_BackToMe; // 0x388(0x28)
	struct TSoftObjectPtr<UTexture2D> Icon_Revive; // 0x3b0(0x28)

	void SetBackgroundVisibility(bool bOverride, bool bBackgroundVisible); // Function ConvertedMarkerInfo.ConvertedMarkerInfo_C.SetBackgroundVisibility // (Private|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnLoaded_68559753464A154900ECA9BC6BB940C0(struct UObject* Loaded); // Function ConvertedMarkerInfo.ConvertedMarkerInfo_C.OnLoaded_68559753464A154900ECA9BC6BB940C0 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnLoaded_25BCEE7642585A8BD6CE1CAFC70FEAF3(struct UObject* Loaded); // Function ConvertedMarkerInfo.ConvertedMarkerInfo_C.OnLoaded_25BCEE7642585A8BD6CE1CAFC70FEAF3 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OverrideShowBackground(bool bShowBackground); // Function ConvertedMarkerInfo.ConvertedMarkerInfo_C.OverrideShowBackground // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function ConvertedMarkerInfo.ConvertedMarkerInfo_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void InitPlayerIconState(struct AFortPlayerStateAthena* PSA); // Function ConvertedMarkerInfo.ConvertedMarkerInfo_C.InitPlayerIconState // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateCommandIcon(enum class PingCommandType PingCommand, struct AFortPlayerStateAthena* PSA); // Function ConvertedMarkerInfo.ConvertedMarkerInfo_C.UpdateCommandIcon // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void InitNPCCommandIcon(struct AFortPlayerStateAthena* PSA); // Function ConvertedMarkerInfo.ConvertedMarkerInfo_C.InitNPCCommandIcon // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_ConvertedMarkerInfo(int32_t EntryPoint); // Function ConvertedMarkerInfo.ConvertedMarkerInfo_C.ExecuteUbergraph_ConvertedMarkerInfo // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

