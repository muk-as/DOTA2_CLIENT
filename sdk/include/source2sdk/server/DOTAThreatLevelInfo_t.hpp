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
    // Size: 0x38
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "float m_flKillability"
    // static metadata: MNetworkVarNames "int32 m_nEntIndex"
    #pragma pack(push, 1)
    struct DOTAThreatLevelInfo_t
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x30]; // 0x0
        // metadata: MNetworkEnable
        float m_flKillability; // 0x30        
        // metadata: MNetworkEnable
        int32_t m_nEntIndex; // 0x34        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(DOTAThreatLevelInfo_t, m_flKillability) == 0x30);
    static_assert(offsetof(DOTAThreatLevelInfo_t, m_nEntIndex) == 0x34);
    
    static_assert(sizeof(DOTAThreatLevelInfo_t) == 0x38);
};
