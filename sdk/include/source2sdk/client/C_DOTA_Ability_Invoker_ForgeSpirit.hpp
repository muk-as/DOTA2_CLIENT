#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Ability_Invoker_InvokedBase.hpp"

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
        class C_DOTA_Ability_Invoker_ForgeSpirit : public source2sdk::client::CDOTA_Ability_Invoker_InvokedBase
        {
        public:
            float spirit_damage; // 0x698            
            std::int32_t spirit_mana; // 0x69c            
            std::int32_t spirit_armor; // 0x6a0            
            float spirit_attack_range; // 0x6a4            
            std::int32_t spirit_hp; // 0x6a8            
            std::int32_t spirit_level; // 0x6ac            
            float spirit_duration; // 0x6b0            
            float armor_per_attack; // 0x6b4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Invoker_ForgeSpirit because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Invoker_ForgeSpirit) == 0x6b8);
    };
};
