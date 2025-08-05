#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"

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
        // Size: 0x6b0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Elder_Titan_EarthSplitter : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            float crack_width; // 0x688            
            float crack_distance; // 0x68c            
            float speed; // 0x690            
            float vision_width; // 0x694            
            float crack_time; // 0x698            
            uint8_t _pad069c[0x14];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Elder_Titan_EarthSplitter because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Ability_Elder_Titan_EarthSplitter) == 0x6b0);
    };
};
