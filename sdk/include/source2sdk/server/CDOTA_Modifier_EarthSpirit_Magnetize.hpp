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
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1730
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_EarthSpirit_Magnetize : public client::CDOTA_Buff
    {
    public:
        int32_t rock_search_radius; // 0x16e8        
        float damage_per_second; // 0x16ec        
        float damage_interval; // 0x16f0        
        float rock_explosion_delay; // 0x16f4        
        float damage_duration; // 0x16f8        
        int32_t cast_radius; // 0x16fc        
        int32_t rock_explosion_radius; // 0x1700        
        bool magnetized_rocks_buff_self; // 0x1704        
        [[maybe_unused]] std::uint8_t pad_0x1705[0x3]; // 0x1705
        int32_t magnetized_rocks_buff_self_duration; // 0x1708        
        [[maybe_unused]] std::uint8_t pad_0x170c[0x4]; // 0x170c
        // m_hExplodedRocks has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hExplodedRocks;
        char m_hExplodedRocks[0x18]; // 0x1710        
        float duration; // 0x1728        
        bool m_bShowOverhead; // 0x172c        
        [[maybe_unused]] std::uint8_t pad_0x172d[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_EarthSpirit_Magnetize because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_EarthSpirit_Magnetize) == 0x1730);
};
