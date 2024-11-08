#pragma once
#include "source2sdk/client/C_DOTABaseAbility.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x640
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_Marci_Companion_Run : public client::C_DOTABaseAbility
    {
    public:
        int32_t m_nTrackingProjectileID; // 0x600        
        client::ParticleIndex_t m_nFXIndex; // 0x604        
        int32_t m_nMaxJumpDistance; // 0x608        
        int32_t landing_radius; // 0x60c        
        int32_t move_speed; // 0x610        
        float ally_buff_duration; // 0x614        
        int32_t min_jump_distance; // 0x618        
        int32_t max_jump_distance; // 0x61c        
        int32_t impact_position_offset; // 0x620        
        int32_t vector_preview_radius; // 0x624        
        Vector m_vEndpoint; // 0x628        
        client::ParticleIndex_t m_nToBounceFXIndex; // 0x634        
        client::ParticleIndex_t m_nToTargetFXIndex; // 0x638        
        [[maybe_unused]] std::uint8_t pad_0x63c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Marci_Companion_Run because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Marci_Companion_Run) == 0x640);
};
