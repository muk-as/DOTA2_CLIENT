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
        // Size: 0x1890
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Seasonal_TI9_Shovel_BabyRoshan : public source2sdk::client::CDOTA_Buff
        {
        public:
            bool m_bFirstThink; // 0x1878            
            uint8_t _pad1879[0x3]; // 0x1879
            source2sdk::entity2::GameTime_t m_flStartTime; // 0x187c            
            Vector m_vecStartingPos; // 0x1880            
            uint8_t _pad188c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Seasonal_TI9_Shovel_BabyRoshan because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Seasonal_TI9_Shovel_BabyRoshan) == 0x1890);
    };
};
