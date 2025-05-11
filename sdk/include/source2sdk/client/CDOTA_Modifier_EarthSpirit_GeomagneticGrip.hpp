#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

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
        // Size: 0x1848
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_EarthSpirit_GeomagneticGrip : public source2sdk::client::CDOTA_Buff
        {
        public:
            float radius; // 0x17f8            
            float rock_damage; // 0x17fc            
            float pull_units_per_second; // 0x1800            
            float pull_units_per_second_heroes; // 0x1804            
            float total_pull_distance; // 0x1808            
            float duration; // 0x180c            
            bool m_bUsedStone; // 0x1810            
            uint8_t _pad1811[0x3]; // 0x1811
            Vector m_vDestination; // 0x1814            
            Vector m_vLocation; // 0x1820            
            uint8_t _pad182c[0x4]; // 0x182c
            // m_hHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_hHitEntities;
            char m_hHitEntities[0x18]; // 0x1830            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_EarthSpirit_GeomagneticGrip because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_EarthSpirit_GeomagneticGrip) == 0x1848);
    };
};
