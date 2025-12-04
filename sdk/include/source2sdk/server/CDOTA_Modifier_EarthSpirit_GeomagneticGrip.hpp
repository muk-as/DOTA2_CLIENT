#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_EarthSpirit_GeomagneticGrip : public source2sdk::client::CDOTA_Buff
        {
        public:
            float radius; // 0x_            
            float rock_damage; // 0x_            
            float pull_units_per_second; // 0x_            
            float pull_units_per_second_heroes; // 0x_            
            float total_pull_distance; // 0x_            
            float duration; // 0x_            
            bool m_bUsedStone; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            Vector m_vDestination; // 0x_            
            Vector m_vLocation; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_hHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hHitEntities;
            char m_hHitEntities[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_EarthSpirit_GeomagneticGrip because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_EarthSpirit_GeomagneticGrip) == 0x_);
    };
};
