#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/client/CountdownTimer.hpp"

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
        // Size: 0x5e8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_Nian_Whirlpool : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            std::int32_t pool_count; // 0x5b0            
            std::int32_t min_distance; // 0x5b4            
            std::int32_t max_distance; // 0x5b8            
            std::int32_t pull_radius; // 0x5bc            
            float fire_interval; // 0x5c0            
            uint8_t _pad05c4[0x4]; // 0x5c4
            source2sdk::client::CountdownTimer m_ctTimer; // 0x5c8            
            float m_flTiming; // 0x5e0            
            uint8_t _pad05e4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Nian_Whirlpool because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Nian_Whirlpool) == 0x5e8);
    };
};
