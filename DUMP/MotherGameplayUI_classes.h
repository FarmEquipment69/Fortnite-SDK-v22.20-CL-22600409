// Class MotherGameplayUI.AvocadoEaterHealthBarWidget
// Size: 0x390 (Inherited: 0x320)
struct UAvocadoEaterHealthBarWidget : UFortHUDElementWidget {
	struct FEventMessageTag AttachedMessageTag; // 0x320(0x04)
	struct FEventMessageTag DetachedMessageTag; // 0x324(0x04)
	struct FEventMessageTag SetMarkerPositionMessageTag; // 0x328(0x04)
	struct FEventMessageTag TargetDamagedMessageTag; // 0x32c(0x04)
	char pad_330[0x60]; // 0x330(0x60)

	void OnTargetDamaged(); // Function MotherGameplayUI.AvocadoEaterHealthBarWidget.OnTargetDamaged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnSetMarkerPosition(float MarkerPosition); // Function MotherGameplayUI.AvocadoEaterHealthBarWidget.OnSetMarkerPosition // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnParasiteDetached(); // Function MotherGameplayUI.AvocadoEaterHealthBarWidget.OnParasiteDetached // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnParasiteAttached(); // Function MotherGameplayUI.AvocadoEaterHealthBarWidget.OnParasiteAttached // (Event|Protected|BlueprintEvent) // @ game+0xd67374
};

// Class MotherGameplayUI.FortGravyGoblinReticleExtensionWidget
// Size: 0x348 (Inherited: 0x330)
struct UFortGravyGoblinReticleExtensionWidget : UFortWeaponReticleExtensionWidgetBase {
	struct FEventMessageTag ItemActivatableTag; // 0x330(0x04)
	struct FEventMessageTag ItemInactivatableTag; // 0x334(0x04)
	char pad_338[0x10]; // 0x338(0x10)

	void OnItemInactivatable(); // Function MotherGameplayUI.FortGravyGoblinReticleExtensionWidget.OnItemInactivatable // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnItemActivatable(); // Function MotherGameplayUI.FortGravyGoblinReticleExtensionWidget.OnItemActivatable // (Event|Protected|BlueprintEvent) // @ game+0xd67374
};

// Class MotherGameplayUI.FortLlamaRoasterReticleExtensionWidget
// Size: 0x330 (Inherited: 0x330)
struct UFortLlamaRoasterReticleExtensionWidget : UFortWeaponReticleExtensionWidgetBase {
};

// Class MotherGameplayUI.FortMobileActionBBE_GravyGoblinRotate
// Size: 0x90 (Inherited: 0x70)
struct UFortMobileActionBBE_GravyGoblinRotate : UFortMobileActionButtonBehaviorExtension {
	struct FEventMessageTag HeldObjectRotatableTag; // 0x70(0x04)
	struct FEventMessageTag HeldObjectUnrotatableTag; // 0x74(0x04)
	struct FGameplayTag GravyGoblinTag; // 0x78(0x04)
	char pad_7C[0x14]; // 0x7c(0x14)
};

// Class MotherGameplayUI.FortPaddleGingerReticleExtensionWidget
// Size: 0x390 (Inherited: 0x330)
struct UFortPaddleGingerReticleExtensionWidget : UFortWeaponReticleExtensionWidgetBase {
	struct FEventMessageTag PropIndexChangedTag; // 0x330(0x04)
	struct FEventMessageTag PropActivatedTag; // 0x334(0x04)
	struct UFortKeybindWidget* Keybind_ActivateAction; // 0x338(0x08)
	struct UFortKeybindWidget* Keybind_CycleCategoryAction; // 0x340(0x08)
	struct UFortKeybindWidget* Keybind_CyclePropAction; // 0x348(0x08)
	char pad_350[0x40]; // 0x350(0x40)

	void OnPropIndexChanged(struct FText& CategoryText, int32_t PropIndex, int32_t MaxPropCount, int32_t CategoryIndex, int32_t MaxCategoryCount); // Function MotherGameplayUI.FortPaddleGingerReticleExtensionWidget.OnPropIndexChanged // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnPropActivationChanged(bool Activated); // Function MotherGameplayUI.FortPaddleGingerReticleExtensionWidget.OnPropActivationChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
};

// Class MotherGameplayUI.FortReactorGradeReticleExtensionWidget
// Size: 0x330 (Inherited: 0x330)
struct UFortReactorGradeReticleExtensionWidget : UFortWeaponReticleExtensionWidgetBase {

	void OnUpdateChargeToMin(float ChargePercent); // Function MotherGameplayUI.FortReactorGradeReticleExtensionWidget.OnUpdateChargeToMin // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnUpdateChargeToAutoDischarge(float ChargePercent); // Function MotherGameplayUI.FortReactorGradeReticleExtensionWidget.OnUpdateChargeToAutoDischarge // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnMinimumChargeReached(); // Function MotherGameplayUI.FortReactorGradeReticleExtensionWidget.OnMinimumChargeReached // (Event|Protected|BlueprintEvent) // @ game+0xd67374
};

