#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/client/sRevenantDef.hpp"

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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Muerta_Revenant_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_fDeadZoneDistance; // 0x_            
            float m_fDesiredDeadZoneDistance; // 0x_            
            float damage; // 0x_            
            float hit_radius; // 0x_            
            float speed_initial; // 0x_            
            float speed_max; // 0x_            
            float acceleration; // 0x_            
            float kill_check_radius; // 0x_            
            float kill_radius_expansion; // 0x_            
            float kill_radius_expansion_speed; // 0x_            
            float hp_regen_pct; // 0x_            
            std::int32_t num_revenants; // 0x_            
            std::int32_t rotation_direction; // 0x_            
            float radius; // 0x_            
            float rotation_initial; // 0x_            
            source2sdk::client::ParticleIndex_t m_nWarningFX; // 0x_            
            // m_SpiritDefs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::sRevenantDef> m_SpiritDefs;
            char m_SpiritDefs[0x_]; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Muerta_Revenant_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Muerta_Revenant_Thinker) == 0x_);
    };
};
