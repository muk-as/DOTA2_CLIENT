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
        // Size: 0x6d8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_Nian_Roar : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            std::int32_t base_projectiles; // 0x680            
            std::int32_t max_projectiles; // 0x684            
            std::int32_t projectile_step; // 0x688            
            std::int32_t base_speed; // 0x68c            
            std::int32_t speed_step; // 0x690            
            std::int32_t initial_radius; // 0x694            
            std::int32_t end_radius; // 0x698            
            std::int32_t damage; // 0x69c            
            float base_interval; // 0x6a0            
            float interval_step; // 0x6a4            
            std::int32_t m_nCastCount; // 0x6a8            
            std::int32_t m_nProjectiles; // 0x6ac            
            std::int32_t m_nWaveCount; // 0x6b0            
            uint8_t _pad06b4[0x4]; // 0x6b4
            source2sdk::client::CountdownTimer m_ctTimer; // 0x6b8            
            float m_flTiming; // 0x6d0            
            bool m_bScriptRoar; // 0x6d4            
            uint8_t _pad06d5[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Nian_Roar because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Nian_Roar) == 0x6d8);
    };
};
