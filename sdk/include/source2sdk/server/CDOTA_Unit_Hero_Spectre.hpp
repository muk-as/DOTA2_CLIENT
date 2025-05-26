#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/PlayerID_t.hpp"
#include "source2sdk/server/CDOTA_BaseNPC_Hero.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1ee0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "uint8 m_unCurrentArcanaKillStreak"
        // static metadata: MNetworkVarNames "uint8 m_unBestArcanaKillStreak"
        // static metadata: MNetworkVarNames "PlayerID_t m_nVictimPlayerID"
        // static metadata: MNetworkVarNames "bool m_bArcanaKillstreakRecordBroken"
        #pragma pack(push, 1)
        class CDOTA_Unit_Hero_Spectre : public source2sdk::server::CDOTA_BaseNPC_Hero
        {
        public:
            bool m_bArcanaKillstreakCompleted; // 0x1ed0            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnSpectreArcanaProgressChanged"
            std::uint8_t m_unCurrentArcanaKillStreak; // 0x1ed1            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnSpectreArcanaProgressChanged"
            std::uint8_t m_unBestArcanaKillStreak; // 0x1ed2            
            uint8_t _pad1ed3[0x1]; // 0x1ed3
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnSpectreArcanaProgressChanged"
            source2sdk::client::PlayerID_t m_nVictimPlayerID; // 0x1ed4            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnSpectreArcanaProgressChanged"
            bool m_bArcanaKillstreakRecordBroken; // 0x1ed8            
            uint8_t _pad1ed9[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Unit_Hero_Spectre because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Unit_Hero_Spectre) == 0x1ee0);
    };
};
