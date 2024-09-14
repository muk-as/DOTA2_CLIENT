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
    // Size: 0x1778
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Aghsfort_Hoodwink_ArcingBoomerang : public client::CDOTA_Buff
    {
    public:
        Vector m_vLeftControl; // 0x16e8        
        Vector m_vRightControl; // 0x16f4        
        Vector m_vTargetLoc; // 0x1700        
        Vector m_vOriginalTargetLoc; // 0x170c        
        Vector m_vSourceLoc; // 0x1718        
        float m_flBuffDuration; // 0x1724        
        entity2::GameTime_t m_flBuffDieTime; // 0x1728        
        bool m_bReturning; // 0x172c        
        [[maybe_unused]] std::uint8_t pad_0x172d[0x3]; // 0x172d
        int32_t m_nFramesToWait; // 0x1730        
        // m_hBoomerang has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hBoomerang;
        char m_hBoomerang[0x4]; // 0x1734        
        client::ParticleIndex_t m_nBoomerangFXIndex; // 0x1738        
        client::ParticleIndex_t m_nOldBoomerangFXindex; // 0x173c        
        // m_vecUniqueHitList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecUniqueHitList;
        char m_vecUniqueHitList[0x18]; // 0x1740        
        int32_t radius; // 0x1758        
        int32_t spread; // 0x175c        
        int32_t damage; // 0x1760        
        float min_throw_duration; // 0x1764        
        float max_throw_duration; // 0x1768        
        [[maybe_unused]] std::uint8_t pad_0x176c[0xc];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Aghsfort_Hoodwink_ArcingBoomerang because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Aghsfort_Hoodwink_ArcingBoomerang) == 0x1778);
};
