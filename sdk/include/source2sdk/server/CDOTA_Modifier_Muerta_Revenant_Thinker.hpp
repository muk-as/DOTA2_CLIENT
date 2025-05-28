#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/client/sRevenantDef.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
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
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1908
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Muerta_Revenant_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            bool m_bSpiritsExplode; // 0x1888            
            uint8_t _pad1889[0x3]; // 0x1889
            float m_fDeadZoneDistance; // 0x188c            
            float m_fDesiredDeadZoneDistance; // 0x1890            
            float damage; // 0x1894            
            float hit_radius; // 0x1898            
            float speed_initial; // 0x189c            
            float speed_max; // 0x18a0            
            float acceleration; // 0x18a4            
            float kill_check_radius; // 0x18a8            
            float kill_radius_expansion; // 0x18ac            
            float kill_radius_expansion_speed; // 0x18b0            
            float hp_regen_pct; // 0x18b4            
            std::int32_t num_revenants; // 0x18b8            
            std::int32_t rotation_direction; // 0x18bc            
            float radius; // 0x18c0            
            float rotation_initial; // 0x18c4            
            source2sdk::client::ParticleIndex_t m_nWarningFX; // 0x18c8            
            uint8_t _pad18cc[0x4]; // 0x18cc
            // m_SpiritDefs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::sRevenantDef> m_SpiritDefs;
            char m_SpiritDefs[0x18]; // 0x18d0            
            uint8_t _pad18e8[0x18]; // 0x18e8
            // m_hHealingThinker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hHealingThinker;
            char m_hHealingThinker[0x4]; // 0x1900            
            std::int32_t m_nRevenantImpacts; // 0x1904            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Muerta_Revenant_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Muerta_Revenant_Thinker) == 0x1908);
    };
};
