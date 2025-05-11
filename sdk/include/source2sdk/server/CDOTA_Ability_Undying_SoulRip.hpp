#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTABaseAbility.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x5c8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Undying_SoulRip : public source2sdk::server::CDOTABaseAbility
        {
        public:
            std::int32_t damage_per_unit; // 0x5b8            
            float radius; // 0x5bc            
            std::int32_t max_units; // 0x5c0            
            std::int32_t tombstone_heal; // 0x5c4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Undying_SoulRip because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Undying_SoulRip) == 0x5c8);
    };
};
