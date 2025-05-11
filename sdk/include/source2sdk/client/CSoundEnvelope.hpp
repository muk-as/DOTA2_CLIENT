#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x10
        // Has Trivial Destructor
        #pragma pack(push, 1)
        class CSoundEnvelope
        {
        public:
            float m_current; // 0x0            
            float m_target; // 0x4            
            float m_rate; // 0x8            
            bool m_forceupdate; // 0xc            
            uint8_t _pad000d[0x3];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CSoundEnvelope, m_current) == 0x0);
        static_assert(offsetof(source2sdk::client::CSoundEnvelope, m_target) == 0x4);
        static_assert(offsetof(source2sdk::client::CSoundEnvelope, m_rate) == 0x8);
        static_assert(offsetof(source2sdk::client::CSoundEnvelope, m_forceupdate) == 0xc);
        
        static_assert(sizeof(source2sdk::client::CSoundEnvelope) == 0x10);
    };
};
