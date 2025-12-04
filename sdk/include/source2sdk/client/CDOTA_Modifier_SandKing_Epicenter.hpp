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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_SandKing_Epicenter : public source2sdk::client::CDOTA_Buff
        {
        public:
            float epicenter_radius_base; // 0x_            
            float epicenter_radius_increment; // 0x_            
            std::int32_t epicenter_pulses; // 0x_            
            float epicenter_radius[30]; // 0x_            
            std::int32_t m_iMaxPulses; // 0x_            
            std::int32_t m_iPulseCount; // 0x_            
            float m_flPulseTickRate; // 0x_            
            float spine_tick_rate; // 0x_            
            source2sdk::entity2::GameTime_t m_flLastDamageTime; // 0x_            
            source2sdk::entity2::GameTime_t m_flLastSpineTime; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_SandKing_Epicenter because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_SandKing_Epicenter) == 0x_);
    };
};
