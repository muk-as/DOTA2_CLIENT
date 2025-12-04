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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
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
            bool m_bArcanaKillstreakCompleted; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnSpectreArcanaProgressChanged"
            std::uint8_t m_unCurrentArcanaKillStreak; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnSpectreArcanaProgressChanged"
            std::uint8_t m_unBestArcanaKillStreak; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnSpectreArcanaProgressChanged"
            source2sdk::client::PlayerID_t m_nVictimPlayerID; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnSpectreArcanaProgressChanged"
            bool m_bArcanaKillstreakRecordBroken; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Unit_Hero_Spectre because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Unit_Hero_Spectre) == 0x_);
    };
};
