#pragma once
#include "source2sdk/client/C_DOTABaseAbility.hpp"
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
    // Size: 0x610
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_DOTA_Ability_Kunkka_GhostShip : public client::C_DOTABaseAbility
    {
    public:
        float buff_duration; // 0x5d8        
        float stun_duration; // 0x5dc        
        float ghostship_width; // 0x5e0        
        float ghostship_width_scepter; // 0x5e4        
        int32_t num_cannon_volleys; // 0x5e8        
        Vector m_vFinalDestination; // 0x5ec        
        Vector m_vStartingPoint; // 0x5f8        
        int32_t m_hProjectileID; // 0x604        
        [[maybe_unused]] std::uint8_t pad_0x608[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Kunkka_GhostShip because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Kunkka_GhostShip) == 0x610);
};
