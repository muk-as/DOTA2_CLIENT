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
        class CDOTA_Modifier_Hoodwink_Scurry_Passive : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_flDistanceTraveled; // 0x1878            
            float heal_movement; // 0x187c            
            float heal_amount; // 0x1880            
            Vector2D m_vPrevPos; // 0x1884            
            uint8_t _pad188c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Hoodwink_Scurry_Passive because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Hoodwink_Scurry_Passive) == 0x1890);
    };
};
