#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/CountdownTimer.hpp"

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
        // Size: 0x1828
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Elder_Titan_EchoStomp : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t wake_damage_limit; // 0x17f8            
            float animation_rate; // 0x17fc            
            float initial_stun_duration; // 0x1800            
            uint8_t _pad1804[0x4]; // 0x1804
            source2sdk::client::CountdownTimer ctStunTimer; // 0x1808            
            float m_flDamageTaken; // 0x1820            
            uint8_t _pad1824[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Elder_Titan_EchoStomp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Elder_Titan_EchoStomp) == 0x1828);
    };
};
