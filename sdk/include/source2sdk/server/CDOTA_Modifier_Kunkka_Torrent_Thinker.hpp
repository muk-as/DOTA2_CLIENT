#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1720
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Kunkka_Torrent_Thinker : public client::CDOTA_Buff
    {
    public:
        bool m_bShowEnemies; // 0x1708        
        bool m_bTorrentStorm; // 0x1709        
        bool m_bTorrentStarted; // 0x170a        
        [[maybe_unused]] std::uint8_t pad_0x170b[0x1]; // 0x170b
        entity2::GameTime_t m_fTorrentStartTime; // 0x170c        
        float flDamagePerTick; // 0x1710        
        float flFirstDamage; // 0x1714        
        float damage_tick_interval; // 0x1718        
        float percent_instant; // 0x171c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Kunkka_Torrent_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Kunkka_Torrent_Thinker) == 0x1720);
};
