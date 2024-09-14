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
    // Size: 0x608
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
    class C_DOTA_Ability_Lone_Druid_Bear_Necessities : public client::C_DOTABaseAbility
    {
    public:
        // metadata: MNetworkEnable
        float bonus_int; // 0x5d8        
        // metadata: MNetworkEnable
        float bonus_str; // 0x5dc        
        // metadata: MNetworkEnable
        float bonus_agi; // 0x5e0        
        // metadata: MNetworkEnable
        float bonus_attack_speed; // 0x5e4        
        // metadata: MNetworkEnable
        float bonus_attack_damage; // 0x5e8        
        // metadata: MNetworkEnable
        float bonus_health_regen; // 0x5ec        
        // metadata: MNetworkEnable
        float bonus_health_regen_percent; // 0x5f0        
        // metadata: MNetworkEnable
        float bonus_mana_regen; // 0x5f4        
        // metadata: MNetworkEnable
        float bonus_health; // 0x5f8        
        // metadata: MNetworkEnable
        float bonus_mana; // 0x5fc        
        // metadata: MNetworkEnable
        float bonus_evasion; // 0x600        
        [[maybe_unused]] std::uint8_t pad_0x604[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Lone_Druid_Bear_Necessities because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Lone_Druid_Bear_Necessities) == 0x608);
};
