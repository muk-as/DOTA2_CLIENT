#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0x1750
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Broodmother_StickySnare : public client::CDOTA_Buff
    {
    public:
        Vector m_vOrigin; // 0x16e8        
        Vector m_vWallDirection; // 0x16f4        
        Vector m_vWallRight; // 0x1700        
        int32_t width; // 0x170c        
        float root_duration; // 0x1710        
        float formation_delay; // 0x1714        
        bool m_bTouching; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x1719[0x3]; // 0x1719
        // m_hRight has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hRight;
        char m_hRight[0x4]; // 0x171c        
        bool m_bParticle; // 0x1720        
        [[maybe_unused]] std::uint8_t pad_0x1721[0x3]; // 0x1721
        entity2::GameTime_t m_flStartingTime; // 0x1724        
        int32_t m_nFoWID; // 0x1728        
        int32_t m_nTeamID; // 0x172c        
        // m_vecAffectedHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_vecAffectedHeroes;
        char m_vecAffectedHeroes[0x18]; // 0x1730        
        client::ParticleIndex_t m_nWarmupFXIndex; // 0x1748        
        [[maybe_unused]] std::uint8_t pad_0x174c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Broodmother_StickySnare because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Broodmother_StickySnare) == 0x1750);
};
