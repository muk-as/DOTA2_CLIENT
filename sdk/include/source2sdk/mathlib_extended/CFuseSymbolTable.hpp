#pragma once
#include "source2sdk/mathlib_extended/ConstantInfo_t.hpp"
#include "source2sdk/mathlib_extended/FunctionInfo_t.hpp"
#include "source2sdk/mathlib_extended/VariableInfo_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: mathlib_extended
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::mathlib_extended
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0xb0
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CFuseSymbolTable
    {
    public:
        // m_constants has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<mathlib_extended::ConstantInfo_t> m_constants;
        char m_constants[0x18]; // 0x0        
        // m_variables has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<mathlib_extended::VariableInfo_t> m_variables;
        char m_variables[0x18]; // 0x18        
        // m_functions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<mathlib_extended::FunctionInfo_t> m_functions;
        char m_functions[0x18]; // 0x30        
        // m_constantMap has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlHashtable<CUtlStringToken,int32_t> m_constantMap;
        char m_constantMap[0x20]; // 0x48        
        // m_variableMap has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlHashtable<CUtlStringToken,int32_t> m_variableMap;
        char m_variableMap[0x20]; // 0x68        
        // m_functionMap has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlHashtable<CUtlStringToken,int32_t> m_functionMap;
        char m_functionMap[0x20]; // 0x88        
        [[maybe_unused]] std::uint8_t pad_0xa8[0x8];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CFuseSymbolTable, m_constants) == 0x0);
    static_assert(offsetof(CFuseSymbolTable, m_variables) == 0x18);
    static_assert(offsetof(CFuseSymbolTable, m_functions) == 0x30);
    static_assert(offsetof(CFuseSymbolTable, m_constantMap) == 0x48);
    static_assert(offsetof(CFuseSymbolTable, m_variableMap) == 0x68);
    static_assert(offsetof(CFuseSymbolTable, m_functionMap) == 0x88);
    
    static_assert(sizeof(CFuseSymbolTable) == 0xb0);
};
