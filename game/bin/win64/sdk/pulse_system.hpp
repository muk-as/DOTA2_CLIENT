#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

// /////////////////////////////////////////////////////////////
// Binary: pulse_system.dll
// Classes count: 0 (Allocated) | 108 (Unallocated)
// Enums count: 0 (Allocated) | 9 (Unallocated)
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Enumerator count: 6
// Alignment: 4
// Size: 0x4
enum class EPulseGraphExecutionHistoryFlag : uint32_t
{
	// MPropertySuppressEnumerator
	// MEnumeratorIsNotAFlag
	NO_FLAGS = 0x0,
	CURSOR_ADD_TAG = 0x1,
	CURSOR_REMOVE_TAG = 0x2,
	CURSOR_RETIRED = 0x4,
	REQUIREMENT_PASS = 0x8,
	REQUIREMENT_FAIL = 0x10,
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class PulseTestEnumShape_t : uint32_t
{
	// MPropertyFriendlyName "Circle"
	CIRCLE = 0x64,
	// MPropertyFriendlyName "Square"
	SQUARE = 0xc8,
	// MPropertyFriendlyName "Triangle"
	TRIANGLE = 0x12c,
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class PulseMethodCallMode_t : uint32_t
{
	// MPropertyFriendlyName "Wait For Completion"
	// MPropertyDescription "Synchronous - wait for the method to fully complete before returning"
	SYNC_WAIT_FOR_COMPLETION = 0x0,
	// MPropertyFriendlyName "Fire And Forget"
	// MPropertyDescription "Asynchronous - returns and continues despite the called method yielding"
	ASYNC_FIRE_AND_FORGET = 0x1,
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class PulseCursorExecResult_t : uint32_t
{
	Succeeded = 0x0,
	Canceled = 0x1,
	Failed = 0x2,
	OngoingNotify = 0x3,
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Enumerator count: 20
// Alignment: 4
// Size: 0x4
enum class PulseValueType_t : uint32_t
{
	// MPropertyFriendlyName "Void"
	PVAL_INVALID = 0xffffffffffffffff,
	// MPropertyFriendlyName "Boolean"
	PVAL_BOOL = 0x0,
	// MPropertyFriendlyName "Integer"
	PVAL_INT = 0x1,
	// MPropertyFriendlyName "Float"
	PVAL_FLOAT = 0x2,
	// MPropertyFriendlyName "String"
	PVAL_STRING = 0x3,
	// MPropertyFriendlyName "Vector3"
	PVAL_VEC3 = 0x4,
	// MPropertyFriendlyName "Transform"
	PVAL_TRANSFORM = 0x5,
	// MPropertyFriendlyName "Color"
	PVAL_COLOR_RGB = 0x6,
	// MPropertyFriendlyName "Entity Handle"
	PVAL_EHANDLE = 0x7,
	// MPropertyFriendlyName "Resource"
	PVAL_RESOURCE = 0x8,
	// MPropertyFriendlyName "SoundEvent Handle"
	PVAL_SNDEVT_GUID = 0x9,
	// MPropertyFriendlyName "Entity Name"
	PVAL_ENTITY_NAME = 0xa,
	// MPropertyFriendlyName "Opaque Handle"
	PVAL_OPAQUE_HANDLE = 0xb,
	// MPropertyFriendlyName "Typesafe Int"
	PVAL_TYPESAFE_INT = 0xc,
	// MPropertySuppressEnumerator
	PVAL_CURSOR_FLOW = 0xd,
	// MPropertyFriendlyName "Any"
	PVAL_ANY = 0xe,
	// MPropertyFriendlyName "Schema Enum"
	PVAL_SCHEMA_ENUM = 0xf,
	// MPropertyFriendlyName "Panorama Panel Handle"
	PVAL_PANORAMA_PANEL_HANDLE = 0x10,
	// MPropertyFriendlyName "Test Handle"
	PVAL_TEST_HANDLE = 0x11,
	// MPropertySuppressEnumerator
	PVAL_COUNT = 0x12,
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Enumerator count: 73
// Alignment: 2
// Size: 0x2
enum class PulseInstructionCode_t : uint16_t
{
	INVALID = 0x0,
	IMMEDIATE_HALT = 0x1,
	RETURN_VOID = 0x2,
	RETURN_VALUE = 0x3,
	NOP = 0x4,
	JUMP = 0x5,
	JUMP_COND = 0x6,
	CHUNK_LEAP = 0x7,
	CHUNK_LEAP_COND = 0x8,
	PULSE_CALL_SYNC = 0x9,
	PULSE_CALL_ASYNC_FIRE = 0xa,
	CELL_INVOKE = 0xb,
	LIBRARY_INVOKE = 0xc,
	SET_VAR = 0xd,
	GET_VAR = 0xe,
	GET_CONST = 0xf,
	GET_DOMAIN_VALUE = 0x10,
	COPY = 0x11,
	NOT = 0x12,
	NEGATE = 0x13,
	ADD = 0x14,
	SUB = 0x15,
	MUL = 0x16,
	DIV = 0x17,
	MOD = 0x18,
	LT = 0x19,
	LTE = 0x1a,
	EQ = 0x1b,
	NE = 0x1c,
	AND = 0x1d,
	OR = 0x1e,
	CONVERT_VALUE = 0x1f,
	REINTERPRET_INSTANCE = 0x20,
	GET_BLACKBOARD_REFERENCE = 0x21,
	SET_BLACKBOARD_REFERENCE = 0x22,
	REQUIREMENT_RESULT = 0x23,
	LAST_SERIALIZED_CODE = 0x24,
	NEGATE_INT = 0x25,
	NEGATE_FLOAT = 0x26,
	ADD_INT = 0x27,
	ADD_FLOAT = 0x28,
	ADD_STRING = 0x29,
	SUB_INT = 0x2a,
	SUB_FLOAT = 0x2b,
	MUL_INT = 0x2c,
	MUL_FLOAT = 0x2d,
	DIV_INT = 0x2e,
	DIV_FLOAT = 0x2f,
	MOD_INT = 0x30,
	MOD_FLOAT = 0x31,
	LT_INT = 0x32,
	LT_FLOAT = 0x33,
	LTE_INT = 0x34,
	LTE_FLOAT = 0x35,
	EQ_BOOL = 0x36,
	EQ_INT = 0x37,
	EQ_FLOAT = 0x38,
	EQ_STRING = 0x39,
	EQ_ENTITY_NAME = 0x3a,
	EQ_EHANDLE = 0x3b,
	EQ_PANEL_HANDLE = 0x3c,
	EQ_OPAQUE_HANDLE = 0x3d,
	EQ_TEST_HANDLE = 0x3e,
	NE_BOOL = 0x3f,
	NE_INT = 0x40,
	NE_FLOAT = 0x41,
	NE_STRING = 0x42,
	NE_ENTITY_NAME = 0x43,
	NE_EHANDLE = 0x44,
	NE_PANEL_HANDLE = 0x45,
	NE_OPAQUE_HANDLE = 0x46,
	NE_TEST_HANDLE = 0x47,
	GET_CONST_INLINE_STORAGE = 0x48,
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Enumerator count: 5
// Alignment: 4
// Size: 0x4
enum class PulseTestEnumColor_t : uint32_t
{
	// MPropertyFriendlyName "Black"
	BLACK = 0x0,
	// MPropertyFriendlyName "White"
	WHITE = 0x1,
	// MPropertyFriendlyName "Red"
	RED = 0x2,
	// MPropertyFriendlyName "Green"
	GREEN = 0x3,
	// MPropertyFriendlyName "Blue"
	BLUE = 0x4,
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class PulseCursorCancelPriority_t : uint32_t
{
	// MPropertyFriendlyName "Keep running normally."
	None = 0x0,
	// MPropertyFriendlyName "Kill after current node."
	// MPropertyDescription "Do not stop the current yielding node, but do not continue to the next node afterwards."
	CancelOnSucceeded = 0x1,
	// MPropertyFriendlyName "Kill elegantly."
	// MPropertyDescription "Request elegant wind-down of any associated work (e.g. vcd interrupt)."
	SoftCancel = 0x2,
	// MPropertyFriendlyName "Kill immediately."
	// MPropertyDescription "Stop without any wind-down."
	HardCancel = 0x3,
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class PulseDomainValueType_t : uint32_t
{
	INVALID = 0xffffffffffffffff,
	// MPropertyFriendlyName "Entity Name"
	ENTITY_NAME = 0x0,
	// MPropertyFriendlyName "Panel ID"
	PANEL_ID = 0x1,
	COUNT = 0x2,
};

struct PulseRuntimeOutputIndex_t;
struct SignatureOutflow_Continue;
struct CPulse_ResumePoint;
struct CPulse_OutflowConnection;
struct PulseRuntimeChunkIndex_t;
struct PulseRegisterMap_t;
struct PulseDocNodeID_t;
struct GameTime_t;
struct PulseCursorID_t;
struct PulseGraphInstanceID_t;
struct CPulse_BlackboardReference;
struct PulseRuntimeVarIndex_t;
struct PulseRuntimeRegisterIndex_t;
struct PulseRuntimeInvokeIndex_t;
struct PulseRuntimeCallInfoIndex_t;
struct PulseRuntimeConstantIndex_t;
struct PulseRuntimeDomainValueIndex_t;
struct PulseRuntimeBlackboardReferenceIndex_t;
struct PulseRuntimeCellIndex_t;
struct SignatureOutflow_Resume;

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x4
// Has Trivial Destructor
// 
// MIsBoxedIntegerType
struct PulseDocNodeID_t
{
public:
	int32_t m_Value; // 0x0	
	
	// Static fields:
	static bool &Get_IS_TYPESAFE_INTEGER(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("pulse_system.dll")->FindDeclaredClass("PulseDocNodeID_t")->m_static_fields[0]->m_instance);};
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MGetKV3ClassDefaults
class CPulseCell_Base
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MFgdFromSchemaCompletelySkipField
	PulseDocNodeID_t m_nEditorNodeID; // 0x8	
};

// Registered binary: pulse_system.dll (project 'pulse_system')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MPulseLibraryBindings
// MPropertyDescription "Library for interacting with a few global test values."
class CPulseTestFuncs_LibraryA
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MGetKV3ClassDefaults
class CPulseCell_BaseFlow : public CPulseCell_Base
{
public:
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x20
// 
// MGetKV3ClassDefaults
struct PulseRegisterMap_t
{
public:
	KeyValues3 m_Inparams; // 0x0	
	KeyValues3 m_Outparams; // 0x10	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x4
// Has Trivial Destructor
// 
// MIsBoxedIntegerType
struct PulseRuntimeVarIndex_t
{
public:
	int32_t m_Value; // 0x0	
	
	// Static fields:
	static bool &Get_IS_TYPESAFE_INTEGER(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("pulse_system.dll")->FindDeclaredClass("PulseRuntimeVarIndex_t")->m_static_fields[0]->m_instance);};
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x4
// Has Trivial Destructor
// 
// MIsBoxedIntegerType
struct PulseRuntimeEntrypointIndex_t
{
public:
	int32_t m_Value; // 0x0	
	
	// Static fields:
	static bool &Get_IS_TYPESAFE_INTEGER(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("pulse_system.dll")->FindDeclaredClass("PulseRuntimeEntrypointIndex_t")->m_static_fields[0]->m_instance);};
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x2
// Has Trivial Destructor
// 
// MIsBoxedIntegerType
struct PulseRuntimeDomainValueIndex_t
{
public:
	int16_t m_Value; // 0x0	
	
	// Static fields:
	static bool &Get_IS_TYPESAFE_INTEGER(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("pulse_system.dll")->FindDeclaredClass("PulseRuntimeDomainValueIndex_t")->m_static_fields[0]->m_instance);};
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x58
// 
// MGetKV3ClassDefaults
class CPulse_Chunk
{
public:
	CUtlLeanVector< PGDInstruction_t > m_Instructions; // 0x0	
	CUtlLeanVector< CPulse_RegisterInfo > m_Registers; // 0x10	
	CUtlLeanVector< PulseDocNodeID_t > m_InstructionEditorIDs; // 0x20	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x4
// Has Trivial Destructor
// 
// MIsBoxedIntegerType
struct PulseRuntimeInvokeIndex_t
{
public:
	int32_t m_Value; // 0x0	
	
	// Static fields:
	static bool &Get_IS_TYPESAFE_INTEGER(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("pulse_system.dll")->FindDeclaredClass("PulseRuntimeInvokeIndex_t")->m_static_fields[0]->m_instance);};
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 4
// Size: 0x4
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct CPulseCell_Outflow_CycleOrdered__InstanceState_t
{
public:
	int32_t m_nNextIndex; // 0x0	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x4
// Has Trivial Destructor
// 
// MIsBoxedIntegerType
struct PulseRuntimeChunkIndex_t
{
public:
	int32_t m_Value; // 0x0	
	
	// Static fields:
	static bool &Get_IS_TYPESAFE_INTEGER(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("pulse_system.dll")->FindDeclaredClass("PulseRuntimeChunkIndex_t")->m_static_fields[0]->m_instance);};
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MPulseLibraryBindings
// MPropertyDescription "Testing script helpers."
class CPulseTestScriptLib
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x2
// Has Trivial Destructor
// 
// MIsBoxedIntegerType
struct PulseRuntimeRegisterIndex_t
{
public:
	int16_t m_Value; // 0x0	
	
	// Static fields:
	static bool &Get_IS_TYPESAFE_INTEGER(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("pulse_system.dll")->FindDeclaredClass("PulseRuntimeRegisterIndex_t")->m_static_fields[0]->m_instance);};
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x30
class CPulse_OutflowConnection
{
public:
	CUtlSymbolLarge m_SourceOutflowName; // 0x0	
	PulseRuntimeChunkIndex_t m_nDestChunk; // 0x8	
	int32_t m_nInstruction; // 0xc	
	PulseRegisterMap_t m_OutflowRegisterMap; // 0x10	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x30
class CPulse_ResumePoint : public CPulse_OutflowConnection
{
public:
	// Static fields:
	static CPulse_ResumePoint &Get_Invalid(){return *reinterpret_cast<CPulse_ResumePoint*>(interfaces::g_schema->FindTypeScopeForModule("pulse_system.dll")->FindDeclaredClass("CPulse_ResumePoint")->m_static_fields[0]->m_instance);};
	// No schema binary for binding
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x4
// Has Trivial Destructor
// 
// MIsBoxedIntegerType
struct PulseCursorID_t
{
public:
	int32_t m_Value; // 0x0	
	
	// Static fields:
	static bool &Get_IS_TYPESAFE_INTEGER(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("pulse_system.dll")->FindDeclaredClass("PulseCursorID_t")->m_static_fields[0]->m_instance);};
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0xf8
// Has VTable
// 
// MPulseInstanceDomainInfo
// MPulseDomainHiddenInTool
class CBasePulseGraphInstance
{
private:
	[[maybe_unused]] uint8_t __pad0000[0xf8]; // 0x0
public:
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPulseCellOutflowHookInfo
// MPropertyFriendlyName "Destroy Fake Entity"
class CPulseCell_Step_TestDomainDestroyFakeEntity : public CPulseCell_BaseFlow
{
public:
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 4
// Size: 0x4
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct CPulseCell_Test_MultiOutflow_WithParams_Yielding__CursorState_t
{
public:
	int32_t nTestStep; // 0x0	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MPulseLibraryBindings
// MPropertyDescription "Test functions for the derived test domain."
class CPulseTestFuncs_DerivedDomain
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MGetKV3ClassDefaults
class CPulseCell_BaseValue : public CPulseCell_Base
{
public:
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x48
// Has VTable
// Is Abstract
// 
// MGetKV3ClassDefaults
class CPulseCell_BaseYieldingInflow : public CPulseCell_BaseFlow
{
public:
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x70
// Has VTable
// 
// MGetKV3ClassDefaults
class CPulseCell_Inflow_BaseEntrypoint : public CPulseCell_BaseFlow
{
public:
	PulseRuntimeChunkIndex_t m_EntryChunk; // 0x48	
private:
	[[maybe_unused]] uint8_t __pad004c[0x4]; // 0x4c
public:
	PulseRegisterMap_t m_RegisterMap; // 0x50	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x78
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPulseCellOutflowHookInfo
// MPropertyFriendlyName "Wait"
// MPropertyDescription "Causes each execution cursor to pause at this node for a fixed period of time. Each cursor will wake up and resume execution when the time expires, unless aborted or early-woken."
// MPulseEditorHeaderIcon
class CPulseCell_Inflow_Wait : public CPulseCell_BaseYieldingInflow
{
public:
	CPulse_ResumePoint m_WakeResume; // 0x48	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0xa0
// Has VTable
// 
// MPulseInternal_IsCursor
class CPulseExecCursor
{
private:
	[[maybe_unused]] uint8_t __pad0000[0xa0]; // 0x0
public:
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x30
class SignatureOutflow_Continue : public CPulse_OutflowConnection
{
public:
	// No schema binary for binding
};

// Registered binary: pulse_system.dll (project 'pulse_system')
// Alignment: 8
// Size: 0x80
// Has VTable
// 
// MGetKV3ClassDefaults
class CPulseCell_WaitForCursorsWithTagBase : public CPulseCell_BaseYieldingInflow
{
public:
	// MPropertyDescription "Any extra waiting cursors will be terminated. -1 for infinite cursors."
	int32_t m_nCursorsAllowedToWait; // 0x48	
private:
	[[maybe_unused]] uint8_t __pad004c[0x4]; // 0x4c
public:
	CPulse_ResumePoint m_WaitComplete; // 0x50	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MGetKV3ClassDefaults
class CPulseCell_BaseRequirement : public CPulseCell_Base
{
public:
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x18
// 
// MGetKV3ClassDefaults
struct PulseNodeDynamicOutflows_t
{
public:
	CUtlVector< PulseNodeDynamicOutflows_t::DynamicOutflow_t > m_Outflows; // 0x0	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPulseCellOutflowHookInfo
// MPropertyFriendlyName "[Test] Int Value 50"
// MPropertyDescription "Test node that just generates the integer 50. Nothing to see here!"
class CPulseCell_Value_TestValue50 : public CPulseCell_BaseValue
{
public:
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPulseCellOutflowHookInfo
class CPulseCell_Test_MultiInflow_WithDefault : public CPulseCell_BaseFlow
{
public:
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x8
// Has VTable
// Has Trivial Destructor
// 
// MGapTypeQueriesForScopeSingleton
class CPulseTestGapTypeQueryRegistration
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// Static fields:
	static CPulseTestGapTypeQueryRegistration &Get_s_Instance(){return *reinterpret_cast<CPulseTestGapTypeQueryRegistration*>(interfaces::g_schema->FindTypeScopeForModule("pulse_system.dll")->FindDeclaredClass("CPulseTestGapTypeQueryRegistration")->m_static_fields[0]->m_instance);};
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x90
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPulseCellOutflowHookInfo
// MPulseCellWithCustomDocNode
class CPulseCell_Outflow_StringSwitch : public CPulseCell_BaseFlow
{
public:
	CPulse_OutflowConnection m_DefaultCaseOutflow; // 0x48	
	CUtlVector< CPulse_OutflowConnection > m_CaseOutflows; // 0x78	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPulseCellOutflowHookInfo
class CPulseCell_Test_NoInflow : public CPulseCell_BaseFlow
{
public:
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0xc8
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPulseCellOutflowHookInfo
// MPulseCellWithCustomDocNode
class CPulseCell_FireCursors : public CPulseCell_BaseYieldingInflow
{
public:
	CUtlVector< CPulse_OutflowConnection > m_Outflows; // 0x48	
	bool m_bWaitForChildOutflows; // 0x60	
private:
	[[maybe_unused]] uint8_t __pad0061[0x7]; // 0x61
public:
	CPulse_ResumePoint m_OnFinished; // 0x68	
	CPulse_ResumePoint m_OnCanceled; // 0x98	
	
	// Static fields:
	static char* &Get_m_pTagName(){return *reinterpret_cast<char**>(interfaces::g_schema->FindTypeScopeForModule("pulse_system.dll")->FindDeclaredClass("CPulseCell_FireCursors")->m_static_fields[0]->m_instance);};
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x28
// 
// MGetKV3ClassDefaults
struct CPulseCell_Outflow_CycleShuffled__InstanceState_t
{
public:
	CUtlVectorFixedGrowable< uint8 > m_Shuffle; // 0x0	
	int32_t m_nNextShuffle; // 0x20	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPulseCellOutflowHookInfo
// MPropertyFriendlyName "Find Fake Entity"
class CPulseCell_Val_TestDomainFindEntityByName : public CPulseCell_BaseValue
{
public:
};

// Registered binary: pulse_system.dll (project 'pulse_system')
// Alignment: 8
// Size: 0x88
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPulseCellOutflowHookInfo
// MPropertyFriendlyName "Cursor Queue"
// MPropertyDescription "Causes each execution cursor to wait for the completion of all prior cursors that have visited this node. Use this to safely support multiple triggers to areas of the graph that take time to complete."
// MPulseEditorHeaderIcon
class CPulseCell_CursorQueue : public CPulseCell_WaitForCursorsWithTagBase
{
public:
	// MPropertyDescription "Any cursors above this count will wait, up to the limit."
	int32_t m_nCursorsAllowedToRunParallel; // 0x80	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x60
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPulseCellOutflowHookInfo
// MPulseCellWithCustomDocNode
class CPulseCell_Outflow_CycleRandom : public CPulseCell_BaseFlow
{
public:
	CUtlVector< CPulse_OutflowConnection > m_Outputs; // 0x48	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x78
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPulseCellOutflowHookInfo
// MPulseCellWithCustomDocNode
class CPulseCell_Inflow_EventHandler : public CPulseCell_Inflow_BaseEntrypoint
{
public:
	CUtlSymbolLarge m_EventName; // 0x70	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 4
// Size: 0x8
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct CPulseCell_BaseLerp__CursorState_t
{
public:
	GameTime_t m_StartTime; // 0x0	
	GameTime_t m_EndTime; // 0x4	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x20
// 
// MGetKV3ClassDefaults
class CPulse_PublicOutput
{
public:
	CUtlSymbolLarge m_Name; // 0x0	
	CUtlString m_Description; // 0x8	
	CPulseValueFullType m_ParamType; // 0x10	
};

// Registered binary: pulse_system.dll (project 'pulse_system')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MPulseLibraryBindings
// MPropertyDescription "Library for interacting with pulse cursors."
class CPulseCursorFuncs
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0xc8
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPulseCellOutflowHookInfo
// MPulseCellWithCustomDocNode
class CPulseCell_Timeline : public CPulseCell_BaseYieldingInflow
{
public:
	CUtlVector< CPulseCell_Timeline::TimelineEvent_t > m_TimelineEvents; // 0x48	
	bool m_bWaitForChildOutflows; // 0x60	
private:
	[[maybe_unused]] uint8_t __pad0061[0x7]; // 0x61
public:
	CPulse_ResumePoint m_OnFinished; // 0x68	
	CPulse_ResumePoint m_OnCanceled; // 0x98	
	
	// Static fields:
	static char* &Get_m_pTagName(){return *reinterpret_cast<char**>(interfaces::g_schema->FindTypeScopeForModule("pulse_system.dll")->FindDeclaredClass("CPulseCell_Timeline")->m_static_fields[0]->m_instance);};
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x20
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
class CPulse_OutputConnection
{
public:
	CUtlSymbolLarge m_SourceOutput; // 0x0	
	CUtlSymbolLarge m_TargetEntity; // 0x8	
	CUtlSymbolLarge m_TargetInput; // 0x10	
	CUtlSymbolLarge m_Param; // 0x18	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x50
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPulseCellOutflowHookInfo
// MPropertyFriendlyName "Limit Count"
// MPropertyDescription "Skip this node after the limit. Check Type does not apply, the limit will always be checked."
// MPulseRequirementPass
class CPulseCell_LimitCount : public CPulseCell_BaseRequirement
{
public:
	// MPropertyFlattenIntoParentRow
	int32_t m_nLimitCount; // 0x48	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x18
// 
// MGetKV3ClassDefaults
struct PulseGraphExecutionHistoryNodeDesc_t
{
public:
	CBufferString strCellDesc; // 0x0	
	CUtlSymbolLarge strBindingName; // 0x10	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x30
class SignatureOutflow_Resume : public CPulse_ResumePoint
{
public:
	// No schema binary for binding
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MPulseProvideFeatureTag
// MPulseLibraryBindings
class FakeEntity_tAPI
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0xa0
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPulseCellOutflowHookInfo
// MPulseCellWithCustomDocNode
class CPulseCell_Step_CallExternalMethod : public CPulseCell_BaseYieldingInflow
{
public:
	CUtlSymbolLarge m_MethodName; // 0x48	
	CUtlSymbolLarge m_GameBlackboard; // 0x50	
	CUtlLeanVector< CPulseRuntimeMethodArg > m_ExpectedArgs; // 0x58	
	PulseMethodCallMode_t m_nAsyncCallMode; // 0x68	
private:
	[[maybe_unused]] uint8_t __pad006c[0x4]; // 0x6c
public:
	CPulse_ResumePoint m_OnFinished; // 0x70	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x118
// Has VTable
// 
// MPulseInstanceDomainInfo
// MPulseDomainHookInfo
// MPulseLibraryBindings
class CPulseGraphInstance_TurtleGraphics : public CBasePulseGraphInstance
{
public:
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x4
// Has Trivial Destructor
// 
// MIsBoxedIntegerType
struct PulseRuntimeOutputIndex_t
{
public:
	int32_t m_Value; // 0x0	
	
	// Static fields:
	static bool &Get_IS_TYPESAFE_INTEGER(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("pulse_system.dll")->FindDeclaredClass("PulseRuntimeOutputIndex_t")->m_static_fields[0]->m_instance);};
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x18
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct PulseGraphExecutionHistoryEntry_t
{
public:
	PulseCursorID_t nCursorID; // 0x0	
	PulseDocNodeID_t nEditorID; // 0x4	
	float flExecTime; // 0x8	
	uint32_t unFlags; // 0xc	
	CUtlSymbolLarge tagName; // 0x10	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x4
// Has Trivial Destructor
// 
// MIsBoxedIntegerType
struct PulseCursorYieldToken_t
{
public:
	int32_t m_Value; // 0x0	
	
	// Static fields:
	static bool &Get_IS_TYPESAFE_INTEGER(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("pulse_system.dll")->FindDeclaredClass("PulseCursorYieldToken_t")->m_static_fields[0]->m_instance);};
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x4
// Has Trivial Destructor
// 
// MIsBoxedIntegerType
struct PulseGraphInstanceID_t
{
public:
	uint32_t m_Value; // 0x0	
	
	// Static fields:
	static bool &Get_IS_TYPESAFE_INTEGER(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("pulse_system.dll")->FindDeclaredClass("PulseGraphInstanceID_t")->m_static_fields[0]->m_instance);};
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0xd8
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPulseCellOutflowHookInfo
class CPulseCell_TestWaitWithCursorState : public CPulseCell_BaseYieldingInflow
{
public:
	// MPulseCellOutflow_IsDefault
	CPulse_ResumePoint m_WakeResume; // 0x48	
	CPulse_ResumePoint m_WakeCancel; // 0x78	
	CPulse_ResumePoint m_WakeFail; // 0xa8	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0xf8
// 
// MGetKV3ClassDefaults
class CPulse_BlackboardReference
{
public:
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIPulseGraphDef > > m_hBlackboardResource; // 0x0	
	CUtlSymbolLarge m_BlackboardResource; // 0xe0	
	PulseDocNodeID_t m_nNodeID; // 0xe8	
private:
	[[maybe_unused]] uint8_t __pad00ec[0x4]; // 0xec
public:
	CGlobalSymbol m_NodeName; // 0xf0	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x78
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPulseCellOutflowHookInfo
// MPulseCellWithCustomDocNode
class CPulseCell_Inflow_Yield : public CPulseCell_BaseYieldingInflow
{
public:
	CPulse_ResumePoint m_UnyieldResume; // 0x48	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x2
// Has Trivial Destructor
// 
// MIsBoxedIntegerType
struct PulseRuntimeBlackboardReferenceIndex_t
{
public:
	int16_t m_Value; // 0x0	
	
	// Static fields:
	static bool &Get_IS_TYPESAFE_INTEGER(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("pulse_system.dll")->FindDeclaredClass("PulseRuntimeBlackboardReferenceIndex_t")->m_static_fields[0]->m_instance);};
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x4
// Has Trivial Destructor
// 
// MIsBoxedIntegerType
struct PulseRuntimeCellIndex_t
{
public:
	int32_t m_Value; // 0x0	
	
	// Static fields:
	static bool &Get_IS_TYPESAFE_INTEGER(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("pulse_system.dll")->FindDeclaredClass("PulseRuntimeCellIndex_t")->m_static_fields[0]->m_instance);};
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x38
// 
// MGetKV3ClassDefaults
class CPulse_Variable
{
public:
	CUtlSymbolLarge m_Name; // 0x0	
	CUtlString m_Description; // 0x8	
	CPulseValueFullType m_Type; // 0x10	
	KeyValues3 m_DefaultValue; // 0x20	
private:
	[[maybe_unused]] uint8_t __pad0030[0x2]; // 0x30
public:
	bool m_bIsPublic; // 0x32	
	bool m_bIsObservable; // 0x33	
	PulseDocNodeID_t m_nEditorNodeID; // 0x34	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0xa8
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPulseCellOutflowHookInfo
// MPulseCellWithCustomDocNode
class CPulseCell_Inflow_Method : public CPulseCell_Inflow_BaseEntrypoint
{
public:
	CUtlSymbolLarge m_MethodName; // 0x70	
	CUtlString m_Description; // 0x78	
	bool m_bIsPublic; // 0x80	
private:
	[[maybe_unused]] uint8_t __pad0081[0x7]; // 0x81
public:
	CPulseValueFullType m_ReturnType; // 0x88	
	CUtlLeanVector< CPulseRuntimeMethodArg > m_Args; // 0x98	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x120
// Has VTable
// 
// MPulseInstanceDomainInfo
// MPulseDomainHookInfo
// MPulseLibraryBindings
// MPulseDomainOptInFeatureTag
class CPulseGraphInstance_TestDomain : public CBasePulseGraphInstance
{
public:
	bool m_bIsRunningUnitTests; // 0xf8	
	bool m_bExplicitTimeStepping; // 0xf9	
	bool m_bExpectingToDestroyWithYieldedCursors; // 0xfa	
private:
	[[maybe_unused]] uint8_t __pad00fb[0x1]; // 0xfb
public:
	int32_t m_nNextValidateIndex; // 0xfc	
	CUtlVector< CUtlString > m_Tracepoints; // 0x100	
	bool m_bTestYesOrNoPath; // 0x118	
	
	// Static fields:
	static double &Get_s_flExplicitCurTime(){return *reinterpret_cast<double*>(interfaces::g_schema->FindTypeScopeForModule("pulse_system.dll")->FindDeclaredClass("CPulseGraphInstance_TestDomain")->m_static_fields[0]->m_instance);};
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MPulseProvideFeatureTag
// MPulseLibraryBindings
class FakeEntityDerivedB_tAPI
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x38
// 
// MGetKV3ClassDefaults
struct PulseNodeDynamicOutflows_t__DynamicOutflow_t
{
public:
	CGlobalSymbol m_OutflowID; // 0x0	
	// MFgdFromSchemaCompletelySkipField
	CPulse_OutflowConnection m_Connection; // 0x8	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x60
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPulseCellOutflowHookInfo
// MPulseCellWithCustomDocNode
class CPulseCell_Outflow_CycleShuffled : public CPulseCell_BaseFlow
{
public:
	CUtlVector< CPulse_OutflowConnection > m_Outputs; // 0x48	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x50
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPulseCellOutflowHookInfo
// MPulseCellWithCustomDocNode
class CPulseCell_Step_PublicOutput : public CPulseCell_BaseFlow
{
public:
	PulseRuntimeOutputIndex_t m_OutputIndex; // 0x48	
};

// Registered binary: pulse_system.dll (project 'pulse_system')
// Alignment: 8
// Size: 0x30
struct CPulseCell_WaitForCursorsWithTagBase__CursorState_t
{
public:
	CUtlSymbolLarge m_TagName; // 0x0	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 4
// Size: 0x8
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct CPulseCell_TestWaitWithCursorState__CursorState_t
{
public:
	float flWaitValue; // 0x0	
	bool bFailOnCancel; // 0x4	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x18
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
class CPulse_DomainValue
{
public:
	PulseDomainValueType_t m_nType; // 0x0	
	CGlobalSymbol m_Value; // 0x8	
	CGlobalSymbol m_ExpectedRuntimeType; // 0x10	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPulseCellOutflowHookInfo
// MPropertyFriendlyName "Spawn Fake Entity"
class CPulseCell_Step_TestDomainCreateFakeEntity : public CPulseCell_BaseFlow
{
public:
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x50
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPulseCellOutflowHookInfo
// MPropertyFriendlyName "Fake Ent-Fire"
// MPulseEditorHeaderText
class CPulseCell_Step_TestDomainEntFire : public CPulseCell_BaseFlow
{
public:
	CUtlString m_Input; // 0x48	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MPulseLibraryBindings
// MPropertyDescription "Basic math support."
class CPulseMathlib
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x2
// Has Trivial Destructor
// 
// MIsBoxedIntegerType
struct PulseRuntimeConstantIndex_t
{
public:
	int16_t m_Value; // 0x0	
	
	// Static fields:
	static bool &Get_IS_TYPESAFE_INTEGER(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("pulse_system.dll")->FindDeclaredClass("PulseRuntimeConstantIndex_t")->m_static_fields[0]->m_instance);};
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0xa8
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPulseCellOutflowHookInfo
class CPulseCell_Test_MultiOutflow_WithParams : public CPulseCell_BaseFlow
{
public:
	// MPulseCellOutflow_IsDefault
	SignatureOutflow_Continue m_Out1; // 0x48	
	SignatureOutflow_Continue m_Out2; // 0x78	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x138
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPulseCellOutflowHookInfo
class CPulseCell_Test_MultiOutflow_WithParams_Yielding : public CPulseCell_BaseYieldingInflow
{
public:
	// MPulseCellOutflow_IsDefault
	SignatureOutflow_Continue m_Out1; // 0x48	
	SignatureOutflow_Continue m_AsyncChild1; // 0x78	
	SignatureOutflow_Continue m_AsyncChild2; // 0xa8	
	SignatureOutflow_Resume m_YieldResume1; // 0xd8	
	SignatureOutflow_Resume m_YieldResume2; // 0x108	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x128
// Has VTable
// 
// MPulseInstanceDomainInfo
// MPulseDomainHookInfo
// MPulseLibraryBindings
// MPulseDomainHiddenInTool
class CPulseGraphInstance_TestDomain_Derived : public CPulseGraphInstance_TestDomain
{
public:
	int32_t m_nInstanceValueX; // 0x120	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x98
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPulseCellOutflowHookInfo
// MPulseCellWithCustomDocNode
class CPulseCell_Inflow_EntOutputHandler : public CPulseCell_Inflow_BaseEntrypoint
{
public:
	CUtlSymbolLarge m_SourceEntity; // 0x70	
	CUtlSymbolLarge m_SourceOutput; // 0x78	
	CUtlSymbolLarge m_TargetInput; // 0x80	
	CPulseValueFullType m_ExpectedParamType; // 0x88	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x4
// Has Trivial Destructor
// 
// MIsBoxedIntegerType
struct PulseRuntimeCallInfoIndex_t
{
public:
	int32_t m_Value; // 0x0	
	
	// Static fields:
	static bool &Get_IS_TYPESAFE_INTEGER(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("pulse_system.dll")->FindDeclaredClass("PulseRuntimeCallInfoIndex_t")->m_static_fields[0]->m_instance);};
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MPulseProvideFeatureTag
// MPulseLibraryBindings
class FakeEntityDerivedA_tAPI
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPulseCellOutflowHookInfo
// MPropertyFriendlyName "Tracepoint"
class CPulseCell_Step_TestDomainTracepoint : public CPulseCell_BaseFlow
{
public:
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x28
// 
// MGetKV3ClassDefaults
struct PulseGraphExecutionHistoryCursorDesc_t
{
public:
	CUtlVector< PulseCursorID_t > vecAncestorCursorIDs; // 0x0	
	PulseDocNodeID_t nSpawnNodeID; // 0x18	
	PulseDocNodeID_t nRetiredAtNodeID; // 0x1c	
	float flLastReferenced; // 0x20	
	int32_t nLastValidEntryIdx; // 0x24	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x168
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPulseCellOutflowHookInfo
// MPulseCellWithCustomDocNode
class CPulseCell_Inflow_ObservableVariableListener : public CPulseCell_Inflow_BaseEntrypoint
{
public:
	// -> m_hBlackboardResource - 0x70
	// -> m_BlackboardResource - 0x150
	// -> m_nNodeID - 0x158
	// -> m_NodeName - 0x160
	CPulse_BlackboardReference m_BlackboardReference; // 0x70	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 4
// Size: 0x4
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct CPulseCell_LimitCount__InstanceState_t
{
public:
	int32_t m_nCurrentCount; // 0x0	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPulseCellOutflowHookInfo
// MPropertyFriendlyName "Get Fake Entity Name"
class CPulseCell_Val_TestDomainGetEntityName : public CPulseCell_BaseValue
{
public:
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x40
// 
// MGetKV3ClassDefaults
class CPulse_CallInfo
{
public:
	CUtlSymbolLarge m_PortName; // 0x0	
	PulseDocNodeID_t m_nEditorNodeID; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
public:
	PulseRegisterMap_t m_RegisterMap; // 0x10	
	PulseDocNodeID_t m_CallMethodID; // 0x30	
	PulseRuntimeChunkIndex_t m_nSrcChunk; // 0x34	
	int32_t m_nSrcInstruction; // 0x38	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x58
// 
// MGetKV3ClassDefaults
class CPulse_RegisterInfo
{
public:
	PulseRuntimeRegisterIndex_t m_nReg; // 0x0	
	CPulseValueFullType m_Type; // 0x8	
	CKV3MemberNameWithStorage m_OriginName; // 0x18	
	int32_t m_nWrittenByInstruction; // 0x50	
	int32_t m_nLastReadByInstruction; // 0x54	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x88
// 
// MGetKV3ClassDefaults
class CPulse_InvokeBinding
{
public:
	PulseRegisterMap_t m_RegisterMap; // 0x0	
	CUtlSymbolLarge m_FuncName; // 0x20	
	PulseRuntimeCellIndex_t m_nCellIndex; // 0x28	
	PulseRuntimeChunkIndex_t m_nSrcChunk; // 0x2c	
	int32_t m_nSrcInstruction; // 0x30	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0xa8
// Has VTable
// 
// MPulseLibraryBindings
// MPulseInternal_IsCursor
class CTestDomainDerived_Cursor : public CPulseExecCursor
{
public:
	int32_t m_nCursorValueA; // 0xa0	
	int32_t m_nCursorValueB; // 0xa4	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x78
// 
// MGetKV3ClassDefaults
class CPulseGraphExecutionHistory
{
public:
	PulseGraphInstanceID_t m_nInstanceID; // 0x0	
	CUtlString m_strFileName; // 0x8	
	CUtlVector< PulseGraphExecutionHistoryEntry_t* > m_vecHistory; // 0x10	
	CUtlOrderedMap< PulseDocNodeID_t, PulseGraphExecutionHistoryNodeDesc_t* > m_mapCellDesc; // 0x28	
	CUtlOrderedMap< PulseCursorID_t, PulseGraphExecutionHistoryCursorDesc_t* > m_mapCursorDesc; // 0x50	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x90
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPulseCellOutflowHookInfo
// MPulseCellWithCustomDocNode
class CPulseCell_Outflow_IntSwitch : public CPulseCell_BaseFlow
{
public:
	CPulse_OutflowConnection m_DefaultCaseOutflow; // 0x48	
	CUtlVector< CPulse_OutflowConnection > m_CaseOutflows; // 0x78	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x178
// Has VTable
// 
// MGetKV3ClassDefaults
class CPulseGraphDef
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CUtlSymbolLarge m_DomainIdentifier; // 0x8	
	CUtlSymbolLarge m_ParentMapName; // 0x10	
	CUtlSymbolLarge m_ParentXmlName; // 0x18	
	CUtlVector< CUtlSymbolLarge > m_vecGameBlackboards; // 0x20	
	CUtlVector< CPulse_Chunk* > m_Chunks; // 0x38	
	CUtlVector< CPulseCell_Base* > m_Cells; // 0x50	
	CUtlVector< CPulse_Variable > m_Vars; // 0x68	
	CUtlVector< CPulse_PublicOutput > m_PublicOutputs; // 0x80	
	CUtlVector< CPulse_InvokeBinding* > m_InvokeBindings; // 0x98	
	CUtlVector< CPulse_CallInfo* > m_CallInfos; // 0xb0	
	CUtlVector< CPulse_Constant > m_Constants; // 0xc8	
	CUtlVector< CPulse_DomainValue > m_DomainValues; // 0xe0	
	CUtlVector< CPulse_BlackboardReference > m_BlackboardReferences; // 0xf8	
	CUtlVector< CPulse_OutputConnection* > m_OutputConnections; // 0x110	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPulseCellOutflowHookInfo
class CPulseCell_Test_MultiInflow_NoDefault : public CPulseCell_BaseFlow
{
public:
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x28
// 
// MGetKV3ClassDefaults
class CPulse_Constant
{
public:
	CPulseValueFullType m_Type; // 0x0	
	KeyValues3 m_Value; // 0x10	
};

// Registered binary: pulse_system.dll (project 'pulse_system')
// Alignment: 8
// Size: 0x88
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPulseCellOutflowHookInfo
// MPropertyFriendlyName "Wait For Cursors With Tag"
// MPropertyDescription "Causes this execution cursor to wait for the completion of other cursors with the given tag. Can optionally kill the tag while waiting."
// MPulseEditorHeaderIcon
class CPulseCell_WaitForCursorsWithTag : public CPulseCell_WaitForCursorsWithTagBase
{
public:
	// MPropertyDescription "Apply the same tag we're waiting on to the resulting cursor upon wait completion. Can be used to wait on our result cursor with the same tag."
	bool m_bTagSelfWhenComplete; // 0x80	
private:
	[[maybe_unused]] uint8_t __pad0081[0x3]; // 0x81
public:
	// MPropertyDescription "When we start waiting, how should we handle existing cursors?"
	PulseCursorCancelPriority_t m_nDesiredKillPriority; // 0x84	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x78
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPulseCellOutflowHookInfo
// MPulseCellWithCustomDocNode
class CPulseCell_Inflow_GraphHook : public CPulseCell_Inflow_BaseEntrypoint
{
public:
	CUtlSymbolLarge m_HookName; // 0x70	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x38
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct PGDInstruction_t
{
public:
	PulseInstructionCode_t m_nCode; // 0x0	
	PulseRuntimeVarIndex_t m_nVar; // 0x4	
	PulseRuntimeRegisterIndex_t m_nReg0; // 0x8	
	PulseRuntimeRegisterIndex_t m_nReg1; // 0xa	
	PulseRuntimeRegisterIndex_t m_nReg2; // 0xc	
private:
	[[maybe_unused]] uint8_t __pad000e[0x2]; // 0xe
public:
	PulseRuntimeInvokeIndex_t m_nInvokeBindingIndex; // 0x10	
	PulseRuntimeChunkIndex_t m_nChunk; // 0x14	
	int32_t m_nDestInstruction; // 0x18	
	PulseRuntimeCallInfoIndex_t m_nCallInfoIndex; // 0x1c	
	PulseRuntimeConstantIndex_t m_nConstIdx; // 0x20	
	PulseRuntimeDomainValueIndex_t m_nDomainValueIdx; // 0x22	
	PulseRuntimeBlackboardReferenceIndex_t m_nBlackboardReferenceIdx; // 0x24	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x78
// Has VTable
// Is Abstract
// 
// MGetKV3ClassDefaults
class CPulseCell_BaseLerp : public CPulseCell_BaseYieldingInflow
{
public:
	CPulse_ResumePoint m_WakeResume; // 0x48	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0xa8
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPulseCellOutflowHookInfo
// MPropertyFriendlyName "[Test] Explicit Yes/No Outflow"
// MPropertyDescription "Test node that picks between two outflows as specified in the test domain."
class CPulseCell_Outflow_TestExplicitYesNo : public CPulseCell_BaseFlow
{
public:
	// MPropertyFriendlyName "Yes"
	CPulse_OutflowConnection m_Yes; // 0x48	
	// MPropertyFriendlyName "No"
	CPulse_OutflowConnection m_No; // 0x78	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0xa8
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPulseCellOutflowHookInfo
// MPropertyFriendlyName "[Test] Random Yes/No Outflow"
// MPropertyDescription "Test node that randomly picks between two outflows."
class CPulseCell_Outflow_TestRandomYesNo : public CPulseCell_BaseFlow
{
public:
	// MPropertyFriendlyName "Yes"
	// MPropertyDescription "Randomly taken half of the time"
	CPulse_OutflowConnection m_Yes; // 0x48	
	// MPropertyFriendlyName "No"
	// MPropertyDescription "Randomly taken half of the time"
	CPulse_OutflowConnection m_No; // 0x78	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPulseCellOutflowHookInfo
// MPulseCellWithCustomDocNode
class CPulseCell_Step_DebugLog : public CPulseCell_BaseFlow
{
public:
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x38
// 
// MGetKV3ClassDefaults
struct CPulseCell_Timeline__TimelineEvent_t
{
public:
	float m_flTimeFromPrevious; // 0x0	
	bool m_bPauseForPreviousEvents; // 0x4	
	bool m_bCallModeSync; // 0x5	
private:
	[[maybe_unused]] uint8_t __pad0006[0x2]; // 0x6
public:
	CPulse_OutflowConnection m_EventOutflow; // 0x8	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x60
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPulseCellOutflowHookInfo
// MPulseCellWithCustomDocNode
class CPulseCell_Outflow_CycleOrdered : public CPulseCell_BaseFlow
{
public:
	CUtlVector< CPulse_OutflowConnection > m_Outputs; // 0x48	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x50
// 
// MGetKV3ClassDefaults
class CPulseRuntimeMethodArg
{
public:
	CKV3MemberNameWithStorage m_Name; // 0x0	
	CUtlString m_Description; // 0x38	
	CPulseValueFullType m_Type; // 0x40	
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x2
// Has Trivial Destructor
// 
// MIsBoxedIntegerType
struct PulseRuntimeStateOffset_t
{
public:
	uint16_t m_Value; // 0x0	
	
	// Static fields:
	static bool &Get_IS_TYPESAFE_INTEGER(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("pulse_system.dll")->FindDeclaredClass("PulseRuntimeStateOffset_t")->m_static_fields[0]->m_instance);};
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPulseCellOutflowHookInfo
// MPropertyFriendlyName "Random Integer"
// MPropertyDescription "Generate a random integer between min and max (inclusive)"
// MPulseEditorHeaderIcon
class CPulseCell_Value_RandomInt : public CPulseCell_BaseValue
{
public:
};

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0xb8
// Has VTable
// 
// MPulseLibraryBindings
// MPulseInternal_IsCursor
class CPulseTurtleGraphicsCursor : public CPulseExecCursor
{
public:
	Color m_Color; // 0xa0	
	Vector2D m_vPos; // 0xa4	
	float m_flHeadingDeg; // 0xac	
	bool m_bPenUp; // 0xb0	
};

