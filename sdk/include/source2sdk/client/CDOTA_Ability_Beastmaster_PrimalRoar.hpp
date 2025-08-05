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
        // Size: 0x6b0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Beastmaster_PrimalRoar : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            float duration; // 0x688            
            float slow_duration; // 0x68c            
            std::int32_t side_damage; // 0x690            
            float damage_radius; // 0x694            
            std::int32_t path_width; // 0x698            
            float push_duration; // 0x69c            
            float push_distance; // 0x6a0            
            std::int32_t damage; // 0x6a4            
            float movement_speed_duration; // 0x6a8            
            uint8_t _pad06ac[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Beastmaster_PrimalRoar because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Ability_Beastmaster_PrimalRoar) == 0x6b0);
    };
};
