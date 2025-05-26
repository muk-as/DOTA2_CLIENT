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
        // Size: 0x6d0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_VengefulSpirit_WaveOfTerror : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            float wave_width; // 0x680            
            float wave_speed; // 0x684            
            std::int32_t m_iProjectile; // 0x688            
            float vision_aoe; // 0x68c            
            float vision_duration; // 0x690            
            std::int32_t steal_pct; // 0x694            
            float damage; // 0x698            
            std::int32_t m_nNumHeroesHit; // 0x69c            
            source2sdk::client::CountdownTimer m_ViewerTimer; // 0x6a0            
            uint8_t _pad06b8[0x18];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_VengefulSpirit_WaveOfTerror because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_VengefulSpirit_WaveOfTerror) == 0x6d0);
    };
};
