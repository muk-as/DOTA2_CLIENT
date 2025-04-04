#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CDOTABaseAbility.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x630
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_Marci_Companion_Run : public server::CDOTABaseAbility
    {
    public:
        int32_t m_nTrackingProjectileID; // 0x5c8        
        client::ParticleIndex_t m_nFXIndex; // 0x5cc        
        int32_t m_nMaxJumpDistance; // 0x5d0        
        int32_t landing_radius; // 0x5d4        
        int32_t move_speed; // 0x5d8        
        float ally_buff_duration; // 0x5dc        
        int32_t min_jump_distance; // 0x5e0        
        int32_t max_jump_distance; // 0x5e4        
        int32_t impact_position_offset; // 0x5e8        
        int32_t vector_preview_radius; // 0x5ec        
        Vector m_vEndpoint; // 0x5f0        
        client::ParticleIndex_t m_nToBounceFXIndex; // 0x5fc        
        client::ParticleIndex_t m_nToTargetFXIndex; // 0x600        
        Vector m_vDashPosition; // 0x604        
        Vector m_vFacePosition; // 0x610        
        Vector m_vTravelDir; // 0x61c        
        float m_fTravelDistance; // 0x628        
        [[maybe_unused]] std::uint8_t pad_0x62c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Marci_Companion_Run because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Marci_Companion_Run) == 0x630);
};
