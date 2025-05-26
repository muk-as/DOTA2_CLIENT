#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

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
        class CDOTA_Modifier_Tidehunter_KrillEater : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t model_scale_base; // 0x1878            
            std::int32_t model_scale_per_level; // 0x187c            
            std::int32_t attack_range_base; // 0x1880            
            std::int32_t attack_range_per_level; // 0x1884            
            std::int32_t anchor_smash_radius_base; // 0x1888            
            std::int32_t anchor_smash_radius_per_level; // 0x188c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Tidehunter_KrillEater because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Tidehunter_KrillEater) == 0x1890);
    };
};
