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
        // Size: 0x650
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Puck_IllusoryOrb : public source2sdk::server::CDOTABaseAbility
        {
        public:
            std::int32_t m_iProjectile; // 0x5c0            
            uint8_t _pad05c4[0x4]; // 0x5c4
            source2sdk::server::CountdownTimer m_ViewerTimer; // 0x5c8            
            std::int32_t curve_orb; // 0x5e0            
            float m_fTimeRemaining; // 0x5e4            
            float m_fElapsedTime; // 0x5e8            
            Vector m_vVectorTargetEndpoint; // 0x5ec            
            Vector m_vCurveAcceleration; // 0x5f8            
            Vector m_vStartPosition; // 0x604            
            float orb_vision; // 0x610            
            float max_distance; // 0x614            
            float vision_duration; // 0x618            
            std::int32_t damage; // 0x61c            
            float increase_per_sec; // 0x620            
            float damage_interval; // 0x624            
            float radius; // 0x628            
            float damage_over_time_pct; // 0x62c            
            source2sdk::client::CSoundPatch* m_pSoundPatch; // 0x630            
            uint8_t _pad0638[0x14]; // 0x638
            source2sdk::client::ParticleIndex_t m_nCurvePathFXIndex; // 0x64c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Puck_IllusoryOrb because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Puck_IllusoryOrb) == 0x650);
    };
};
