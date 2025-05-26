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
        // Size: 0x6b8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_Nian_Whirlpool : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            std::int32_t pool_count; // 0x680            
            std::int32_t min_distance; // 0x684            
            std::int32_t max_distance; // 0x688            
            std::int32_t pull_radius; // 0x68c            
            float fire_interval; // 0x690            
            uint8_t _pad0694[0x4]; // 0x694
            source2sdk::client::CountdownTimer m_ctTimer; // 0x698            
            float m_flTiming; // 0x6b0            
            uint8_t _pad06b4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Nian_Whirlpool because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Nian_Whirlpool) == 0x6b8);
    };
};
