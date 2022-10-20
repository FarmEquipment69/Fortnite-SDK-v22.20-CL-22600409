// Enum Niagara.ENiagaraSimCacheAttributeCaptureMode
enum class ENiagaraSimCacheAttributeCaptureMode : uint8 {
	All = 0,
	RenderingOnly = 1,
	ExplicitAttributes = 2,
	ENiagaraSimCacheAttributeCaptureMode_MAX = 3
};

// Enum Niagara.ENiagaraSystemSpawnSectionStartBehavior
enum class ENiagaraSystemSpawnSectionStartBehavior : uint8 {
	Activate = 0,
	ENiagaraSystemSpawnSectionStartBehavior_MAX = 1
};

// Enum Niagara.ENiagaraSystemSpawnSectionEvaluateBehavior
enum class ENiagaraSystemSpawnSectionEvaluateBehavior : uint8 {
	ActivateIfInactive = 0,
	None = 1,
	ENiagaraSystemSpawnSectionEvaluateBehavior_MAX = 2
};

// Enum Niagara.ENiagaraSystemSpawnSectionEndBehavior
enum class ENiagaraSystemSpawnSectionEndBehavior : uint8 {
	SetSystemInactive = 0,
	Deactivate = 1,
	None = 2,
	ENiagaraSystemSpawnSectionEndBehavior_MAX = 3
};

// Enum Niagara.ENiagaraCompilationState
enum class ENiagaraCompilationState : uint8 {
	CheckDDC = 0,
	Precompile = 1,
	StartCompileJob = 2,
	AwaitResult = 3,
	OptimizeByteCode = 4,
	ProcessResult = 5,
	PutToDDC = 6,
	Finished = 7,
	Aborted = 8,
	ENiagaraCompilationState_MAX = 9
};

// Enum Niagara.ENiagaraBakerViewMode
enum class ENiagaraBakerViewMode : uint8 {
	Perspective = 0,
	OrthoFront = 1,
	OrthoBack = 2,
	OrthoLeft = 3,
	OrthoRight = 4,
	OrthoTop = 5,
	OrthoBottom = 6,
	Num = 7,
	ENiagaraBakerViewMode_MAX = 8
};

// Enum Niagara.ENiagaraCollisionMode
enum class ENiagaraCollisionMode : uint8 {
	None = 0,
	SceneGeometry = 1,
	DepthBuffer = 2,
	DistanceField = 3,
	ENiagaraCollisionMode_MAX = 4
};

// Enum Niagara.ENiagaraTickBehavior
enum class ENiagaraTickBehavior : uint8 {
	UsePrereqs = 0,
	UseComponentTickGroup = 1,
	ForceTickFirst = 2,
	ForceTickLast = 3,
	ENiagaraTickBehavior_MAX = 4
};

// Enum Niagara.ENiagaraGpuBufferFormat
enum class ENiagaraGpuBufferFormat : uint8 {
	Float = 0,
	HalfFloat = 1,
	UnsignedNormalizedByte = 2,
	Max = 3
};

// Enum Niagara.ENiagaraGpuSyncMode
enum class ENiagaraGpuSyncMode : uint8 {
	None = 0,
	SyncCpuToGpu = 1,
	SyncGpuToCpu = 2,
	SyncBoth = 3,
	ENiagaraGpuSyncMode_MAX = 4
};

// Enum Niagara.ENiagaraMipMapGeneration
enum class ENiagaraMipMapGeneration : uint8 {
	Disabled = 0,
	PostStage = 1,
	PostSimulate = 2,
	ENiagaraMipMapGeneration_MAX = 3
};

// Enum Niagara.ENiagaraDefaultMode
enum class ENiagaraDefaultMode : uint8 {
	Value = 0,
	Binding = 1,
	Custom = 2,
	FailIfPreviouslyNotSet = 3,
	ENiagaraDefaultMode_MAX = 4
};

// Enum Niagara.ENiagaraDefaultRendererMotionVectorSetting
enum class ENiagaraDefaultRendererMotionVectorSetting : uint8 {
	Precise = 0,
	Approximate = 1,
	ENiagaraDefaultRendererMotionVectorSetting_MAX = 2
};

// Enum Niagara.ENiagaraRendererMotionVectorSetting
enum class ENiagaraRendererMotionVectorSetting : uint8 {
	AutoDetect = 0,
	Precise = 1,
	Approximate = 2,
	Disable = 3,
	ENiagaraRendererMotionVectorSetting_MAX = 4
};

// Enum Niagara.ENiagaraSimTarget
enum class ENiagaraSimTarget : uint8 {
	CPUSim = 0,
	GPUComputeSim = 1,
	ENiagaraSimTarget_MAX = 2
};

// Enum Niagara.ENiagaraAgeUpdateMode
enum class ENiagaraAgeUpdateMode : uint8 {
	TickDeltaTime = 0,
	DesiredAge = 1,
	DesiredAgeNoSeek = 2,
	ENiagaraAgeUpdateMode_MAX = 3
};

// Enum Niagara.ENiagaraStatEvaluationType
enum class ENiagaraStatEvaluationType : uint8 {
	Average = 0,
	Maximum = 1,
	ENiagaraStatEvaluationType_MAX = 2
};

// Enum Niagara.ENiagaraStatDisplayMode
enum class ENiagaraStatDisplayMode : uint8 {
	Percent = 0,
	Absolute = 1,
	ENiagaraStatDisplayMode_MAX = 2
};

// Enum Niagara.ENiagaraDataSetType
enum class ENiagaraDataSetType : uint8 {
	ParticleData = 0,
	Shared = 1,
	Event = 2,
	ENiagaraDataSetType_MAX = 3
};

// Enum Niagara.ENiagaraInputNodeUsage
enum class ENiagaraInputNodeUsage : uint8 {
	Undefined = 0,
	Parameter = 1,
	Attribute = 2,
	SystemConstant = 3,
	TranslatorConstant = 4,
	RapidIterationParameter = 5,
	ENiagaraInputNodeUsage_MAX = 6
};

// Enum Niagara.ENiagaraScriptCompileStatus
enum class ENiagaraScriptCompileStatus : uint8 {
	NCS_Unknown = 0,
	NCS_Dirty = 1,
	NCS_Error = 2,
	NCS_UpToDate = 3,
	NCS_BeingCreated = 4,
	NCS_UpToDateWithWarnings = 5,
	NCS_ComputeUpToDateWithWarnings = 6,
	NCS_MAX = 7
};

// Enum Niagara.ENiagaraScriptUsage
enum class ENiagaraScriptUsage : uint8 {
	Function = 0,
	Module = 1,
	DynamicInput = 2,
	ParticleSpawnScript = 3,
	ParticleSpawnScriptInterpolated = 4,
	ParticleUpdateScript = 5,
	ParticleEventScript = 6,
	ParticleSimulationStageScript = 7,
	ParticleGPUComputeScript = 8,
	EmitterSpawnScript = 9,
	EmitterUpdateScript = 10,
	SystemSpawnScript = 11,
	SystemUpdateScript = 12,
	ENiagaraScriptUsage_MAX = 13
};

// Enum Niagara.ENiagaraCompileUsageStaticSwitch
enum class ENiagaraCompileUsageStaticSwitch : uint8 {
	Spawn = 0,
	Update = 1,
	Event = 2,
	SimulationStage = 3,
	Default = 4,
	ENiagaraCompileUsageStaticSwitch_MAX = 5
};

// Enum Niagara.ENiagaraScriptContextStaticSwitch
enum class ENiagaraScriptContextStaticSwitch : uint8 {
	System = 0,
	Emitter = 1,
	Particle = 2,
	ENiagaraScriptContextStaticSwitch_MAX = 3
};

// Enum Niagara.ENiagaraScriptGroup
enum class ENiagaraScriptGroup : uint8 {
	Particle = 0,
	Emitter = 1,
	System = 2,
	Max = 3
};

// Enum Niagara.ENiagaraIterationSource
enum class ENiagaraIterationSource : uint8 {
	Particles = 0,
	DataInterface = 1,
	ENiagaraIterationSource_MAX = 2
};

// Enum Niagara.ENiagaraBindingSource
enum class ENiagaraBindingSource : uint8 {
	ImplicitFromSource = 0,
	ExplicitParticles = 1,
	ExplicitEmitter = 2,
	ExplicitSystem = 3,
	ExplicitUser = 4,
	MaxBindingSource = 5,
	ENiagaraBindingSource_MAX = 6
};

// Enum Niagara.ENiagaraRendererSourceDataMode
enum class ENiagaraRendererSourceDataMode : uint8 {
	Particles = 0,
	Emitter = 1,
	ENiagaraRendererSourceDataMode_MAX = 2
};

// Enum Niagara.ENiagaraLegacyTrailWidthMode
enum class ENiagaraLegacyTrailWidthMode : uint8 {
	FromCentre = 0,
	FromFirst = 1,
	FromSecond = 2,
	ENiagaraLegacyTrailWidthMode_MAX = 3
};

// Enum Niagara.ENCPoolMethod
enum class ENCPoolMethod : uint8 {
	None = 0,
	AutoRelease = 1,
	ManualRelease = 2,
	ManualRelease_OnComplete = 3,
	FreeInPool = 4,
	ENCPoolMethod_MAX = 5
};

// Enum Niagara.ENiagaraSystemInstanceState
enum class ENiagaraSystemInstanceState : uint8 {
	None = 0,
	PendingSpawn = 1,
	PendingSpawnPaused = 2,
	Spawning = 3,
	Running = 4,
	Paused = 5,
	Num = 6,
	ENiagaraSystemInstanceState_MAX = 7
};

// Enum Niagara.ENiagaraFunctionDebugState
enum class ENiagaraFunctionDebugState : uint8 {
	NoDebug = 0,
	Basic = 1,
	ENiagaraFunctionDebugState_MAX = 2
};

// Enum Niagara.ENiagaraGpuComputeTickStage
enum class ENiagaraGpuComputeTickStage : uint8 {
	PreInitViews = 0,
	PostInitViews = 1,
	PostOpaqueRender = 2,
	Max = 3,
	First = 0,
	Last = 2
};

// Enum Niagara.ENiagaraDataInterfaceEmitterBindingMode
enum class ENiagaraDataInterfaceEmitterBindingMode : uint8 {
	Self = 0,
	Other = 1,
	ENiagaraDataInterfaceEmitterBindingMode_MAX = 2
};

// Enum Niagara.ENDIExport_GPUAllocationMode
enum class ENDIExport_GPUAllocationMode : uint8 {
	FixedSize = 0,
	PerParticle = 1,
	ENDIExport_MAX = 2
};

// Enum Niagara.ENDILandscape_SourceMode
enum class ENDILandscape_SourceMode : uint8 {
	Default = 0,
	Source = 1,
	AttachParent = 2,
	ENDILandscape_MAX = 3
};

// Enum Niagara.ESetResolutionMethod
enum class ESetResolutionMethod : uint8 {
	Independent = 0,
	MaxAxis = 1,
	CellSize = 2,
	ESetResolutionMethod_MAX = 3
};

// Enum Niagara.ENDISkeletalMesh_SourceMode
enum class ENDISkeletalMesh_SourceMode : uint8 {
	Default = 0,
	Source = 1,
	AttachParent = 2,
	ENDISkeletalMesh_MAX = 3
};

// Enum Niagara.ENDISkeletalMesh_SkinningMode
enum class ENDISkeletalMesh_SkinningMode : uint8 {
	Invalid = 255,
	None = 0,
	SkinOnTheFly = 1,
	PreSkin = 2,
	ENDISkeletalMesh_MAX = 256
};

// Enum Niagara.ENDIStaticMesh_SourceMode
enum class ENDIStaticMesh_SourceMode : uint8 {
	Default = 0,
	Source = 1,
	AttachParent = 2,
	DefaultMeshOnly = 3,
	ENDIStaticMesh_MAX = 4
};

// Enum Niagara.ENiagaraDebugPlaybackMode
enum class ENiagaraDebugPlaybackMode : uint8 {
	Play = 0,
	Loop = 1,
	Paused = 2,
	Step = 3,
	ENiagaraDebugPlaybackMode_MAX = 4
};

// Enum Niagara.ENiagaraDebugHudHAlign
enum class ENiagaraDebugHudHAlign : uint8 {
	Left = 0,
	Center = 1,
	Right = 2,
	ENiagaraDebugHudHAlign_MAX = 3
};

// Enum Niagara.ENiagaraDebugHudVAlign
enum class ENiagaraDebugHudVAlign : uint8 {
	Top = 0,
	Center = 1,
	Bottom = 2,
	ENiagaraDebugHudVAlign_MAX = 3
};

// Enum Niagara.ENiagaraDebugHudFont
enum class ENiagaraDebugHudFont : uint8 {
	Small = 0,
	Normal = 1,
	ENiagaraDebugHudFont_MAX = 2
};

// Enum Niagara.ENiagaraDebugHudVerbosity
enum class ENiagaraDebugHudVerbosity : uint8 {
	None = 0,
	Basic = 1,
	Verbose = 2,
	ENiagaraDebugHudVerbosity_MAX = 3
};

// Enum Niagara.ENiagaraDebugHUDOverviewMode
enum class ENiagaraDebugHUDOverviewMode : uint8 {
	Overview = 0,
	Scalability = 1,
	Performance = 2,
	GpuComputePerformance = 3,
	ENiagaraDebugHUDOverviewMode_MAX = 4
};

