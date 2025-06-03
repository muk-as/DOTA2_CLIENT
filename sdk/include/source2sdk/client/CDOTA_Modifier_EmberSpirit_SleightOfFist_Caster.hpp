#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1888
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_EmberSpirit_SleightOfFist_Caster : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t bonus_hero_damage; // 0x1878            
            std::int32_t creep_damage_penalty; // 0x187c            
            float radius; // 0x1880            
            float attack_interval; // 0x1884            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_EmberSpirit_SleightOfFist_Caster because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_EmberSpirit_SleightOfFist_Caster) == 0x1888);
    };
};
