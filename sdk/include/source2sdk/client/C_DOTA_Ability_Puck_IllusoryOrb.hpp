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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_Puck_IllusoryOrb : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            std::int32_t m_iProjectile; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::CountdownTimer m_ViewerTimer; // 0x_            
            std::int32_t curve_orb; // 0x_            
            float m_fTimeRemaining; // 0x_            
            float m_fElapsedTime; // 0x_            
            Vector m_vVectorTargetEndpoint; // 0x_            
            Vector m_vCurveAcceleration; // 0x_            
            Vector m_vStartPosition; // 0x_            
            float orb_vision; // 0x_            
            float max_distance; // 0x_            
            float vision_duration; // 0x_            
            std::int32_t damage; // 0x_            
            float increase_per_sec; // 0x_            
            float damage_interval; // 0x_            
            float radius; // 0x_            
            float damage_over_time_pct; // 0x_            
            source2sdk::client::ParticleIndex_t m_nCurvePathPreviewFXIndex; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Puck_IllusoryOrb because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Puck_IllusoryOrb) == 0x_);
    };
};
