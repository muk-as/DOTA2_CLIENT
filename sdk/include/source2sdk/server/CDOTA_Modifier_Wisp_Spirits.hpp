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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Wisp_Spirits : public source2sdk::client::CDOTA_Buff
        {
        public:
            bool m_bSpiritsExplode; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float creep_damage; // 0x_            
            float hero_damage; // 0x_            
            float hit_radius; // 0x_            
            float hero_hit_radius; // 0x_            
            float explode_radius; // 0x_            
            float min_range; // 0x_            
            float max_range; // 0x_            
            float default_radius; // 0x_            
            std::int32_t spirit_amount; // 0x_            
            float m_flRotation; // 0x_            
            float m_flSpiritRadius; // 0x_            
            float spirit_movement_rate; // 0x_            
            source2sdk::entity2::GameTime_t m_flNextSpawn; // 0x_            
            CUtlString m_strSpiritsOutSwapAbility; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Wisp_Spirits because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Wisp_Spirits) == 0x_);
    };
};
