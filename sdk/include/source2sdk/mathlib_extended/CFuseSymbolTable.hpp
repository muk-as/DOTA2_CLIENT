#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/mathlib_extended/ConstantInfo_t.hpp"
#include "source2sdk/mathlib_extended/FunctionInfo_t.hpp"
#include "source2sdk/mathlib_extended/VariableInfo_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: mathlib_extended
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace mathlib_extended
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CFuseSymbolTable
        {
        public:
            // m_constants has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::mathlib_extended::ConstantInfo_t> m_constants;
            char m_constants[0x_]; // 0x_            
            // m_variables has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::mathlib_extended::VariableInfo_t> m_variables;
            char m_variables[0x_]; // 0x_            
            // m_functions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::mathlib_extended::FunctionInfo_t> m_functions;
            char m_functions[0x_]; // 0x_            
            // m_constantMap has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlHashtable<CUtlStringToken,std::int32_t> m_constantMap;
            char m_constantMap[0x_]; // 0x_            
            // m_variableMap has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlHashtable<CUtlStringToken,std::int32_t> m_variableMap;
            char m_variableMap[0x_]; // 0x_            
            // m_functionMap has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlHashtable<CUtlStringToken,std::int32_t> m_functionMap;
            char m_functionMap[0x_]; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::mathlib_extended::CFuseSymbolTable, m_constants) == 0x_);
        static_assert(offsetof(source2sdk::mathlib_extended::CFuseSymbolTable, m_variables) == 0x_);
        static_assert(offsetof(source2sdk::mathlib_extended::CFuseSymbolTable, m_functions) == 0x_);
        static_assert(offsetof(source2sdk::mathlib_extended::CFuseSymbolTable, m_constantMap) == 0x_);
        static_assert(offsetof(source2sdk::mathlib_extended::CFuseSymbolTable, m_variableMap) == 0x_);
        static_assert(offsetof(source2sdk::mathlib_extended::CFuseSymbolTable, m_functionMap) == 0x_);
        
        static_assert(sizeof(source2sdk::mathlib_extended::CFuseSymbolTable) == 0x_);
    };
};
