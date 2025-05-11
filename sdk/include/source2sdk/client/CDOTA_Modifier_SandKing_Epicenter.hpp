#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0x18a0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_SandKing_Epicenter : public source2sdk::client::CDOTA_Buff
        {
        public:
            float epicenter_radius_base; // 0x17f8            
            float epicenter_radius_increment; // 0x17fc            
            std::int32_t epicenter_pulses; // 0x1800            
            float epicenter_radius[30]; // 0x1804            
            std::int32_t m_iMaxPulses; // 0x187c            
            std::int32_t m_iPulseCount; // 0x1880            
            float m_flPulseTickRate; // 0x1884            
            float spine_tick_rate; // 0x1888            
            source2sdk::entity2::GameTime_t m_flLastDamageTime; // 0x188c            
            source2sdk::entity2::GameTime_t m_flLastSpineTime; // 0x1890            
            uint8_t _pad1894[0xc];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_SandKing_Epicenter because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_SandKing_Epicenter) == 0x18a0);
    };
};
