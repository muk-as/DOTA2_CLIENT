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
        // Size: 0x610
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Nian_Roar : public source2sdk::server::CDOTABaseAbility
        {
        public:
            std::int32_t base_projectiles; // 0x5b8            
            std::int32_t max_projectiles; // 0x5bc            
            std::int32_t projectile_step; // 0x5c0            
            std::int32_t base_speed; // 0x5c4            
            std::int32_t speed_step; // 0x5c8            
            std::int32_t initial_radius; // 0x5cc            
            std::int32_t end_radius; // 0x5d0            
            std::int32_t damage; // 0x5d4            
            float base_interval; // 0x5d8            
            float interval_step; // 0x5dc            
            std::int32_t m_nCastCount; // 0x5e0            
            std::int32_t m_nProjectiles; // 0x5e4            
            std::int32_t m_nWaveCount; // 0x5e8            
            uint8_t _pad05ec[0x4]; // 0x5ec
            source2sdk::server::CountdownTimer m_ctTimer; // 0x5f0            
            float m_flTiming; // 0x608            
            bool m_bScriptRoar; // 0x60c            
            uint8_t _pad060d[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Nian_Roar because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Nian_Roar) == 0x610);
    };
};
