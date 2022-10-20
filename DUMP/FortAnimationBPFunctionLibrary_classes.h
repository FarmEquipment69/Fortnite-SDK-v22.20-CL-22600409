// BlueprintGeneratedClass FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C
// Size: 0x28 (Inherited: 0x28)
struct UFortAnimationBPFunctionLibrary_C : UBlueprintFunctionLibrary {

	void Debug Cloth Teleport Threshold Function(double MinDistance, double MinRotation, struct USceneComponent* SkelMeshComponent, bool PrintToScreen, struct FName BoneName, struct FVector& InVector, struct FRotator PawnDeltaRotation, double PrintToScreenDuration, struct UObject* __WorldContext, double& Distance, double& Rotation); // Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Debug Cloth Teleport Threshold Function // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Cloth Controller Helper Scale For Player Movement(struct FVector LinearVelScale, double PlayerFwdVector, double PlayerFwdVectorJump, double ClothUpX, double ClothUpZ, struct UObject* __WorldContext, struct FVector& LinearVelVectorOut); // Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Cloth Controller Helper Scale For Player Movement // (Static|Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Scale Joint Rotation Function(struct FRotator Scale, struct FName TargetBone, struct FName ReferenceBone, struct USkinnedMeshComponent* SkelMeshComponent, struct UObject* __WorldContext, struct FRotator& FinalRotation, struct FRotator& OriginalRotation); // Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Scale Joint Rotation Function // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Adjust Emote Vehicle Wheel Rotation(struct AActor* Owning Actor, double CurrentWheelRotation, double DeltaTime, double CurrentActorRotation, struct UObject* __WorldContext, double& NewActorRotation, double& NewWheelRotation); // Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Adjust Emote Vehicle Wheel Rotation // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Gravity Override Setter Function(struct UCustomCharacterPartAnimInstance* CharacterPartAnimInstance, struct UMeshComponent* SkelMeshComponent, struct FGravityOverrideSettingStruct GravityOverride Settings, double GameTimeInSeconds, struct UObject* __WorldContext, struct FGravityOverrideSettingStruct& GravityOverride Settings Out, struct FVector& GravityOverride Out); // Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Gravity Override Setter Function // (Static|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Gravity Override State Function(struct UCustomCharacterPartAnimInstance* CharacterPartAnimInstance, double GameTimeInSeconds, struct FGravityOverrideParamsStruct GravityOverrideParams, bool DebugDraw, struct FName DebugJointName, struct UObject* __WorldContext, struct FVector& GravityOverride, struct FString& CurrentStateOut, struct FGravityOverrideSettingStruct& GravityOverrideSettingsOut); // Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Gravity Override State Function // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void FN_PSDPoseReaderFNC(struct FString startJnt, struct FString endJnt, struct FString poseJnt, double Angle, bool Debug, struct USkeletalMeshComponent* SkeletalMeshComponent, struct UObject* __WorldContext, double& pose_output); // Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.FN_PSDPoseReaderFNC // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Wind Gust Control Function(struct UCustomCharacterPartAnimInstance* CharacterPartAnimInstance, double DeltaTime, double GameTimeInSeconds, struct FName JointName, struct FWindGustSettingStruct WindGustSettings, struct FWindGustLocalSettingStruct WindGustLocalSettings, struct UObject* __WorldContext, struct FVector& GustStrengthWindVelocity Out, struct FWindGustLocalSettingStruct& WindGustLocalSettingsOut); // Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Wind Gust Control Function // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void WindGustGeneratorFunction(double DeltaTime, struct FWindGustSettingStruct GustSettings, struct FWindGustLocalSettingStruct ClothGustLocalSettings, struct UObject* __WorldContext, double& GustStrength - WindVelocity, struct FWindGustLocalSettingStruct& ClothGustLocalSettingsOut); // Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.WindGustGeneratorFunction // (Static|Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Play Transformation Montage(struct AFortPlayerPawn* FortPlayerPawn, struct UObject* __WorldContext); // Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Play Transformation Montage // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Clear Transformation Montage(struct AFortPlayerPawn* FortPlayerPawn, struct UObject* __WorldContext); // Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Clear Transformation Montage // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Set Transformation Montage(struct AFortPlayerPawn* FortPlayerPawn, struct UAnimMontage* Montage, double StartTime, struct UObject* __WorldContext); // Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Set Transformation Montage // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Cloth Controller Setter Function(struct UCustomCharacterPartAnimInstance* CharacterPartAnimInstance, struct FClothSettingStruct Cloth Settings, struct UObject* __WorldContext, struct FClothSettingStruct& Cloth Settings Out); // Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Cloth Controller Setter Function // (Static|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Cloth Controller Function(struct UCustomCharacterPartAnimInstance* CharacterPartAnimInstance, struct FString ClothingAssetName, struct FClothParamsStruct Cloth Paramaters, struct FClothCoreSettingStruct Cloth Core Settings, struct FVector ClothUpAxis, double OnGround_Moving_SpeedLimit, double OnGround_Moving_AngularVel_Max, double OnGround_Moving_FictitiousVel_Max, double LinVelScale_FwdBwd_Clamp, double LinVelScale_UpDwn_Clamp, double DeltaTime, double GameTimeInSeconds, struct FWindGustParamsStruct WindGustsParams, struct FWindGustLocalSettingStruct WindGustLocalSettings, struct UObject* __WorldContext, struct FString& CurrentStateOut, struct FClothSettingStruct& Cloth Settings Out, struct FClothCoreSettingStruct& Cloth Core Settings Out, struct FWindGustSettingStruct& WindGustSettings Out, struct FWindGustLocalSettingStruct& WindGustLocalSettings Out, struct FVector& GustStrength - WindVelocityOut, struct FVector& LinearVelVector-DELETE LATER); // Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Cloth Controller Function // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void RandomRotatorFunction(double GameTimeInSeconds, double PerlinScale, struct FRotator Frequency, struct FRotator Amplitude, struct FRotator Offset, double TimeOffset, struct UObject* __WorldContext, struct FRotator& RandomRotator); // Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.RandomRotatorFunction // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Player Movement Function(struct UCustomCharacterPartAnimInstance* CharacterPartAnimInstance, double X Dot Product, double Y Dot Product, double Z Dot Product, bool DrawDebug, double Debug Scalar, struct UObject* __WorldContext, double& X Movement, double& Y Movement, double& Z Movement); // Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Player Movement Function // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Random Vector Function(struct UCustomCharacterPartAnimInstance* CharacterPartAnimInstance, struct UMeshComponent* SkelMeshComponent, struct FName JointName, double GameTimeInSeconds, double TimeOffset, double PerlinScale, struct FVector Frequency, struct FVector Amplitude, struct FVector Offset, struct UObject* __WorldContext, struct FVector& VectorOut); // Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Random Vector Function // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void DrawVectorFromJointFunction(struct USceneComponent* SkelMeshComponent, struct FName JointName, struct FVector LineEnd, struct FVector JointOffset, struct FLinearColor LineColor, double Thickness, struct UObject* __WorldContext); // Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.DrawVectorFromJointFunction // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void DrawJointDebugFunction(struct USceneComponent* SkelMeshComponent, struct FVector JointOffset, struct TArray<struct FName>& JointName, double Scale, double Duration, double Thickness, bool DebugDraw, struct UObject* __WorldContext); // Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.DrawJointDebugFunction // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ComplexSimSpaceFunction(struct UCustomCharacterPartAnimInstance* CharacterPartAnimInstance, double InterpSpeedMax, double PawnSpeedMax, double RInterpErrorTolerance, double DeltaTime, bool DebugDraw, struct FRotator sim_space_rotation_in, bool inComponentSpaceIn, bool inComponentSpaceLastFrameIn, bool lockedOnSimSpaceIn, double InterpSpeedIn, struct UObject* __WorldContext, struct FRotator& sim_space_rotation, bool& inComponentSpaceOut, bool& inComponentSpaceLastFrameOut, bool& lockedOnSimSpaceOut, double& InterpSpeedOut); // Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.ComplexSimSpaceFunction // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Gravity Override Function(struct UCustomCharacterPartAnimInstance* CharacterPartAnimInstance, double GameTimeInSeconds, struct FVector WindFreq, struct FVector WindAmp, struct FVector WindOffset, struct FVector GoingUpGravityOverride, struct FVector ComingDownGravityOverride, struct FVector DivingDownGravityOverride, struct FVector ParachuteOpenedGravityOverride, struct FVector GroundWindFreq, struct FVector GroundWindAmp, struct FVector GroundWindOffset, struct FVector OnGroundGravityOverride, struct FVector SwimmingGravityOverride, struct FName JointName, struct UObject* __WorldContext, struct FVector& GravityOverride); // Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Gravity Override Function // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

