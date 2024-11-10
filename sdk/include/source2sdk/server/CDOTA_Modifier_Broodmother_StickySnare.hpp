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
    // Size: 0x1770
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Broodmother_StickySnare : public client::CDOTA_Buff
    {
    public:
        Vector m_vOrigin; // 0x1708        
        Vector m_vWallDirection; // 0x1714        
        Vector m_vWallRight; // 0x1720        
        int32_t width; // 0x172c        
        float root_duration; // 0x1730        
        float formation_delay; // 0x1734        
        bool m_bTouching; // 0x1738        
        [[maybe_unused]] std::uint8_t pad_0x1739[0x3]; // 0x1739
        // m_hRight has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hRight;
        char m_hRight[0x4]; // 0x173c        
        bool m_bParticle; // 0x1740        
        [[maybe_unused]] std::uint8_t pad_0x1741[0x3]; // 0x1741
        entity2::GameTime_t m_flStartingTime; // 0x1744        
        int32_t m_nFoWID; // 0x1748        
        int32_t m_nTeamID; // 0x174c        
        // m_vecAffectedHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecAffectedHeroes;
        char m_vecAffectedHeroes[0x18]; // 0x1750        
        client::ParticleIndex_t m_nWarmupFXIndex; // 0x1768        
        [[maybe_unused]] std::uint8_t pad_0x176c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Broodmother_StickySnare because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Broodmother_StickySnare) == 0x1770);
};
