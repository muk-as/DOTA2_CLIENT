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
        // Size: 0x5f0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_VengefulSpirit_WaveOfTerror : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            float wave_width; // 0x5b0            
            float wave_speed; // 0x5b4            
            std::int32_t m_iProjectile; // 0x5b8            
            float vision_aoe; // 0x5bc            
            float vision_duration; // 0x5c0            
            std::int32_t steal_pct; // 0x5c4            
            float damage; // 0x5c8            
            std::int32_t m_nNumHeroesHit; // 0x5cc            
            source2sdk::client::CountdownTimer m_ViewerTimer; // 0x5d0            
            uint8_t _pad05e8[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_VengefulSpirit_WaveOfTerror because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_VengefulSpirit_WaveOfTerror) == 0x5f0);
    };
};
