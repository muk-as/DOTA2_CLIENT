#pragma once
#include "source2sdk/client/CDOTA_Buff_Item.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1748
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_AghsFort_ShadowWaveEffectPotion : public client::CDOTA_Buff_Item
    {
    public:
        int32_t m_iCurJumpCount; // 0x1708        
        Vector m_vCurTargetLoc; // 0x170c        
        // m_hHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_hHitEntities;
        char m_hHitEntities[0x18]; // 0x1718        
        float m_fProcChance; // 0x1730        
        int32_t m_nCastRange; // 0x1734        
        int32_t m_nBounceRadius; // 0x1738        
        int32_t m_nDamageRadius; // 0x173c        
        int32_t m_nDamage; // 0x1740        
        int32_t m_nMaxTargets; // 0x1744        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_AghsFort_ShadowWaveEffectPotion because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_AghsFort_ShadowWaveEffectPotion) == 0x1748);
};
