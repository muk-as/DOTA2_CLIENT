#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTA_Item.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x6b0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_AghsFort_Dragon_Potion : public source2sdk::server::CDOTA_Item
        {
        public:
            std::int32_t bonus_movement_speed; // 0x690            
            std::int32_t bonus_attack_damage; // 0x694            
            std::int32_t bonus_attack_range; // 0x698            
            std::int32_t magic_resistance; // 0x69c            
            std::int32_t model_scale; // 0x6a0            
            std::int32_t skin_number; // 0x6a4            
            bool flying_movement; // 0x6a8            
            uint8_t _pad06a9[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_AghsFort_Dragon_Potion because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_AghsFort_Dragon_Potion) == 0x6b0);
    };
};
