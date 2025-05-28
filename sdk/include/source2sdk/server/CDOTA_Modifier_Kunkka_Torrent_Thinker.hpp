#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x18a0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Kunkka_Torrent_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            bool m_bShowEnemies; // 0x1888            
            bool m_bTorrentStorm; // 0x1889            
            bool m_bTorrentStarted; // 0x188a            
            uint8_t _pad188b[0x1]; // 0x188b
            source2sdk::entity2::GameTime_t m_fTorrentStartTime; // 0x188c            
            float flDamagePerTick; // 0x1890            
            float flFirstDamage; // 0x1894            
            float damage_tick_interval; // 0x1898            
            float percent_instant; // 0x189c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Kunkka_Torrent_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Kunkka_Torrent_Thinker) == 0x18a0);
    };
};
