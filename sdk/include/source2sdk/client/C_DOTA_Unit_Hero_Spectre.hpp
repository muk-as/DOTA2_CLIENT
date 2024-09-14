#pragma once
#include "source2sdk/client/C_DOTA_BaseNPC_Hero.hpp"
#include "source2sdk/client/PlayerID_t.hpp"
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
    // Standard-layout class: false
    // Size: 0x1b98
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "uint8 m_unCurrentArcanaKillStreak"
    // static metadata: MNetworkVarNames "uint8 m_unBestArcanaKillStreak"
    // static metadata: MNetworkVarNames "PlayerID_t m_nVictimPlayerID"
    // static metadata: MNetworkVarNames "bool m_bArcanaKillstreakRecordBroken"
    #pragma pack(push, 1)
    class C_DOTA_Unit_Hero_Spectre : public client::C_DOTA_BaseNPC_Hero
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnSpectreArcanaProgressChanged"
        uint8_t m_unCurrentArcanaKillStreak; // 0x1b88        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnSpectreArcanaProgressChanged"
        uint8_t m_unBestArcanaKillStreak; // 0x1b89        
        [[maybe_unused]] std::uint8_t pad_0x1b8a[0x2]; // 0x1b8a
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnSpectreArcanaProgressChanged"
        client::PlayerID_t m_nVictimPlayerID; // 0x1b8c        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnSpectreArcanaProgressChanged"
        bool m_bArcanaKillstreakRecordBroken; // 0x1b90        
        [[maybe_unused]] std::uint8_t pad_0x1b91[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Unit_Hero_Spectre because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Unit_Hero_Spectre) == 0x1b98);
};
