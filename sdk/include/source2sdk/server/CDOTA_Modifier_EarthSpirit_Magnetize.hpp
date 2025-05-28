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
        // Size: 0x18d0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_EarthSpirit_Magnetize : public source2sdk::client::CDOTA_Buff
        {
        public:
            float rock_search_radius; // 0x1888            
            float damage_per_second; // 0x188c            
            float damage_interval; // 0x1890            
            float rock_explosion_delay; // 0x1894            
            float damage_duration; // 0x1898            
            float cast_radius; // 0x189c            
            float rock_explosion_radius; // 0x18a0            
            bool magnetized_rocks_buff_self; // 0x18a4            
            uint8_t _pad18a5[0x3]; // 0x18a5
            std::int32_t magnetized_rocks_buff_self_duration; // 0x18a8            
            uint8_t _pad18ac[0x4]; // 0x18ac
            // m_hExplodedRocks has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hExplodedRocks;
            char m_hExplodedRocks[0x18]; // 0x18b0            
            float duration; // 0x18c8            
            bool m_bShowOverhead; // 0x18cc            
            uint8_t _pad18cd[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_EarthSpirit_Magnetize because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_EarthSpirit_Magnetize) == 0x18d0);
    };
};
