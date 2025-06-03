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
        class CDOTA_Modifier_Bloodseeker_Sanguivore : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t base_heal; // 0x1878            
            float half_bonus_aoe; // 0x187c            
            float heal_hp_pct_per_level; // 0x1880            
            std::int32_t creep_lifesteal_reduction_pct; // 0x1884            
            std::int32_t deny_lifesteal_reduction_pct; // 0x1888            
            std::int32_t pure_damage_lifesteal_pct; // 0x188c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Bloodseeker_Sanguivore because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Bloodseeker_Sanguivore) == 0x1890);
    };
};
