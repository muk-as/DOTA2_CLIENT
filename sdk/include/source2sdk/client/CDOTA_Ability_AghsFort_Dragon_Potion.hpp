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
    // Size: 0x6c0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_AghsFort_Dragon_Potion : public client::C_DOTA_Item
    {
    public:
        int32_t bonus_movement_speed; // 0x6a0        
        int32_t bonus_attack_damage; // 0x6a4        
        int32_t bonus_attack_range; // 0x6a8        
        int32_t magic_resistance; // 0x6ac        
        int32_t model_scale; // 0x6b0        
        int32_t skin_number; // 0x6b4        
        bool flying_movement; // 0x6b8        
        [[maybe_unused]] std::uint8_t pad_0x6b9[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_AghsFort_Dragon_Potion because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_AghsFort_Dragon_Potion) == 0x6c0);
};
