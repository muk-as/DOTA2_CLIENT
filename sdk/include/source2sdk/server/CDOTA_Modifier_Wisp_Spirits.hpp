#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0x1948
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Wisp_Spirits : public source2sdk::client::CDOTA_Buff
        {
        public:
            bool m_bSpiritsExplode; // 0x1878            
            uint8_t _pad1879[0x3]; // 0x1879
            float creep_damage; // 0x187c            
            float hero_damage; // 0x1880            
            float hit_radius; // 0x1884            
            float hero_hit_radius; // 0x1888            
            float explode_radius; // 0x188c            
            float min_range; // 0x1890            
            float max_range; // 0x1894            
            float default_radius; // 0x1898            
            std::int32_t spirit_amount; // 0x189c            
            float m_flRotation; // 0x18a0            
            float m_flSpiritRadius; // 0x18a4            
            float spirit_movement_rate; // 0x18a8            
            source2sdk::entity2::GameTime_t m_flNextSpawn; // 0x18ac            
            CUtlString m_strSpiritsOutSwapAbility; // 0x18b0            
            uint8_t _pad18b8[0x90];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Wisp_Spirits because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Wisp_Spirits) == 0x1948);
    };
};
