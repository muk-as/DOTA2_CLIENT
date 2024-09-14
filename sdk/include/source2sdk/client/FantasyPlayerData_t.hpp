#pragma once
#include "source2sdk/client/ELeagueRegion.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x20
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyAutoExpandSelf
    #pragma pack(push, 1)
    struct FantasyPlayerData_t
    {
    public:
        // metadata: MPropertyDescription "Account ID of the Pro Player"
        uint32_t m_unAccountID; // 0x0        
        // metadata: MPropertyDescription "What team this player is competing with for the fantasy league"
        uint32_t m_unTeamID; // 0x4        
        // metadata: MPropertyDescription "What region does this player play for"
        client::ELeagueRegion m_eRegion; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x0c[0x4]; // 0xc
        // metadata: MPropertyDescription "Name of the pro player"
        CUtlString m_strPlayerName; // 0x10        
        // metadata: MPropertyDescription "Is this player still playing in the league?"
        bool m_bIsValid; // 0x18        
        [[maybe_unused]] std::uint8_t pad_0x19[0x7];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(FantasyPlayerData_t, m_unAccountID) == 0x0);
    static_assert(offsetof(FantasyPlayerData_t, m_unTeamID) == 0x4);
    static_assert(offsetof(FantasyPlayerData_t, m_eRegion) == 0x8);
    static_assert(offsetof(FantasyPlayerData_t, m_strPlayerName) == 0x10);
    static_assert(offsetof(FantasyPlayerData_t, m_bIsValid) == 0x18);
    
    static_assert(sizeof(FantasyPlayerData_t) == 0x20);
};
