#pragma once
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
    // Size: 0x600
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_Kunkka_GhostShip : public server::CDOTABaseAbility
    {
    public:
        float buff_duration; // 0x5a0        
        float stun_duration; // 0x5a4        
        float ghostship_width; // 0x5a8        
        float ghostship_width_scepter; // 0x5ac        
        int32_t num_cannon_volleys; // 0x5b0        
        Vector m_vFinalDestination; // 0x5b4        
        Vector m_vStartingPoint; // 0x5c0        
        int32_t m_hProjectileID; // 0x5cc        
        [[maybe_unused]] std::uint8_t pad_0x5d0[0x30];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Kunkka_GhostShip because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Kunkka_GhostShip) == 0x600);
};
