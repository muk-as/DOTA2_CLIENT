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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Marci_Companion_Run : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            std::int32_t m_nTrackingProjectileID; // 0x_            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x_            
            std::int32_t m_nMaxJumpDistance; // 0x_            
            float landing_radius; // 0x_            
            std::int32_t move_speed; // 0x_            
            float ally_buff_duration; // 0x_            
            std::int32_t min_jump_distance; // 0x_            
            std::int32_t max_jump_distance; // 0x_            
            std::int32_t impact_position_offset; // 0x_            
            std::int32_t vector_preview_radius; // 0x_            
            Vector m_vEndpoint; // 0x_            
            source2sdk::client::ParticleIndex_t m_nToBounceFXIndex; // 0x_            
            source2sdk::client::ParticleIndex_t m_nToTargetFXIndex; // 0x_            
            bool m_bIsAltCastState; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Marci_Companion_Run because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Ability_Marci_Companion_Run) == 0x_);
    };
};
