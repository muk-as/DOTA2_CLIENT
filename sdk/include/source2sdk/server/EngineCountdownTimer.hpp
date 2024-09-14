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
    // Size: 0x18
    // Has VTable
    // Has Trivial Destructor
    // MNetworkNoBase
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "float32 m_duration"
    // static metadata: MNetworkVarNames "float32 m_timestamp"
    // static metadata: MNetworkVarNames "float32 m_timescale"
    #pragma pack(push, 1)
    class EngineCountdownTimer
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        // metadata: MNetworkEnable
        float m_duration; // 0x8        
        // metadata: MNetworkEnable
        float m_timestamp; // 0xc        
        // metadata: MNetworkEnable
        float m_timescale; // 0x10        
        [[maybe_unused]] std::uint8_t pad_0x14[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(EngineCountdownTimer, m_duration) == 0x8);
    static_assert(offsetof(EngineCountdownTimer, m_timestamp) == 0xc);
    static_assert(offsetof(EngineCountdownTimer, m_timescale) == 0x10);
    
    static_assert(sizeof(EngineCountdownTimer) == 0x18);
};
