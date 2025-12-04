#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EEvent.hpp"
#include "source2sdk/client/FantasyCraftDataID_t.hpp"
#include "source2sdk/client/FantasyLeagueID_t.hpp"
#include "source2sdk/client/FantasyPeriodData_t.hpp"
#include "source2sdk/client/FantasyRoleData_t.hpp"
#include "source2sdk/client/LeagueID_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyAutoExpandSelf
        #pragma pack(push, 1)
        struct FantasyLeagueData_t
        {
        public:
            // metadata: MPropertyDescription "Unique identifier for the league"
            source2sdk::client::FantasyLeagueID_t m_nFantasyLeagueID; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyDescription "What event this data is tied to"
            source2sdk::client::EEvent m_eEvent; // 0x_            
            // metadata: MPropertyDescription "What data to use for crafting"
            source2sdk::client::FantasyCraftDataID_t m_nCraftingID; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyDescription "Which Leagues is this attached to"
            // m_nLeagues has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::LeagueID_t> m_nLeagues;
            char m_nLeagues[0x_]; // 0x_            
            // m_vecPlayers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::FantasyRoleData_t> m_vecPlayers;
            char m_vecPlayers[0x_]; // 0x_            
            // m_vecPeriods has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::FantasyPeriodData_t> m_vecPeriods;
            char m_vecPeriods[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::FantasyLeagueData_t, m_nFantasyLeagueID) == 0x_);
        static_assert(offsetof(source2sdk::client::FantasyLeagueData_t, m_eEvent) == 0x_);
        static_assert(offsetof(source2sdk::client::FantasyLeagueData_t, m_nCraftingID) == 0x_);
        static_assert(offsetof(source2sdk::client::FantasyLeagueData_t, m_nLeagues) == 0x_);
        static_assert(offsetof(source2sdk::client::FantasyLeagueData_t, m_vecPlayers) == 0x_);
        static_assert(offsetof(source2sdk::client::FantasyLeagueData_t, m_vecPeriods) == 0x_);
        
        static_assert(sizeof(source2sdk::client::FantasyLeagueData_t) == 0x_);
    };
};
