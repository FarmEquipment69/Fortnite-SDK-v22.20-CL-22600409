// WidgetBlueprintGeneratedClass PowerToastWidget.PowerToastWidget_C
// Size: 0x390 (Inherited: 0x338)
struct UPowerToastWidget_C : UFortPlayerPowerRatingToast {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	struct UWidgetAnimation* LookAtMe; // 0x340(0x08)
	struct UWidgetAnimation* Outro; // 0x348(0x08)
	struct UWidgetAnimation* Intro; // 0x350(0x08)
	struct UImage* ; // 0x358(0x08)
	struct UImage* Image_Power; // 0x360(0x08)
	struct UImage* LineSeparator; // 0x368(0x08)
	struct UImage* ; // 0x370(0x08)
	struct UImage* Moonbeam_Power_Back_Difference; // 0x378(0x08)
	struct UImage* PowerIconGlow; // 0x380(0x08)
	struct FTimerHandle AnimationDelayTimer; // 0x388(0x08)

	void HandleAnimationDelay(); // Function PowerToastWidget.PowerToastWidget_C.HandleAnimationDelay // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function PowerToastWidget.PowerToastWidget_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function PowerToastWidget.PowerToastWidget_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void (); // Function PowerToastWidget.PowerToastWidget_C. // (BlueprintEvent) // @ game+0xd67374
	void (); // Function PowerToastWidget.PowerToastWidget_C. // (BlueprintEvent) // @ game+0xd67374
	void (); // Function PowerToastWidget.PowerToastWidget_C. // (BlueprintEvent) // @ game+0xd67374
	void ShowToast(); // Function PowerToastWidget.PowerToastWidget_C.ShowToast // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function PowerToastWidget.PowerToastWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_PowerToastWidget(int32_t EntryPoint); // Function PowerToastWidget.PowerToastWidget_C.ExecuteUbergraph_PowerToastWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

