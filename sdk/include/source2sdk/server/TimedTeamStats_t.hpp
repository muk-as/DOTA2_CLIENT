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
    // Size: 0xc
    // Has Trivial Constructor
    // Has Trivial Destructor
    #pragma pack(push, 1)
    struct TimedTeamStats_t
    {
    public:
        uint32_t m_nTime; // 0x0        
        uint16_t m_nEnemyTowerStatus; // 0x4        
        uint16_t m_nEnemyBarracksStatus; // 0x6        
        uint8_t m_nEnemyTowersKilled; // 0x8        
        uint8_t m_nEnemyBarracksKilled; // 0x9        
        [[maybe_unused]] std::uint8_t pad_0x0a[0x2];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(TimedTeamStats_t, m_nTime) == 0x0);
    static_assert(offsetof(TimedTeamStats_t, m_nEnemyTowerStatus) == 0x4);
    static_assert(offsetof(TimedTeamStats_t, m_nEnemyBarracksStatus) == 0x6);
    static_assert(offsetof(TimedTeamStats_t, m_nEnemyTowersKilled) == 0x8);
    static_assert(offsetof(TimedTeamStats_t, m_nEnemyBarracksKilled) == 0x9);
    
    static_assert(sizeof(TimedTeamStats_t) == 0xc);
};
