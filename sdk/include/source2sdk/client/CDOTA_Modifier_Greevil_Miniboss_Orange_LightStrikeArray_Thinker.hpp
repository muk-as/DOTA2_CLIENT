#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

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
        // Size: 0x1888
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Greevil_Miniboss_Orange_LightStrikeArray_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t m_iDamage; // 0x1878            
            float m_flStunDuration; // 0x187c            
            std::int32_t light_strike_array_aoe; // 0x1880            
            uint8_t _pad1884[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Greevil_Miniboss_Orange_LightStrikeArray_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Greevil_Miniboss_Orange_LightStrikeArray_Thinker) == 0x1888);
    };
};
