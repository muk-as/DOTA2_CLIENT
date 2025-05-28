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
        // Size: 0x1898
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Luna_LunarBlessingAura : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t bonus_damage_per_level; // 0x1888            
            std::int32_t self_bonus_damage_per_level; // 0x188c            
            std::int32_t bonus_night_vision_self; // 0x1890            
            std::int32_t bonus_night_vision_per_level; // 0x1894            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Luna_LunarBlessingAura because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Luna_LunarBlessingAura) == 0x1898);
    };
};
