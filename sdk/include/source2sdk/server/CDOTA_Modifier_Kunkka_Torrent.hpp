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
    // Size: 0x1708
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Kunkka_Torrent : public client::CDOTA_Buff
    {
    public:
        int32_t torrent_damage; // 0x16e8        
        float damage_tick_interval; // 0x16ec        
        float percent_instant; // 0x16f0        
        float flDamagePerTick; // 0x16f4        
        float m_flStartZ; // 0x16f8        
        float m_flCurTime; // 0x16fc        
        bool m_bTorrentStorm; // 0x1700        
        [[maybe_unused]] std::uint8_t pad_0x1701[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Kunkka_Torrent because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Kunkka_Torrent) == 0x1708);
};
