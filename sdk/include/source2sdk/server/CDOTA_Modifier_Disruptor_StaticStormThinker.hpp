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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Disruptor_StaticStormThinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t m_nCurrentPulse; // 0x_            
            float radius; // 0x_            
            std::int32_t damage_max; // 0x_            
            std::int32_t pulses; // 0x_            
            float duration; // 0x_            
            bool m_bHasGrantedThreeHeroKillEater; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Disruptor_StaticStormThinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Disruptor_StaticStormThinker) == 0x_);
    };
};
