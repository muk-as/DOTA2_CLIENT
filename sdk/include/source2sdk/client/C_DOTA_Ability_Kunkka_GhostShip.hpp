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
    // Size: 0x638
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class C_DOTA_Ability_Kunkka_GhostShip : public client::C_DOTABaseAbility
    {
    public:
        float buff_duration; // 0x600        
        float stun_duration; // 0x604        
        float ghostship_width; // 0x608        
        float ghostship_width_scepter; // 0x60c        
        int32_t num_cannon_volleys; // 0x610        
        Vector m_vFinalDestination; // 0x614        
        Vector m_vStartingPoint; // 0x620        
        int32_t m_hProjectileID; // 0x62c        
        [[maybe_unused]] std::uint8_t pad_0x630[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Kunkka_GhostShip because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Kunkka_GhostShip) == 0x638);
};
