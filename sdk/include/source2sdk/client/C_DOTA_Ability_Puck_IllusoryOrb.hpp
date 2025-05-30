#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/client/CountdownTimer.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

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
        // Size: 0x6f8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_Puck_IllusoryOrb : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            std::int32_t m_iProjectile; // 0x680            
            uint8_t _pad0684[0x4]; // 0x684
            source2sdk::client::CountdownTimer m_ViewerTimer; // 0x688            
            std::int32_t curve_orb; // 0x6a0            
            float m_fTimeRemaining; // 0x6a4            
            float m_fElapsedTime; // 0x6a8            
            Vector m_vVectorTargetEndpoint; // 0x6ac            
            Vector m_vCurveAcceleration; // 0x6b8            
            Vector m_vStartPosition; // 0x6c4            
            float orb_vision; // 0x6d0            
            float max_distance; // 0x6d4            
            float vision_duration; // 0x6d8            
            std::int32_t damage; // 0x6dc            
            float increase_per_sec; // 0x6e0            
            float damage_interval; // 0x6e4            
            float radius; // 0x6e8            
            float damage_over_time_pct; // 0x6ec            
            source2sdk::client::ParticleIndex_t m_nCurvePathPreviewFXIndex; // 0x6f0            
            uint8_t _pad06f4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Puck_IllusoryOrb because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Puck_IllusoryOrb) == 0x6f8);
    };
};
