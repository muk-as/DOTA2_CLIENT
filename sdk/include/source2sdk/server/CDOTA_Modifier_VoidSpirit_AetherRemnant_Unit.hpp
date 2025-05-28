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
        // Size: 0x1948
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_VoidSpirit_AetherRemnant_Unit : public source2sdk::client::CDOTA_Buff
        {
        public:
            Vector m_vFacingDir; // 0x1888            
            uint8_t _pad1894[0x4]; // 0x1894
            // m_hWatchPathThinkers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hWatchPathThinkers;
            char m_hWatchPathThinkers[0x18]; // 0x1898            
            // m_hShardWatchPathThinkers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hShardWatchPathThinkers;
            char m_hShardWatchPathThinkers[0x18]; // 0x18b0            
            source2sdk::client::ParticleIndex_t m_nBeamFXIndex; // 0x18c8            
            source2sdk::client::ParticleIndex_t m_nShardBeamFXIndex; // 0x18cc            
            source2sdk::client::ParticleIndex_t m_nHeroFXIndex; // 0x18d0            
            uint8_t _pad18d4[0x4]; // 0x18d4
            // m_nViewerIDs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_nViewerIDs;
            char m_nViewerIDs[0x18]; // 0x18d8            
            std::int32_t m_nViewerTeam; // 0x18f0            
            float remnant_watch_distance; // 0x18f4            
            float remnant_watch_radius; // 0x18f8            
            float duration; // 0x18fc            
            float watch_path_vision_radius; // 0x1900            
            float impact_damage; // 0x1904            
            float pull_duration; // 0x1908            
            float activation_delay; // 0x190c            
            bool m_bPiercesCreeps; // 0x1910            
            uint8_t _pad1911[0x7]; // 0x1911
            // m_hAlreadyHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hAlreadyHit;
            char m_hAlreadyHit[0x18]; // 0x1918            
            bool bIsArtifice; // 0x1930            
            uint8_t _pad1931[0x3]; // 0x1931
            float artifice_duration_override; // 0x1934            
            float artifice_pct_effectiveness; // 0x1938            
            bool m_bActivated; // 0x193c            
            uint8_t _pad193d[0x3]; // 0x193d
            float m_flRotation; // 0x1940            
            // m_hPartnerRemnant has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hPartnerRemnant;
            char m_hPartnerRemnant[0x4]; // 0x1944            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_VoidSpirit_AetherRemnant_Unit because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_VoidSpirit_AetherRemnant_Unit) == 0x1948);
    };
};
