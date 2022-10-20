// WidgetBlueprintGeneratedClass MiniPartyBar.MiniPartyBar_C
// Size: 0x320 (Inherited: 0x2e0)
struct UMiniPartyBar_C : UCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UIconTextButton_C* ButtonLocalPlayer; // 0x2e8(0x08)
	struct UImage* LineSeparator; // 0x2f0(0x08)
	struct UTeamMemberBanner_C* LocalPlayer; // 0x2f8(0x08)
	struct UTeamMemberBanner_C* RemotePlayer1; // 0x300(0x08)
	struct UTeamMemberBanner_C* RemotePlayer2; // 0x308(0x08)
	struct UTeamMemberBanner_C* RemotePlayer3; // 0x310(0x08)
	struct UTeamMemberManage_C* NewLocalPlayerWidget; // 0x318(0x08)

	struct UWidget* Get Banners Tooltip Widget(); // Function MiniPartyBar.MiniPartyBar_C.Get Banners Tooltip Widget // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void HandlePartybarUIFeatureChanged(enum class EFortUIFeature Feature, enum class EFortUIFeatureState FeatureState); // Function MiniPartyBar.MiniPartyBar_C.HandlePartybarUIFeatureChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function MiniPartyBar.MiniPartyBar_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void BndEvt__ButtonLocalPlayer_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function MiniPartyBar.MiniPartyBar_C.BndEvt__ButtonLocalPlayer_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_MiniPartyBar(int32_t EntryPoint); // Function MiniPartyBar.MiniPartyBar_C.ExecuteUbergraph_MiniPartyBar // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

