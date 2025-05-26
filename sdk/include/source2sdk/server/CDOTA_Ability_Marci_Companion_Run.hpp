#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CDOTABaseAbility.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x628
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Marci_Companion_Run : public source2sdk::server::CDOTABaseAbility
        {
        public:
            std::int32_t m_nTrackingProjectileID; // 0x5c0            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x5c4            
            std::int32_t m_nMaxJumpDistance; // 0x5c8            
            float landing_radius; // 0x5cc            
            std::int32_t move_speed; // 0x5d0            
            float ally_buff_duration; // 0x5d4            
            std::int32_t min_jump_distance; // 0x5d8            
            std::int32_t max_jump_distance; // 0x5dc            
            std::int32_t impact_position_offset; // 0x5e0            
            std::int32_t vector_preview_radius; // 0x5e4            
            Vector m_vEndpoint; // 0x5e8            
            source2sdk::client::ParticleIndex_t m_nToBounceFXIndex; // 0x5f4            
            source2sdk::client::ParticleIndex_t m_nToTargetFXIndex; // 0x5f8            
            bool m_bIsAltCastState; // 0x5fc            
            uint8_t _pad05fd[0x3]; // 0x5fd
            Vector m_vDashPosition; // 0x600            
            Vector m_vFacePosition; // 0x60c            
            Vector m_vTravelDir; // 0x618            
            float m_fTravelDistance; // 0x624            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Marci_Companion_Run because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Marci_Companion_Run) == 0x628);
    };
};
