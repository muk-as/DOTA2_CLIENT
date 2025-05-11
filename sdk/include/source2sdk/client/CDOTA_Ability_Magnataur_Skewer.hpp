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
        // Size: 0x5d0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Magnataur_Skewer : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            float skewer_radius; // 0x5b0            
            float skewer_speed; // 0x5b4            
            float tree_radius; // 0x5b8            
            float tree_hit_damage; // 0x5bc            
            float cliff_hit_damage; // 0x5c0            
            std::int32_t terrain_hit_increase_pct; // 0x5c4            
            float terrain_hit_cooldown; // 0x5c8            
            std::int32_t m_nTargetsHit; // 0x5cc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Magnataur_Skewer because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Ability_Magnataur_Skewer) == 0x5d0);
    };
};
