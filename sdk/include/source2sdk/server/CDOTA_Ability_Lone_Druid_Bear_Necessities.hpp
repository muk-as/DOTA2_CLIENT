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
    // Size: 0x5d0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "float bonus_int"
    // static metadata: MNetworkVarNames "float bonus_str"
    // static metadata: MNetworkVarNames "float bonus_agi"
    // static metadata: MNetworkVarNames "float bonus_attack_speed"
    // static metadata: MNetworkVarNames "float bonus_attack_damage"
    // static metadata: MNetworkVarNames "float bonus_health_regen"
    // static metadata: MNetworkVarNames "float bonus_health_regen_percent"
    // static metadata: MNetworkVarNames "float bonus_mana_regen"
    // static metadata: MNetworkVarNames "float bonus_health"
    // static metadata: MNetworkVarNames "float bonus_mana"
    // static metadata: MNetworkVarNames "float bonus_evasion"
    #pragma pack(push, 1)
    class CDOTA_Ability_Lone_Druid_Bear_Necessities : public server::CDOTABaseAbility
    {
    public:
        // metadata: MNetworkEnable
        float bonus_int; // 0x5a0        
        // metadata: MNetworkEnable
        float bonus_str; // 0x5a4        
        // metadata: MNetworkEnable
        float bonus_agi; // 0x5a8        
        // metadata: MNetworkEnable
        float bonus_attack_speed; // 0x5ac        
        // metadata: MNetworkEnable
        float bonus_attack_damage; // 0x5b0        
        // metadata: MNetworkEnable
        float bonus_health_regen; // 0x5b4        
        // metadata: MNetworkEnable
        float bonus_health_regen_percent; // 0x5b8        
        // metadata: MNetworkEnable
        float bonus_mana_regen; // 0x5bc        
        // metadata: MNetworkEnable
        float bonus_health; // 0x5c0        
        // metadata: MNetworkEnable
        float bonus_mana; // 0x5c4        
        // metadata: MNetworkEnable
        float bonus_evasion; // 0x5c8        
        [[maybe_unused]] std::uint8_t pad_0x5cc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Lone_Druid_Bear_Necessities because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Lone_Druid_Bear_Necessities) == 0x5d0);
};
