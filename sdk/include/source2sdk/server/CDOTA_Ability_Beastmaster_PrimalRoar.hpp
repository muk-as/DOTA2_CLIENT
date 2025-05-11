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
        // Size: 0x5e0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Beastmaster_PrimalRoar : public source2sdk::server::CDOTABaseAbility
        {
        public:
            float duration; // 0x5b8            
            float slow_duration; // 0x5bc            
            std::int32_t side_damage; // 0x5c0            
            float damage_radius; // 0x5c4            
            std::int32_t path_width; // 0x5c8            
            float push_duration; // 0x5cc            
            float push_distance; // 0x5d0            
            std::int32_t damage; // 0x5d4            
            float movement_speed_duration; // 0x5d8            
            uint8_t _pad05dc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Beastmaster_PrimalRoar because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Beastmaster_PrimalRoar) == 0x5e0);
    };
};
