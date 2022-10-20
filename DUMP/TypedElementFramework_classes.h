// Class TypedElementFramework.TypedElementCounterInterface
// Size: 0x28 (Inherited: 0x28)
struct UTypedElementCounterInterface : UInterface {
};

// Class TypedElementFramework.TestTypedElementInterfaceA
// Size: 0x28 (Inherited: 0x28)
struct UTestTypedElementInterfaceA : UInterface {

	bool SetDisplayName(struct FScriptTypedElementHandle& InElementHandle, struct FText InNewName, bool bNotify); // Function TypedElementFramework.TestTypedElementInterfaceA.SetDisplayName // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8f6f4c4
	struct FText GetDisplayName(struct FScriptTypedElementHandle& InElementHandle); // Function TypedElementFramework.TestTypedElementInterfaceA.GetDisplayName // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8f6e150
};

// Class TypedElementFramework.TestTypedElementInterfaceB
// Size: 0x28 (Inherited: 0x28)
struct UTestTypedElementInterfaceB : UInterface {

	bool MarkAsTested(struct FScriptTypedElementHandle& InElementHandle); // Function TypedElementFramework.TestTypedElementInterfaceB.MarkAsTested // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8f6e814
};

// Class TypedElementFramework.TestTypedElementInterfaceC
// Size: 0x28 (Inherited: 0x28)
struct UTestTypedElementInterfaceC : UInterface {

	bool GetIsTested(struct FScriptTypedElementHandle& InElementHandle); // Function TypedElementFramework.TestTypedElementInterfaceC.GetIsTested // (Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x8f6e814
};

// Class TypedElementFramework.TestTypedElementInterfaceA_ImplTyped
// Size: 0x30 (Inherited: 0x28)
struct UTestTypedElementInterfaceA_ImplTyped : UObject {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class TypedElementFramework.TestTypedElementInterfaceA_ImplUntyped
// Size: 0x30 (Inherited: 0x28)
struct UTestTypedElementInterfaceA_ImplUntyped : UObject {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class TypedElementFramework.TestTypedElementInterfaceBAndC_Typed
// Size: 0x38 (Inherited: 0x28)
struct UTestTypedElementInterfaceBAndC_Typed : UObject {
	char pad_28[0x10]; // 0x28(0x10)
};

// Class TypedElementFramework.TypedElementHandleLibrary
// Size: 0x28 (Inherited: 0x28)
struct UTypedElementHandleLibrary : UObject {

	void Release(struct FScriptTypedElementHandle& ElementHandle); // Function TypedElementFramework.TypedElementHandleLibrary.Release // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x8f6f058
	bool NotEqual(struct FScriptTypedElementHandle& Lhs, struct FScriptTypedElementHandle& Rhs); // Function TypedElementFramework.TypedElementHandleLibrary.NotEqual // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x8f6ede0
	bool IsSet(struct FScriptTypedElementHandle& ElementHandle); // Function TypedElementFramework.TypedElementHandleLibrary.IsSet // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x8f6eb84
	bool Equal(struct FScriptTypedElementHandle& Lhs, struct FScriptTypedElementHandle& Rhs); // Function TypedElementFramework.TypedElementHandleLibrary.Equal // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x8f6e034
};

// Class TypedElementFramework.TypedElementListLibrary
// Size: 0x28 (Inherited: 0x28)
struct UTypedElementListLibrary : UObject {

