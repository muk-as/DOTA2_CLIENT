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
        // Size: 0x608
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_Nian_Roar : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            std::int32_t base_projectiles; // 0x5b0            
            std::int32_t max_projectiles; // 0x5b4            
            std::int32_t projectile_step; // 0x5b8            
            std::int32_t base_speed; // 0x5bc            
            std::int32_t speed_step; // 0x5c0            
            std::int32_t initial_radius; // 0x5c4            
            std::int32_t end_radius; // 0x5c8            
            std::int32_t damage; // 0x5cc            
            float base_interval; // 0x5d0            
            float interval_step; // 0x5d4            
            std::int32_t m_nCastCount; // 0x5d8            
            std::int32_t m_nProjectiles; // 0x5dc            
            std::int32_t m_nWaveCount; // 0x5e0            
            uint8_t _pad05e4[0x4]; // 0x5e4
            source2sdk::client::CountdownTimer m_ctTimer; // 0x5e8            
            float m_flTiming; // 0x600            
            bool m_bScriptRoar; // 0x604            
            uint8_t _pad0605[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Nian_Roar because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Nian_Roar) == 0x608);
    };
};
