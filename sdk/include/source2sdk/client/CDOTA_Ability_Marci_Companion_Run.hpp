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
    // Size: 0x618
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_Marci_Companion_Run : public client::C_DOTABaseAbility
    {
    public:
        int32_t m_nTrackingProjectileID; // 0x5d8        
        client::ParticleIndex_t m_nFXIndex; // 0x5dc        
        int32_t m_nMaxJumpDistance; // 0x5e0        
        int32_t landing_radius; // 0x5e4        
        int32_t move_speed; // 0x5e8        
        float ally_buff_duration; // 0x5ec        
        int32_t min_jump_distance; // 0x5f0        
        int32_t max_jump_distance; // 0x5f4        
        int32_t impact_position_offset; // 0x5f8        
        int32_t vector_preview_radius; // 0x5fc        
        Vector m_vEndpoint; // 0x600        
        client::ParticleIndex_t m_nToBounceFXIndex; // 0x60c        
        client::ParticleIndex_t m_nToTargetFXIndex; // 0x610        
        [[maybe_unused]] std::uint8_t pad_0x614[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Marci_Companion_Run because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Marci_Companion_Run) == 0x618);
};
