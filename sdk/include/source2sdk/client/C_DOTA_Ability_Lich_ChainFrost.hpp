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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_Lich_ChainFrost : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            float jump_range; // 0x_            
            std::int32_t jumps; // 0x_            
            float slow_duration; // 0x_            
            float vision_radius; // 0x_            
            std::int32_t projectile_speed; // 0x_            
            std::int32_t initial_projectile_speed; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t bonus_jumps_per_hero_killed; // 0x_            
            std::int32_t bonus_jumps_per_creep_killed; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Lich_ChainFrost because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Lich_ChainFrost) == 0x_);
    };
};
