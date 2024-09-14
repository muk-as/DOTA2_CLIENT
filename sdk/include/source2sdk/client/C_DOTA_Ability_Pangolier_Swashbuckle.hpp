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
    // Size: 0x5f8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_DOTA_Ability_Pangolier_Swashbuckle : public client::C_DOTABaseAbility
    {
    public:
        int32_t dash_speed; // 0x5d8        
        int32_t start_radius; // 0x5dc        
        int32_t end_radius; // 0x5e0        
        int32_t range; // 0x5e4        
        int32_t damage; // 0x5e8        
        int32_t attack_damage; // 0x5ec        
        int32_t procs_onhit_effects; // 0x5f0        
        [[maybe_unused]] std::uint8_t pad_0x5f4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Pangolier_Swashbuckle because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Pangolier_Swashbuckle) == 0x5f8);
};
