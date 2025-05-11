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
        // Size: 0x5d8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_Lich_ChainFrost : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            float jump_range; // 0x5b0            
            std::int32_t jumps; // 0x5b4            
            float slow_duration; // 0x5b8            
            float vision_radius; // 0x5bc            
            std::int32_t projectile_speed; // 0x5c0            
            std::int32_t initial_projectile_speed; // 0x5c4            
            uint8_t _pad05c8[0x8]; // 0x5c8
            std::int32_t bonus_jumps_per_hero_killed; // 0x5d0            
            std::int32_t bonus_jumps_per_creep_killed; // 0x5d4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Lich_ChainFrost because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Lich_ChainFrost) == 0x5d8);
    };
};
