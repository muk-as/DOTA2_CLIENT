#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTA_Buff_Item.hpp"
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
        class CDOTA_Modifier_AghsFort_ShadowWaveEffectPotion : public source2sdk::server::CDOTA_Buff_Item
        {
        public:
            std::int32_t m_iCurJumpCount; // 0x17f8            
            Vector m_vCurTargetLoc; // 0x17fc            
            // m_hHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hHitEntities;
            char m_hHitEntities[0x18]; // 0x1808            
            float m_fProcChance; // 0x1820            
            std::int32_t m_nCastRange; // 0x1824            
            std::int32_t m_nBounceRadius; // 0x1828            
            std::int32_t m_nDamageRadius; // 0x182c            
            std::int32_t m_nDamage; // 0x1830            
            std::int32_t m_nMaxTargets; // 0x1834            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_AghsFort_ShadowWaveEffectPotion because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_AghsFort_ShadowWaveEffectPotion) == 0x1838);
    };
};