	void Shrink(struct FScriptTypedElementListProxy ElementList); // Function TypedElementFramework.TypedElementListLibrary.Shrink // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8f6f668
	void Reset(struct FScriptTypedElementListProxy ElementList); // Function TypedElementFramework.TypedElementListLibrary.Reset // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8f6f3f8
	void Reserve(struct FScriptTypedElementListProxy ElementList, int32_t Size); // Function TypedElementFramework.TypedElementListLibrary.Reserve // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8f6f2e8
	bool Remove(struct FScriptTypedElementListProxy ElementList, struct FScriptTypedElementHandle& ElementHandle); // Function TypedElementFramework.TypedElementListLibrary.Remove // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x8f6f0fc
	int32_t Num(struct FScriptTypedElementListProxy ElementList); // Function TypedElementFramework.TypedElementListLibrary.Num // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x8f6eefc
	bool IsValidIndex(struct FScriptTypedElementListProxy ElementList, int32_t Index); // Function TypedElementFramework.TypedElementListLibrary.IsValidIndex // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x8f6ec34
	bool HasElementsOfType(struct FScriptTypedElementListProxy ElementList, struct FName ElementTypeName); // Function TypedElementFramework.TypedElementListLibrary.HasElementsOfType // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8f6e9e0
	bool HasElements(struct FScriptTypedElementListProxy ElementList, struct UInterface* BaseInterfaceType); // Function TypedElementFramework.TypedElementListLibrary.HasElements // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8f6e8c8
	struct UObject* GetElementInterface(struct FScriptTypedElementListProxy ElementList, struct FScriptTypedElementHandle& ElementHandle, struct UInterface* BaseInterfaceType); // Function TypedElementFramework.TypedElementListLibrary.GetElementInterface // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x8f6e4bc
	struct TArray<struct FScriptTypedElementHandle> GetElementHandles(struct FScriptTypedElementListProxy ElementList, struct UInterface* BaseInterfaceType); // Function TypedElementFramework.TypedElementListLibrary.GetElementHandles // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8f6e38c
	struct FScriptTypedElementHandle GetElementHandleAt(struct FScriptTypedElementListProxy ElementList, int32_t Index); // Function TypedElementFramework.TypedElementListLibrary.GetElementHandleAt // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x8f6e260
	void Empty(struct FScriptTypedElementListProxy ElementList, int32_t Slack); // Function TypedElementFramework.TypedElementListLibrary.Empty // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8f6df24
	struct FScriptTypedElementListProxy CreateScriptElementList(struct UTypedElementRegistry* Registry); // Function TypedElementFramework.TypedElementListLibrary.CreateScriptElementList // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8f6de10
	int32_t CountElementsOfType(struct FScriptTypedElementListProxy ElementList, struct FName ElementTypeName); // Function TypedElementFramework.TypedElementListLibrary.CountElementsOfType // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8f6dc70
	int32_t CountElements(struct FScriptTypedElementListProxy ElementList, struct UInterface* BaseInterfaceType); // Function TypedElementFramework.TypedElementListLibrary.CountElements // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8f6dac8
	bool Contains(struct FScriptTypedElementListProxy ElementList, struct FScriptTypedElementHandle& ElementHandle); // Function TypedElementFramework.TypedElementListLibrary.Contains // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x8f6d980
	struct FScriptTypedElementListProxy Clone(struct FScriptTypedElementListProxy ElementList); // Function TypedElementFramework.TypedElementListLibrary.Clone // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8f6d898
	void AppendList(struct FScriptTypedElementListProxy ElementList, struct FScriptTypedElementListProxy OtherElementList); // Function TypedElementFramework.TypedElementListLibrary.AppendList // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8f6d72c
	void Append(struct FScriptTypedElementListProxy ElementList, struct TArray<struct FScriptTypedElementHandle>& ElementHandles); // Function TypedElementFramework.TypedElementListLibrary.Append // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x8f6d600
	bool Add(struct FScriptTypedElementListProxy ElementList, struct FScriptTypedElementHandle& ElementHandle); // Function TypedElementFramework.TypedElementListLibrary.Add // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x8f6d4b8
};

// Class TypedElementFramework.TypedElementRegistry
// Size: 0x948 (Inherited: 0x28)
struct UTypedElementRegistry : UObject {
	char pad_28[0x920]; // 0x28(0x920)

	struct UTypedElementRegistry* GetInstance(); // Function TypedElementFramework.TypedElementRegistry.GetInstance // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x8f6e7d8
	struct UObject* GetElementInterface(struct FScriptTypedElementHandle& InElementHandle, struct UInterface* InBaseInterfaceType); // Function TypedElementFramework.TypedElementRegistry.GetElementInterface // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x8f6e6c8
};

