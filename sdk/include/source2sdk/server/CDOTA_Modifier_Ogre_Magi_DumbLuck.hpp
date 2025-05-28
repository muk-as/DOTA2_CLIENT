#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x18a8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Ogre_Magi_DumbLuck : public source2sdk::client::CDOTA_Buff
        {
        public:
            float mana_per_str; // 0x1888            
            float mana_regen_per_str; // 0x188c            
            float bonus_strength; // 0x1890            
            float bonus_strength_gain; // 0x1894            
            std::int32_t level_one_ability_points; // 0x1898            
            std::int32_t level_two_ability_points; // 0x189c            
            std::int32_t required_level_reduction; // 0x18a0            
            uint8_t _pad18a4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Ogre_Magi_DumbLuck because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Ogre_Magi_DumbLuck) == 0x18a8);
    };
};
