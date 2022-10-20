// Class ContextualAnimation.AnimNotifyState_IKWindow
// Size: 0xa0 (Inherited: 0x30)
struct UAnimNotifyState_IKWindow : UAnimNotifyState {
	struct FName GoalName; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FAlphaBlend BlendIn; // 0x38(0x30)
	struct FAlphaBlend BlendOut; // 0x68(0x30)
	bool bEnable; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
};

// Class ContextualAnimation.ContextualAnimActorInterface
// Size: 0x28 (Inherited: 0x28)
struct UContextualAnimActorInterface : UInterface {

	struct USkeletalMeshComponent* GetMesh(); // Function ContextualAnimation.ContextualAnimActorInterface.GetMesh // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x711b510
};

// Class ContextualAnimation.ContextualAnimManager
// Size: 0x90 (Inherited: 0x28)
struct UContextualAnimManager : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct TSet<struct UContextualAnimSceneActorComponent*> SceneActorCompContainer; // 0x30(0x50)
	struct TArray<struct UContextualAnimSceneInstance*> Instances; // 0x80(0x10)

	bool TryStopSceneWithActor(struct AActor* Actor); // Function ContextualAnimation.ContextualAnimManager.TryStopSceneWithActor // (Final|Native|Public|BlueprintCallable) // @ game+0x711bdfc
	void OnSceneInstanceEnded(struct UContextualAnimSceneInstance* SceneInstance); // Function ContextualAnimation.ContextualAnimManager.OnSceneInstanceEnded // (Final|Native|Protected) // @ game+0x711ba74
	bool IsActorInAnyScene(struct AActor* Actor); // Function ContextualAnimation.ContextualAnimManager.IsActorInAnyScene // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x711b724
	struct UContextualAnimSceneInstance* GetSceneWithActor(struct AActor* Actor); // Function ContextualAnimation.ContextualAnimManager.GetSceneWithActor // (Final|Native|Public|BlueprintCallable) // @ game+0x711b660
	struct UContextualAnimManager* GetContextualAnimManager(struct UObject* WorldContextObject); // Function ContextualAnimation.ContextualAnimManager.GetContextualAnimManager // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x711b328
	struct UContextualAnimSceneInstance* BP_TryStartScene(struct UContextualAnimSceneAsset* SceneAsset, struct FContextualAnimStartSceneParams& Params); // Function ContextualAnimation.ContextualAnimManager.BP_TryStartScene // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x711b10c
};

// Class ContextualAnimation.ContextualAnimSceneActorComponent
// Size: 0x590 (Inherited: 0x530)
struct UContextualAnimSceneActorComponent : UPrimitiveComponent {
	char pad_530[0x8]; // 0x530(0x08)
	struct FMulticastInlineDelegate OnJoinedSceneDelegate; // 0x538(0x10)
	struct FMulticastInlineDelegate OnLeftSceneDelegate; // 0x548(0x10)
	struct UContextualAnimSceneAsset* SceneAsset; // 0x558(0x08)
	bool bEnableDebug; // 0x560(0x01)
	char pad_561[0xf]; // 0x561(0x0f)
	struct TArray<struct FContextualAnimIKTarget> IKTargets; // 0x570(0x10)
	char pad_580[0x10]; // 0x580(0x10)

	void OnTickPose(struct USkinnedMeshComponent* SkinnedMeshComponent, float DeltaTime, bool bNeedsValidRootMotion); // Function ContextualAnimation.ContextualAnimSceneActorComponent.OnTickPose // (Final|Native|Protected) // @ game+0x711bb08
	struct TArray<struct FContextualAnimIKTarget> GetIKTargets(); // Function ContextualAnimation.ContextualAnimSceneActorComponent.GetIKTargets // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x711b49c
	struct FContextualAnimIKTarget GetIKTargetByGoalName(struct FName GoalName); // Function ContextualAnimation.ContextualAnimSceneActorComponent.GetIKTargetByGoalName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x711b3b8
};

// Class ContextualAnimation.ContextualAnimRolesAsset
// Size: 0x40 (Inherited: 0x30)
struct UContextualAnimRolesAsset : UDataAsset {
	struct TArray<struct FContextualAnimRoleDefinition> Roles; // 0x30(0x10)
};

// Class ContextualAnimation.ContextualAnimSceneAsset
// Size: 0x68 (Inherited: 0x30)
struct UContextualAnimSceneAsset : UDataAsset {
	struct UContextualAnimRolesAsset* RolesAsset; // 0x30(0x08)
	struct FName PrimaryRole; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<struct FContextualAnimSceneSection> Sections; // 0x40(0x10)
	float Radius; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct UContextualAnimSceneInstance* SceneInstanceClass; // 0x58(0x08)
	bool bDisableCollisionBetweenActors; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	int32_t SampleRate; // 0x64(0x04)

