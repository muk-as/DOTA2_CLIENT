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
        // Size: 0xc
        // Has Trivial Constructor
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct TimedTeamStats_t
        {
        public:
            std::uint32_t m_nTime; // 0x0            
            std::uint16_t m_nEnemyTowerStatus; // 0x4            
            std::uint16_t m_nEnemyBarracksStatus; // 0x6            
            std::uint8_t m_nEnemyTowersKilled; // 0x8            
            std::uint8_t m_nEnemyBarracksKilled; // 0x9            
            uint8_t _pad000a[0x2];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::TimedTeamStats_t, m_nTime) == 0x0);
        static_assert(offsetof(source2sdk::server::TimedTeamStats_t, m_nEnemyTowerStatus) == 0x4);
        static_assert(offsetof(source2sdk::server::TimedTeamStats_t, m_nEnemyBarracksStatus) == 0x6);
        static_assert(offsetof(source2sdk::server::TimedTeamStats_t, m_nEnemyTowersKilled) == 0x8);
        static_assert(offsetof(source2sdk::server::TimedTeamStats_t, m_nEnemyBarracksKilled) == 0x9);
        
        static_assert(sizeof(source2sdk::server::TimedTeamStats_t) == 0xc);
    };
};
