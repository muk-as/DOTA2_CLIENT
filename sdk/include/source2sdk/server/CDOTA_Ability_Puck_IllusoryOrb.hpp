#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CDOTABaseAbility.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CSoundPatch;
    };
};

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
        // Size: 0x630
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Puck_IllusoryOrb : public source2sdk::server::CDOTABaseAbility
        {
        public:
            std::int32_t m_iProjectile; // 0x5b8            
            uint8_t _pad05bc[0x4]; // 0x5bc
            source2sdk::server::CountdownTimer m_ViewerTimer; // 0x5c0            
            std::int32_t curve_orb; // 0x5d8            
            float m_fTimeRemaining; // 0x5dc            
            Vector m_vVectorTargetEndpoint; // 0x5e0            
            Vector m_vCurveAcceleration; // 0x5ec            
            Vector m_vStartPosition; // 0x5f8            
            float orb_vision; // 0x604            
            float max_distance; // 0x608            
            float vision_duration; // 0x60c            
            std::int32_t damage; // 0x610            
            uint8_t _pad0614[0x4]; // 0x614
            source2sdk::client::CSoundPatch* m_pSoundPatch; // 0x618            
            uint8_t _pad0620[0x8]; // 0x620
            source2sdk::client::ParticleIndex_t m_nCurvePathFXIndex; // 0x628            
            uint8_t _pad062c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Puck_IllusoryOrb because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Puck_IllusoryOrb) == 0x630);
    };
};