	bool Query(struct FName Role, struct FContextualAnimQueryResult& OutResult, struct FContextualAnimQueryParams& QueryParams, struct FTransform& ToWorldTransform); // Function ContextualAnimation.ContextualAnimSceneAsset.Query // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x711bc04
	struct TArray<struct FName> GetRoles(); // Function ContextualAnimation.ContextualAnimSceneAsset.GetRoles // (Final|Native|Public|Const) // @ game+0x711b538
	void BP_GetStartAndEndTimeForWarpSection(int32_t SectionIdx, int32_t AnimSetIdx, struct FName Role, struct FName WarpSectionName, float& OutStartTime, float& OutEndTime); // Function ContextualAnimation.ContextualAnimSceneAsset.BP_GetStartAndEndTimeForWarpSection // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x71198b0
	struct FTransform BP_GetIKTargetTransformForRoleAtTime(int32_t SectionIdx, int32_t AnimSetIdx, struct FName Role, struct FName TrackName, float Time); // Function ContextualAnimation.ContextualAnimSceneAsset.BP_GetIKTargetTransformForRoleAtTime // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x71196f0
	struct FTransform BP_GetAlignmentTransformForRoleRelativeToPivot(int32_t SectionIdx, int32_t AnimSetIdx, struct FName Role, float Time); // Function ContextualAnimation.ContextualAnimSceneAsset.BP_GetAlignmentTransformForRoleRelativeToPivot // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x7119570
	int32_t BP_FindAnimSetIndexByAnimation(int32_t SectionIdx, struct UAnimSequenceBase* Animation); // Function ContextualAnimation.ContextualAnimSceneAsset.BP_FindAnimSetIndexByAnimation // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7119344
	struct UAnimSequenceBase* BP_FindAnimationForRole(int32_t SectionIdx, int32_t AnimSetIdx, struct FName Role); // Function ContextualAnimation.ContextualAnimSceneAsset.BP_FindAnimationForRole // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7119468
};

// Class ContextualAnimation.ContextualAnimSceneInstance
// Size: 0xb8 (Inherited: 0x28)
struct UContextualAnimSceneInstance : UObject {
	struct FMulticastInlineDelegate OnSectionEndTimeReached; // 0x28(0x10)
	struct FMulticastInlineDelegate OnSceneEnded; // 0x38(0x10)
	struct FMulticastInlineDelegate OnActorJoined; // 0x48(0x10)
	struct FMulticastInlineDelegate OnActorLeft; // 0x58(0x10)
	struct FMulticastInlineDelegate OnNotifyBegin; // 0x68(0x10)
	struct FMulticastInlineDelegate OnNotifyEnd; // 0x78(0x10)
	struct UContextualAnimSceneAsset* SceneAsset; // 0x88(0x08)
	struct FContextualAnimSceneBindings Bindings; // 0x90(0x10)
	char pad_A0[0x18]; // 0xa0(0x18)

	void OnNotifyEndReceived(struct FName NotifyName, struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload); // Function ContextualAnimation.ContextualAnimSceneInstance.OnNotifyEndReceived // (Final|Native|Protected|HasOutParms) // @ game+0x711b994
	void OnNotifyBeginReceived(struct FName NotifyName, struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload); // Function ContextualAnimation.ContextualAnimSceneInstance.OnNotifyBeginReceived // (Final|Native|Protected|HasOutParms) // @ game+0x711b8b4
	void OnMontageBlendingOut(struct UAnimMontage* Montage, bool bInterrupted); // Function ContextualAnimation.ContextualAnimSceneInstance.OnMontageBlendingOut // (Final|Native|Protected) // @ game+0x711b7ec
	struct AActor* GetActorByRole(struct FName Role); // Function ContextualAnimation.ContextualAnimSceneInstance.GetActorByRole // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x711b248
};

// Class ContextualAnimation.ContextualAnimSelectionCriterion
// Size: 0x30 (Inherited: 0x28)
struct UContextualAnimSelectionCriterion : UObject {
	enum class EContextualAnimCriterionType Type; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// Class ContextualAnimation.ContextualAnimSelectionCriterion_Blueprint
// Size: 0x30 (Inherited: 0x30)
struct UContextualAnimSelectionCriterion_Blueprint : UContextualAnimSelectionCriterion {

