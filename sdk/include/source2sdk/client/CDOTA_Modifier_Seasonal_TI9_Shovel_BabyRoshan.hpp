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
        // Size: 0x1810
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Seasonal_TI9_Shovel_BabyRoshan : public source2sdk::client::CDOTA_Buff
        {
        public:
            bool m_bFirstThink; // 0x17f8            
            uint8_t _pad17f9[0x3]; // 0x17f9
            source2sdk::entity2::GameTime_t m_flStartTime; // 0x17fc            
            Vector m_vecStartingPos; // 0x1800            
            uint8_t _pad180c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Seasonal_TI9_Shovel_BabyRoshan because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Seasonal_TI9_Shovel_BabyRoshan) == 0x1810);
    };
};
