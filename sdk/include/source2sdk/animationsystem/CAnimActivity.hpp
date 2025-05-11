#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animationsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animationsystem
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x20
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAnimActivity
        {
        public:
            CBufferString m_name; // 0x0            
            std::int32_t m_nActivity; // 0x10            
            std::int32_t m_nFlags; // 0x14            
            std::int32_t m_nWeight; // 0x18            
            uint8_t _pad001c[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animationsystem::CAnimActivity, m_name) == 0x0);
        static_assert(offsetof(source2sdk::animationsystem::CAnimActivity, m_nActivity) == 0x10);
        static_assert(offsetof(source2sdk::animationsystem::CAnimActivity, m_nFlags) == 0x14);
        static_assert(offsetof(source2sdk::animationsystem::CAnimActivity, m_nWeight) == 0x18);
        
        static_assert(sizeof(source2sdk::animationsystem::CAnimActivity) == 0x20);
    };
};
