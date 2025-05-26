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
        // Size: 0x688
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_DrowRanger_FrostArrows : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            std::int32_t shard_burst_damage_per_stack; // 0x680            
            float shard_burst_slow_duration; // 0x684            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_DrowRanger_FrostArrows because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_DrowRanger_FrostArrows) == 0x688);
    };
};
