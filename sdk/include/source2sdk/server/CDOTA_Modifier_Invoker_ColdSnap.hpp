#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/server/CountdownTimer.hpp"

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
        // Size: 0x18b8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Invoker_ColdSnap : public source2sdk::client::CDOTA_Buff
        {
        public:
            float freeze_damage; // 0x1878            
            float freeze_duration; // 0x187c            
            float freeze_cooldown; // 0x1880            
            float damage_trigger; // 0x1884            
            float spell_lifesteal; // 0x1888            
            float spell_amp; // 0x188c            
            float freeze_heal; // 0x1890            
            float freeze_mana; // 0x1894            
            std::int32_t nQuasApplications; // 0x1898            
            std::int32_t nExortApplications; // 0x189c            
            source2sdk::server::CountdownTimer m_freezeCooldownTimer; // 0x18a0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Invoker_ColdSnap because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Invoker_ColdSnap) == 0x18b8);
    };
};
