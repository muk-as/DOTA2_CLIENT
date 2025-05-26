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
        // Size: 0x690
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Aghsfort_Ability_Creature_Magnus_Push_Skewer : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            float skewer_radius; // 0x680            
            float skewer_speed; // 0x684            
            float range; // 0x688            
            std::int32_t tree_radius; // 0x68c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Aghsfort_Ability_Creature_Magnus_Push_Skewer because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Aghsfort_Ability_Creature_Magnus_Push_Skewer) == 0x690);
    };
};
