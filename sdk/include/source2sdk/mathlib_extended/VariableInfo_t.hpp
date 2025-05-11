#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/mathlib_extended/FuseVariableAccess_t.hpp"
#include "source2sdk/mathlib_extended/FuseVariableIndex_t.hpp"
#include "source2sdk/mathlib_extended/FuseVariableType_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: mathlib_extended
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace mathlib_extended
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x18
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct VariableInfo_t
        {
        public:
            CUtlString m_name; // 0x0            
            CUtlStringToken m_nameToken; // 0x8            
            source2sdk::mathlib_extended::FuseVariableIndex_t m_nIndex; // 0xc            
            std::uint8_t m_nNumComponents; // 0xe            
            source2sdk::mathlib_extended::FuseVariableType_t m_eVarType; // 0xf            
            source2sdk::mathlib_extended::FuseVariableAccess_t m_eAccess; // 0x10            
            uint8_t _pad0011[0x7];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::mathlib_extended::VariableInfo_t, m_name) == 0x0);
        static_assert(offsetof(source2sdk::mathlib_extended::VariableInfo_t, m_nameToken) == 0x8);
        static_assert(offsetof(source2sdk::mathlib_extended::VariableInfo_t, m_nIndex) == 0xc);
        static_assert(offsetof(source2sdk::mathlib_extended::VariableInfo_t, m_nNumComponents) == 0xe);
        static_assert(offsetof(source2sdk::mathlib_extended::VariableInfo_t, m_eVarType) == 0xf);
        static_assert(offsetof(source2sdk::mathlib_extended::VariableInfo_t, m_eAccess) == 0x10);
        
        static_assert(sizeof(source2sdk::mathlib_extended::VariableInfo_t) == 0x18);
    };
};
