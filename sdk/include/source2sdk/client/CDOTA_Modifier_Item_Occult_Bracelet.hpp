#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff_Item.hpp"
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
        class CDOTA_Modifier_Item_Occult_Bracelet : public source2sdk::client::CDOTA_Buff_Item
        {
        public:
            std::int32_t bonus_all_stats; // 0x1878            
            std::int32_t stack_limit; // 0x187c            
            float stack_duration; // 0x1880            
            source2sdk::entity2::GameTime_t m_flStackDieTime; // 0x1884            
            std::int32_t magic_resistance; // 0x1888            
            uint8_t _pad188c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Occult_Bracelet because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Item_Occult_Bracelet) == 0x1890);
    };
};
