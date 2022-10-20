// Enum NiagaraShader.ENiagaraMipMapGenerationType
enum class ENiagaraMipMapGenerationType : uint8 {
	Unfiltered = 0,
	Linear = 1,
	Blur1 = 2,
	Blur2 = 3,
	Blur3 = 4,
	Blur4 = 5,
	ENiagaraMipMapGenerationType_MAX = 6
};

// Enum NiagaraShader.ENiagaraGpuDispatchType
enum class ENiagaraGpuDispatchType : uint8 {
	OneD = 0,
	TwoD = 1,
	ThreeD = 2,
	Custom = 3,
	ENiagaraGpuDispatchType_MAX = 4
};

// Enum NiagaraShader.ENiagaraSimStageExecuteBehavior
enum class ENiagaraSimStageExecuteBehavior : uint8 {
	Always = 0,
	OnSimulationReset = 1,
	NotOnSimulationReset = 2,
	ENiagaraSimStageExecuteBehavior_MAX = 3
};

// Enum NiagaraShader.FNiagaraCompileEventSeverity
enum class FNiagaraCompileEventSeverity : uint8 {
	Log = 0,
	Display = 1,
	Warning = 2,
	Error = 3,
	FNiagaraCompileEventSeverity_MAX = 4
};

// Enum NiagaraShader.FNiagaraCompileEventSource
enum class FNiagaraCompileEventSource : uint8 {
	Unset = 0,
	ScriptDependency = 1,
	FNiagaraCompileEventSource_MAX = 2
};

// ScriptStruct NiagaraShader.SimulationStageMetaData
// Size: 0x50 (Inherited: 0x00)
struct FSimulationStageMetaData {
	struct FName SimulationStageName; // 0x00(0x04)
	struct FName EnabledBinding; // 0x04(0x04)
	struct FName ElementCountBinding; // 0x08(0x04)
	struct FName IterationSource; // 0x0c(0x04)
	enum class ENiagaraSimStageExecuteBehavior ExecuteBehavior; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	char bWritesParticles : 1; // 0x14(0x01)
	char bPartialParticleUpdate : 1; // 0x14(0x01)
	char bParticleIterationStateEnabled : 1; // 0x14(0x01)
	char pad_14_3 : 5; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FName ParticleIterationStateBinding; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FIntPoint ParticleIterationStateRange; // 0x20(0x08)
	struct TArray<struct FName> OutputDestinations; // 0x28(0x10)
	int32_t NumIterations; // 0x38(0x04)
	struct FName NumIterationsBinding; // 0x3c(0x04)
	enum class ENiagaraGpuDispatchType GpuDispatchType; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	struct FIntVector GpuDispatchNumThreads; // 0x44(0x0c)
};

// ScriptStruct NiagaraShader.NiagaraShaderScriptParametersMetadata
// Size: 0x48 (Inherited: 0x00)
struct FNiagaraShaderScriptParametersMetadata {
	struct TArray<struct FNiagaraDataInterfaceGPUParamInfo> DataInterfaceParamInfo; // 0x00(0x10)
	struct TArray<struct FString> LooseMetadataNames; // 0x10(0x10)
	bool bExternalConstantsInterpolated; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct TArray<struct FNiagaraShaderScriptExternalConstant> ExternalConstants; // 0x28(0x10)
	char pad_38[0x10]; // 0x38(0x10)
};

// ScriptStruct NiagaraShader.NiagaraShaderScriptExternalConstant
// Size: 0x18 (Inherited: 0x00)
struct FNiagaraShaderScriptExternalConstant {
	struct FName Type; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString Name; // 0x08(0x10)
};

// ScriptStruct NiagaraShader.NiagaraDataInterfaceGPUParamInfo
// Size: 0x38 (Inherited: 0x00)
struct FNiagaraDataInterfaceGPUParamInfo {
	struct FString DataInterfaceHLSLSymbol; // 0x00(0x10)
	struct FString DIClassName; // 0x10(0x10)
	uint32_t ShaderParametersOffset; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct TArray<struct FNiagaraDataInterfaceGeneratedFunction> GeneratedFunctions; // 0x28(0x10)
};

// ScriptStruct NiagaraShader.NiagaraDataInterfaceGeneratedFunction
// Size: 0x28 (Inherited: 0x00)
struct FNiagaraDataInterfaceGeneratedFunction {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct NiagaraShader.NiagaraCompileEvent
// Size: 0x68 (Inherited: 0x00)
struct FNiagaraCompileEvent {
	enum class FNiagaraCompileEventSeverity Severity; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString message; // 0x08(0x10)
	struct FString ShortDescription; // 0x18(0x10)
	bool bDismissable; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	struct FGuid NodeGUID; // 0x2c(0x10)
	struct FGuid PinGuid; // 0x3c(0x10)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct TArray<struct FGuid> StackGuids; // 0x50(0x10)
	enum class FNiagaraCompileEventSource Source; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

