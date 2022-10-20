// Class LiveLinkComponents.LiveLinkComponentController
// Size: 0x148 (Inherited: 0xa0)
struct ULiveLinkComponentController : UActorComponent {
	struct FLiveLinkSubjectRepresentation SubjectRepresentation; // 0xa0(0x10)
	struct TMap<struct ULiveLinkRole*, struct ULiveLinkControllerBase*> ControllerMap; // 0xb0(0x50)
	bool bUpdateInEditor; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
	struct FMulticastInlineDelegate OnLiveLinkUpdated; // 0x108(0x10)
	struct FMulticastInlineDelegate OnControllerMapUpdatedDelegate; // 0x118(0x10)
	bool bDisableEvaluateLiveLinkWhenSpawnable; // 0x128(0x01)
	bool bEvaluateLiveLink; // 0x129(0x01)
	bool bUpdateInPreviewEditor; // 0x12a(0x01)
	char pad_12B[0x1d]; // 0x12b(0x1d)

	void SetSubjectRepresentation(struct FLiveLinkSubjectRepresentation InSubjectRepresentation); // Function LiveLinkComponents.LiveLinkComponentController.SetSubjectRepresentation // (Final|Native|Public|BlueprintCallable) // @ game+0x6e76ad0
	struct FLiveLinkSubjectRepresentation GetSubjectRepresentation(); // Function LiveLinkComponents.LiveLinkComponentController.GetSubjectRepresentation // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6e76ab4
};

// Class LiveLinkComponents.LiveLinkComponentSettings
// Size: 0x78 (Inherited: 0x28)
struct ULiveLinkComponentSettings : UObject {
	struct TMap<struct ULiveLinkRole*, struct ULiveLinkControllerBase*> DefaultControllerForRole; // 0x28(0x50)
};

// Class LiveLinkComponents.LiveLinkControllerBase
// Size: 0x68 (Inherited: 0x28)
struct ULiveLinkControllerBase : UObject {
	struct FComponentReference ComponentPicker; // 0x28(0x28)
	char pad_50[0x18]; // 0x50(0x18)
};

// Class LiveLinkComponents.LiveLinkLightController
// Size: 0x68 (Inherited: 0x68)
struct ULiveLinkLightController : ULiveLinkControllerBase {
};

// Class LiveLinkComponents.LiveLinkTransformController
// Size: 0x70 (Inherited: 0x68)
struct ULiveLinkTransformController : ULiveLinkControllerBase {
	struct FLiveLinkTransformControllerData TransformData; // 0x68(0x06)
	char pad_6E[0x2]; // 0x6e(0x02)
};

