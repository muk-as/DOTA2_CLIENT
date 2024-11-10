#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
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
    // Size: 0x1728
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Kunkka_Torrent : public client::CDOTA_Buff
    {
    public:
        int32_t torrent_damage; // 0x1708        
        float damage_tick_interval; // 0x170c        
        float percent_instant; // 0x1710        
        float flDamagePerTick; // 0x1714        
        float m_flStartZ; // 0x1718        
        float m_flCurTime; // 0x171c        
        bool m_bTorrentStorm; // 0x1720        
        [[maybe_unused]] std::uint8_t pad_0x1721[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Kunkka_Torrent because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Kunkka_Torrent) == 0x1728);
};
