#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x28
    // Has Trivial Constructor
    // Has Trivial Destructor
    #pragma pack(push, 1)
    struct EngineLoopState_t
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x18]; // 0x0
        int32_t m_nPlatWindowWidth; // 0x18        
        int32_t m_nPlatWindowHeight; // 0x1c        
        int32_t m_nRenderWidth; // 0x20        
        int32_t m_nRenderHeight; // 0x24        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(EngineLoopState_t, m_nPlatWindowWidth) == 0x18);
    static_assert(offsetof(EngineLoopState_t, m_nPlatWindowHeight) == 0x1c);
    static_assert(offsetof(EngineLoopState_t, m_nRenderWidth) == 0x20);
    static_assert(offsetof(EngineLoopState_t, m_nRenderHeight) == 0x24);
    
    static_assert(sizeof(EngineLoopState_t) == 0x28);
};