// Enum Niagara.ENiagaraDebugHUDPerfGraphMode
enum class ENiagaraDebugHUDPerfGraphMode : uint8 {
	None = 0,
	GameThread = 1,
	RenderThread = 2,
	GPU = 3,
	ENiagaraDebugHUDPerfGraphMode_MAX = 4
};

// Enum Niagara.ENiagaraDebugHUDPerfSampleMode
enum class ENiagaraDebugHUDPerfSampleMode : uint8 {
	FrameTotal = 0,
	PerInstanceAverage = 1,
	ENiagaraDebugHUDPerfSampleMode_MAX = 2
};

// Enum Niagara.ENiagaraCullReaction
enum class ENiagaraCullReaction : uint8 {
	Deactivate = 0,
	DeactivateImmediate = 1,
	DeactivateResume = 2,
	DeactivateImmediateResume = 3,
	ENiagaraCullReaction_MAX = 4
};

// Enum Niagara.ENiagaraScalabilityUpdateFrequency
enum class ENiagaraScalabilityUpdateFrequency : uint8 {
	SpawnOnly = 0,
	Low = 1,
	Medium = 2,
	High = 3,
	Continuous = 4,
	ENiagaraScalabilityUpdateFrequency_MAX = 5
};

// Enum Niagara.ENiagaraCullProxyMode
enum class ENiagaraCullProxyMode : uint8 {
	None = 0,
	Instanced_Rendered = 1,
	ENiagaraCullProxyMode_MAX = 2
};

// Enum Niagara.EScriptExecutionMode
enum class EScriptExecutionMode : uint8 {
	EveryParticle = 0,
	SpawnedParticles = 1,
	SingleParticle = 2,
	EScriptExecutionMode_MAX = 3
};

// Enum Niagara.EParticleAllocationMode
enum class EParticleAllocationMode : uint8 {
	AutomaticEstimate = 0,
	ManualEstimate = 1,
	FixedCount = 2,
	EParticleAllocationMode_MAX = 3
};

// Enum Niagara.ENiagaraEmitterCalculateBoundMode
enum class ENiagaraEmitterCalculateBoundMode : uint8 {
	Dynamic = 0,
	Fixed = 1,
	Programmable = 2,
	ENiagaraEmitterCalculateBoundMode_MAX = 3
};

// Enum Niagara.ENiagaraSortMode
enum class ENiagaraSortMode : uint8 {
	None = 0,
	ViewDepth = 1,
	ViewDistance = 2,
	CustomAscending = 3,
	CustomDecending = 4,
	ENiagaraSortMode_MAX = 5
};

// Enum Niagara.ENiagaraMeshFacingMode
enum class ENiagaraMeshFacingMode : uint8 {
	Default = 0,
	Velocity = 1,
	CameraPosition = 2,
	CameraPlane = 3,
	ENiagaraMeshFacingMode_MAX = 4
};

// Enum Niagara.ENiagaraMeshPivotOffsetSpace
enum class ENiagaraMeshPivotOffsetSpace : uint8 {
	Mesh = 0,
	Simulation = 1,
	World = 2,
	Local = 3,
	ENiagaraMeshPivotOffsetSpace_MAX = 4
};

// Enum Niagara.ENiagaraMeshLockedAxisSpace
enum class ENiagaraMeshLockedAxisSpace : uint8 {
	Simulation = 0,
	World = 1,
	Local = 2,
	ENiagaraMeshLockedAxisSpace_MAX = 3
};

// Enum Niagara.ENiagaraPlatformSelectionState
enum class ENiagaraPlatformSelectionState : uint8 {
	Default = 0,
	Enabled = 1,
	Disabled = 2,
	ENiagaraPlatformSelectionState_MAX = 3
};

// Enum Niagara.ENiagaraPlatformSetState
enum class ENiagaraPlatformSetState : uint8 {
	Disabled = 0,
	Enabled = 1,
	Active = 2,
	Unknown = 3,
	ENiagaraPlatformSetState_MAX = 4
};

// Enum Niagara.ENiagaraCVarConditionResponse
enum class ENiagaraCVarConditionResponse : uint8 {
	None = 0,
	Enable = 1,
	Disable = 2,
	ENiagaraCVarConditionResponse_MAX = 3
};

// Enum Niagara.ENiagaraDeviceProfileRedirectMode
enum class ENiagaraDeviceProfileRedirectMode : uint8 {
	CVar = 0,
	DeviceProfile = 1,
	ENiagaraDeviceProfileRedirectMode_MAX = 2
};

// Enum Niagara.ENiagaraPreviewGridResetMode
enum class ENiagaraPreviewGridResetMode : uint8 {
	Never = 0,
	Individual = 1,
	All = 2,
	ENiagaraPreviewGridResetMode_MAX = 3
};

// Enum Niagara.ENiagaraRendererSortPrecision
enum class ENiagaraRendererSortPrecision : uint8 {
	Default = 0,
	Low = 1,
	High = 2,
	ENiagaraRendererSortPrecision_MAX = 3
};

// Enum Niagara.ENiagaraRibbonFacingMode
enum class ENiagaraRibbonFacingMode : uint8 {
	Screen = 0,
	Custom = 1,
	CustomSideVector = 2,
	ENiagaraRibbonFacingMode_MAX = 3
};

// Enum Niagara.ENiagaraRibbonAgeOffsetMode
enum class ENiagaraRibbonAgeOffsetMode : uint8 {
	Scale = 0,
	Clip = 1,
	ENiagaraRibbonAgeOffsetMode_MAX = 2
};

// Enum Niagara.ENiagaraRibbonDrawDirection
enum class ENiagaraRibbonDrawDirection : uint8 {
	FrontToBack = 0,
	BackToFront = 1,
	ENiagaraRibbonDrawDirection_MAX = 2
};

// Enum Niagara.ENiagaraRibbonShapeMode
enum class ENiagaraRibbonShapeMode : uint8 {
	Plane = 0,
	MultiPlane = 1,
	Tube = 2,
	Custom = 3,
	ENiagaraRibbonShapeMode_MAX = 4
};

// Enum Niagara.ENiagaraRibbonTessellationMode
enum class ENiagaraRibbonTessellationMode : uint8 {
	Automatic = 0,
	Custom = 1,
	Disabled = 2,
	ENiagaraRibbonTessellationMode_MAX = 3
};

// Enum Niagara.ENiagaraRibbonUVEdgeMode
enum class ENiagaraRibbonUVEdgeMode : uint8 {
	SmoothTransition = 0,
	Locked = 1,
	ENiagaraRibbonUVEdgeMode_MAX = 2
};

// Enum Niagara.ENiagaraRibbonUVDistributionMode
enum class ENiagaraRibbonUVDistributionMode : uint8 {
	ScaledUniformly = 0,
	ScaledUsingRibbonSegmentLength = 1,
	TiledOverRibbonLength = 2,
	TiledFromStartOverRibbonLength = 3,
	ENiagaraRibbonUVDistributionMode_MAX = 4
};

// Enum Niagara.EUnusedAttributeBehaviour
enum class EUnusedAttributeBehaviour : uint8 {
	Copy = 0,
	Zero = 1,
	None = 2,
	MarkInvalid = 3,
	PassThrough = 4,
	EUnusedAttributeBehaviour_MAX = 5
};

// Enum Niagara.ENiagaraModuleDependencyType
enum class ENiagaraModuleDependencyType : uint8 {
	PreDependency = 0,
	PostDependency = 1,
	ENiagaraModuleDependencyType_MAX = 2
};

// Enum Niagara.ENiagaraModuleDependencyScriptConstraint
enum class ENiagaraModuleDependencyScriptConstraint : uint8 {
	SameScript = 0,
	AllScripts = 1,
	ENiagaraModuleDependencyScriptConstraint_MAX = 2
};

// Enum Niagara.ENiagaraScriptLibraryVisibility
enum class ENiagaraScriptLibraryVisibility : uint8 {
	Invalid = 0,
	Unexposed = 1,
	Library = 2,
	Hidden = 3,
	ENiagaraScriptLibraryVisibility_MAX = 4
};

// Enum Niagara.ENiagaraScriptTemplateSpecification
enum class ENiagaraScriptTemplateSpecification : uint8 {
	None = 0,
	Template = 1,
	Behavior = 2,
	ENiagaraScriptTemplateSpecification_MAX = 3
};

// Enum Niagara.ENiagaraModuleDependencyUsage
enum class ENiagaraModuleDependencyUsage : uint8 {
	None = 0,
	Spawn = 1,
	Update = 2,
	Event = 3,
	SimulationStage = 4,
	ENiagaraModuleDependencyUsage_MAX = 5
};

// Enum Niagara.ENDISkelMesh_GpuMaxInfluences
enum class ENDISkelMesh_GpuMaxInfluences : uint8 {
	AllowMax4 = 0,
	AllowMax8 = 1,
	Unlimited = 2,
	ENDISkelMesh_MAX = 3
};

// Enum Niagara.ENDISkelMesh_GpuUniformSamplingFormat
enum class ENDISkelMesh_GpuUniformSamplingFormat : uint8 {
	Full = 0,
	 = 1,
	 = 2,
	ENDISkelMesh_MAX = 3
};

// Enum Niagara.ENDISkelMesh_AdjacencyTriangleIndexFormat
enum class ENDISkelMesh_AdjacencyTriangleIndexFormat : uint8 {
	Full = 0,
	Half = 1,
	ENDISkelMesh_MAX = 2
};

// Enum Niagara.ENiagaraDefaultRendererPixelCoverageMode
enum class ENiagaraDefaultRendererPixelCoverageMode : uint8 {
	Enabled = 0,
	Disabled = 1,
	ENiagaraDefaultRendererPixelCoverageMode_MAX = 2
};

// Enum Niagara.ENiagaraDefaultSortPrecision
enum class ENiagaraDefaultSortPrecision : uint8 {
	Low = 0,
	High = 1,
	ENiagaraDefaultSortPrecision_MAX = 2
};

// Enum Niagara.ENDICollisionQuery_AsyncGpuTraceProvider
enum class ENDICollisionQuery_AsyncGpuTraceProvider : uint8 {
	Default = 0,
	HWRT = 1,
	GSDF = 2,
	None = 3,
	ENDICollisionQuery_MAX = 4
};

// Enum Niagara.ENiagaraSpriteAlignment
enum class ENiagaraSpriteAlignment : uint8 {
	Unaligned = 0,
	VelocityAligned = 1,
	CustomAlignment = 2,
	ENiagaraSpriteAlignment_MAX = 3
};

// Enum Niagara.ENiagaraSpriteFacingMode
enum class ENiagaraSpriteFacingMode : uint8 {
	FaceCamera = 0,
	FaceCameraPlane = 1,
	CustomFacingVector = 2,
	FaceCameraPosition = 3,
	FaceCameraDistanceBlend = 4,
	ENiagaraSpriteFacingMode_MAX = 5
};

// Enum Niagara.ENiagaraRendererPixelCoverageMode
enum class ENiagaraRendererPixelCoverageMode : uint8 {
	Automatic = 0,
	Disabled = 1,
	Enabled = 2,
	Enabled_RGBA = 3,
	Enabled_RGB = 4,
	Enabled_A = 5,
	ENiagaraRendererPixelCoverageMode_MAX = 6
};

// Enum Niagara.ENiagaraStructConversionType
enum class ENiagaraStructConversionType : uint8 {
	CopyOnly = 0,
	DoubleToFloat = 1,
	Vector2 = 2,
	Vector3 = 3,
	Vector4 = 4,
	Quat = 5,
	ENiagaraStructConversionType_MAX = 6
};

// Enum Niagara.ENiagaraNumericOutputTypeSelectionMode
enum class ENiagaraNumericOutputTypeSelectionMode : uint8 {
	None = 0,
	Largest = 1,
	Smallest = 2,
	Scalar = 3,
	Custom = 4,
	ENiagaraNumericOutputTypeSelectionMode_MAX = 5
};

// Enum Niagara.ENiagaraExecutionStateSource
enum class ENiagaraExecutionStateSource : uint8 {
	Scalability = 0,
	Internal = 1,
	Owner = 2,
	InternalCompletion = 3,
	ENiagaraExecutionStateSource_MAX = 4
};

// Enum Niagara.ENiagaraExecutionState
enum class ENiagaraExecutionState : uint8 {
	Active = 0,
	Inactive = 1,
	InactiveClear = 2,
	Complete = 3,
	Disabled = 4,
	Num = 5,
	ENiagaraExecutionState_MAX = 6
};

// Enum Niagara.ENiagaraCoordinateSpace
enum class ENiagaraCoordinateSpace : uint8 {
	Simulation = 0,
	World = 1,
	Local = 2,
	ENiagaraCoordinateSpace_MAX = 3
};

// Enum Niagara.ENiagaraPythonUpdateScriptReference
enum class ENiagaraPythonUpdateScriptReference : uint8 {
	None = 0,
	ScriptAsset = 1,
	DirectTextEntry = 2,
	ENiagaraPythonUpdateScriptReference_MAX = 3
};

