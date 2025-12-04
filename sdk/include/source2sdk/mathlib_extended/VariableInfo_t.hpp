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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct VariableInfo_t
        {
        public:
            CUtlString m_name; // 0x_            
            CUtlStringToken m_nameToken; // 0x_            
            source2sdk::mathlib_extended::FuseVariableIndex_t m_nIndex; // 0x_            
            std::uint8_t m_nNumComponents; // 0x_            
            source2sdk::mathlib_extended::FuseVariableType_t m_eVarType; // 0x_            
            source2sdk::mathlib_extended::FuseVariableAccess_t m_eAccess; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::mathlib_extended::VariableInfo_t, m_name) == 0x_);
        static_assert(offsetof(source2sdk::mathlib_extended::VariableInfo_t, m_nameToken) == 0x_);
        static_assert(offsetof(source2sdk::mathlib_extended::VariableInfo_t, m_nIndex) == 0x_);
        static_assert(offsetof(source2sdk::mathlib_extended::VariableInfo_t, m_nNumComponents) == 0x_);
        static_assert(offsetof(source2sdk::mathlib_extended::VariableInfo_t, m_eVarType) == 0x_);
        static_assert(offsetof(source2sdk::mathlib_extended::VariableInfo_t, m_eAccess) == 0x_);
        
        static_assert(sizeof(source2sdk::mathlib_extended::VariableInfo_t) == 0x_);
    };
};
