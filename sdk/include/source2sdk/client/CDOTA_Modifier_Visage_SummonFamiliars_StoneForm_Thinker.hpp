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
        // Size: 0x18a0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            float stun_radius; // 0x1888            
            float stun_damage; // 0x188c            
            float stun_delay; // 0x1890            
            float stun_duration; // 0x1894            
            float stone_duration; // 0x1898            
            std::int32_t m_iIntervalCount; // 0x189c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Thinker) == 0x18a0);
    };
};
