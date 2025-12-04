#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/mathlib_extended/AABB_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        #pragma pack(push, 1)
        struct RegionTriggerBoxes_t
        {
        public:
            // metadata: MNetworkEnable
            source2sdk::mathlib_extended::AABB_t regionBox; // 0x_            
            // metadata: MNetworkEnable
            Vector vRegionBoxOrigin; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            CUtlString strRegionName; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::RegionTriggerBoxes_t, regionBox) == 0x_);
        static_assert(offsetof(source2sdk::client::RegionTriggerBoxes_t, vRegionBoxOrigin) == 0x_);
        static_assert(offsetof(source2sdk::client::RegionTriggerBoxes_t, strRegionName) == 0x_);
        
        static_assert(sizeof(source2sdk::client::RegionTriggerBoxes_t) == 0x_);
    };
};
