// ScriptStruct IrwinRuntime.RidingAnimationData
// Size: 0x14 (Inherited: 0x00)
struct FRidingAnimationData {
	bool bIsRidden; // 0x00(0x01)
	bool bIsTurningInPlace; // 0x01(0x01)
	bool bIsSprinting; // 0x02(0x01)
	bool bIsBeingPetted; // 0x03(0x01)
	bool bIsMovingBackwards; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float TurnInPlaceRotationSpeed; // 0x08(0x04)
	float TurnInPlaceAngleDelta; // 0x0c(0x04)
	float RiderReferentialYaw; // 0x10(0x04)
};

