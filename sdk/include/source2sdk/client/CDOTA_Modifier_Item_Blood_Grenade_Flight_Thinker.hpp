#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

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
        // Size: 0x1898
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_Blood_Grenade_Flight_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t speed; // 0x1878            
            float radius; // 0x187c            
            std::int32_t damage_over_time; // 0x1880            
            std::int32_t impact_damage; // 0x1884            
            float debuff_duration; // 0x1888            
            std::int32_t movespeed_slow; // 0x188c            
            float tick_rate; // 0x1890            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1894            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Blood_Grenade_Flight_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Item_Blood_Grenade_Flight_Thinker) == 0x1898);
    };
};
