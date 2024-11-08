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
    // Size: 0x620
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class C_DOTA_Ability_Pangolier_Swashbuckle : public client::C_DOTABaseAbility
    {
    public:
        int32_t dash_speed; // 0x600        
        int32_t start_radius; // 0x604        
        int32_t end_radius; // 0x608        
        int32_t range; // 0x60c        
        int32_t damage; // 0x610        
        int32_t attack_damage; // 0x614        
        int32_t procs_onhit_effects; // 0x618        
        [[maybe_unused]] std::uint8_t pad_0x61c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Pangolier_Swashbuckle because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Pangolier_Swashbuckle) == 0x620);
};
