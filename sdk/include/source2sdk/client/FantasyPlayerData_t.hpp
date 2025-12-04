#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ELeagueRegion.hpp"

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
        struct FantasyPlayerData_t
        {
        public:
            // metadata: MPropertyDescription "Account ID of the Pro Player"
            std::uint32_t m_unAccountID; // 0x_            
            // metadata: MPropertyDescription "What team this player is competing with for the fantasy league"
            std::uint32_t m_unTeamID; // 0x_            
            // metadata: MPropertyDescription "What region does this player play for"
            source2sdk::client::ELeagueRegion m_eRegion; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyDescription "Name of the pro player"
            CUtlString m_strPlayerName; // 0x_            
            // metadata: MPropertyDescription "Is this player still playing in the league?"
            bool m_bIsValid; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::FantasyPlayerData_t, m_unAccountID) == 0x_);
        static_assert(offsetof(source2sdk::client::FantasyPlayerData_t, m_unTeamID) == 0x_);
        static_assert(offsetof(source2sdk::client::FantasyPlayerData_t, m_eRegion) == 0x_);
        static_assert(offsetof(source2sdk::client::FantasyPlayerData_t, m_strPlayerName) == 0x_);
        static_assert(offsetof(source2sdk::client::FantasyPlayerData_t, m_bIsValid) == 0x_);
        
        static_assert(sizeof(source2sdk::client::FantasyPlayerData_t) == 0x_);
    };
};
