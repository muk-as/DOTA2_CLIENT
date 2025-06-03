#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        class CDOTA_Modifier_Item_Solar_Crest : public source2sdk::server::CDOTA_Buff_Item
        {
        public:
            float bonus_mana; // 0x1878            
            std::int32_t bonus_armor; // 0x187c            
            std::int32_t bonus_all_stats; // 0x1880            
            std::int32_t bonus_health; // 0x1884            
            std::int32_t self_movement_speed; // 0x1888            
            source2sdk::client::ParticleIndex_t nFXIndex; // 0x188c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Solar_Crest because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Item_Solar_Crest) == 0x1890);
    };
};
