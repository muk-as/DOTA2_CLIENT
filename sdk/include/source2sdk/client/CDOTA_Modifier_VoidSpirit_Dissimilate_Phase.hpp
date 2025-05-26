#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

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
        // Size: 0x1920
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_VoidSpirit_Dissimilate_Phase : public source2sdk::client::CDOTA_Buff
        {
        public:
            Vector m_vFirstPortalPos; // 0x1878            
            uint8_t _pad1884[0x4]; // 0x1884
            // m_vecDestinations has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<Vector> m_vecDestinations;
            char m_vecDestinations[0x18]; // 0x1888            
            // m_vecDestinationParticles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::ParticleIndex_t> m_vecDestinationParticles;
            char m_vecDestinationParticles[0x18]; // 0x18a0            
            // m_vecDestinationParticles_EnemyTeam has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::ParticleIndex_t> m_vecDestinationParticles_EnemyTeam;
            char m_vecDestinationParticles_EnemyTeam[0x18]; // 0x18b8            
            std::int32_t m_nCurrentDestinationIndex; // 0x18d0            
            std::int32_t m_nClosestIndexPosToClick; // 0x18d4            
            std::int32_t m_flPortalHeightOffset; // 0x18d8            
            uint8_t _pad18dc[0x4]; // 0x18dc
            char* m_szAlliesPortalFX; // 0x18e0            
            char* m_szEnemiesPortalFX; // 0x18e8            
            float m_flPortalRadius; // 0x18f0            
            float m_flPortalPadding; // 0x18f4            
            float m_flFinalImpactDamageRadius; // 0x18f8            
            float m_flFinalImpactFXRadius; // 0x18fc            
            float destination_fx_radius; // 0x1900            
            float damage_radius; // 0x1904            
            std::int32_t portals_per_ring; // 0x1908            
            std::int32_t angle_per_ring_portal; // 0x190c            
            float first_ring_distance_offset; // 0x1910            
            float debuff_duration; // 0x1914            
            std::int32_t aether_remnant_count; // 0x1918            
            float artifice_extra_offset; // 0x191c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_VoidSpirit_Dissimilate_Phase because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_VoidSpirit_Dissimilate_Phase) == 0x1920);
    };
};
