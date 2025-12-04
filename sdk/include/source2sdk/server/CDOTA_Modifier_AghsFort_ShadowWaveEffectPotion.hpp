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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_AghsFort_ShadowWaveEffectPotion : public source2sdk::server::CDOTA_Buff_Item
        {
        public:
            std::int32_t m_iCurJumpCount; // 0x_            
            Vector m_vCurTargetLoc; // 0x_            
            // m_hHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hHitEntities;
            char m_hHitEntities[0x_]; // 0x_            
            float m_fProcChance; // 0x_            
            std::int32_t m_nCastRange; // 0x_            
            std::int32_t m_nBounceRadius; // 0x_            
            std::int32_t m_nDamageRadius; // 0x_            
            std::int32_t m_nDamage; // 0x_            
            std::int32_t m_nMaxTargets; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_AghsFort_ShadowWaveEffectPotion because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_AghsFort_ShadowWaveEffectPotion) == 0x_);
    };
};
