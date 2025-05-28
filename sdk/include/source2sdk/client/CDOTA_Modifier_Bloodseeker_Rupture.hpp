#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x18b0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Bloodseeker_Rupture : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t movement_damage_pct; // 0x1888            
            float hp_pct; // 0x188c            
            Vector vLastPos; // 0x1890            
            bool bResetPosition; // 0x189c            
            uint8_t _pad189d[0x3]; // 0x189d
            float knockback; // 0x18a0            
            float knockback_duration; // 0x18a4            
            float m_fAccumulatedDamage; // 0x18a8            
            source2sdk::client::ParticleIndex_t m_nDurationEffect; // 0x18ac            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Bloodseeker_Rupture because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Bloodseeker_Rupture) == 0x18b0);
    };
};
