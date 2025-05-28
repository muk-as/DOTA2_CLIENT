#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

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
        // Size: 0x18a0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Bloodseeker_Sanguivore : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t base_heal; // 0x1888            
            float half_bonus_aoe; // 0x188c            
            float heal_hp_pct_per_level; // 0x1890            
            std::int32_t creep_lifesteal_reduction_pct; // 0x1894            
            std::int32_t deny_lifesteal_reduction_pct; // 0x1898            
            std::int32_t pure_damage_lifesteal_pct; // 0x189c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Bloodseeker_Sanguivore because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Bloodseeker_Sanguivore) == 0x18a0);
    };
};
