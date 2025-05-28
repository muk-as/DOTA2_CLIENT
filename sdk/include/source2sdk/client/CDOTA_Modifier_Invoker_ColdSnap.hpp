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
        // Size: 0x18b0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Invoker_ColdSnap : public source2sdk::client::CDOTA_Buff
        {
        public:
            float freeze_damage; // 0x1888            
            float freeze_duration; // 0x188c            
            float freeze_cooldown; // 0x1890            
            float damage_trigger; // 0x1894            
            float spell_lifesteal; // 0x1898            
            float spell_amp; // 0x189c            
            float freeze_heal; // 0x18a0            
            float freeze_mana; // 0x18a4            
            std::int32_t nQuasApplications; // 0x18a8            
            std::int32_t nExortApplications; // 0x18ac            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Invoker_ColdSnap because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Invoker_ColdSnap) == 0x18b0);
    };
};
