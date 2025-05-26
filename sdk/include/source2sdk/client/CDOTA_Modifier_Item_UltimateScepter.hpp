#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff_Item.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

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
        class CDOTA_Modifier_Item_UltimateScepter : public source2sdk::client::CDOTA_Buff_Item
        {
        public:
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1878            
            std::int32_t bonus_all_stats; // 0x187c            
            std::int32_t bonus_health; // 0x1880            
            std::int32_t bonus_mana; // 0x1884            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_UltimateScepter because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Item_UltimateScepter) == 0x1888);
    };
};
