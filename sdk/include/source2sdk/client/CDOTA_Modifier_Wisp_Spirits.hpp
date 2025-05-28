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
        // Size: 0x1958
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Wisp_Spirits : public source2sdk::client::CDOTA_Buff
        {
        public:
            float creep_damage; // 0x1888            
            float hero_damage; // 0x188c            
            float hit_radius; // 0x1890            
            float hero_hit_radius; // 0x1894            
            float explode_radius; // 0x1898            
            float min_range; // 0x189c            
            float max_range; // 0x18a0            
            float default_radius; // 0x18a4            
            std::int32_t spirit_amount; // 0x18a8            
            float m_flRotation; // 0x18ac            
            float m_flSpiritRadius; // 0x18b0            
            float spirit_movement_rate; // 0x18b4            
            source2sdk::entity2::GameTime_t m_flNextSpawn; // 0x18b8            
            uint8_t _pad18bc[0x4]; // 0x18bc
            CUtlString m_strSpiritsOutSwapAbility; // 0x18c0            
            uint8_t _pad18c8[0x90];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Wisp_Spirits because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Wisp_Spirits) == 0x1958);
    };
};
