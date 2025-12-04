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
        class CDOTA_Modifier_EarthSpirit_Magnetize : public source2sdk::client::CDOTA_Buff
        {
        public:
            float rock_search_radius; // 0x_            
            float damage_per_second; // 0x_            
            float damage_interval; // 0x_            
            float rock_explosion_delay; // 0x_            
            float damage_duration; // 0x_            
            float cast_radius; // 0x_            
            float rock_explosion_radius; // 0x_            
            bool magnetized_rocks_buff_self; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t magnetized_rocks_buff_self_duration; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_hExplodedRocks has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hExplodedRocks;
            char m_hExplodedRocks[0x_]; // 0x_            
            float duration; // 0x_            
            bool m_bShowOverhead; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_EarthSpirit_Magnetize because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_EarthSpirit_Magnetize) == 0x_);
    };
};
