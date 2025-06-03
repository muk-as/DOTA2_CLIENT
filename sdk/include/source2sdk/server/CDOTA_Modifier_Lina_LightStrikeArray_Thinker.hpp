#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

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
        // Size: 0x1890
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Lina_LightStrikeArray_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_flDamage; // 0x1878            
            float m_flStunDuration; // 0x187c            
            float light_strike_array_aoe; // 0x1880            
            std::int32_t light_strike_array_damage; // 0x1884            
            float light_strike_array_stun_duration; // 0x1888            
            uint8_t _pad188c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Lina_LightStrikeArray_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Lina_LightStrikeArray_Thinker) == 0x1890);
    };
};
