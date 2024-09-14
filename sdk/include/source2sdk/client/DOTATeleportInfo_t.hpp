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
    // Size: 0x40
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "GameTime_t m_flTime"
    // static metadata: MNetworkVarNames "Vector2D m_vPosition"
    // static metadata: MNetworkVarNames "bool m_bIsOutpost"
    #pragma pack(push, 1)
    struct DOTATeleportInfo_t
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x30]; // 0x0
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flTime; // 0x30        
        // metadata: MNetworkEnable
        Vector2D m_vPosition; // 0x34        
        // metadata: MNetworkEnable
        bool m_bIsOutpost; // 0x3c        
        [[maybe_unused]] std::uint8_t pad_0x3d[0x3];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(DOTATeleportInfo_t, m_flTime) == 0x30);
    static_assert(offsetof(DOTATeleportInfo_t, m_vPosition) == 0x34);
    static_assert(offsetof(DOTATeleportInfo_t, m_bIsOutpost) == 0x3c);
    
    static_assert(sizeof(DOTATeleportInfo_t) == 0x40);
};
