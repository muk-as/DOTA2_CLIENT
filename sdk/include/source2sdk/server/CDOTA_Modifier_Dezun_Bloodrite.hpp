#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTA_Buff_Item.hpp"

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
        // Size: 0x1888
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Dezun_Bloodrite : public source2sdk::server::CDOTA_Buff_Item
        {
        public:
            float health_pct; // 0x1878            
            float aoe_pct; // 0x187c            
            bool m_bAoERecursionBlock; // 0x1880            
            bool m_bHealthCostRecursionBlock; // 0x1881            
            uint8_t _pad1882[0x6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Dezun_Bloodrite because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Dezun_Bloodrite) == 0x1888);
    };
};
