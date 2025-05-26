#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1938
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_VoidSpirit_AetherRemnant_Unit : public source2sdk::client::CDOTA_Buff
        {
        public:
            Vector m_vFacingDir; // 0x1878            
            uint8_t _pad1884[0x4]; // 0x1884
            // m_hWatchPathThinkers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hWatchPathThinkers;
            char m_hWatchPathThinkers[0x18]; // 0x1888            
            // m_hShardWatchPathThinkers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hShardWatchPathThinkers;
            char m_hShardWatchPathThinkers[0x18]; // 0x18a0            
            source2sdk::client::ParticleIndex_t m_nBeamFXIndex; // 0x18b8            
            source2sdk::client::ParticleIndex_t m_nShardBeamFXIndex; // 0x18bc            
            source2sdk::client::ParticleIndex_t m_nHeroFXIndex; // 0x18c0            
            uint8_t _pad18c4[0x4]; // 0x18c4
            // m_nViewerIDs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_nViewerIDs;
            char m_nViewerIDs[0x18]; // 0x18c8            
            std::int32_t m_nViewerTeam; // 0x18e0            
            float remnant_watch_distance; // 0x18e4            
            float remnant_watch_radius; // 0x18e8            
            float duration; // 0x18ec            
            float watch_path_vision_radius; // 0x18f0            
            float impact_damage; // 0x18f4            
            float pull_duration; // 0x18f8            
            float activation_delay; // 0x18fc            
            bool m_bPiercesCreeps; // 0x1900            
            uint8_t _pad1901[0x7]; // 0x1901
            // m_hAlreadyHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hAlreadyHit;
            char m_hAlreadyHit[0x18]; // 0x1908            
            bool bIsArtifice; // 0x1920            
            uint8_t _pad1921[0x3]; // 0x1921
            float artifice_duration_override; // 0x1924            
            float artifice_pct_effectiveness; // 0x1928            
            bool m_bActivated; // 0x192c            
            uint8_t _pad192d[0x3]; // 0x192d
            float m_flRotation; // 0x1930            
            // m_hPartnerRemnant has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hPartnerRemnant;
            char m_hPartnerRemnant[0x4]; // 0x1934            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_VoidSpirit_AetherRemnant_Unit because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_VoidSpirit_AetherRemnant_Unit) == 0x1938);
    };
};
