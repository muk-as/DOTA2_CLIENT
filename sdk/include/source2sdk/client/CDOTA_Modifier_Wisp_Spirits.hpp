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
        // Size: 0x18c8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Wisp_Spirits : public source2sdk::client::CDOTA_Buff
        {
        public:
            float creep_damage; // 0x17f8            
            float hero_damage; // 0x17fc            
            float hit_radius; // 0x1800            
            float hero_hit_radius; // 0x1804            
            float explode_radius; // 0x1808            
            float min_range; // 0x180c            
            float max_range; // 0x1810            
            float default_radius; // 0x1814            
            std::int32_t spirit_amount; // 0x1818            
            float m_flRotation; // 0x181c            
            float m_flSpiritRadius; // 0x1820            
            float spirit_movement_rate; // 0x1824            
            source2sdk::entity2::GameTime_t m_flNextSpawn; // 0x1828            
            uint8_t _pad182c[0x4]; // 0x182c
            CUtlString m_strSpiritsOutSwapAbility; // 0x1830            
            uint8_t _pad1838[0x90];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Wisp_Spirits because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Wisp_Spirits) == 0x18c8);
    };
};
