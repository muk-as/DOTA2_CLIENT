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
        // Size: 0x5f8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_VengefulSpirit_WaveOfTerror : public source2sdk::server::CDOTABaseAbility
        {
        public:
            float wave_width; // 0x5b8            
            float wave_speed; // 0x5bc            
            std::int32_t m_iProjectile; // 0x5c0            
            float vision_aoe; // 0x5c4            
            float vision_duration; // 0x5c8            
            std::int32_t steal_pct; // 0x5cc            
            float damage; // 0x5d0            
            std::int32_t m_nNumHeroesHit; // 0x5d4            
            source2sdk::server::CountdownTimer m_ViewerTimer; // 0x5d8            
            uint8_t _pad05f0[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_VengefulSpirit_WaveOfTerror because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_VengefulSpirit_WaveOfTerror) == 0x5f8);
    };
};
