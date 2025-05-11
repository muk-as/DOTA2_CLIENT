#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0x1818
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Alchemist_UnstableConcoction : public source2sdk::client::CDOTA_Buff
        {
        public:
            float brew_time; // 0x17f8            
            float brew_explosion; // 0x17fc            
            source2sdk::entity2::GameTime_t m_fStartTime; // 0x1800            
            source2sdk::entity2::GameTime_t m_fLastAlertTime; // 0x1804            
            source2sdk::client::ParticleIndex_t m_nConcoctionFXIndex; // 0x1808            
            bool m_bHasStunned; // 0x180c            
            uint8_t _pad180d[0x3]; // 0x180d
            std::int32_t damage_resistance; // 0x1810            
            std::int32_t move_speed; // 0x1814            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Alchemist_UnstableConcoction because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Alchemist_UnstableConcoction) == 0x1818);
    };
};
