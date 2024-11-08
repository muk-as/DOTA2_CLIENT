#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1750
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_EarthSpirit_Magnetize : public client::CDOTA_Buff
    {
    public:
        int32_t rock_search_radius; // 0x1708        
        float damage_per_second; // 0x170c        
        float damage_interval; // 0x1710        
        float rock_explosion_delay; // 0x1714        
        float damage_duration; // 0x1718        
        int32_t cast_radius; // 0x171c        
        int32_t rock_explosion_radius; // 0x1720        
        bool magnetized_rocks_buff_self; // 0x1724        
        [[maybe_unused]] std::uint8_t pad_0x1725[0x3]; // 0x1725
        int32_t magnetized_rocks_buff_self_duration; // 0x1728        
        [[maybe_unused]] std::uint8_t pad_0x172c[0x4]; // 0x172c
        // m_hExplodedRocks has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_hExplodedRocks;
        char m_hExplodedRocks[0x18]; // 0x1730        
        float duration; // 0x1748        
        bool m_bShowOverhead; // 0x174c        
        [[maybe_unused]] std::uint8_t pad_0x174d[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_EarthSpirit_Magnetize because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_EarthSpirit_Magnetize) == 0x1750);
};