// Enum Niagara.ENiagaraOrientationAxis
enum class ENiagaraOrientationAxis : uint8 {
	XAxis = 0,
	YAxis = 1,
	ZAxis = 2,
	ENiagaraOrientationAxis_MAX = 3
};

// Enum Niagara.ENiagaraBoolDisplayMode
enum class ENiagaraBoolDisplayMode : uint8 {
	DisplayAlways = 0,
	DisplayIfTrue = 1,
	DisplayIfFalse = 2,
	ENiagaraBoolDisplayMode_MAX = 3
};

// Enum Niagara.ENiagaraValidationSeverity
enum class ENiagaraValidationSeverity : uint8 {
	Info = 0,
	Warning = 1,
	Error = 2,
	ENiagaraValidationSeverity_MAX = 3
};

// Enum Niagara.ENiagaraVariantMode
enum class ENiagaraVariantMode : uint8 {
	None = 0,
	Object = 1,
	DataInterface = 2,
	Bytes = 3,
	ENiagaraVariantMode_MAX = 4
};

// Enum Niagara.EVolumeCacheType
enum class EVolumeCacheType : uint8 {
	OpenVDB = 0,
	EVolumeCacheType_MAX = 1
};

// ScriptStruct Niagara.NiagaraSimCacheCreateParameters
// Size: 0x38 (Inherited: 0x00)
struct FNiagaraSimCacheCreateParameters {
	enum class ENiagaraSimCacheAttributeCaptureMode AttributeCaptureMode; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	char bAllowRebasing : 1; // 0x04(0x01)
	char bAllowDataInterfaceCaching : 1; // 0x04(0x01)
	char pad_4_2 : 6; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct TArray<struct FName> RebaseIncludeAttributes; // 0x08(0x10)
	struct TArray<struct FName> RebaseExcludeAttributes; // 0x18(0x10)
	struct TArray<struct FName> ExplicitCaptureAttributes; // 0x28(0x10)
};

// ScriptStruct Niagara.MovieSceneNiagaraParameterSectionTemplate
// Size: 0x38 (Inherited: 0x20)
struct FMovieSceneNiagaraParameterSectionTemplate : FMovieSceneEvalTemplate {
	struct FNiagaraVariable Parameter; // 0x20(0x18)
};

// ScriptStruct Niagara.NiagaraVariableBase
// Size: 0x08 (Inherited: 0x00)
struct FNiagaraVariableBase {
	struct FName Name; // 0x00(0x04)
	struct FNiagaraTypeDefinitionHandle TypeDefHandle; // 0x04(0x04)
};

// ScriptStruct Niagara.NiagaraTypeDefinitionHandle
// Size: 0x04 (Inherited: 0x00)
struct FNiagaraTypeDefinitionHandle {
	int32_t RegisteredTypeIndex; // 0x00(0x04)
};

// ScriptStruct Niagara.NiagaraVariable
// Size: 0x18 (Inherited: 0x08)
struct FNiagaraVariable : FNiagaraVariableBase {
	struct TArray<char> VarData; // 0x08(0x10)
};

// ScriptStruct Niagara.MovieSceneNiagaraBoolParameterSectionTemplate
// Size: 0x110 (Inherited: 0x38)
struct FMovieSceneNiagaraBoolParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	struct FMovieSceneBoolChannel BoolChannel; // 0x38(0xd8)
};

// ScriptStruct Niagara.MovieSceneNiagaraColorParameterSectionTemplate
// Size: 0x3d8 (Inherited: 0x38)
struct FMovieSceneNiagaraColorParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	struct FMovieSceneFloatChannel RedChannel; // 0x38(0xe8)
	struct FMovieSceneFloatChannel GreenChannel; // 0x120(0xe8)
	struct FMovieSceneFloatChannel BlueChannel; // 0x208(0xe8)
	struct FMovieSceneFloatChannel AlphaChannel; // 0x2f0(0xe8)
};

// ScriptStruct Niagara.MovieSceneNiagaraFloatParameterSectionTemplate
// Size: 0x120 (Inherited: 0x38)
struct FMovieSceneNiagaraFloatParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	struct FMovieSceneFloatChannel FloatChannel; // 0x38(0xe8)
};

// ScriptStruct Niagara.MovieSceneNiagaraIntegerParameterSectionTemplate
// Size: 0x110 (Inherited: 0x38)
struct FMovieSceneNiagaraIntegerParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	struct FMovieSceneIntegerChannel IntegerChannel; // 0x38(0xd8)
};

// ScriptStruct Niagara.MovieSceneNiagaraSystemTrackTemplate
// Size: 0x20 (Inherited: 0x20)
struct FMovieSceneNiagaraSystemTrackTemplate : FMovieSceneEvalTemplate {
};

// ScriptStruct Niagara.MovieSceneNiagaraSystemTrackImplementation
// Size: 0x28 (Inherited: 0x10)
struct FMovieSceneNiagaraSystemTrackImplementation : FMovieSceneTrackImplementation {
	struct FFrameNumber SpawnSectionStartFrame; // 0x10(0x04)
	struct FFrameNumber SpawnSectionEndFrame; // 0x14(0x04)
	enum class ENiagaraSystemSpawnSectionStartBehavior SpawnSectionStartBehavior; // 0x18(0x04)
	enum class ENiagaraSystemSpawnSectionEvaluateBehavior SpawnSectionEvaluateBehavior; // 0x1c(0x04)
	enum class ENiagaraSystemSpawnSectionEndBehavior SpawnSectionEndBehavior; // 0x20(0x04)
	enum class ENiagaraAgeUpdateMode AgeUpdateMode; // 0x24(0x01)
	bool bAllowScalability; // 0x25(0x01)
	char pad_26[0x2]; // 0x26(0x02)
};

// ScriptStruct Niagara.MovieSceneNiagaraVectorParameterSectionTemplate
// Size: 0x3e0 (Inherited: 0x38)
struct FMovieSceneNiagaraVectorParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	struct FMovieSceneFloatChannel VectorChannels[0x4]; // 0x38(0x3a0)
	int32_t ChannelsUsed; // 0x3d8(0x04)
	char pad_3DC[0x4]; // 0x3dc(0x04)
};

// ScriptStruct Niagara.EmitterCompiledScriptPair
// Size: 0x98 (Inherited: 0x00)
struct FEmitterCompiledScriptPair {
	char pad_0[0x98]; // 0x00(0x98)
};

