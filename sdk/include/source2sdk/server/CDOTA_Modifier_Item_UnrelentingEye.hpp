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
        // Size: 0x1890
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_UnrelentingEye : public source2sdk::server::CDOTA_Buff_Item
        {
        public:
            float max_slow_res; // 0x1878            
            float hero_reduction; // 0x187c            
            float hero_check_radius; // 0x1880            
            float status_res_pct_increase_per_hero; // 0x1884            
            std::int32_t m_nNearbyEnemyHeroes; // 0x1888            
            uint8_t _pad188c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_UnrelentingEye because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Item_UnrelentingEye) == 0x1890);
    };
};
