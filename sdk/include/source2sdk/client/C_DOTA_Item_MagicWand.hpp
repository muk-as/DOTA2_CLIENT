#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTA_Item.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x728
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Item_MagicWand : public source2sdk::client::C_DOTA_Item
        {
        public:
            float charge_radius; // 0x720            
            std::int32_t max_charges; // 0x724            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Item_MagicWand because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Item_MagicWand) == 0x728);
    };
};
