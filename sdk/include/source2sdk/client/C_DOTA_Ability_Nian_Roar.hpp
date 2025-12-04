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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_Nian_Roar : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            std::int32_t base_projectiles; // 0x_            
            std::int32_t max_projectiles; // 0x_            
            std::int32_t projectile_step; // 0x_            
            std::int32_t base_speed; // 0x_            
            std::int32_t speed_step; // 0x_            
            std::int32_t initial_radius; // 0x_            
            std::int32_t end_radius; // 0x_            
            std::int32_t damage; // 0x_            
            float base_interval; // 0x_            
            float interval_step; // 0x_            
            std::int32_t m_nCastCount; // 0x_            
            std::int32_t m_nProjectiles; // 0x_            
            std::int32_t m_nWaveCount; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::CountdownTimer m_ctTimer; // 0x_            
            float m_flTiming; // 0x_            
            bool m_bScriptRoar; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Nian_Roar because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Nian_Roar) == 0x_);
    };
};
