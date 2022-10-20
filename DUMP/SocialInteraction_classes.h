// WidgetBlueprintGeneratedClass SocialInteraction.SocialInteraction_C
// Size: 0x1588 (Inherited: 0x1530)
struct USocialInteraction_C : USocialInteractionButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1530(0x08)
	struct UWidgetAnimation* OnHover; // 0x1538(0x08)
	struct UImage* EncourageEpicFriend; // 0x1540(0x08)
	struct UImage* InteractionIcon; // 0x1548(0x08)
	struct UMenuAnchor* MenuAnchor_Actions; // 0x1550(0x08)
	struct FLinearColor EncourageEpicFriend_IdleColor; // 0x1558(0x10)
	struct FLinearColor EncourageEpicFriend_HoveredColor; // 0x1568(0x10)
	struct FLinearColor AddFriendColor; // 0x1578(0x10)

	void BP_OnUnhovered(); // Function SocialInteraction.SocialInteraction_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnInteractionSet(); // Function SocialInteraction.SocialInteraction_C.OnInteractionSet // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnHovered(); // Function SocialInteraction.SocialInteraction_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function SocialInteraction.SocialInteraction_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_SocialInteraction(int32_t EntryPoint); // Function SocialInteraction.SocialInteraction_C.ExecuteUbergraph_SocialInteraction // (Final|UbergraphFunction) // @ game+0xd67374
};

