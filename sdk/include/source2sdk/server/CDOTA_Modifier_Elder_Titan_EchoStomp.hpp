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
        // Size: 0x18a8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Elder_Titan_EchoStomp : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t wake_damage_limit; // 0x1878            
            float animation_rate; // 0x187c            
            float initial_stun_duration; // 0x1880            
            uint8_t _pad1884[0x4]; // 0x1884
            source2sdk::server::CountdownTimer ctStunTimer; // 0x1888            
            float m_flDamageTaken; // 0x18a0            
            uint8_t _pad18a4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Elder_Titan_EchoStomp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Elder_Titan_EchoStomp) == 0x18a8);
    };
};
