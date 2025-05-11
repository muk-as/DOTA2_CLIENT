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
        // Size: 0x1878
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Muerta_Revenant_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            bool m_bSpiritsExplode; // 0x17f8            
            uint8_t _pad17f9[0x3]; // 0x17f9
            float m_fDeadZoneDistance; // 0x17fc            
            float m_fDesiredDeadZoneDistance; // 0x1800            
            float damage; // 0x1804            
            float hit_radius; // 0x1808            
            float speed_initial; // 0x180c            
            float speed_max; // 0x1810            
            float acceleration; // 0x1814            
            float kill_check_radius; // 0x1818            
            float kill_radius_expansion; // 0x181c            
            float kill_radius_expansion_speed; // 0x1820            
            float hp_regen_pct; // 0x1824            
            std::int32_t num_revenants; // 0x1828            
            std::int32_t rotation_direction; // 0x182c            
            float radius; // 0x1830            
            float rotation_initial; // 0x1834            
            source2sdk::client::ParticleIndex_t m_nWarningFX; // 0x1838            
            uint8_t _pad183c[0x4]; // 0x183c
            // m_SpiritDefs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::sRevenantDef> m_SpiritDefs;
            char m_SpiritDefs[0x18]; // 0x1840            
            uint8_t _pad1858[0x18]; // 0x1858
            // m_hHealingThinker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hHealingThinker;
            char m_hHealingThinker[0x4]; // 0x1870            
            std::int32_t m_nRevenantImpacts; // 0x1874            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Muerta_Revenant_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Muerta_Revenant_Thinker) == 0x1878);
    };
};
