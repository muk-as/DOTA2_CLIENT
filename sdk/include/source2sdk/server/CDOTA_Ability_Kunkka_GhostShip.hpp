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
    // Size: 0x628
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_Kunkka_GhostShip : public server::CDOTABaseAbility
    {
    public:
        float buff_duration; // 0x5c8        
        float stun_duration; // 0x5cc        
        float ghostship_width; // 0x5d0        
        float ghostship_width_scepter; // 0x5d4        
        int32_t num_cannon_volleys; // 0x5d8        
        Vector m_vFinalDestination; // 0x5dc        
        Vector m_vStartingPoint; // 0x5e8        
        int32_t m_hProjectileID; // 0x5f4        
        [[maybe_unused]] std::uint8_t pad_0x5f8[0x30];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Kunkka_GhostShip because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Kunkka_GhostShip) == 0x628);
};
