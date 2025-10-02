#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTA_BaseNPC_Hero.hpp"
#include "source2sdk/client/PlayerID_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1df0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "uint8 m_unCurrentArcanaKillStreak"
        // static metadata: MNetworkVarNames "uint8 m_unBestArcanaKillStreak"
        // static metadata: MNetworkVarNames "PlayerID_t m_nVictimPlayerID"
        // static metadata: MNetworkVarNames "bool m_bArcanaKillstreakRecordBroken"
        #pragma pack(push, 1)
        class C_DOTA_Unit_Hero_Spectre : public source2sdk::client::C_DOTA_BaseNPC_Hero
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnSpectreArcanaProgressChanged"
            std::uint8_t m_unCurrentArcanaKillStreak; // 0x1de0            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnSpectreArcanaProgressChanged"
            std::uint8_t m_unBestArcanaKillStreak; // 0x1de1            
            uint8_t _pad1de2[0x2]; // 0x1de2
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnSpectreArcanaProgressChanged"
            source2sdk::client::PlayerID_t m_nVictimPlayerID; // 0x1de4            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnSpectreArcanaProgressChanged"
            bool m_bArcanaKillstreakRecordBroken; // 0x1de8            
            uint8_t _pad1de9[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Unit_Hero_Spectre because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Unit_Hero_Spectre) == 0x1df0);
    };
};
