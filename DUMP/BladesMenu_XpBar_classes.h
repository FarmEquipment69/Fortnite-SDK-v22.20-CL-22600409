// WidgetBlueprintGeneratedClass BladesMenu_XpBar.BladesMenu_XpBar_C
// Size: 0x344 (Inherited: 0x2e0)
struct UBladesMenu_XpBar_C : UFortSeasonDataWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UImage* Backing_Color; // 0x2e8(0x08)
	struct UImage* Backing_Darken; // 0x2f0(0x08)
	struct UImage* Backing_Outline; // 0x2f8(0x08)
	struct UImage* ; // 0x300(0x08)
	struct UImage* ; // 0x308(0x08)
	struct UImage* ; // 0x310(0x08)
	struct UImage* ; // 0x318(0x08)
	struct UImage* Image_RaceTrack; // 0x320(0x08)
	struct UBorder* RestedXPTextBox; // 0x328(0x08)
	struct UCommonRichTextBlock* RichText_CurrentLevel; // 0x330(0x08)
	struct UCommonRichTextBlock* RichText_Level; // 0x338(0x08)
	int32_t Max BPLevel for Rewards; // 0x340(0x04)

	void Update Text(); // Function BladesMenu_XpBar.BladesMenu_XpBar_C.Update Text // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnLevelChanged(); // Function BladesMenu_XpBar.BladesMenu_XpBar_C.OnLevelChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnProgressUpdated(); // Function BladesMenu_XpBar.BladesMenu_XpBar_C.OnProgressUpdated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnSuperCharged(); // Function BladesMenu_XpBar.BladesMenu_XpBar_C.OnSuperCharged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnUpdatedRestedState(bool bIsRested); // Function BladesMenu_XpBar.BladesMenu_XpBar_C.OnUpdatedRestedState // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_BladesMenu_XpBar(int32_t EntryPoint); // Function BladesMenu_XpBar.BladesMenu_XpBar_C.ExecuteUbergraph_BladesMenu_XpBar // (Final|UbergraphFunction) // @ game+0xd67374
};

