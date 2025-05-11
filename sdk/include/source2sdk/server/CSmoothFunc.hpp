#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x20
        // Has VTable
        // Has Trivial Destructor
        #pragma pack(push, 1)
        class CSmoothFunc
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            float m_flSmoothAmplitude; // 0x8            
            float m_flSmoothBias; // 0xc            
            float m_flSmoothDuration; // 0x10            
            float m_flSmoothRemainingTime; // 0x14            
            std::int32_t m_nSmoothDir; // 0x18            
            uint8_t _pad001c[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CSmoothFunc, m_flSmoothAmplitude) == 0x8);
        static_assert(offsetof(source2sdk::server::CSmoothFunc, m_flSmoothBias) == 0xc);
        static_assert(offsetof(source2sdk::server::CSmoothFunc, m_flSmoothDuration) == 0x10);
        static_assert(offsetof(source2sdk::server::CSmoothFunc, m_flSmoothRemainingTime) == 0x14);
        static_assert(offsetof(source2sdk::server::CSmoothFunc, m_nSmoothDir) == 0x18);
        
        static_assert(sizeof(source2sdk::server::CSmoothFunc) == 0x20);
    };
};
