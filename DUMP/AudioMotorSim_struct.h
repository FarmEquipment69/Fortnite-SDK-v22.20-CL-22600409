// ScriptStruct AudioMotorSim.MotorSimEntry
// Size: 0x18 (Inherited: 0x00)
struct FMotorSimEntry {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct AudioMotorSim.AudioMotorSimInputContext
// Size: 0x2c (Inherited: 0x00)
struct FAudioMotorSimInputContext {
	float DeltaTime; // 0x00(0x04)
	float Speed; // 0x04(0x04)
	float ForwardSpeed; // 0x08(0x04)
	float SideSpeed; // 0x0c(0x04)
	float UpSpeed; // 0x10(0x04)
	float Throttle; // 0x14(0x04)
	float Brake; // 0x18(0x04)
	float SurfaceFrictionModifier; // 0x1c(0x04)
	float MotorFrictionModifier; // 0x20(0x04)
	float Boost; // 0x24(0x04)
	bool bDriving; // 0x28(0x01)
	bool bGrounded; // 0x29(0x01)
	bool bCanShift; // 0x2a(0x01)
	bool bClutchEngaged; // 0x2b(0x01)
};

// ScriptStruct AudioMotorSim.AudioMotorSimRuntimeContext
// Size: 0x14 (Inherited: 0x00)
struct FAudioMotorSimRuntimeContext {
	bool bShifting; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t Gear; // 0x04(0x04)
	float RPM; // 0x08(0x04)
	float Volume; // 0x0c(0x04)
	float Pitch; // 0x10(0x04)
};

