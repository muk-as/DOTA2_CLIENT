#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Size: 0x17a0
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_VoidSpirit_AetherRemnant_Unit : public client::CDOTA_Buff
    {
    public:
        Vector m_vFacingDir; // 0x1708        
        [[maybe_unused]] std::uint8_t pad_0x1714[0x4]; // 0x1714
        // m_hWatchPathThinkers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_hWatchPathThinkers;
        char m_hWatchPathThinkers[0x18]; // 0x1718        
        client::ParticleIndex_t m_nBeamFXIndex; // 0x1730        
        [[maybe_unused]] std::uint8_t pad_0x1734[0x4]; // 0x1734
        // m_nViewerIDs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int32_t> m_nViewerIDs;
        char m_nViewerIDs[0x18]; // 0x1738        
        int32_t m_nViewerTeam; // 0x1750        
        int32_t remnant_watch_distance; // 0x1754        
        int32_t remnant_watch_radius; // 0x1758        
        float duration; // 0x175c        
        int32_t watch_path_vision_radius; // 0x1760        
        int32_t impact_damage; // 0x1764        
        float pull_duration; // 0x1768        
        float activation_delay; // 0x176c        
        bool m_bPiercesCreeps; // 0x1770        
        [[maybe_unused]] std::uint8_t pad_0x1771[0x7]; // 0x1771
        // m_hAlreadyHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_hAlreadyHit;
        char m_hAlreadyHit[0x18]; // 0x1778        
        bool bIsArtifice; // 0x1790        
        [[maybe_unused]] std::uint8_t pad_0x1791[0x3]; // 0x1791
        float artifice_duration_override; // 0x1794        
        float artifice_pct_effectiveness; // 0x1798        
        [[maybe_unused]] std::uint8_t pad_0x179c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_VoidSpirit_AetherRemnant_Unit because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_VoidSpirit_AetherRemnant_Unit) == 0x17a0);
};
