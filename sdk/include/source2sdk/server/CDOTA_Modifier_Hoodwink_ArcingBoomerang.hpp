#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0x1780
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Hoodwink_ArcingBoomerang : public client::CDOTA_Buff
    {
    public:
        Vector m_vLeftControl; // 0x16e8        
        Vector m_vRightControl; // 0x16f4        
        Vector m_vTargetLoc; // 0x1700        
        Vector m_vOriginalTargetLoc; // 0x170c        
        Vector m_vSourceLoc; // 0x1718        
        bool m_bGroundTargeted; // 0x1724        
        [[maybe_unused]] std::uint8_t pad_0x1725[0x3]; // 0x1725
        float m_flTravelDuration; // 0x1728        
        entity2::GameTime_t m_flBoomerangDieTime; // 0x172c        
        bool m_bReturning; // 0x1730        
        bool m_bCatchingBoomerang; // 0x1731        
        bool m_bDisjointed; // 0x1732        
        [[maybe_unused]] std::uint8_t pad_0x1733[0x1]; // 0x1733
        int32_t m_nFramesToWait; // 0x1734        
        // m_hBoomerang has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hBoomerang;
        char m_hBoomerang[0x4]; // 0x1738        
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x173c        
        client::ParticleIndex_t m_nBoomerangFXIndex; // 0x1740        
        client::ParticleIndex_t m_nOldBoomerangFXindex; // 0x1744        
        // m_vecUniqueHitList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecUniqueHitList;
        char m_vecUniqueHitList[0x18]; // 0x1748        
        int32_t radius; // 0x1760        
        int32_t spread; // 0x1764        
        int32_t damage; // 0x1768        
        float mark_duration; // 0x176c        
        float min_throw_duration; // 0x1770        
        float max_throw_duration; // 0x1774        
        [[maybe_unused]] std::uint8_t pad_0x1778[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Hoodwink_ArcingBoomerang because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Hoodwink_ArcingBoomerang) == 0x1780);
};
