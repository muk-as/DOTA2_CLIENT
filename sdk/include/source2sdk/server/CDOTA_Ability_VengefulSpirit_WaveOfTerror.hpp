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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_VengefulSpirit_WaveOfTerror : public source2sdk::server::CDOTABaseAbility
        {
        public:
            float wave_width; // 0x_            
            float wave_speed; // 0x_            
            std::int32_t m_iProjectile; // 0x_            
            float vision_aoe; // 0x_            
            float vision_duration; // 0x_            
            std::int32_t steal_pct; // 0x_            
            float damage; // 0x_            
            std::int32_t m_nNumHeroesHit; // 0x_            
            source2sdk::server::CountdownTimer m_ViewerTimer; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_VengefulSpirit_WaveOfTerror because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_VengefulSpirit_WaveOfTerror) == 0x_);
    };
};
