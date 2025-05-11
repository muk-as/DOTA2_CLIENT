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
        // Size: 0x610
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_Puck_IllusoryOrb : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            std::int32_t m_iProjectile; // 0x5b0            
            uint8_t _pad05b4[0x4]; // 0x5b4
            source2sdk::client::CountdownTimer m_ViewerTimer; // 0x5b8            
            std::int32_t curve_orb; // 0x5d0            
            float m_fTimeRemaining; // 0x5d4            
            Vector m_vVectorTargetEndpoint; // 0x5d8            
            Vector m_vCurveAcceleration; // 0x5e4            
            Vector m_vStartPosition; // 0x5f0            
            float orb_vision; // 0x5fc            
            float max_distance; // 0x600            
            float vision_duration; // 0x604            
            std::int32_t damage; // 0x608            
            source2sdk::client::ParticleIndex_t m_nCurvePathPreviewFXIndex; // 0x60c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Puck_IllusoryOrb because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Puck_IllusoryOrb) == 0x610);
    };
};
