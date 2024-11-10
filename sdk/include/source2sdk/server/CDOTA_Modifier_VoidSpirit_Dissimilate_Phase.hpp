#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x17b0
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_VoidSpirit_Dissimilate_Phase : public client::CDOTA_Buff
    {
    public:
        Vector m_vFirstPortalPos; // 0x1708        
        [[maybe_unused]] std::uint8_t pad_0x1714[0x4]; // 0x1714
        // m_vecDestinations has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<Vector> m_vecDestinations;
        char m_vecDestinations[0x18]; // 0x1718        
        // m_vecDestinationParticles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::ParticleIndex_t> m_vecDestinationParticles;
        char m_vecDestinationParticles[0x18]; // 0x1730        
        // m_vecDestinationParticles_EnemyTeam has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::ParticleIndex_t> m_vecDestinationParticles_EnemyTeam;
        char m_vecDestinationParticles_EnemyTeam[0x18]; // 0x1748        
        int32_t m_nCurrentDestinationIndex; // 0x1760        
        int32_t m_nClosestIndexPosToClick; // 0x1764        
        int32_t m_nPortalHeightOffset; // 0x1768        
        [[maybe_unused]] std::uint8_t pad_0x176c[0x4]; // 0x176c
        char* m_szAlliesPortalFX; // 0x1770        
        char* m_szEnemiesPortalFX; // 0x1778        
        int32_t m_nPortalRadius; // 0x1780        
        int32_t m_nPortalPadding; // 0x1784        
        int32_t m_nFinalImpactDamageRadius; // 0x1788        
        int32_t m_nFinalImpactFXRadius; // 0x178c        
        int32_t destination_fx_radius; // 0x1790        
        int32_t damage_radius; // 0x1794        
        int32_t portals_per_ring; // 0x1798        
        int32_t angle_per_ring_portal; // 0x179c        
        int32_t first_ring_distance_offset; // 0x17a0        
        float debuff_duration; // 0x17a4        
        int32_t aether_remnant_count; // 0x17a8        
        float artifice_extra_offset; // 0x17ac        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_VoidSpirit_Dissimilate_Phase because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_VoidSpirit_Dissimilate_Phase) == 0x17b0);
};
