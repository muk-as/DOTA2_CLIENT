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
    // Size: 0x1738
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_EarthSpirit_GeomagneticGrip : public client::CDOTA_Buff
    {
    public:
        int32_t radius; // 0x16e8        
        int32_t rock_damage; // 0x16ec        
        float pull_units_per_second; // 0x16f0        
        float pull_units_per_second_heroes; // 0x16f4        
        float total_pull_distance; // 0x16f8        
        float duration; // 0x16fc        
        bool m_bUsedStone; // 0x1700        
        [[maybe_unused]] std::uint8_t pad_0x1701[0x3]; // 0x1701
        Vector m_vDestination; // 0x1704        
        Vector m_vLocation; // 0x1710        
        [[maybe_unused]] std::uint8_t pad_0x171c[0x4]; // 0x171c
        // m_hHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hHitEntities;
        char m_hHitEntities[0x18]; // 0x1720        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_EarthSpirit_GeomagneticGrip because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_EarthSpirit_GeomagneticGrip) == 0x1738);
};
