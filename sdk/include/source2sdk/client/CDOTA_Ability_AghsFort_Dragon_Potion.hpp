#pragma once
#include "source2sdk/client/C_DOTA_Item.hpp"
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
    // Size: 0x698
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_AghsFort_Dragon_Potion : public client::C_DOTA_Item
    {
    public:
        int32_t bonus_movement_speed; // 0x678        
        int32_t bonus_attack_damage; // 0x67c        
        int32_t bonus_attack_range; // 0x680        
        int32_t magic_resistance; // 0x684        
        int32_t model_scale; // 0x688        
        int32_t skin_number; // 0x68c        
        bool flying_movement; // 0x690        
        [[maybe_unused]] std::uint8_t pad_0x691[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_AghsFort_Dragon_Potion because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_AghsFort_Dragon_Potion) == 0x698);
};
