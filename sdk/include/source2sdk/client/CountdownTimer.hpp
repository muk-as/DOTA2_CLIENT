#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0x18
    // Has VTable
    // Has Trivial Destructor
    // MNetworkNoBase
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "float32 m_duration"
    // static metadata: MNetworkVarNames "GameTime_t m_timestamp"
    // static metadata: MNetworkVarNames "float32 m_timescale"
    // static metadata: MNetworkVarNames "WorldGroupId_t m_nWorldGroupId"
    #pragma pack(push, 1)
    class CountdownTimer
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        // metadata: MNetworkEnable
        float m_duration; // 0x8        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_timestamp; // 0xc        
        // metadata: MNetworkEnable
        float m_timescale; // 0x10        
        // metadata: MNetworkEnable
        WorldGroupId_t m_nWorldGroupId; // 0x14        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CountdownTimer, m_duration) == 0x8);
    static_assert(offsetof(CountdownTimer, m_timestamp) == 0xc);
    static_assert(offsetof(CountdownTimer, m_timescale) == 0x10);
    static_assert(offsetof(CountdownTimer, m_nWorldGroupId) == 0x14);
    
    static_assert(sizeof(CountdownTimer) == 0x18);
};