	struct UContextualAnimSceneAsset* GetSceneAsset(); // Function ContextualAnimation.ContextualAnimSelectionCriterion_Blueprint.GetSceneAsset // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x711b618
	bool BP_DoesQuerierPassCondition(struct FContextualAnimSceneBindingContext& Primary, struct FContextualAnimSceneBindingContext& Querier); // Function ContextualAnimation.ContextualAnimSelectionCriterion_Blueprint.BP_DoesQuerierPassCondition // (Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0xd67374
};

// Class ContextualAnimation.ContextualAnimSelectionCriterion_TriggerArea
// Size: 0x48 (Inherited: 0x30)
struct UContextualAnimSelectionCriterion_TriggerArea : UContextualAnimSelectionCriterion {
	struct TArray<struct FVector> PolygonPoints; // 0x30(0x10)
	float Height; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class ContextualAnimation.ContextualAnimSelectionCriterion_Cone
// Size: 0x40 (Inherited: 0x30)
struct UContextualAnimSelectionCriterion_Cone : UContextualAnimSelectionCriterion {
	enum class EContextualAnimCriterionConeMode Mode; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float Distance; // 0x34(0x04)
	float HalfAngle; // 0x38(0x04)
	float Offset; // 0x3c(0x04)
};

// Class ContextualAnimation.ContextualAnimSelectionCriterion_Distance
// Size: 0x40 (Inherited: 0x30)
struct UContextualAnimSelectionCriterion_Distance : UContextualAnimSelectionCriterion {
	enum class EContextualAnimCriterionDistanceMode Mode; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float MinDistance; // 0x34(0x04)
	float MaxDistance; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class ContextualAnimation.ContextualAnimTransition
// Size: 0x28 (Inherited: 0x28)
struct UContextualAnimTransition : UObject {

	bool CanEnterTransition(struct UContextualAnimSceneInstance* SceneInstance, struct FName& FromSection, struct FName& ToSection); // Function ContextualAnimation.ContextualAnimTransition.CanEnterTransition // (Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0xd67374
};

// Class ContextualAnimation.ContextualAnimUtilities
// Size: 0x28 (Inherited: 0x28)
struct UContextualAnimUtilities : UBlueprintFunctionLibrary {

