#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1890
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Kunkka_Torrent_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            bool m_bShowEnemies; // 0x1878            
            bool m_bTorrentStorm; // 0x1879            
            bool m_bTorrentStarted; // 0x187a            
            uint8_t _pad187b[0x1]; // 0x187b
            source2sdk::entity2::GameTime_t m_fTorrentStartTime; // 0x187c            
            float flDamagePerTick; // 0x1880            
            float flFirstDamage; // 0x1884            
            float damage_tick_interval; // 0x1888            
            float percent_instant; // 0x188c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Kunkka_Torrent_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Kunkka_Torrent_Thinker) == 0x1890);
    };
};
