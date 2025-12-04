#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        struct ConstantInfo_t
        {
        public:
            CUtlString m_name; // 0x_            
            CUtlStringToken m_nameToken; // 0x_            
            float m_flValue; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::mathlib_extended::ConstantInfo_t, m_name) == 0x_);
        static_assert(offsetof(source2sdk::mathlib_extended::ConstantInfo_t, m_nameToken) == 0x_);
        static_assert(offsetof(source2sdk::mathlib_extended::ConstantInfo_t, m_flValue) == 0x_);
        
        static_assert(sizeof(source2sdk::mathlib_extended::ConstantInfo_t) == 0x_);
    };
};
