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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Bloodseeker_Rupture : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t movement_damage_pct; // 0x_            
            float hp_pct; // 0x_            
            Vector vLastPos; // 0x_            
            bool bResetPosition; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float knockback; // 0x_            
            float knockback_duration; // 0x_            
            float m_fAccumulatedDamage; // 0x_            
            source2sdk::client::ParticleIndex_t m_nDurationEffect; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Bloodseeker_Rupture because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Bloodseeker_Rupture) == 0x_);
    };
};
