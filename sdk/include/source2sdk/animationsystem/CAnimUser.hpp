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
        // Size: 0x18
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAnimUser
        {
        public:
            CBufferString m_name; // 0x0            
            std::int32_t m_nType; // 0x10            
            uint8_t _pad0014[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animationsystem::CAnimUser, m_name) == 0x0);
        static_assert(offsetof(source2sdk::animationsystem::CAnimUser, m_nType) == 0x10);
        
        static_assert(sizeof(source2sdk::animationsystem::CAnimUser) == 0x18);
    };
};
