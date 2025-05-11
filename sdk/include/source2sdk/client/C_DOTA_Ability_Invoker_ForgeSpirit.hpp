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
        // Size: 0x5e0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_Invoker_ForgeSpirit : public source2sdk::client::CDOTA_Ability_Invoker_InvokedBase
        {
        public:
            float spirit_damage; // 0x5c0            
            std::int32_t spirit_mana; // 0x5c4            
            std::int32_t spirit_armor; // 0x5c8            
            float spirit_attack_range; // 0x5cc            
            std::int32_t spirit_hp; // 0x5d0            
            std::int32_t spirit_level; // 0x5d4            
            float spirit_duration; // 0x5d8            
            float armor_per_attack; // 0x5dc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Invoker_ForgeSpirit because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Invoker_ForgeSpirit) == 0x5e0);
    };
};
