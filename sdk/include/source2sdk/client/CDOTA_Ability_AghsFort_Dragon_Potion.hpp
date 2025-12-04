#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTA_Item.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_AghsFort_Dragon_Potion : public source2sdk::client::C_DOTA_Item
        {
        public:
            std::int32_t bonus_movement_speed; // 0x_            
            std::int32_t bonus_attack_damage; // 0x_            
            std::int32_t bonus_attack_range; // 0x_            
            std::int32_t magic_resistance; // 0x_            
            std::int32_t model_scale; // 0x_            
            std::int32_t skin_number; // 0x_            
            bool flying_movement; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_AghsFort_Dragon_Potion because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Ability_AghsFort_Dragon_Potion) == 0x_);
    };
};
