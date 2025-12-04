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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Tidehunter_KrillEater : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t model_scale_base; // 0x_            
            std::int32_t model_scale_per_level; // 0x_            
            std::int32_t attack_range_base; // 0x_            
            std::int32_t attack_range_per_level; // 0x_            
            std::int32_t anchor_smash_radius_base; // 0x_            
            std::int32_t anchor_smash_radius_per_level; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Tidehunter_KrillEater because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Tidehunter_KrillEater) == 0x_);
    };
};
