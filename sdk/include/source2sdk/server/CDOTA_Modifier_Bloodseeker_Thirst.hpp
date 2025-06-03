#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x18a0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Bloodseeker_Thirst : public source2sdk::client::CDOTA_Buff
        {
        public:
            float half_bonus_aoe; // 0x1878            
            std::int32_t visibility_threshold_pct; // 0x187c            
            std::int32_t invis_threshold_pct; // 0x1880            
            std::int32_t min_bonus_pct; // 0x1884            
            std::int32_t max_bonus_pct; // 0x1888            
            std::int32_t bonus_movement_speed; // 0x188c            
            std::int32_t active_movement_speed; // 0x1890            
            float linger_duration; // 0x1894            
            float inactive_penalty_pct; // 0x1898            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x189c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Bloodseeker_Thirst because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Bloodseeker_Thirst) == 0x18a0);
    };
};