	void BP_SceneBindings_GetSectionAndAnimSetIndices(struct FContextualAnimSceneBindings& Bindings, int32_t& SectionIdx, int32_t& AnimSetIdx); // Function ContextualAnimation.ContextualAnimUtilities.BP_SceneBindings_GetSectionAndAnimSetIndices // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x711afa4
	struct UContextualAnimSceneAsset* BP_SceneBindings_GetSceneAsset(struct FContextualAnimSceneBindings& Bindings); // Function ContextualAnimation.ContextualAnimUtilities.BP_SceneBindings_GetSceneAsset // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x711aeb0
	struct TArray<struct FContextualAnimSceneBinding> BP_SceneBindings_GetBindings(struct FContextualAnimSceneBindings& Bindings); // Function ContextualAnimation.ContextualAnimUtilities.BP_SceneBindings_GetBindings // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x711ae18
	struct FContextualAnimSceneBinding BP_SceneBindings_GetBindingByRole(struct FContextualAnimSceneBindings& Bindings, struct FName Role); // Function ContextualAnimation.ContextualAnimUtilities.BP_SceneBindings_GetBindingByRole // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x711ad20
	struct FContextualAnimSceneBinding BP_SceneBindings_GetBindingByActor(struct FContextualAnimSceneBindings& Bindings, struct AActor* Actor); // Function ContextualAnimation.ContextualAnimUtilities.BP_SceneBindings_GetBindingByActor // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x711ac1c
	struct FTransform BP_SceneBindings_GetAlignmentTransformForRoleRelativeToPivot(struct FContextualAnimSceneBindings& Bindings, struct FName Role, struct FContextualAnimSetPivot& Pivot, float Time); // Function ContextualAnimation.ContextualAnimUtilities.BP_SceneBindings_GetAlignmentTransformForRoleRelativeToPivot // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x711aa34
	struct FTransform BP_SceneBindings_GetAlignmentTransformForRoleRelativeToOtherRole(struct FContextualAnimSceneBindings& Bindings, struct FName Role, struct FName RelativeToRole, float Time); // Function ContextualAnimation.ContextualAnimUtilities.BP_SceneBindings_GetAlignmentTransformForRoleRelativeToOtherRole // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x711a89c
	void BP_SceneBindings_CalculateAnimSetPivots(struct FContextualAnimSceneBindings& Bindings, struct TArray<struct FContextualAnimSetPivot>& OutPivots); // Function ContextualAnimation.ContextualAnimUtilities.BP_SceneBindings_CalculateAnimSetPivots // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x711a79c
	void BP_SceneBindings_AddOrUpdateWarpTargetsForBindings(struct FContextualAnimSceneBindings& Bindings); // Function ContextualAnimation.ContextualAnimUtilities.BP_SceneBindings_AddOrUpdateWarpTargetsForBindings // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x711a714
	struct FContextualAnimSceneBindingContext BP_SceneBindingContext_MakeFromActorWithExternalTransform(struct AActor* Actor, struct FTransform ExternalTransform); // Function ContextualAnimation.ContextualAnimUtilities.BP_SceneBindingContext_MakeFromActorWithExternalTransform // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x711a15c
	struct FContextualAnimSceneBindingContext BP_SceneBindingContext_MakeFromActor(struct AActor* Actor); // Function ContextualAnimation.ContextualAnimUtilities.BP_SceneBindingContext_MakeFromActor // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x711a080
	struct FVector BP_SceneBindingContext_GetVelocity(struct FContextualAnimSceneBindingContext& BindingContext); // Function ContextualAnimation.ContextualAnimUtilities.BP_SceneBindingContext_GetVelocity // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x7119f9c
	struct FTransform BP_SceneBindingContext_GetTransform(struct FContextualAnimSceneBindingContext& BindingContext); // Function ContextualAnimation.ContextualAnimUtilities.BP_SceneBindingContext_GetTransform // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x7119e9c
	struct AActor* BP_SceneBindingContext_GetActor(struct FContextualAnimSceneBindingContext& BindingContext); // Function ContextualAnimation.ContextualAnimUtilities.BP_SceneBindingContext_GetActor // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x7119d80
	struct USkeletalMeshComponent* BP_SceneBinding_GetSkeletalMesh(struct FContextualAnimSceneBinding& Binding); // Function ContextualAnimation.ContextualAnimUtilities.BP_SceneBinding_GetSkeletalMesh // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x711a5e0
	struct FName BP_SceneBinding_GetRole(struct FContextualAnimSceneBinding& Binding); // Function ContextualAnimation.ContextualAnimUtilities.BP_SceneBinding_GetRole // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x711a500
	struct UAnimSequenceBase* BP_SceneBinding_GetAnimationToPlay(struct FContextualAnimSceneBinding& Binding); // Function ContextualAnimation.ContextualAnimUtilities.BP_SceneBinding_GetAnimationToPlay // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x711a41c
	struct AActor* BP_SceneBinding_GetActor(struct FContextualAnimSceneBinding& Binding); // Function ContextualAnimation.ContextualAnimUtilities.BP_SceneBinding_GetActor // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x711a2f0
	float BP_Montage_GetSectionTimeLeftFromPos(struct UAnimMontage* Montage, float Position); // Function ContextualAnimation.ContextualAnimUtilities.BP_Montage_GetSectionTimeLeftFromPos // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7119cb0
	void BP_Montage_GetSectionStartAndEndTime(struct UAnimMontage* Montage, int32_t SectionIndex, float& OutStartTime, float& OutEndTime); // Function ContextualAnimation.ContextualAnimUtilities.BP_Montage_GetSectionStartAndEndTime // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x7119b60
	float BP_Montage_GetSectionLength(struct UAnimMontage* Montage, int32_t SectionIndex); // Function ContextualAnimation.ContextualAnimUtilities.BP_Montage_GetSectionLength // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7119a94
	void BP_DrawDebugPose(struct UObject* WorldContextObject, struct UAnimSequenceBase* Animation, float Time, struct FTransform LocalToWorldTransform, struct FLinearColor Color, float LifeTime, float Thickness); // Function ContextualAnimation.ContextualAnimUtilities.BP_DrawDebugPose // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x7119084
	bool BP_CreateContextualAnimSceneBindingsForTwoActors(struct UContextualAnimSceneAsset* SceneAsset, struct FContextualAnimSceneBindingContext& Primary, struct FContextualAnimSceneBindingContext& Secondary, struct FContextualAnimSceneBindings& OutBindings); // Function ContextualAnimation.ContextualAnimUtilities.BP_CreateContextualAnimSceneBindingsForTwoActors // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x7118e84
	bool BP_CreateContextualAnimSceneBindings(struct UContextualAnimSceneAsset* SceneAsset, struct TMap<struct FName, struct FContextualAnimSceneBindingContext>& Params, struct FContextualAnimSceneBindings& OutBindings); // Function ContextualAnimation.ContextualAnimUtilities.BP_CreateContextualAnimSceneBindings // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x7118d0c
};

