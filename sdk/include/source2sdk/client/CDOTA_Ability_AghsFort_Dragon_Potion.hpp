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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x740
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_AghsFort_Dragon_Potion : public source2sdk::client::C_DOTA_Item
        {
        public:
            std::int32_t bonus_movement_speed; // 0x720            
            std::int32_t bonus_attack_damage; // 0x724            
            std::int32_t bonus_attack_range; // 0x728            
            std::int32_t magic_resistance; // 0x72c            
            std::int32_t model_scale; // 0x730            
            std::int32_t skin_number; // 0x734            
            bool flying_movement; // 0x738            
            uint8_t _pad0739[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_AghsFort_Dragon_Potion because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Ability_AghsFort_Dragon_Potion) == 0x740);
    };
};
