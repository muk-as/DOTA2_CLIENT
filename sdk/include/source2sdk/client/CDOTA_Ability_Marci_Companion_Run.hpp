#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x5f0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Marci_Companion_Run : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            std::int32_t m_nTrackingProjectileID; // 0x5b0            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x5b4            
            std::int32_t m_nMaxJumpDistance; // 0x5b8            
            float landing_radius; // 0x5bc            
            std::int32_t move_speed; // 0x5c0            
            float ally_buff_duration; // 0x5c4            
            std::int32_t min_jump_distance; // 0x5c8            
            std::int32_t max_jump_distance; // 0x5cc            
            std::int32_t impact_position_offset; // 0x5d0            
            std::int32_t vector_preview_radius; // 0x5d4            
            Vector m_vEndpoint; // 0x5d8            
            source2sdk::client::ParticleIndex_t m_nToBounceFXIndex; // 0x5e4            
            source2sdk::client::ParticleIndex_t m_nToTargetFXIndex; // 0x5e8            
            bool m_bIsAltCastState; // 0x5ec            
            uint8_t _pad05ed[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Marci_Companion_Run because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Ability_Marci_Companion_Run) == 0x5f0);
    };
};
