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
    // Size: 0x1758
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_EarthSpirit_GeomagneticGrip : public client::CDOTA_Buff
    {
    public:
        int32_t radius; // 0x1708        
        int32_t rock_damage; // 0x170c        
        float pull_units_per_second; // 0x1710        
        float pull_units_per_second_heroes; // 0x1714        
        float total_pull_distance; // 0x1718        
        float duration; // 0x171c        
        bool m_bUsedStone; // 0x1720        
        [[maybe_unused]] std::uint8_t pad_0x1721[0x3]; // 0x1721
        Vector m_vDestination; // 0x1724        
        Vector m_vLocation; // 0x1730        
        [[maybe_unused]] std::uint8_t pad_0x173c[0x4]; // 0x173c
        // m_hHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_hHitEntities;
        char m_hHitEntities[0x18]; // 0x1740        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_EarthSpirit_GeomagneticGrip because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_EarthSpirit_GeomagneticGrip) == 0x1758);
};
