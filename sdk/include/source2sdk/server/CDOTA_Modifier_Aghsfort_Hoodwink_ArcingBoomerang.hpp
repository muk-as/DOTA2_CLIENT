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
    // Size: 0x1798
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Aghsfort_Hoodwink_ArcingBoomerang : public client::CDOTA_Buff
    {
    public:
        Vector m_vLeftControl; // 0x1708        
        Vector m_vRightControl; // 0x1714        
        Vector m_vTargetLoc; // 0x1720        
        Vector m_vOriginalTargetLoc; // 0x172c        
        Vector m_vSourceLoc; // 0x1738        
        float m_flBuffDuration; // 0x1744        
        entity2::GameTime_t m_flBuffDieTime; // 0x1748        
        bool m_bReturning; // 0x174c        
        [[maybe_unused]] std::uint8_t pad_0x174d[0x3]; // 0x174d
        int32_t m_nFramesToWait; // 0x1750        
        // m_hBoomerang has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hBoomerang;
        char m_hBoomerang[0x4]; // 0x1754        
        client::ParticleIndex_t m_nBoomerangFXIndex; // 0x1758        
        client::ParticleIndex_t m_nOldBoomerangFXindex; // 0x175c        
        // m_vecUniqueHitList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecUniqueHitList;
        char m_vecUniqueHitList[0x18]; // 0x1760        
        int32_t radius; // 0x1778        
        int32_t spread; // 0x177c        
        int32_t damage; // 0x1780        
        float min_throw_duration; // 0x1784        
        float max_throw_duration; // 0x1788        
        [[maybe_unused]] std::uint8_t pad_0x178c[0xc];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Aghsfort_Hoodwink_ArcingBoomerang because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Aghsfort_Hoodwink_ArcingBoomerang) == 0x1798);
};
