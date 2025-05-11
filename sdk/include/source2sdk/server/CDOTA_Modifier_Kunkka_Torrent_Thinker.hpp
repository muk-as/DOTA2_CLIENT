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
        // Size: 0x1810
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Kunkka_Torrent_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            bool m_bShowEnemies; // 0x17f8            
            bool m_bTorrentStorm; // 0x17f9            
            bool m_bTorrentStarted; // 0x17fa            
            uint8_t _pad17fb[0x1]; // 0x17fb
            source2sdk::entity2::GameTime_t m_fTorrentStartTime; // 0x17fc            
            float flDamagePerTick; // 0x1800            
            float flFirstDamage; // 0x1804            
            float damage_tick_interval; // 0x1808            
            float percent_instant; // 0x180c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Kunkka_Torrent_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Kunkka_Torrent_Thinker) == 0x1810);
    };
};
