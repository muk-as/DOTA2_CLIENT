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
        // Size: 0x6a8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Magnataur_Skewer : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            float skewer_radius; // 0x688            
            float skewer_speed; // 0x68c            
            float tree_radius; // 0x690            
            float tree_hit_damage; // 0x694            
            float cliff_hit_damage; // 0x698            
            std::int32_t terrain_hit_increase_pct; // 0x69c            
            float terrain_hit_cooldown; // 0x6a0            
            std::int32_t m_nTargetsHit; // 0x6a4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Magnataur_Skewer because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Ability_Magnataur_Skewer) == 0x6a8);
    };
};
