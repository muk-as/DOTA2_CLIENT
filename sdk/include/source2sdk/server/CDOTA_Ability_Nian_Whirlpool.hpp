#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTABaseAbility.hpp"
#include "source2sdk/server/CountdownTimer.hpp"

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
        // Size: 0x5f0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Nian_Whirlpool : public source2sdk::server::CDOTABaseAbility
        {
        public:
            std::int32_t pool_count; // 0x5b8            
            std::int32_t min_distance; // 0x5bc            
            std::int32_t max_distance; // 0x5c0            
            std::int32_t pull_radius; // 0x5c4            
            float fire_interval; // 0x5c8            
            uint8_t _pad05cc[0x4]; // 0x5cc
            source2sdk::server::CountdownTimer m_ctTimer; // 0x5d0            
            float m_flTiming; // 0x5e8            
            uint8_t _pad05ec[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Nian_Whirlpool because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Nian_Whirlpool) == 0x5f0);
    };
};
