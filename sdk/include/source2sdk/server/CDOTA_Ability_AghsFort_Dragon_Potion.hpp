#pragma once
#include "source2sdk/server/CDOTA_Item.hpp"
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
    // Size: 0x668
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_AghsFort_Dragon_Potion : public server::CDOTA_Item
    {
    public:
        int32_t bonus_movement_speed; // 0x648        
        int32_t bonus_attack_damage; // 0x64c        
        int32_t bonus_attack_range; // 0x650        
        int32_t magic_resistance; // 0x654        
        int32_t model_scale; // 0x658        
        int32_t skin_number; // 0x65c        
        bool flying_movement; // 0x660        
        [[maybe_unused]] std::uint8_t pad_0x661[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_AghsFort_Dragon_Potion because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_AghsFort_Dragon_Potion) == 0x668);
};