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
        class CDOTA_Modifier_Drow_Ranger_Multishot : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t m_iArrowCount; // 0x_            
            Vector m_vOriginalTarget; // 0x_            
            std::int32_t arrow_width; // 0x_            
            float arrow_speed; // 0x_            
            float arrow_range_multiplier; // 0x_            
            std::int32_t wave_count; // 0x_            
            std::int32_t arrow_count_per_wave; // 0x_            
            std::int32_t arrow_angle; // 0x_            
            std::int32_t m_iLoopCount; // 0x_            
            float m_flInterval; // 0x_            
            float m_flCycleDelay; // 0x_            
            float m_flTimeWaste; // 0x_            
            source2sdk::entity2::GameTime_t m_flExpectedTime; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Drow_Ranger_Multishot because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Drow_Ranger_Multishot) == 0x_);
    };
};
