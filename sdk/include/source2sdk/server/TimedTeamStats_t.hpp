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
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Constructor
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct TimedTeamStats_t
        {
        public:
            std::uint32_t m_nTime; // 0x_            
            std::uint16_t m_nEnemyTowerStatus; // 0x_            
            std::uint16_t m_nEnemyBarracksStatus; // 0x_            
            std::uint8_t m_nEnemyTowersKilled; // 0x_            
            std::uint8_t m_nEnemyBarracksKilled; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::TimedTeamStats_t, m_nTime) == 0x_);
        static_assert(offsetof(source2sdk::server::TimedTeamStats_t, m_nEnemyTowerStatus) == 0x_);
        static_assert(offsetof(source2sdk::server::TimedTeamStats_t, m_nEnemyBarracksStatus) == 0x_);
        static_assert(offsetof(source2sdk::server::TimedTeamStats_t, m_nEnemyTowersKilled) == 0x_);
        static_assert(offsetof(source2sdk::server::TimedTeamStats_t, m_nEnemyBarracksKilled) == 0x_);
        
        static_assert(sizeof(source2sdk::server::TimedTeamStats_t) == 0x_);
    };
};
