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
    // Size: 0x1700
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Kunkka_Torrent_Thinker : public client::CDOTA_Buff
    {
    public:
        bool m_bShowEnemies; // 0x16e8        
        bool m_bTorrentStorm; // 0x16e9        
        bool m_bTorrentStarted; // 0x16ea        
        [[maybe_unused]] std::uint8_t pad_0x16eb[0x1]; // 0x16eb
        entity2::GameTime_t m_fTorrentStartTime; // 0x16ec        
        float flDamagePerTick; // 0x16f0        
        float flFirstDamage; // 0x16f4        
        float damage_tick_interval; // 0x16f8        
        float percent_instant; // 0x16fc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Kunkka_Torrent_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Kunkka_Torrent_Thinker) == 0x1700);
};
