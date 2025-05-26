#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0x1948
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Wisp_Spirits : public source2sdk::client::CDOTA_Buff
        {
        public:
            float creep_damage; // 0x1878            
            float hero_damage; // 0x187c            
            float hit_radius; // 0x1880            
            float hero_hit_radius; // 0x1884            
            float explode_radius; // 0x1888            
            float min_range; // 0x188c            
            float max_range; // 0x1890            
            float default_radius; // 0x1894            
            std::int32_t spirit_amount; // 0x1898            
            float m_flRotation; // 0x189c            
            float m_flSpiritRadius; // 0x18a0            
            float spirit_movement_rate; // 0x18a4            
            source2sdk::entity2::GameTime_t m_flNextSpawn; // 0x18a8            
            uint8_t _pad18ac[0x4]; // 0x18ac
            CUtlString m_strSpiritsOutSwapAbility; // 0x18b0            
            uint8_t _pad18b8[0x90];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Wisp_Spirits because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Wisp_Spirits) == 0x1948);
    };
};
