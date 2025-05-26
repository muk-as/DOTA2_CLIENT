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
        // Size: 0x6b8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_Lich_ChainFrost : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            float jump_range; // 0x680            
            std::int32_t jumps; // 0x684            
            float slow_duration; // 0x688            
            float vision_radius; // 0x68c            
            std::int32_t projectile_speed; // 0x690            
            std::int32_t initial_projectile_speed; // 0x694            
            uint8_t _pad0698[0x14]; // 0x698
            std::int32_t bonus_jumps_per_hero_killed; // 0x6ac            
            std::int32_t bonus_jumps_per_creep_killed; // 0x6b0            
            uint8_t _pad06b4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Lich_ChainFrost because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Lich_ChainFrost) == 0x6b8);
    };
};
