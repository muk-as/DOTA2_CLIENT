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
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        #pragma pack(push, 1)
        class CSoundEnvelope
        {
        public:
            float m_current; // 0x_            
            float m_target; // 0x_            
            float m_rate; // 0x_            
            bool m_forceupdate; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CSoundEnvelope, m_current) == 0x_);
        static_assert(offsetof(source2sdk::client::CSoundEnvelope, m_target) == 0x_);
        static_assert(offsetof(source2sdk::client::CSoundEnvelope, m_rate) == 0x_);
        static_assert(offsetof(source2sdk::client::CSoundEnvelope, m_forceupdate) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CSoundEnvelope) == 0x_);
    };
};
