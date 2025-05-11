#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1890
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_VoidSpirit_AetherRemnant_Unit : public source2sdk::client::CDOTA_Buff
        {
        public:
            Vector m_vFacingDir; // 0x17f8            
            uint8_t _pad1804[0x4]; // 0x1804
            // m_hWatchPathThinkers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_hWatchPathThinkers;
            char m_hWatchPathThinkers[0x18]; // 0x1808            
            source2sdk::client::ParticleIndex_t m_nBeamFXIndex; // 0x1820            
            uint8_t _pad1824[0x4]; // 0x1824
            // m_nViewerIDs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_nViewerIDs;
            char m_nViewerIDs[0x18]; // 0x1828            
            std::int32_t m_nViewerTeam; // 0x1840            
            float remnant_watch_distance; // 0x1844            
            float remnant_watch_radius; // 0x1848            
            float duration; // 0x184c            
            float watch_path_vision_radius; // 0x1850            
            float impact_damage; // 0x1854            
            float pull_duration; // 0x1858            
            float activation_delay; // 0x185c            
            bool m_bPiercesCreeps; // 0x1860            
            uint8_t _pad1861[0x7]; // 0x1861
            // m_hAlreadyHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_hAlreadyHit;
            char m_hAlreadyHit[0x18]; // 0x1868            
            bool bIsArtifice; // 0x1880            
            uint8_t _pad1881[0x3]; // 0x1881
            float artifice_duration_override; // 0x1884            
            float artifice_pct_effectiveness; // 0x1888            
            uint8_t _pad188c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_VoidSpirit_AetherRemnant_Unit because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_VoidSpirit_AetherRemnant_Unit) == 0x1890);
    };
};