// ScriptStruct Niagara.NiagaraBakerTextureSource
// Size: 0x18 (Inherited: 0x00)
struct FNiagaraBakerTextureSource {
	struct FString DisplayString; // 0x00(0x10)
	struct FName SourceName; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Niagara.NiagaraBakerCameraSettings
// Size: 0x50 (Inherited: 0x00)
struct FNiagaraBakerCameraSettings {
	enum class ENiagaraBakerViewMode ViewMode; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FVector ViewportLocation; // 0x08(0x18)
	struct FRotator ViewportRotation; // 0x20(0x18)
	float OrbitDistance; // 0x38(0x04)
	float FOV; // 0x3c(0x04)
	float OrthoWidth; // 0x40(0x04)
	bool bUseAspectRatio; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	float AspectRatio; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct Niagara.NiagaraBakerTextureSettings
// Size: 0x40 (Inherited: 0x00)
struct FNiagaraBakerTextureSettings {
	struct FName OutputName; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FNiagaraBakerTextureSource SourceBinding; // 0x08(0x18)
	char bUseFrameSize : 1; // 0x20(0x01)
	char pad_20_1 : 7; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	struct FIntPoint FrameSize; // 0x24(0x08)
	struct FIntPoint TextureSize; // 0x2c(0x08)
	char pad_34[0x4]; // 0x34(0x04)
	struct UTexture2D* GeneratedTexture; // 0x38(0x08)
};

// ScriptStruct Niagara.NiagaraDataSetID
// Size: 0x08 (Inherited: 0x00)
struct FNiagaraDataSetID {
	struct FName Name; // 0x00(0x04)
	enum class ENiagaraDataSetType Type; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct Niagara.NiagaraDataSetProperties
// Size: 0x18 (Inherited: 0x00)
struct FNiagaraDataSetProperties {
	struct FNiagaraDataSetID ID; // 0x00(0x08)
	struct TArray<struct FNiagaraVariable> Variables; // 0x08(0x10)
};

// ScriptStruct Niagara.NiagaraScriptDataUsageInfo
// Size: 0x01 (Inherited: 0x00)
struct FNiagaraScriptDataUsageInfo {
	bool bReadsAttributeData; // 0x00(0x01)
};

// ScriptStruct Niagara.NiagaraFunctionSignature
// Size: 0x88 (Inherited: 0x00)
struct FNiagaraFunctionSignature {
	struct FName Name; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FNiagaraVariable> Inputs; // 0x08(0x10)
	struct TArray<struct FNiagaraVariable> Outputs; // 0x18(0x10)
	struct FName OwnerName; // 0x28(0x04)
	char bRequiresContext : 1; // 0x2c(0x01)
	char bRequiresExecPin : 1; // 0x2c(0x01)
	char bMemberFunction : 1; // 0x2c(0x01)
	char bExperimental : 1; // 0x2c(0x01)
	char bSupportsCPU : 1; // 0x2c(0x01)
	char bSupportsGPU : 1; // 0x2c(0x01)
	char bWriteFunction : 1; // 0x2c(0x01)
	char bSoftDeprecatedFunction : 1; // 0x2c(0x01)
	char bIsCompileTagGenerator : 1; // 0x2d(0x01)
	char bHidden : 1; // 0x2d(0x01)
	char pad_2D_2 : 6; // 0x2d(0x01)
	char pad_2E[0x2]; // 0x2e(0x02)
	int32_t ModuleUsageBitmask; // 0x30(0x04)
	int32_t ContextStageIndex; // 0x34(0x04)
	struct TMap<struct FName, struct FName> FunctionSpecifiers; // 0x38(0x50)
};

// ScriptStruct Niagara.NiagaraScriptDataInterfaceInfo
// Size: 0x28 (Inherited: 0x00)
struct FNiagaraScriptDataInterfaceInfo {
	struct UNiagaraDataInterface* DataInterface; // 0x00(0x08)
	struct FName Name; // 0x08(0x04)
	int32_t UserPtrIdx; // 0x0c(0x04)
	struct FNiagaraTypeDefinition Type; // 0x10(0x10)
	struct FName RegisteredParameterMapRead; // 0x20(0x04)
	struct FName RegisteredParameterMapWrite; // 0x24(0x04)
};

// ScriptStruct Niagara.NiagaraTypeDefinition
// Size: 0x10 (Inherited: 0x00)
struct FNiagaraTypeDefinition {
	struct UObject* ClassStructOrEnum; // 0x00(0x08)
	uint16_t UnderlyingType; // 0x08(0x02)
	char Flags; // 0x0a(0x01)
	char pad_B[0x5]; // 0x0b(0x05)
};

// ScriptStruct Niagara.NiagaraScriptDataInterfaceCompileInfo
// Size: 0x28 (Inherited: 0x00)
struct FNiagaraScriptDataInterfaceCompileInfo {
	struct FName Name; // 0x00(0x04)
	int32_t UserPtrIdx; // 0x04(0x04)
	struct FNiagaraTypeDefinition Type; // 0x08(0x10)
	struct FName RegisteredParameterMapRead; // 0x18(0x04)
	struct FName RegisteredParameterMapWrite; // 0x1c(0x04)
	bool bIsPlaceholder; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Niagara.NiagaraStatScope
// Size: 0x08 (Inherited: 0x00)
struct FNiagaraStatScope {
	struct FName FullName; // 0x00(0x04)
	struct FName FriendlyName; // 0x04(0x04)
};

// ScriptStruct Niagara.VMFunctionSpecifier
// Size: 0x08 (Inherited: 0x00)
struct FVMFunctionSpecifier {
	struct FName Key; // 0x00(0x04)
	struct FName Value; // 0x04(0x04)
};

// ScriptStruct Niagara.VMExternalFunctionBindingInfo
// Size: 0x30 (Inherited: 0x00)
struct FVMExternalFunctionBindingInfo {
	struct FName Name; // 0x00(0x04)
	struct FName OwnerName; // 0x04(0x04)
	struct TArray<bool> InputParamLocations; // 0x08(0x10)
	int32_t NumOutputs; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct FVMFunctionSpecifier> FunctionSpecifiers; // 0x20(0x10)
};

// ScriptStruct Niagara.NiagaraSystemUpdateContext
// Size: 0x78 (Inherited: 0x00)
struct FNiagaraSystemUpdateContext {
	struct TArray<struct UNiagaraComponent*> ComponentsToReset; // 0x00(0x10)
	struct TArray<struct UNiagaraComponent*> ComponentsToReInit; // 0x10(0x10)
	struct TArray<struct UNiagaraComponent*> ComponentsToNotifySimDestroy; // 0x20(0x10)
	struct TArray<struct UNiagaraSystem*> SystemSimsToDestroy; // 0x30(0x10)
	struct TArray<struct UNiagaraSystem*> SystemSimsToRecache; // 0x40(0x10)
	char pad_50[0x28]; // 0x50(0x28)
};

// ScriptStruct Niagara.NiagaraVariableInfo
// Size: 0x38 (Inherited: 0x00)
struct FNiagaraVariableInfo {
	struct FNiagaraVariable Variable; // 0x00(0x18)
	struct FText Definition; // 0x18(0x18)
	struct UNiagaraDataInterface* DataInterface; // 0x30(0x08)
};

// ScriptStruct Niagara.NiagaraVariableAttributeBinding
// Size: 0x40 (Inherited: 0x00)
struct FNiagaraVariableAttributeBinding {
	struct FNiagaraVariableBase ParamMapVariable; // 0x00(0x08)
	struct FNiagaraVariable DataSetVariable; // 0x08(0x18)
	struct FNiagaraVariable RootVariable; // 0x20(0x18)
	enum class ENiagaraBindingSource BindingSourceMode; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	char bBindingExistsOnSource : 1; // 0x3c(0x01)
	char bIsCachedParticleValue : 1; // 0x3c(0x01)
	char pad_3C_2 : 6; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
};

// ScriptStruct Niagara.NiagaraMaterialAttributeBinding
// Size: 0x1c (Inherited: 0x00)
struct FNiagaraMaterialAttributeBinding {
	struct FName MaterialParameterName; // 0x00(0x04)
	struct FNiagaraVariableBase NiagaraVariable; // 0x04(0x08)
	struct FNiagaraVariableBase ResolvedNiagaraVariable; // 0x0c(0x08)
	struct FNiagaraVariableBase NiagaraChildVariable; // 0x14(0x08)
};

// ScriptStruct Niagara.NiagaraVariableDataInterfaceBinding
// Size: 0x18 (Inherited: 0x00)
struct FNiagaraVariableDataInterfaceBinding {
	struct FNiagaraVariable BoundVariable; // 0x00(0x18)
};

// ScriptStruct Niagara.NiagaraScriptVariableBinding
// Size: 0x04 (Inherited: 0x00)
struct FNiagaraScriptVariableBinding {
	struct FName Name; // 0x00(0x04)
};

// ScriptStruct Niagara.NiagaraUserParameterBinding
// Size: 0x18 (Inherited: 0x00)
struct FNiagaraUserParameterBinding {
	struct FNiagaraVariable Parameter; // 0x00(0x18)
};

// ScriptStruct Niagara.NiagaraCompileDependency
// Size: 0x50 (Inherited: 0x00)
struct FNiagaraCompileDependency {
	struct FString LinkerErrorMessage; // 0x00(0x10)
	struct FGuid NodeGUID; // 0x10(0x10)
	struct FGuid PinGuid; // 0x20(0x10)
	struct TArray<struct FGuid> StackGuids; // 0x30(0x10)
	struct FNiagaraVariableBase DependentVariable; // 0x40(0x08)
	bool bDependentVariableFromCustomIterationNamespace; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// ScriptStruct Niagara.NiagaraScalabilityState
// Size: 0x0c (Inherited: 0x00)
struct FNiagaraScalabilityState {
	float Significance; // 0x00(0x04)
	float LastVisibleTime; // 0x04(0x04)
	char pad_8[0x2]; // 0x08(0x02)
	char bCulled : 1; // 0x0a(0x01)
	char bPreviousCulled : 1; // 0x0a(0x01)
	char bCulledByDistance : 1; // 0x0a(0x01)
	char bCulledByInstanceCount : 1; // 0x0a(0x01)
	char bCulledByVisibility : 1; // 0x0a(0x01)
	char bCulledByGlobalBudget : 1; // 0x0a(0x01)
	char pad_A_6 : 2; // 0x0a(0x01)
	char pad_B[0x1]; // 0x0b(0x01)
};

// ScriptStruct Niagara.NCPoolElement
// Size: 0x10 (Inherited: 0x00)
struct FNCPoolElement {
	struct UNiagaraComponent* Component; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Niagara.NCPool
// Size: 0x10 (Inherited: 0x00)
struct FNCPool {
	struct TArray<struct FNCPoolElement> FreeElements; // 0x00(0x10)
};

// ScriptStruct Niagara.NiagaraComponentPropertyBinding
// Size: 0xb0 (Inherited: 0x00)
struct FNiagaraComponentPropertyBinding {
	struct FNiagaraVariableAttributeBinding AttributeBinding; // 0x00(0x40)
	struct FName PropertyName; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FNiagaraTypeDefinition PropertyType; // 0x48(0x10)
	struct FName MetadataSetterName; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct TMap<struct FString, struct FString> PropertySetterParameterDefaults; // 0x60(0x50)
};

// ScriptStruct Niagara.NiagaraEmitterNameSettingsRef
// Size: 0x18 (Inherited: 0x00)
struct FNiagaraEmitterNameSettingsRef {
	struct FName SystemName; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString EmitterName; // 0x08(0x10)
};

// ScriptStruct Niagara.NiagaraCulledComponentInfo
// Size: 0x08 (Inherited: 0x00)
struct FNiagaraCulledComponentInfo {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Niagara.NiagaraDataInterfaceEmitterBinding
// Size: 0x08 (Inherited: 0x00)
struct FNiagaraDataInterfaceEmitterBinding {
	enum class ENiagaraDataInterfaceEmitterBindingMode BindingMode; // 0x00(0x04)
	struct FName EmitterName; // 0x04(0x04)
};

// ScriptStruct Niagara.BasicParticleData
// Size: 0x38 (Inherited: 0x00)
struct FBasicParticleData {
	struct FVector Position; // 0x00(0x18)
	float Size; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FVector Velocity; // 0x20(0x18)
};

// ScriptStruct Niagara.MeshTriCoordinate
// Size: 0x10 (Inherited: 0x00)
struct FMeshTriCoordinate {
	int32_t Tri; // 0x00(0x04)
	struct FVector3f BaryCoord; // 0x04(0x0c)
};

// ScriptStruct Niagara.NiagaraDataInterfaceSplineLUT
// Size: 0x40 (Inherited: 0x00)
struct FNiagaraDataInterfaceSplineLUT {
	struct TArray<struct FVector> Positions; // 0x00(0x10)
	struct TArray<struct FVector> Scales; // 0x10(0x10)
	struct TArray<struct FQuat> Rotations; // 0x20(0x10)
	float SplineLength; // 0x30(0x04)
	float SplineDistanceStep; // 0x34(0x04)
	float InvSplineDistanceStep; // 0x38(0x04)
	int32_t MaxIndex; // 0x3c(0x04)
};

// ScriptStruct Niagara.NDIStaticMeshSectionFilter
// Size: 0x10 (Inherited: 0x00)
struct FNDIStaticMeshSectionFilter {
	struct TArray<int32_t> AllowedMaterialSlots; // 0x00(0x10)
};

// ScriptStruct Niagara.NiagaraUObjectPropertyReaderRemap
// Size: 0x08 (Inherited: 0x00)
struct FNiagaraUObjectPropertyReaderRemap {
	struct FName GraphName; // 0x00(0x04)
	struct FName RemapName; // 0x04(0x04)
};

// ScriptStruct Niagara.NiagaraVariableLayoutInfo
// Size: 0x70 (Inherited: 0x00)
struct FNiagaraVariableLayoutInfo {
	uint32_t FloatComponentStart; // 0x00(0x04)
	uint32_t Int32ComponentStart; // 0x04(0x04)
	uint32_t HalfComponentStart; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FNiagaraTypeLayoutInfo LayoutInfo; // 0x10(0x60)
};

// ScriptStruct Niagara.NiagaraTypeLayoutInfo
// Size: 0x60 (Inherited: 0x00)
struct FNiagaraTypeLayoutInfo {
	struct TArray<uint32_t> FloatComponentByteOffsets; // 0x00(0x10)
	struct TArray<uint32_t> FloatComponentRegisterOffsets; // 0x10(0x10)
	struct TArray<uint32_t> Int32ComponentByteOffsets; // 0x20(0x10)
	struct TArray<uint32_t> Int32ComponentRegisterOffsets; // 0x30(0x10)
	struct TArray<uint32_t> HalfComponentByteOffsets; // 0x40(0x10)
	struct TArray<uint32_t> HalfComponentRegisterOffsets; // 0x50(0x10)
};

// ScriptStruct Niagara.NiagaraDataSetCompiledData
// Size: 0x40 (Inherited: 0x00)
struct FNiagaraDataSetCompiledData {
	struct TArray<struct FNiagaraVariable> Variables; // 0x00(0x10)
	struct TArray<struct FNiagaraVariableLayoutInfo> VariableLayouts; // 0x10(0x10)
	struct FNiagaraDataSetID ID; // 0x20(0x08)
	uint32_t TotalFloatComponents; // 0x28(0x04)
	uint32_t TotalInt32Components; // 0x2c(0x04)
	uint32_t TotalHalfComponents; // 0x30(0x04)
	char bRequiresPersistentIDs : 1; // 0x34(0x01)
	char pad_34_1 : 7; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	enum class ENiagaraSimTarget SimTarget; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct Niagara.NiagaraOutlinerTimingData
// Size: 0x08 (Inherited: 0x00)
struct FNiagaraOutlinerTimingData {
	float GameThread; // 0x00(0x04)
	float RenderThread; // 0x04(0x04)
};

// ScriptStruct Niagara.NiagaraOutlinerEmitterInstanceData
// Size: 0x20 (Inherited: 0x00)
struct FNiagaraOutlinerEmitterInstanceData {
	struct FString EmitterName; // 0x00(0x10)
	enum class ENiagaraSimTarget SimTarget; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	enum class ENiagaraExecutionState ExecState; // 0x14(0x04)
	int32_t NumParticles; // 0x18(0x04)
	char bRequiresPersistentIDs : 1; // 0x1c(0x01)
	char pad_1C_1 : 7; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct Niagara.NiagaraOutlinerSystemInstanceData
// Size: 0x68 (Inherited: 0x00)
struct FNiagaraOutlinerSystemInstanceData {
	struct FString ComponentName; // 0x00(0x10)
	struct FVector3f LWCTile; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct FNiagaraOutlinerEmitterInstanceData> Emitters; // 0x20(0x10)
	enum class ENiagaraExecutionState ActualExecutionState; // 0x30(0x04)
	enum class ENiagaraExecutionState RequestedExecutionState; // 0x34(0x04)
	struct FNiagaraScalabilityState ScalabilityState; // 0x38(0x0c)
	char bPendingKill : 1; // 0x44(0x01)
	char bUsingCullProxy : 1; // 0x44(0x01)
	char pad_44_2 : 6; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	enum class ENCPoolMethod PoolMethod; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	struct FNiagaraOutlinerTimingData AverageTime; // 0x4c(0x08)
	struct FNiagaraOutlinerTimingData MaxTime; // 0x54(0x08)
	enum class ETickingGroup TickGroup; // 0x5c(0x01)
	enum class ENiagaraGpuComputeTickStage GpuTickStage; // 0x5d(0x01)
	char pad_5E[0x2]; // 0x5e(0x02)
	char bIsSolo : 1; // 0x60(0x01)
	char bRequiresDistanceFieldData : 1; // 0x60(0x01)
	char bRequiresDepthBuffer : 1; // 0x60(0x01)
	char bRequiresEarlyViewData : 1; // 0x60(0x01)
	char bRequiresViewUniformBuffer : 1; // 0x60(0x01)
	char bRequiresRayTracingScene : 1; // 0x60(0x01)
	char pad_60_6 : 2; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// ScriptStruct Niagara.NiagaraOutlinerSystemData
// Size: 0x30 (Inherited: 0x00)
struct FNiagaraOutlinerSystemData {
	struct TArray<struct FNiagaraOutlinerSystemInstanceData> SystemInstances; // 0x00(0x10)
	struct FNiagaraOutlinerTimingData AveragePerFrameTime; // 0x10(0x08)
	struct FNiagaraOutlinerTimingData MaxPerFrameTime; // 0x18(0x08)
	struct FNiagaraOutlinerTimingData AveragePerInstanceTime; // 0x20(0x08)
	struct FNiagaraOutlinerTimingData MaxPerInstanceTime; // 0x28(0x08)
};

// ScriptStruct Niagara.NiagaraOutlinerWorldData
// Size: 0x68 (Inherited: 0x00)
struct FNiagaraOutlinerWorldData {
	struct TMap<struct FString, struct FNiagaraOutlinerSystemData> Systems; // 0x00(0x50)
	bool bHasBegunPlay; // 0x50(0x01)
	char WorldType; // 0x51(0x01)
	char NetMode; // 0x52(0x01)
	char pad_53[0x1]; // 0x53(0x01)
	struct FNiagaraOutlinerTimingData AveragePerFrameTime; // 0x54(0x08)
	struct FNiagaraOutlinerTimingData MaxPerFrameTime; // 0x5c(0x08)
	char pad_64[0x4]; // 0x64(0x04)
};

// ScriptStruct Niagara.NiagaraOutlinerData
// Size: 0x50 (Inherited: 0x00)
struct FNiagaraOutlinerData {
	struct TMap<struct FString, struct FNiagaraOutlinerWorldData> WorldData; // 0x00(0x50)
};

// ScriptStruct Niagara.NiagaraDebuggerRequestConnection
// Size: 0x20 (Inherited: 0x00)
struct FNiagaraDebuggerRequestConnection {
	struct FGuid SessionId; // 0x00(0x10)
	struct FGuid InstanceID; // 0x10(0x10)
};

// ScriptStruct Niagara.NiagaraDebuggerAcceptConnection
// Size: 0x20 (Inherited: 0x00)
struct FNiagaraDebuggerAcceptConnection {
	struct FGuid SessionId; // 0x00(0x10)
	struct FGuid InstanceID; // 0x10(0x10)
};

// ScriptStruct Niagara.NiagaraDebuggerConnectionClosed
// Size: 0x20 (Inherited: 0x00)
struct FNiagaraDebuggerConnectionClosed {
	struct FGuid SessionId; // 0x00(0x10)
	struct FGuid InstanceID; // 0x10(0x10)
};

// ScriptStruct Niagara.NiagaraDebuggerExecuteConsoleCommand
// Size: 0x18 (Inherited: 0x00)
struct FNiagaraDebuggerExecuteConsoleCommand {
	struct FString Command; // 0x00(0x10)
	bool bRequiresWorld; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Niagara.NiagaraDebuggerOutlinerUpdate
// Size: 0x50 (Inherited: 0x00)
struct FNiagaraDebuggerOutlinerUpdate {
	struct FNiagaraOutlinerData OutlinerData; // 0x00(0x50)
};

// ScriptStruct Niagara.NiagaraDebugHudTextOptions
// Size: 0x18 (Inherited: 0x00)
struct FNiagaraDebugHudTextOptions {
	enum class ENiagaraDebugHudFont Font; // 0x00(0x04)
	enum class ENiagaraDebugHudHAlign HorizontalAlignment; // 0x04(0x01)
	enum class ENiagaraDebugHudVAlign VerticalAlignment; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	struct FVector2D ScreenOffset; // 0x08(0x10)
};

// ScriptStruct Niagara.NiagaraDebugHUDVariable
// Size: 0x18 (Inherited: 0x00)
struct FNiagaraDebugHUDVariable {
	bool bEnabled; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Name; // 0x08(0x10)
};

// ScriptStruct Niagara.NiagaraDebugHUDSettingsData
// Size: 0x230 (Inherited: 0x00)
struct FNiagaraDebugHUDSettingsData {
	bool bHudEnabled; // 0x00(0x01)
	bool bHudRenderingEnabled; // 0x01(0x01)
	bool bValidateSystemSimulationDataBuffers; // 0x02(0x01)
	bool bValidateParticleDataBuffers; // 0x03(0x01)
	bool bOverviewEnabled; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	enum class ENiagaraDebugHUDOverviewMode OverviewMode; // 0x08(0x04)
	enum class ENiagaraDebugHudFont OverviewFont; // 0x0c(0x04)
	struct FVector2D OverviewLocation; // 0x10(0x10)
	bool bShowRegisteredComponents; // 0x20(0x01)
	bool bOverviewShowFilteredSystemOnly; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)
	struct FString ActorFilter; // 0x28(0x10)
	bool bComponentFilterEnabled; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FString ComponentFilter; // 0x40(0x10)
	bool bSystemFilterEnabled; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct FString SystemFilter; // 0x58(0x10)
	bool bEmitterFilterEnabled; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct FString EmitterFilter; // 0x70(0x10)
	bool bActorFilterEnabled; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	enum class ENiagaraDebugHudVerbosity SystemDebugVerbosity; // 0x84(0x04)
	enum class ENiagaraDebugHudVerbosity SystemEmitterVerbosity; // 0x88(0x04)
	enum class ENiagaraDebugHudVerbosity DataInterfaceVerbosity; // 0x8c(0x04)
	bool bSystemShowBounds; // 0x90(0x01)
	bool bSystemShowActiveOnlyInWorld; // 0x91(0x01)
	bool bShowSystemVariables; // 0x92(0x01)
	char pad_93[0x5]; // 0x93(0x05)
	struct TArray<struct FNiagaraDebugHUDVariable> SystemVariables; // 0x98(0x10)
	struct FNiagaraDebugHudTextOptions SystemTextOptions; // 0xa8(0x18)
	bool bShowParticleVariables; // 0xc0(0x01)
	bool bEnableGpuParticleReadback; // 0xc1(0x01)
	bool bShowParticleIndex; // 0xc2(0x01)
	char pad_C3[0x5]; // 0xc3(0x05)
	struct TArray<struct FNiagaraDebugHUDVariable> ParticlesVariables; // 0xc8(0x10)
	struct FNiagaraDebugHudTextOptions ParticleTextOptions; // 0xd8(0x18)
	bool bShowParticlesVariablesWithSystem; // 0xf0(0x01)
	bool bShowParticleVariablesVertical; // 0xf1(0x01)
	bool bUseMaxParticlesToDisplay; // 0xf2(0x01)
	bool bUseParticleDisplayClip; // 0xf3(0x01)
	char pad_F4[0x4]; // 0xf4(0x04)
	struct FVector2D ParticleDisplayClip; // 0xf8(0x10)
	bool bUseParticleDisplayCenterRadius; // 0x108(0x01)
	char pad_109[0x3]; // 0x109(0x03)
	float ParticleDisplayCenterRadius; // 0x10c(0x04)
	int32_t MaxParticlesToDisplay; // 0x110(0x04)
	int32_t PerfReportFrames; // 0x114(0x04)
	enum class ENiagaraDebugHUDPerfSampleMode PerfSampleMode; // 0x118(0x04)
	enum class ENiagaraDebugHUDPerfGraphMode PerfGraphMode; // 0x11c(0x04)
	int32_t PerfHistoryFrames; // 0x120(0x04)
	float PerfGraphTimeRange; // 0x124(0x04)
	struct FVector2D PerfGraphSize; // 0x128(0x10)
	struct FLinearColor PerfGraphAxisColor; // 0x138(0x10)
	bool bEnableSmoothing; // 0x148(0x01)
	char pad_149[0x3]; // 0x149(0x03)
	int32_t SmoothingWidth; // 0x14c(0x04)
	struct FLinearColor DefaultBackgroundColor; // 0x150(0x10)
	struct FLinearColor OverviewHeadingColor; // 0x160(0x10)
	struct FLinearColor OverviewDetailColor; // 0x170(0x10)
	struct FLinearColor OverviewDetailHighlightColor; // 0x180(0x10)
	struct FLinearColor InWorldErrorTextColor; // 0x190(0x10)
	struct FLinearColor InWorldTextColor; // 0x1a0(0x10)
	struct FLinearColor MessageInfoTextColor; // 0x1b0(0x10)
	struct FLinearColor MessageWarningTextColor; // 0x1c0(0x10)
	struct FLinearColor MessageErrorTextColor; // 0x1d0(0x10)
	float SystemColorTableOpacity; // 0x1e0(0x04)
	uint32_t SystemColorSeed; // 0x1e4(0x04)
	struct FVector SystemColorHSVMin; // 0x1e8(0x18)
	struct FVector SystemColorHSVMax; // 0x200(0x18)
	enum class ENiagaraDebugPlaybackMode PlaybackMode; // 0x218(0x01)
	bool bPlaybackRateEnabled; // 0x219(0x01)
	char pad_21A[0x2]; // 0x21a(0x02)
	float PlaybackRate; // 0x21c(0x04)
	bool bLoopTimeEnabled; // 0x220(0x01)
	char pad_221[0x3]; // 0x221(0x03)
	float LoopTime; // 0x224(0x04)
	bool bShowGlobalBudgetInfo; // 0x228(0x01)
	char pad_229[0x7]; // 0x229(0x07)
};

// ScriptStruct Niagara.NiagaraRequestSimpleClientInfoMessage
// Size: 0x01 (Inherited: 0x00)
struct FNiagaraRequestSimpleClientInfoMessage {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Niagara.NiagaraOutlinerCaptureSettings
// Size: 0x10 (Inherited: 0x00)
struct FNiagaraOutlinerCaptureSettings {
	bool bTriggerCapture; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	uint32_t CaptureDelayFrames; // 0x04(0x04)
	bool bGatherPerfData; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	uint32_t SimCacheCaptureFrames; // 0x0c(0x04)
};

// ScriptStruct Niagara.NiagaraSimpleClientInfo
// Size: 0x40 (Inherited: 0x00)
struct FNiagaraSimpleClientInfo {
	struct TArray<struct FString> Systems; // 0x00(0x10)
	struct TArray<struct FString> Actors; // 0x10(0x10)
	struct TArray<struct FString> Components; // 0x20(0x10)
	struct TArray<struct FString> Emitters; // 0x30(0x10)
};

// ScriptStruct Niagara.NiagaraSystemSimCacheCaptureRequest
// Size: 0x0c (Inherited: 0x00)
struct FNiagaraSystemSimCacheCaptureRequest {
	struct FName ComponentName; // 0x00(0x04)
	uint32_t CaptureDelayFrames; // 0x04(0x04)
	uint32_t CaptureFrames; // 0x08(0x04)
};

// ScriptStruct Niagara.NiagaraSystemSimCacheCaptureReply
// Size: 0x18 (Inherited: 0x00)
struct FNiagaraSystemSimCacheCaptureReply {
	struct FName ComponentName; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<char> SimCacheData; // 0x08(0x10)
};

// ScriptStruct Niagara.NiagaraGraphViewSettings
// Size: 0x18 (Inherited: 0x00)
struct FNiagaraGraphViewSettings {
	struct FVector2D Location; // 0x00(0x10)
	float Zoom; // 0x10(0x04)
	bool bIsValid; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct Niagara.NiagaraLinearRamp
// Size: 0x10 (Inherited: 0x00)
struct FNiagaraLinearRamp {
	float StartX; // 0x00(0x04)
	float StartY; // 0x04(0x04)
	float EndX; // 0x08(0x04)
	float EndY; // 0x0c(0x04)
};

// ScriptStruct Niagara.NiagaraGlobalBudgetScaling
// Size: 0x38 (Inherited: 0x00)
struct FNiagaraGlobalBudgetScaling {
	char bCullByGlobalBudget : 1; // 0x00(0x01)
	char bScaleMaxDistanceByGlobalBudgetUse : 1; // 0x00(0x01)
	char bScaleMaxInstanceCountByGlobalBudgetUse : 1; // 0x00(0x01)
	char bScaleSystemInstanceCountByGlobalBudgetUse : 1; // 0x00(0x01)
	char pad_0_4 : 4; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float MaxGlobalBudgetUsage; // 0x04(0x04)
	struct FNiagaraLinearRamp MaxDistanceScaleByGlobalBudgetUse; // 0x08(0x10)
	struct FNiagaraLinearRamp MaxInstanceCountScaleByGlobalBudgetUse; // 0x18(0x10)
	struct FNiagaraLinearRamp MaxSystemInstanceCountScaleByGlobalBudgetUse; // 0x28(0x10)
};

// ScriptStruct Niagara.NiagaraSystemVisibilityCullingSettings
// Size: 0x0c (Inherited: 0x00)
struct FNiagaraSystemVisibilityCullingSettings {
	char bCullWhenNotRendered : 1; // 0x00(0x01)
	char bCullByViewFrustum : 1; // 0x00(0x01)
	char bAllowPreCullingByViewFrustum : 1; // 0x00(0x01)
	char pad_0_3 : 5; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float MaxTimeOutsideViewFrustum; // 0x04(0x04)
	float MaxTimeWithoutRender; // 0x08(0x04)
};

// ScriptStruct Niagara.NiagaraSystemScalabilitySettings
// Size: 0x98 (Inherited: 0x00)
struct FNiagaraSystemScalabilitySettings {
	struct FNiagaraPlatformSet Platforms; // 0x00(0x30)
	char bCullByDistance : 1; // 0x30(0x01)
	char bCullMaxInstanceCount : 1; // 0x30(0x01)
	char bCullPerSystemMaxInstanceCount : 1; // 0x30(0x01)
	char pad_30_3 : 5; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float MaxDistance; // 0x34(0x04)
	char bCullByMaxTimeWithoutRender : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	int32_t MaxInstances; // 0x3c(0x04)
	int32_t MaxSystemInstances; // 0x40(0x04)
	float MaxTimeWithoutRender; // 0x44(0x04)
	enum class ENiagaraCullProxyMode CullProxyMode; // 0x48(0x04)
	int32_t MaxSystemProxies; // 0x4c(0x04)
	struct FNiagaraSystemVisibilityCullingSettings VisibilityCulling; // 0x50(0x0c)
	struct FNiagaraGlobalBudgetScaling BudgetScaling; // 0x5c(0x38)
	char pad_94[0x4]; // 0x94(0x04)
};

// ScriptStruct Niagara.NiagaraPlatformSet
// Size: 0x30 (Inherited: 0x00)
struct FNiagaraPlatformSet {
	int32_t QualityLevelMask; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FNiagaraDeviceProfileStateEntry> DeviceProfileStates; // 0x08(0x10)
	struct TArray<struct FNiagaraPlatformSetCVarCondition> CVarConditions; // 0x18(0x10)
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct Niagara.NiagaraPlatformSetCVarCondition
// Size: 0x30 (Inherited: 0x00)
struct FNiagaraPlatformSetCVarCondition {
	struct FName CVarName; // 0x00(0x04)
	enum class ENiagaraCVarConditionResponse PassResponse; // 0x04(0x01)
	enum class ENiagaraCVarConditionResponse FailResponse; // 0x05(0x01)
	bool Value; // 0x06(0x01)
	char pad_7[0x1]; // 0x07(0x01)
	int32_t MinInt; // 0x08(0x04)
	int32_t MaxInt; // 0x0c(0x04)
	float MinFloat; // 0x10(0x04)
	float MaxFloat; // 0x14(0x04)
	char bUseMinInt : 1; // 0x18(0x01)
	char bUseMaxInt : 1; // 0x18(0x01)
	char bUseMinFloat : 1; // 0x18(0x01)
	char bUseMaxFloat : 1; // 0x18(0x01)
	char pad_18_4 : 4; // 0x18(0x01)
	char pad_19[0x17]; // 0x19(0x17)
};

// ScriptStruct Niagara.NiagaraDeviceProfileStateEntry
// Size: 0x0c (Inherited: 0x00)
struct FNiagaraDeviceProfileStateEntry {
	struct FName ProfileName; // 0x00(0x04)
	uint32_t QualityLevelMask; // 0x04(0x04)
	uint32_t SetQualityLevelMask; // 0x08(0x04)
};

// ScriptStruct Niagara.NiagaraSystemScalabilitySettingsArray
// Size: 0x10 (Inherited: 0x00)
struct FNiagaraSystemScalabilitySettingsArray {
	struct TArray<struct FNiagaraSystemScalabilitySettings> Settings; // 0x00(0x10)
};

// ScriptStruct Niagara.NiagaraSystemScalabilityOverride
// Size: 0xa0 (Inherited: 0x98)
struct FNiagaraSystemScalabilityOverride : FNiagaraSystemScalabilitySettings {
	char bOverrideDistanceSettings : 1; // 0x98(0x01)
	char bOverrideInstanceCountSettings : 1; // 0x98(0x01)
	char bOverridePerSystemInstanceCountSettings : 1; // 0x98(0x01)
	char bOverrideVisibilitySettings : 1; // 0x98(0x01)
	char bOverrideGlobalBudgetScalingSettings : 1; // 0x98(0x01)
	char bOverrideCullProxySettings : 1; // 0x98(0x01)
	char pad_98_6 : 2; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
};

// ScriptStruct Niagara.NiagaraSystemScalabilityOverrides
// Size: 0x10 (Inherited: 0x00)
struct FNiagaraSystemScalabilityOverrides {
	struct TArray<struct FNiagaraSystemScalabilityOverride> Overrides; // 0x00(0x10)
};

// ScriptStruct Niagara.NiagaraEmitterScalabilitySettings
// Size: 0x38 (Inherited: 0x00)
struct FNiagaraEmitterScalabilitySettings {
	struct FNiagaraPlatformSet Platforms; // 0x00(0x30)
	char bScaleSpawnCount : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float SpawnCountScale; // 0x34(0x04)
};

// ScriptStruct Niagara.NiagaraEmitterScalabilitySettingsArray
// Size: 0x10 (Inherited: 0x00)
struct FNiagaraEmitterScalabilitySettingsArray {
	struct TArray<struct FNiagaraEmitterScalabilitySettings> Settings; // 0x00(0x10)
};

// ScriptStruct Niagara.NiagaraEmitterScalabilityOverride
// Size: 0x40 (Inherited: 0x38)
struct FNiagaraEmitterScalabilityOverride : FNiagaraEmitterScalabilitySettings {
	char bOverrideSpawnCountScale : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct Niagara.NiagaraEmitterScalabilityOverrides
// Size: 0x10 (Inherited: 0x00)
struct FNiagaraEmitterScalabilityOverrides {
	struct TArray<struct FNiagaraEmitterScalabilityOverride> Overrides; // 0x00(0x10)
};

// ScriptStruct Niagara.NiagaraEventReceiverProperties
// Size: 0x0c (Inherited: 0x00)
struct FNiagaraEventReceiverProperties {
	struct FName Name; // 0x00(0x04)
	struct FName SourceEventGenerator; // 0x04(0x04)
	struct FName SourceEmitter; // 0x08(0x04)
};

// ScriptStruct Niagara.NiagaraEventGeneratorProperties
// Size: 0x48 (Inherited: 0x00)
struct FNiagaraEventGeneratorProperties {
	int32_t MaxEventsPerFrame; // 0x00(0x04)
	struct FName ID; // 0x04(0x04)
	struct FNiagaraDataSetCompiledData DataSetCompiledData; // 0x08(0x40)
};

// ScriptStruct Niagara.NiagaraEmitterScriptProperties
// Size: 0x28 (Inherited: 0x00)
struct FNiagaraEmitterScriptProperties {
	struct UNiagaraScript* Script; // 0x00(0x08)
	struct TArray<struct FNiagaraEventReceiverProperties> EventReceivers; // 0x08(0x10)
	struct TArray<struct FNiagaraEventGeneratorProperties> EventGenerators; // 0x18(0x10)
};

// ScriptStruct Niagara.NiagaraEventScriptProperties
// Size: 0x50 (Inherited: 0x28)
struct FNiagaraEventScriptProperties : FNiagaraEmitterScriptProperties {
	enum class EScriptExecutionMode ExecutionMode; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	uint32_t SpawnNumber; // 0x2c(0x04)
	uint32_t MaxEventsPerFrame; // 0x30(0x04)
	struct FGuid SourceEmitterID; // 0x34(0x10)
	struct FName SourceEventName; // 0x44(0x04)
	bool bRandomSpawnNumber; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	uint32_t MinSpawnNumber; // 0x4c(0x04)
};

// ScriptStruct Niagara.NiagaraDetailsLevelScaleOverrides
// Size: 0x14 (Inherited: 0x00)
struct FNiagaraDetailsLevelScaleOverrides {
	float Low; // 0x00(0x04)
	float Medium; // 0x04(0x04)
	float High; // 0x08(0x04)
	float Epic; // 0x0c(0x04)
	float Cine; // 0x10(0x04)
};

// ScriptStruct Niagara.VersionedNiagaraEmitterData
// Size: 0x308 (Inherited: 0x00)
struct FVersionedNiagaraEmitterData {
	struct FNiagaraAssetVersion Version; // 0x00(0x1c)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FText VersionChangeDescription; // 0x20(0x18)
	enum class ENiagaraPythonUpdateScriptReference UpdateScriptExecution; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FString PythonUpdateScript; // 0x40(0x10)
	struct FFilePath ScriptAsset; // 0x50(0x10)
	bool bLocalSpace; // 0x60(0x01)
	bool bDeterminism; // 0x61(0x01)
	char pad_62[0x2]; // 0x62(0x02)
	int32_t RandomSeed; // 0x64(0x04)
	char bInterpolatedSpawning : 1; // 0x68(0x01)
	char pad_68_1 : 7; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	enum class ENiagaraSimTarget SimTarget; // 0x6c(0x01)
	enum class ENiagaraEmitterCalculateBoundMode CalculateBoundsMode; // 0x6d(0x01)
	char pad_6E[0x2]; // 0x6e(0x02)
	struct FBox FixedBounds; // 0x70(0x38)
	char bRequiresPersistentIDs : 1; // 0xa8(0x01)
	char bCombineEventSpawn : 1; // 0xa8(0x01)
	char pad_A8_2 : 6; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
	struct TArray<struct FNiagaraEventScriptProperties> EventHandlerScriptProps; // 0xb0(0x10)
	struct FNiagaraPlatformSet Platforms; // 0xc0(0x30)
	struct FNiagaraEmitterScalabilityOverrides ScalabilityOverrides; // 0xf0(0x10)
	char bLimitDeltaTime : 1; // 0x100(0x01)
	char pad_100_1 : 7; // 0x100(0x01)
	char pad_101[0x3]; // 0x101(0x03)
	int32_t MaxGPUParticlesSpawnPerFrame; // 0x104(0x04)
	float MaxDeltaTimePerTick; // 0x108(0x04)
	enum class EParticleAllocationMode AllocationMode; // 0x10c(0x01)
	char pad_10D[0x3]; // 0x10d(0x03)
	int32_t PreAllocationCount; // 0x110(0x04)
	char pad_114[0x4]; // 0x114(0x04)
	struct FNiagaraEmitterScriptProperties UpdateScriptProps; // 0x118(0x28)
	struct FNiagaraEmitterScriptProperties SpawnScriptProps; // 0x140(0x28)
	struct FNiagaraParameterStore RendererBindings; // 0x168(0x88)
	struct TArray<struct UNiagaraRendererProperties*> RendererProperties; // 0x1f0(0x10)
	struct TArray<struct UNiagaraSimulationStageBase*> SimulationStages; // 0x200(0x10)
	struct UNiagaraScript* GPUComputeScript; // 0x210(0x08)
	struct TArray<struct FName> SharedEventGeneratorIds; // 0x218(0x10)
	struct FNiagaraEmitterScalabilitySettings CurrentScalabilitySettings; // 0x228(0x38)
	char pad_260[0xa8]; // 0x260(0xa8)
};

// ScriptStruct Niagara.NiagaraParameterStore
// Size: 0x88 (Inherited: 0x00)
struct FNiagaraParameterStore {
	char pad_0[0x8]; // 0x00(0x08)
	struct TWeakObjectPtr<struct UObject> Owner; // 0x08(0x08)
	struct TArray<struct FNiagaraVariableWithOffset> SortedParameterOffsets; // 0x10(0x10)
	struct TArray<char> ParameterData; // 0x20(0x10)
	struct TArray<struct UNiagaraDataInterface*> DataInterfaces; // 0x30(0x10)
	struct TArray<struct UObject*> UObjects; // 0x40(0x10)
	struct TArray<struct FNiagaraPositionSource> OriginalPositionData; // 0x50(0x10)
	char pad_60[0x28]; // 0x60(0x28)
};

// ScriptStruct Niagara.NiagaraPositionSource
// Size: 0x20 (Inherited: 0x00)
struct FNiagaraPositionSource {
	struct FName Name; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FVector Value; // 0x08(0x18)
};

// ScriptStruct Niagara.NiagaraVariableWithOffset
// Size: 0x20 (Inherited: 0x08)
struct FNiagaraVariableWithOffset : FNiagaraVariableBase {
	int32_t Offset; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FNiagaraLwcStructConverter StructConverter; // 0x10(0x10)
};

// ScriptStruct Niagara.NiagaraLwcStructConverter
// Size: 0x10 (Inherited: 0x00)
struct FNiagaraLwcStructConverter {
	struct TArray<struct FNiagaraStructConversionStep> ConversionSteps; // 0x00(0x10)
};

// ScriptStruct Niagara.NiagaraStructConversionStep
// Size: 0x14 (Inherited: 0x00)
struct FNiagaraStructConversionStep {
	int32_t SourceBytes; // 0x00(0x04)
	int32_t SourceOffset; // 0x04(0x04)
	int32_t SimulationBytes; // 0x08(0x04)
	int32_t SimulationOffset; // 0x0c(0x04)
	enum class ENiagaraStructConversionType ConversionType; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct Niagara.NiagaraAssetVersion
// Size: 0x1c (Inherited: 0x00)
struct FNiagaraAssetVersion {
	int32_t MajorVersion; // 0x00(0x04)
	int32_t MinorVersion; // 0x04(0x04)
	struct FGuid VersionGuid; // 0x08(0x10)
	bool bIsVisibleInVersionSelector; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
};

// ScriptStruct Niagara.NiagaraEmitterHandle
// Size: 0x40 (Inherited: 0x00)
struct FNiagaraEmitterHandle {
	struct FGuid ID; // 0x00(0x10)
	struct FName IdName; // 0x10(0x04)
	bool bIsEnabled; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FName Name; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct UNiagaraEmitter* Instance; // 0x20(0x08)
	struct FVersionedNiagaraEmitter VersionedInstance; // 0x28(0x18)
};

// ScriptStruct Niagara.VersionedNiagaraEmitter
// Size: 0x18 (Inherited: 0x00)
struct FVersionedNiagaraEmitter {
	struct UNiagaraEmitter* Emitter; // 0x00(0x08)
	struct FGuid Version; // 0x08(0x10)
};

// ScriptStruct Niagara.NiagaraCollisionEventPayload
// Size: 0x50 (Inherited: 0x00)
struct FNiagaraCollisionEventPayload {
	struct FVector CollisionPos; // 0x00(0x18)
	struct FVector CollisionNormal; // 0x18(0x18)
	struct FVector CollisionVelocity; // 0x30(0x18)
	int32_t ParticleIndex; // 0x48(0x04)
	int32_t PhysicalMaterialIndex; // 0x4c(0x04)
};

// ScriptStruct Niagara.NiagaraMeshMaterialOverride
// Size: 0x20 (Inherited: 0x00)
struct FNiagaraMeshMaterialOverride {
	struct UMaterialInterface* ExplicitMat; // 0x00(0x08)
	struct FNiagaraUserParameterBinding UserParamBinding; // 0x08(0x18)
};

// ScriptStruct Niagara.NiagaraMeshRendererMeshProperties
// Size: 0x70 (Inherited: 0x00)
struct FNiagaraMeshRendererMeshProperties {
	struct UStaticMesh* Mesh; // 0x00(0x08)
	struct FNiagaraUserParameterBinding UserParamBinding; // 0x08(0x18)
	struct FVector Scale; // 0x20(0x18)
	struct FRotator Rotation; // 0x38(0x18)
	struct FVector PivotOffset; // 0x50(0x18)
	enum class ENiagaraMeshPivotOffsetSpace PivotOffsetSpace; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// ScriptStruct Niagara.ParameterDefinitionsSubscription
// Size: 0x01 (Inherited: 0x00)
struct FParameterDefinitionsSubscription {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Niagara.NiagaraParameters
// Size: 0x10 (Inherited: 0x00)
struct FNiagaraParameters {
	struct TArray<struct FNiagaraVariable> Parameters; // 0x00(0x10)
};

// ScriptStruct Niagara.NiagaraBoundParameter
// Size: 0x20 (Inherited: 0x00)
struct FNiagaraBoundParameter {
	struct FNiagaraVariable Parameter; // 0x00(0x18)
	int32_t SrcOffset; // 0x18(0x04)
	int32_t DestOffset; // 0x1c(0x04)
};

// ScriptStruct Niagara.NiagaraPerfBaselineStats
// Size: 0x10 (Inherited: 0x00)
struct FNiagaraPerfBaselineStats {
	float PerInstanceAvg_GT; // 0x00(0x04)
	float PerInstanceAvg_RT; // 0x04(0x04)
	float PerInstanceMax_GT; // 0x08(0x04)
	float PerInstanceMax_RT; // 0x0c(0x04)
};

// ScriptStruct Niagara.NiagaraPlatformSetConflictEntry
// Size: 0x08 (Inherited: 0x00)
struct FNiagaraPlatformSetConflictEntry {
	struct FName ProfileName; // 0x00(0x04)
	int32_t QualityLevelMask; // 0x04(0x04)
};

// ScriptStruct Niagara.NiagaraPlatformSetConflictInfo
// Size: 0x18 (Inherited: 0x00)
struct FNiagaraPlatformSetConflictInfo {
	int32_t SetAIndex; // 0x00(0x04)
	int32_t SetBIndex; // 0x04(0x04)
	struct TArray<struct FNiagaraPlatformSetConflictEntry> Conflicts; // 0x08(0x10)
};

// ScriptStruct Niagara.NiagaraPlatformSetRedirect
// Size: 0x78 (Inherited: 0x00)
struct FNiagaraPlatformSetRedirect {
	struct TArray<struct FName> ProfileNames; // 0x00(0x10)
	enum class ENiagaraDeviceProfileRedirectMode Mode; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FName RedirectProfileName; // 0x14(0x04)
	struct FNiagaraPlatformSetCVarCondition CVarConditionEnabled; // 0x18(0x30)
	struct FNiagaraPlatformSetCVarCondition CVarConditionDisabled; // 0x48(0x30)
};

// ScriptStruct Niagara.NiagaraRendererMaterialScalarParameter
// Size: 0x08 (Inherited: 0x00)
struct FNiagaraRendererMaterialScalarParameter {
	struct FName MaterialParameterName; // 0x00(0x04)
	float Value; // 0x04(0x04)
};

// ScriptStruct Niagara.NiagaraRendererMaterialVectorParameter
// Size: 0x14 (Inherited: 0x00)
struct FNiagaraRendererMaterialVectorParameter {
	struct FName MaterialParameterName; // 0x00(0x04)
	struct FLinearColor Value; // 0x04(0x10)
};

// ScriptStruct Niagara.NiagaraRendererMaterialTextureParameter
// Size: 0x10 (Inherited: 0x00)
struct FNiagaraRendererMaterialTextureParameter {
	struct FName MaterialParameterName; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UTexture* Texture; // 0x08(0x08)
};

// ScriptStruct Niagara.NiagaraRendererMaterialParameters
// Size: 0x40 (Inherited: 0x00)
struct FNiagaraRendererMaterialParameters {
	struct TArray<struct FNiagaraMaterialAttributeBinding> AttributeBindings; // 0x00(0x10)
	struct TArray<struct FNiagaraRendererMaterialScalarParameter> ScalarParameters; // 0x10(0x10)
	struct TArray<struct FNiagaraRendererMaterialVectorParameter> VectorParameters; // 0x20(0x10)
	struct TArray<struct FNiagaraRendererMaterialTextureParameter> TextureParameters; // 0x30(0x10)
};

// ScriptStruct Niagara.NiagaraRibbonShapeCustomVertex
// Size: 0x14 (Inherited: 0x00)
struct FNiagaraRibbonShapeCustomVertex {
	struct FVector2f Position; // 0x00(0x08)
	struct FVector2f Normal; // 0x08(0x08)
	float TextureV; // 0x10(0x04)
};

// ScriptStruct Niagara.NiagaraRibbonUVSettings
// Size: 0x38 (Inherited: 0x00)
struct FNiagaraRibbonUVSettings {
	enum class ENiagaraRibbonUVDistributionMode DistributionMode; // 0x00(0x04)
	enum class ENiagaraRibbonUVEdgeMode LeadingEdgeMode; // 0x04(0x04)
	enum class ENiagaraRibbonUVEdgeMode TrailingEdgeMode; // 0x08(0x04)
	float TilingLength; // 0x0c(0x04)
	struct FVector2D Offset; // 0x10(0x10)
	struct FVector2D Scale; // 0x20(0x10)
	bool bEnablePerParticleUOverride; // 0x30(0x01)
	bool bEnablePerParticleVRangeOverride; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
};

// ScriptStruct Niagara.NiagaraScalabilityManager
// Size: 0xd8 (Inherited: 0x00)
struct FNiagaraScalabilityManager {
	struct UNiagaraEffectType* EffectType; // 0x00(0x08)
	struct TArray<struct UNiagaraComponent*> ManagedComponents; // 0x08(0x10)
	char pad_18[0xc0]; // 0x18(0xc0)
};

// ScriptStruct Niagara.NiagaraModuleDependency
// Size: 0x60 (Inherited: 0x00)
struct FNiagaraModuleDependency {
	struct FName ID; // 0x00(0x04)
	enum class ENiagaraModuleDependencyType Type; // 0x04(0x01)
	enum class ENiagaraModuleDependencyScriptConstraint ScriptConstraint; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	struct FString RequiredVersion; // 0x08(0x10)
	int32_t OnlyEvaluateInScriptUsage; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FText Description; // 0x20(0x18)
	char pad_38[0x28]; // 0x38(0x28)
};

// ScriptStruct Niagara.NiagaraCompilerTag
// Size: 0x28 (Inherited: 0x00)
struct FNiagaraCompilerTag {
	struct FNiagaraVariable Variable; // 0x00(0x18)
	struct FString StringValue; // 0x18(0x10)
};

// ScriptStruct Niagara.NiagaraVMExecutableDataId
// Size: 0x58 (Inherited: 0x00)
struct FNiagaraVMExecutableDataId {
	struct FGuid CompilerVersionID; // 0x00(0x10)
	enum class ENiagaraScriptUsage ScriptUsageType; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FGuid ScriptUsageTypeID; // 0x14(0x10)
	char bUsesRapidIterationParams : 1; // 0x24(0x01)
	char bDisableDebugSwitches : 1; // 0x24(0x01)
	char bInterpolatedSpawn : 1; // 0x24(0x01)
	char bRequiresPersistentIDs : 1; // 0x24(0x01)
	char pad_24_4 : 4; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	struct FGuid BaseScriptID; // 0x28(0x10)
	struct FNiagaraCompileHash BaseScriptCompileHash; // 0x38(0x10)
	struct FGuid ScriptVersionID; // 0x48(0x10)
};

// ScriptStruct Niagara.NiagaraVMExecutableByteCode
// Size: 0x18 (Inherited: 0x00)
struct FNiagaraVMExecutableByteCode {
	struct TArray<char> Data; // 0x00(0x10)
	int32_t UncompressedSize; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Niagara.NiagaraVMExecutableData
// Size: 0x180 (Inherited: 0x00)
struct FNiagaraVMExecutableData {
	struct FNiagaraVMExecutableByteCode ByteCode; // 0x00(0x18)
	struct FNiagaraVMExecutableByteCode OptimizedByteCode; // 0x18(0x18)
	char pad_30[0x38]; // 0x30(0x38)
	int32_t NumTempRegisters; // 0x68(0x04)
	int32_t NumUserPtrs; // 0x6c(0x04)
	struct TArray<struct FNiagaraCompilerTag> CompileTags; // 0x70(0x10)
	struct TArray<char> ScriptLiterals; // 0x80(0x10)
	struct TArray<struct FNiagaraVariable> Attributes; // 0x90(0x10)
	struct FNiagaraScriptDataUsageInfo DataUsage; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct TArray<struct FNiagaraScriptDataInterfaceCompileInfo> DataInterfaceInfo; // 0xa8(0x10)
	struct TArray<struct FVMExternalFunctionBindingInfo> CalledVMExternalFunctions; // 0xb8(0x10)
	char pad_C8[0x10]; // 0xc8(0x10)
	struct TArray<struct FNiagaraDataSetID> ReadDataSets; // 0xd8(0x10)
	struct TArray<struct FNiagaraDataSetProperties> WriteDataSets; // 0xe8(0x10)
	struct TArray<struct FNiagaraStatScope> StatScopes; // 0xf8(0x10)
	struct FNiagaraShaderScriptParametersMetadata ShaderScriptParametersMetadata; // 0x108(0x48)
	enum class ENiagaraScriptCompileStatus LastCompileStatus; // 0x150(0x01)
	char pad_151[0x7]; // 0x151(0x07)
	struct TArray<struct FSimulationStageMetaData> SimulationStageMetaData; // 0x158(0x10)
	struct TArray<char> ExperimentalContextData; // 0x168(0x10)
	char bReadsSignificanceIndex : 1; // 0x178(0x01)
	char bNeedsGPUContextInit : 1; // 0x178(0x01)
	char pad_178_2 : 6; // 0x178(0x01)
	char pad_179[0x7]; // 0x179(0x07)
};

// ScriptStruct Niagara.VersionedNiagaraScriptData
// Size: 0x01 (Inherited: 0x00)
struct FVersionedNiagaraScriptData {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Niagara.NiagaraScriptExecutionPaddingInfo
// Size: 0x08 (Inherited: 0x00)
struct FNiagaraScriptExecutionPaddingInfo {
	uint16_t SrcOffset; // 0x00(0x02)
	uint16_t DestOffset; // 0x02(0x02)
	uint16_t SrcSize; // 0x04(0x02)
	uint16_t DestSize; // 0x06(0x02)
};

// ScriptStruct Niagara.NiagaraScriptExecutionParameterStore
// Size: 0xa8 (Inherited: 0x88)
struct FNiagaraScriptExecutionParameterStore : FNiagaraParameterStore {
	int32_t ParameterSize; // 0x88(0x04)
	uint32_t PaddedParameterSize; // 0x8c(0x04)
	struct TArray<struct FNiagaraScriptExecutionPaddingInfo> PaddingInfo; // 0x90(0x10)
	char bInitialized : 1; // 0xa0(0x01)
	char pad_A0_1 : 7; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
};

// ScriptStruct Niagara.NiagaraScriptInstanceParameterStore
// Size: 0x98 (Inherited: 0x88)
struct FNiagaraScriptInstanceParameterStore : FNiagaraParameterStore {
	char pad_88[0x10]; // 0x88(0x10)
};

// ScriptStruct Niagara.NiagaraScriptHighlight
// Size: 0x28 (Inherited: 0x00)
struct FNiagaraScriptHighlight {
	struct FLinearColor Color; // 0x00(0x10)
	struct FText DisplayName; // 0x10(0x18)
};

// ScriptStruct Niagara.NiagaraSimCacheDataBuffers
// Size: 0x50 (Inherited: 0x00)
struct FNiagaraSimCacheDataBuffers {
	uint32_t NumInstances; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<char> FloatData; // 0x08(0x10)
	struct TArray<char> HalfData; // 0x18(0x10)
	struct TArray<char> Int32Data; // 0x28(0x10)
	struct TArray<int32_t> IDToIndexTable; // 0x38(0x10)
	uint32_t IDAcquireTag; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct Niagara.NiagaraSimCacheEmitterFrame
// Size: 0x90 (Inherited: 0x00)
struct FNiagaraSimCacheEmitterFrame {
	struct FBox LocalBounds; // 0x00(0x38)
	int32_t TotalSpawnedParticles; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FNiagaraSimCacheDataBuffers ParticleDataBuffers; // 0x40(0x50)
};

// ScriptStruct Niagara.NiagaraSimCacheSystemFrame
// Size: 0x88 (Inherited: 0x00)
struct FNiagaraSimCacheSystemFrame {
	struct FBox LocalBounds; // 0x00(0x38)
	struct FNiagaraSimCacheDataBuffers SystemDataBuffers; // 0x38(0x50)
};

// ScriptStruct Niagara.NiagaraSimCacheFrame
// Size: 0x110 (Inherited: 0x00)
struct FNiagaraSimCacheFrame {
	struct FTransform LocalToWorld; // 0x00(0x60)
	struct FVector3f LWCTile; // 0x60(0x0c)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct FNiagaraSimCacheSystemFrame SystemData; // 0x70(0x88)
	struct TArray<struct FNiagaraSimCacheEmitterFrame> EmitterData; // 0xf8(0x10)
	char pad_108[0x8]; // 0x108(0x08)
};

// ScriptStruct Niagara.NiagaraSimCacheVariable
// Size: 0x14 (Inherited: 0x00)
struct FNiagaraSimCacheVariable {
	struct FNiagaraVariableBase Variable; // 0x00(0x08)
	uint16_t FloatOffset; // 0x08(0x02)
	uint16_t FloatCount; // 0x0a(0x02)
	uint16_t HalfOffset; // 0x0c(0x02)
	uint16_t HalfCount; // 0x0e(0x02)
	uint16_t Int32Offset; // 0x10(0x02)
	uint16_t Int32Count; // 0x12(0x02)
};

// ScriptStruct Niagara.NiagaraSimCacheDataBuffersLayout
// Size: 0x60 (Inherited: 0x00)
struct FNiagaraSimCacheDataBuffersLayout {
	struct FName LayoutName; // 0x00(0x04)
	enum class ENiagaraSimTarget SimTarget; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct TArray<struct FNiagaraSimCacheVariable> Variables; // 0x08(0x10)
	uint16_t FloatCount; // 0x18(0x02)
	uint16_t HalfCount; // 0x1a(0x02)
	uint16_t Int32Count; // 0x1c(0x02)
	bool bLocalSpace; // 0x1e(0x01)
	char pad_1F[0x1]; // 0x1f(0x01)
	struct TArray<struct FName> RebaseVariableNames; // 0x20(0x10)
	char pad_30[0x30]; // 0x30(0x30)
};

// ScriptStruct Niagara.NiagaraSimCacheLayout
// Size: 0x70 (Inherited: 0x00)
struct FNiagaraSimCacheLayout {
	struct FNiagaraSimCacheDataBuffersLayout SystemLayout; // 0x00(0x60)
	struct TArray<struct FNiagaraSimCacheDataBuffersLayout> EmitterLayouts; // 0x60(0x10)
};

// ScriptStruct Niagara.NiagaraStackSection
// Size: 0x38 (Inherited: 0x00)
struct FNiagaraStackSection {
	struct FName SectionIdentifier; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FText SectionDisplayName; // 0x08(0x18)
	struct TArray<struct FText> Categories; // 0x20(0x10)
	bool bEnabled; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct Niagara.NiagaraEmitterCompiledData
// Size: 0xf8 (Inherited: 0x00)
struct FNiagaraEmitterCompiledData {
	struct TArray<struct FName> SpawnAttributes; // 0x00(0x10)
	struct FNiagaraVariable EmitterSpawnIntervalVar; // 0x10(0x18)
	struct FNiagaraVariable EmitterInterpSpawnStartDTVar; // 0x28(0x18)
	struct FNiagaraVariable EmitterSpawnGroupVar; // 0x40(0x18)
	struct FNiagaraVariable EmitterAgeVar; // 0x58(0x18)
	struct FNiagaraVariable EmitterRandomSeedVar; // 0x70(0x18)
	struct FNiagaraVariable EmitterInstanceSeedVar; // 0x88(0x18)
	struct FNiagaraVariable EmitterTotalSpawnedParticlesVar; // 0xa0(0x18)
	struct FNiagaraDataSetCompiledData DataSetCompiledData; // 0xb8(0x40)
};

// ScriptStruct Niagara.NiagaraParameterDataSetBinding
// Size: 0x08 (Inherited: 0x00)
struct FNiagaraParameterDataSetBinding {
	int32_t ParameterOffset; // 0x00(0x04)
	int32_t DataSetComponentOffset; // 0x04(0x04)
};

// ScriptStruct Niagara.NiagaraParameterDataSetBindingCollection
// Size: 0x20 (Inherited: 0x00)
struct FNiagaraParameterDataSetBindingCollection {
	struct TArray<struct FNiagaraParameterDataSetBinding> FloatOffsets; // 0x00(0x10)
	struct TArray<struct FNiagaraParameterDataSetBinding> Int32Offsets; // 0x10(0x10)
};

// ScriptStruct Niagara.NiagaraSystemCompiledData
// Size: 0x228 (Inherited: 0x00)
struct FNiagaraSystemCompiledData {
	struct FNiagaraParameterStore InstanceParamStore; // 0x00(0x88)
	struct FNiagaraDataSetCompiledData DataSetCompiledData; // 0x88(0x40)
	struct FNiagaraDataSetCompiledData SpawnInstanceParamsDataSetCompiledData; // 0xc8(0x40)
	struct FNiagaraDataSetCompiledData UpdateInstanceParamsDataSetCompiledData; // 0x108(0x40)
	struct FNiagaraParameterDataSetBindingCollection SpawnInstanceGlobalBinding; // 0x148(0x20)
	struct FNiagaraParameterDataSetBindingCollection SpawnInstanceSystemBinding; // 0x168(0x20)
	struct FNiagaraParameterDataSetBindingCollection SpawnInstanceOwnerBinding; // 0x188(0x20)
	struct TArray<struct FNiagaraParameterDataSetBindingCollection> SpawnInstanceEmitterBindings; // 0x1a8(0x10)
	struct FNiagaraParameterDataSetBindingCollection UpdateInstanceGlobalBinding; // 0x1b8(0x20)
	struct FNiagaraParameterDataSetBindingCollection UpdateInstanceSystemBinding; // 0x1d8(0x20)
	struct FNiagaraParameterDataSetBindingCollection UpdateInstanceOwnerBinding; // 0x1f8(0x20)
	struct TArray<struct FNiagaraParameterDataSetBindingCollection> UpdateInstanceEmitterBindings; // 0x218(0x10)
};

// ScriptStruct Niagara.NiagaraSystemCompileRequest
// Size: 0x30 (Inherited: 0x00)
struct FNiagaraSystemCompileRequest {
	char pad_0[0x8]; // 0x00(0x08)
	struct TArray<struct UObject*> RootObjects; // 0x08(0x10)
	char pad_18[0x18]; // 0x18(0x18)
};

// ScriptStruct Niagara.NiagaraWildcard
// Size: 0x01 (Inherited: 0x00)
struct FNiagaraWildcard {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Niagara.NiagaraFloat
// Size: 0x04 (Inherited: 0x00)
struct FNiagaraFloat {
	float Value; // 0x00(0x04)
};

// ScriptStruct Niagara.NiagaraInt32
// Size: 0x04 (Inherited: 0x00)
struct FNiagaraInt32 {
	int32_t Value; // 0x00(0x04)
};

// ScriptStruct Niagara.NiagaraBool
// Size: 0x04 (Inherited: 0x00)
struct FNiagaraBool {
	int32_t Value; // 0x00(0x04)
};

// ScriptStruct Niagara.NiagaraPosition
// Size: 0x0c (Inherited: 0x0c)
struct FNiagaraPosition : FVector3f {
};

// ScriptStruct Niagara.NiagaraHalf
// Size: 0x02 (Inherited: 0x00)
struct FNiagaraHalf {
	uint16_t Value; // 0x00(0x02)
};

// ScriptStruct Niagara.NiagaraHalfVector2
// Size: 0x04 (Inherited: 0x00)
struct FNiagaraHalfVector2 {
	uint16_t X; // 0x00(0x02)
	uint16_t Y; // 0x02(0x02)
};

// ScriptStruct Niagara.NiagaraHalfVector3
// Size: 0x06 (Inherited: 0x00)
struct FNiagaraHalfVector3 {
	uint16_t X; // 0x00(0x02)
	uint16_t Y; // 0x02(0x02)
	uint16_t Z; // 0x04(0x02)
};

// ScriptStruct Niagara.NiagaraHalfVector4
// Size: 0x08 (Inherited: 0x00)
struct FNiagaraHalfVector4 {
	uint16_t X; // 0x00(0x02)
	uint16_t Y; // 0x02(0x02)
	uint16_t Z; // 0x04(0x02)
	uint16_t W; // 0x06(0x02)
};

// ScriptStruct Niagara.NiagaraNumeric
// Size: 0x01 (Inherited: 0x00)
struct FNiagaraNumeric {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Niagara.NiagaraParameterMap
// Size: 0x01 (Inherited: 0x00)
struct FNiagaraParameterMap {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Niagara.NiagaraMatrix
// Size: 0x40 (Inherited: 0x00)
struct FNiagaraMatrix {
	struct FVector4f Row0; // 0x00(0x10)
	struct FVector4f Row1; // 0x10(0x10)
	struct FVector4f Row2; // 0x20(0x10)
	struct FVector4f Row3; // 0x30(0x10)
};

// ScriptStruct Niagara.NiagaraSpawnInfo
// Size: 0x10 (Inherited: 0x00)
struct FNiagaraSpawnInfo {
	int32_t Count; // 0x00(0x04)
	float InterpStartDt; // 0x04(0x04)
	float IntervalDt; // 0x08(0x04)
	int32_t SpawnGroup; // 0x0c(0x04)
};

// ScriptStruct Niagara.NiagaraID
// Size: 0x08 (Inherited: 0x00)
struct FNiagaraID {
	int32_t Index; // 0x00(0x04)
	int32_t AcquireTag; // 0x04(0x04)
};

// ScriptStruct Niagara.NiagaraRandInfo
// Size: 0x0c (Inherited: 0x00)
struct FNiagaraRandInfo {
	int32_t Seed1; // 0x00(0x04)
	int32_t Seed2; // 0x04(0x04)
	int32_t Seed3; // 0x08(0x04)
};

// ScriptStruct Niagara.NiagaraCompileHashVisitorDebugInfo
// Size: 0x30 (Inherited: 0x00)
struct FNiagaraCompileHashVisitorDebugInfo {
	struct FString Object; // 0x00(0x10)
	struct TArray<struct FString> PropertyKeys; // 0x10(0x10)
	struct TArray<struct FString> PropertyValues; // 0x20(0x10)
};

// ScriptStruct Niagara.NiagaraInputConditionMetadata
// Size: 0x18 (Inherited: 0x00)
struct FNiagaraInputConditionMetadata {
	struct FName InputName; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FString> TargetValues; // 0x08(0x10)
};

// ScriptStruct Niagara.NiagaraEnumParameterMetaData
// Size: 0x28 (Inherited: 0x00)
struct FNiagaraEnumParameterMetaData {
	struct FName OverrideName; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UTexture2D* IconOverride; // 0x08(0x08)
	bool bUseColorOverride; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FLinearColor ColorOverride; // 0x14(0x10)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Niagara.NiagaraBoolParameterMetaData
// Size: 0x20 (Inherited: 0x00)
struct FNiagaraBoolParameterMetaData {
	enum class ENiagaraBoolDisplayMode DisplayMode; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName OverrideNameTrue; // 0x04(0x04)
	struct FName OverrideNameFalse; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UTexture2D* IconOverrideTrue; // 0x10(0x08)
	struct UTexture2D* IconOverrideFalse; // 0x18(0x08)
};

// ScriptStruct Niagara.NiagaraVariableMetaData
// Size: 0x140 (Inherited: 0x00)
struct FNiagaraVariableMetaData {
	struct FText Description; // 0x00(0x18)
	struct FText CategoryName; // 0x18(0x18)
	bool bAdvancedDisplay; // 0x30(0x01)
	bool bDisplayInOverviewStack; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	int32_t InlineParameterSortPriority; // 0x34(0x04)
	bool bOverrideColor; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct FLinearColor InlineParameterColorOverride; // 0x3c(0x10)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct TArray<struct FNiagaraEnumParameterMetaData> InlineParameterEnumOverrides; // 0x50(0x10)
	bool bEnableBoolOverride; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct FNiagaraBoolParameterMetaData InlineParameterBoolOverride; // 0x68(0x20)
	int32_t EditorSortPriority; // 0x88(0x04)
	bool bInlineEditConditionToggle; // 0x8c(0x01)
	char pad_8D[0x3]; // 0x8d(0x03)
	struct FNiagaraInputConditionMetadata EditCondition; // 0x90(0x18)
	struct FNiagaraInputConditionMetadata VisibleCondition; // 0xa8(0x18)
	struct TMap<struct FName, struct FString> PropertyMetaData; // 0xc0(0x50)
	struct FName ParentAttribute; // 0x110(0x04)
	char pad_114[0x4]; // 0x114(0x04)
	struct TArray<struct FName> AlternateAliases; // 0x118(0x10)
	struct FGuid VariableGuid; // 0x128(0x10)
	bool bIsStaticSwitch; // 0x138(0x01)
	char pad_139[0x3]; // 0x139(0x03)
	int32_t StaticSwitchDefaultValue; // 0x13c(0x04)
};

// ScriptStruct Niagara.NiagaraUserRedirectionParameterStore
// Size: 0xd8 (Inherited: 0x88)
struct FNiagaraUserRedirectionParameterStore : FNiagaraParameterStore {
	struct TMap<struct FNiagaraVariable, struct FNiagaraVariable> UserParameterRedirects; // 0x88(0x50)
};

// ScriptStruct Niagara.NiagaraVariant
// Size: 0x28 (Inherited: 0x00)
struct FNiagaraVariant {
	struct UObject* Object; // 0x00(0x08)
	struct UNiagaraDataInterface* DataInterface; // 0x08(0x08)
	struct TArray<char> Bytes; // 0x10(0x10)
	enum class ENiagaraVariantMode CurrentMode; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Niagara.NiagaraWorldManagerTickFunction
// Size: 0x30 (Inherited: 0x28)
struct FNiagaraWorldManagerTickFunction : FTickFunction {
	char pad_28[0x8]; // 0x28(0x08)
};

