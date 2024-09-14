#pragma once
#include "source2sdk/server/CDOTA_Buff_Item.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1728
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_AghsFort_ShadowWaveEffectPotion : public server::CDOTA_Buff_Item
    {
    public:
        int32_t m_iCurJumpCount; // 0x16e8        
        Vector m_vCurTargetLoc; // 0x16ec        
        // m_hHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hHitEntities;
        char m_hHitEntities[0x18]; // 0x16f8        
        float m_fProcChance; // 0x1710        
        int32_t m_nCastRange; // 0x1714        
        int32_t m_nBounceRadius; // 0x1718        
        int32_t m_nDamageRadius; // 0x171c        
        int32_t m_nDamage; // 0x1720        
        int32_t m_nMaxTargets; // 0x1724        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_AghsFort_ShadowWaveEffectPotion because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_AghsFort_ShadowWaveEffectPotion) == 0x1728);
};
