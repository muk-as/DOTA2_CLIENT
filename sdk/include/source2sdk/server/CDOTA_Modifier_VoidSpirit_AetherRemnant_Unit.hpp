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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_VoidSpirit_AetherRemnant_Unit : public source2sdk::client::CDOTA_Buff
        {
        public:
            Vector m_vFacingDir; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_hWatchPathThinkers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hWatchPathThinkers;
            char m_hWatchPathThinkers[0x_]; // 0x_            
            // m_hShardWatchPathThinkers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hShardWatchPathThinkers;
            char m_hShardWatchPathThinkers[0x_]; // 0x_            
            source2sdk::client::ParticleIndex_t m_nBeamFXIndex; // 0x_            
            source2sdk::client::ParticleIndex_t m_nShardBeamFXIndex; // 0x_            
            source2sdk::client::ParticleIndex_t m_nHeroFXIndex; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_nViewerIDs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_nViewerIDs;
            char m_nViewerIDs[0x_]; // 0x_            
            std::int32_t m_nViewerTeam; // 0x_            
            float remnant_watch_distance; // 0x_            
            float remnant_watch_radius; // 0x_            
            float duration; // 0x_            
            float watch_path_vision_radius; // 0x_            
            float impact_damage; // 0x_            
            float pull_duration; // 0x_            
            float activation_delay; // 0x_            
            bool m_bPiercesCreeps; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_hAlreadyHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hAlreadyHit;
            char m_hAlreadyHit[0x_]; // 0x_            
            bool bIsArtifice; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float artifice_duration_override; // 0x_            
            float artifice_pct_effectiveness; // 0x_            
            bool m_bActivated; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flRotation; // 0x_            
            // m_hPartnerRemnant has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hPartnerRemnant;
            char m_hPartnerRemnant[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_VoidSpirit_AetherRemnant_Unit because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_VoidSpirit_AetherRemnant_Unit) == 0x_);
    };
};
