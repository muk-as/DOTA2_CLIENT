#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
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
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        float m_flSmoothAmplitude; // 0x8        
        float m_flSmoothBias; // 0xc        
        float m_flSmoothDuration; // 0x10        
        float m_flSmoothRemainingTime; // 0x14        
        int32_t m_nSmoothDir; // 0x18        
        [[maybe_unused]] std::uint8_t pad_0x1c[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CSmoothFunc, m_flSmoothAmplitude) == 0x8);
    static_assert(offsetof(CSmoothFunc, m_flSmoothBias) == 0xc);
    static_assert(offsetof(CSmoothFunc, m_flSmoothDuration) == 0x10);
    static_assert(offsetof(CSmoothFunc, m_flSmoothRemainingTime) == 0x14);
    static_assert(offsetof(CSmoothFunc, m_nSmoothDir) == 0x18);
    
    static_assert(sizeof(CSmoothFunc) == 0x20);
};
