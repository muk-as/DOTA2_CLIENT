#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
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
        // Size: 0x1838
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Zuus_ArcLightning : public source2sdk::client::CDOTA_Buff
        {
        public:
            float radius; // 0x17f8            
            std::int32_t jump_count; // 0x17fc            
            std::int32_t arc_damage; // 0x1800            
            float jump_delay; // 0x1804            
            std::int32_t total_damage_pct; // 0x1808            
            std::int32_t m_iCurJumpCount; // 0x180c            
            bool trigger_spell_absorb; // 0x1810            
            uint8_t _pad1811[0x3]; // 0x1811
            Vector m_vCurTargetLoc; // 0x1814            
            // m_hHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hHitEntities;
            char m_hHitEntities[0x18]; // 0x1820            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Zuus_ArcLightning because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Zuus_ArcLightning) == 0x1838);
    };
};
