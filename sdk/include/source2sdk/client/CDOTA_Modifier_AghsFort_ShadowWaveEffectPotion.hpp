#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff_Item.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

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
        // Size: 0x18c8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_AghsFort_ShadowWaveEffectPotion : public source2sdk::client::CDOTA_Buff_Item
        {
        public:
            std::int32_t m_iCurJumpCount; // 0x1888            
            Vector m_vCurTargetLoc; // 0x188c            
            // m_hHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_hHitEntities;
            char m_hHitEntities[0x18]; // 0x1898            
            float m_fProcChance; // 0x18b0            
            std::int32_t m_nCastRange; // 0x18b4            
            std::int32_t m_nBounceRadius; // 0x18b8            
            std::int32_t m_nDamageRadius; // 0x18bc            
            std::int32_t m_nDamage; // 0x18c0            
            std::int32_t m_nMaxTargets; // 0x18c4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_AghsFort_ShadowWaveEffectPotion because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_AghsFort_ShadowWaveEffectPotion) == 0x18c8);
    };
};
