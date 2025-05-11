#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

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
        // Size: 0x1818
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_Blood_Grenade_Flight_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t speed; // 0x17f8            
            float radius; // 0x17fc            
            std::int32_t damage_over_time; // 0x1800            
            std::int32_t impact_damage; // 0x1804            
            float debuff_duration; // 0x1808            
            std::int32_t movespeed_slow; // 0x180c            
            float tick_rate; // 0x1810            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1814            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Blood_Grenade_Flight_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Item_Blood_Grenade_Flight_Thinker) == 0x1818);
    };
};
