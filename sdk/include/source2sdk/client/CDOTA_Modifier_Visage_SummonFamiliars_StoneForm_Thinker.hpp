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
        // Size: 0x1890
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            float stun_radius; // 0x1878            
            float stun_damage; // 0x187c            
            float stun_delay; // 0x1880            
            float stun_duration; // 0x1884            
            float stone_duration; // 0x1888            
            std::int32_t m_iIntervalCount; // 0x188c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Thinker) == 0x1890);
    };
};
