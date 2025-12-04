#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

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
        class CDOTA_Modifier_VoidSpirit_Dissimilate_Phase : public source2sdk::client::CDOTA_Buff
        {
        public:
            Vector m_vFirstPortalPos; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_vecDestinations has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<Vector> m_vecDestinations;
            char m_vecDestinations[0x_]; // 0x_            
            // m_vecDestinationParticles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::ParticleIndex_t> m_vecDestinationParticles;
            char m_vecDestinationParticles[0x_]; // 0x_            
            // m_vecDestinationParticles_EnemyTeam has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::ParticleIndex_t> m_vecDestinationParticles_EnemyTeam;
            char m_vecDestinationParticles_EnemyTeam[0x_]; // 0x_            
            std::int32_t m_nCurrentDestinationIndex; // 0x_            
            std::int32_t m_nClosestIndexPosToClick; // 0x_            
            std::int32_t m_flPortalHeightOffset; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            char* m_szAlliesPortalFX; // 0x_            
            char* m_szEnemiesPortalFX; // 0x_            
            float m_flPortalRadius; // 0x_            
            float m_flPortalPadding; // 0x_            
            float m_flFinalImpactDamageRadius; // 0x_            
            float m_flFinalImpactFXRadius; // 0x_            
            float destination_fx_radius; // 0x_            
            float damage_radius; // 0x_            
            std::int32_t portals_per_ring; // 0x_            
            std::int32_t angle_per_ring_portal; // 0x_            
            float first_ring_distance_offset; // 0x_            
            float debuff_duration; // 0x_            
            std::int32_t aether_remnant_count; // 0x_            
            float artifice_extra_offset; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_VoidSpirit_Dissimilate_Phase because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_VoidSpirit_Dissimilate_Phase) == 0x_);
    };
};
