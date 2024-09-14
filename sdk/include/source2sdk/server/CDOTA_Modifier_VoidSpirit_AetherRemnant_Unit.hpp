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
    class CDOTA_Modifier_VoidSpirit_AetherRemnant_Unit : public client::CDOTA_Buff
    {
    public:
        Vector m_vFacingDir; // 0x16e8        
        [[maybe_unused]] std::uint8_t pad_0x16f4[0x4]; // 0x16f4
        // m_hWatchPathThinkers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hWatchPathThinkers;
        char m_hWatchPathThinkers[0x18]; // 0x16f8        
        client::ParticleIndex_t m_nBeamFXIndex; // 0x1710        
        [[maybe_unused]] std::uint8_t pad_0x1714[0x4]; // 0x1714
        // m_nViewerIDs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int32_t> m_nViewerIDs;
        char m_nViewerIDs[0x18]; // 0x1718        
        int32_t m_nViewerTeam; // 0x1730        
        int32_t remnant_watch_distance; // 0x1734        
        int32_t remnant_watch_radius; // 0x1738        
        float duration; // 0x173c        
        int32_t watch_path_vision_radius; // 0x1740        
        int32_t impact_damage; // 0x1744        
        float pull_duration; // 0x1748        
        float activation_delay; // 0x174c        
        bool m_bPiercesCreeps; // 0x1750        
        [[maybe_unused]] std::uint8_t pad_0x1751[0x7]; // 0x1751
        // m_hAlreadyHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hAlreadyHit;
        char m_hAlreadyHit[0x18]; // 0x1758        
        bool bIsArtifice; // 0x1770        
        [[maybe_unused]] std::uint8_t pad_0x1771[0x3]; // 0x1771
        float artifice_duration_override; // 0x1774        
        float artifice_pct_effectiveness; // 0x1778        
        [[maybe_unused]] std::uint8_t pad_0x177c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_VoidSpirit_AetherRemnant_Unit because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_VoidSpirit_AetherRemnant_Unit) == 0x1780);
};
