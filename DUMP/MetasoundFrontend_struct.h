// Enum MetasoundFrontend.EMetasoundFrontendVertexAccessType
enum class EMetasoundFrontendVertexAccessType : uint8 {
	Reference = 0,
	Value = 1,
	EMetasoundFrontendVertexAccessType_MAX = 2
};

// Enum MetasoundFrontend.EMetasoundFrontendClassType
enum class EMetasoundFrontendClassType : uint8 {
	External = 0,
	Graph = 1,
	Input = 2,
	Output = 3,
	Literal = 4,
	Variable = 5,
	VariableDeferredAccessor = 6,
	VariableAccessor = 7,
	VariableMutator = 8,
	Invalid = 9,
	EMetasoundFrontendClassType_MAX = 10
};

// Enum MetasoundFrontend.EMetasoundFrontendNodeStyleDisplayVisibility
enum class EMetasoundFrontendNodeStyleDisplayVisibility : uint8 {
	Visible = 0,
	Hidden = 1,
	EMetasoundFrontendNodeStyleDisplayVisibility_MAX = 2
};

// Enum MetasoundFrontend.EMetasoundFrontendLiteralType
enum class EMetasoundFrontendLiteralType : uint8 {
	None = 0,
	Boolean = 1,
	Integer = 2,
	Float = 3,
	String = 4,
	UObject = 5,
	NoneArray = 6,
	BooleanArray = 7,
	IntegerArray = 8,
	FloatArray = 9,
	StringArray = 10,
	UObjectArray = 11,
	Invalid = 12,
	EMetasoundFrontendLiteralType_MAX = 13
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendVersionNumber
// Size: 0x08 (Inherited: 0x00)
struct FMetasoundFrontendVersionNumber {
	int32_t Major; // 0x00(0x04)
	int32_t Minor; // 0x04(0x04)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendVersion
// Size: 0x0c (Inherited: 0x00)
struct FMetasoundFrontendVersion {
	struct FName Name; // 0x00(0x04)
	struct FMetasoundFrontendVersionNumber Number; // 0x04(0x08)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendVertex
// Size: 0x20 (Inherited: 0x00)
struct FMetasoundFrontendVertex {
	char pad_0[0x8]; // 0x00(0x08)
	struct FName Name; // 0x08(0x04)
	struct FName TypeName; // 0x0c(0x04)
	struct FGuid VertexID; // 0x10(0x10)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendVertexLiteral
// Size: 0x68 (Inherited: 0x00)
struct FMetasoundFrontendVertexLiteral {
	struct FGuid VertexID; // 0x00(0x10)
	struct FMetasoundFrontendLiteral Value; // 0x10(0x58)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendLiteral
// Size: 0x58 (Inherited: 0x00)
struct FMetasoundFrontendLiteral {
	enum class EMetasoundFrontendLiteralType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t AsNumDefault; // 0x04(0x04)
	struct TArray<bool> AsBoolean; // 0x08(0x10)
	struct TArray<int32_t> AsInteger; // 0x18(0x10)
	struct TArray<float> AsFloat; // 0x28(0x10)
	struct TArray<struct FString> AsString; // 0x38(0x10)
	struct TArray<struct UObject*> AsUObject; // 0x48(0x10)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendVariable
// Size: 0xb0 (Inherited: 0x00)
struct FMetasoundFrontendVariable {
	struct FName Name; // 0x00(0x04)
	struct FName TypeName; // 0x04(0x04)
	struct FMetasoundFrontendLiteral Literal; // 0x08(0x58)
	struct FGuid ID; // 0x60(0x10)
	struct FGuid VariableNodeID; // 0x70(0x10)
	struct FGuid MutatorNodeID; // 0x80(0x10)
	struct TArray<struct FGuid> AccessorNodeIDs; // 0x90(0x10)
	struct TArray<struct FGuid> DeferredAccessorNodeIDs; // 0xa0(0x10)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendNodeInterface
// Size: 0x30 (Inherited: 0x00)
struct FMetasoundFrontendNodeInterface {
	struct TArray<struct FMetasoundFrontendVertex> Inputs; // 0x00(0x10)
	struct TArray<struct FMetasoundFrontendVertex> Outputs; // 0x10(0x10)
	struct TArray<struct FMetasoundFrontendVertex> Environment; // 0x20(0x10)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendNodeStyleDisplay
// Size: 0x01 (Inherited: 0x00)
struct FMetasoundFrontendNodeStyleDisplay {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendNodeStyle
// Size: 0x01 (Inherited: 0x00)
struct FMetasoundFrontendNodeStyle {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendNode
// Size: 0x68 (Inherited: 0x00)
struct FMetasoundFrontendNode {
	struct FGuid ID; // 0x00(0x10)
	struct FGuid ClassID; // 0x10(0x10)
	struct FName Name; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FMetasoundFrontendNodeInterface Interface; // 0x28(0x30)
	struct TArray<struct FMetasoundFrontendVertexLiteral> InputLiterals; // 0x58(0x10)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendEdge
// Size: 0x40 (Inherited: 0x00)
struct FMetasoundFrontendEdge {
	struct FGuid FromNodeID; // 0x00(0x10)
	struct FGuid FromVertexID; // 0x10(0x10)
	struct FGuid ToNodeID; // 0x20(0x10)
	struct FGuid ToVertexID; // 0x30(0x10)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendEdgeStyleLiteralColorPair
// Size: 0x68 (Inherited: 0x00)
struct FMetasoundFrontendEdgeStyleLiteralColorPair {
	struct FMetasoundFrontendLiteral Value; // 0x00(0x58)
	struct FLinearColor Color; // 0x58(0x10)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendEdgeStyle
// Size: 0x28 (Inherited: 0x00)
struct FMetasoundFrontendEdgeStyle {
	struct FGuid NodeId; // 0x00(0x10)
	struct FName OutputName; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FMetasoundFrontendEdgeStyleLiteralColorPair> LiteralColorPairs; // 0x18(0x10)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendGraphStyle
// Size: 0x18 (Inherited: 0x00)
struct FMetasoundFrontendGraphStyle {
	bool bIsGraphEditable; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FMetasoundFrontendEdgeStyle> EdgeStyles; // 0x08(0x10)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendGraph
// Size: 0x30 (Inherited: 0x00)
struct FMetasoundFrontendGraph {
	struct TArray<struct FMetasoundFrontendNode> Nodes; // 0x00(0x10)
	struct TArray<struct FMetasoundFrontendEdge> Edges; // 0x10(0x10)
	struct TArray<struct FMetasoundFrontendVariable> Variables; // 0x20(0x10)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendVertexMetadata
// Size: 0x01 (Inherited: 0x00)
struct FMetasoundFrontendVertexMetadata {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendClassVertex
// Size: 0x38 (Inherited: 0x20)
struct FMetasoundFrontendClassVertex : FMetasoundFrontendVertex {
	struct FGuid NodeId; // 0x20(0x10)
	enum class EMetasoundFrontendVertexAccessType AccessType; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendClassStyleDisplay
// Size: 0x01 (Inherited: 0x00)
struct FMetasoundFrontendClassStyleDisplay {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendClassInput
// Size: 0x90 (Inherited: 0x38)
struct FMetasoundFrontendClassInput : FMetasoundFrontendClassVertex {
	struct FMetasoundFrontendLiteral DefaultLiteral; // 0x38(0x58)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendClassVariable
// Size: 0x90 (Inherited: 0x38)
struct FMetasoundFrontendClassVariable : FMetasoundFrontendClassVertex {
	struct FMetasoundFrontendLiteral DefaultLiteral; // 0x38(0x58)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendClassOutput
// Size: 0x38 (Inherited: 0x38)
struct FMetasoundFrontendClassOutput : FMetasoundFrontendClassVertex {
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendClassEnvironmentVariable
// Size: 0x18 (Inherited: 0x00)
struct FMetasoundFrontendClassEnvironmentVariable {
	char pad_0[0x8]; // 0x00(0x08)
	struct FName Name; // 0x08(0x04)
	struct FName TypeName; // 0x0c(0x04)
	bool bIsRequired; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendInterfaceStyle
// Size: 0x01 (Inherited: 0x00)
struct FMetasoundFrontendInterfaceStyle {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendClassInterface
// Size: 0x40 (Inherited: 0x00)
struct FMetasoundFrontendClassInterface {
	struct TArray<struct FMetasoundFrontendClassInput> Inputs; // 0x00(0x10)
	struct TArray<struct FMetasoundFrontendClassOutput> Outputs; // 0x10(0x10)
	struct TArray<struct FMetasoundFrontendClassEnvironmentVariable> Environment; // 0x20(0x10)
	struct FGuid ChangeID; // 0x30(0x10)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendInterface
// Size: 0x50 (Inherited: 0x40)
struct FMetasoundFrontendInterface : FMetasoundFrontendClassInterface {
	struct FMetasoundFrontendVersion Version; // 0x40(0x0c)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendClassName
// Size: 0x0c (Inherited: 0x00)
struct FMetasoundFrontendClassName {
	struct FName Namespace; // 0x00(0x04)
	struct FName Name; // 0x04(0x04)
	struct FName Variant; // 0x08(0x04)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendClassMetadata
// Size: 0x28 (Inherited: 0x00)
struct FMetasoundFrontendClassMetadata {
	struct FMetasoundFrontendClassName ClassName; // 0x00(0x0c)
	struct FMetasoundFrontendVersionNumber Version; // 0x0c(0x08)
	enum class EMetasoundFrontendClassType Type; // 0x14(0x01)
	bool bIsDeprecated; // 0x15(0x01)
	bool bAutoUpdateManagesInterface; // 0x16(0x01)
	char pad_17[0x1]; // 0x17(0x01)
	struct FGuid ChangeID; // 0x18(0x10)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendClassStyle
// Size: 0x01 (Inherited: 0x00)
struct FMetasoundFrontendClassStyle {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendClass
// Size: 0x80 (Inherited: 0x00)
struct FMetasoundFrontendClass {
	char pad_0[0x8]; // 0x00(0x08)
	struct FGuid ID; // 0x08(0x10)
	struct FMetasoundFrontendClassMetadata MetaData; // 0x18(0x28)
	struct FMetasoundFrontendClassInterface Interface; // 0x40(0x40)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendGraphClassPresetOptions
// Size: 0x58 (Inherited: 0x00)
struct FMetasoundFrontendGraphClassPresetOptions {
	bool bIsPreset; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TSet<struct FName> InputsInheritingDefault; // 0x08(0x50)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendGraphClass
// Size: 0x108 (Inherited: 0x80)
struct FMetasoundFrontendGraphClass : FMetasoundFrontendClass {
	struct FMetasoundFrontendGraph Graph; // 0x80(0x30)
	struct FMetasoundFrontendGraphClassPresetOptions PresetOptions; // 0xb0(0x58)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendDocumentMetadata
// Size: 0x0c (Inherited: 0x00)
struct FMetasoundFrontendDocumentMetadata {
	struct FMetasoundFrontendVersion Version; // 0x00(0x0c)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendDocument
// Size: 0x1b8 (Inherited: 0x00)
struct FMetasoundFrontendDocument {
	char pad_0[0x10]; // 0x00(0x10)
	struct FMetasoundFrontendDocumentMetadata MetaData; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TSet<struct FMetasoundFrontendVersion> Interfaces; // 0x20(0x50)
	struct FMetasoundFrontendGraphClass RootGraph; // 0x70(0x108)
	struct TArray<struct FMetasoundFrontendGraphClass> Subgraphs; // 0x178(0x10)
	struct TArray<struct FMetasoundFrontendClass> Dependencies; // 0x188(0x10)
	struct FMetasoundFrontendVersion ArchetypeVersion; // 0x198(0x0c)
	char pad_1A4[0x4]; // 0x1a4(0x04)
	struct TArray<struct FMetasoundFrontendVersion> InterfaceVersions; // 0x1a8(0x10)
};

