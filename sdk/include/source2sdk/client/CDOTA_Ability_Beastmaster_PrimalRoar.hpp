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
        class CDOTA_Ability_Beastmaster_PrimalRoar : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            float duration; // 0x5b0            
            float slow_duration; // 0x5b4            
            std::int32_t side_damage; // 0x5b8            
            float damage_radius; // 0x5bc            
            std::int32_t path_width; // 0x5c0            
            float push_duration; // 0x5c4            
            float push_distance; // 0x5c8            
            std::int32_t damage; // 0x5cc            
            float movement_speed_duration; // 0x5d0            
            uint8_t _pad05d4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Beastmaster_PrimalRoar because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Ability_Beastmaster_PrimalRoar) == 0x5d8);
    };
};
