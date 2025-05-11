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
        // Size: 0x1838
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Drow_Ranger_Multishot : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t m_iArrowCount; // 0x17f8            
            Vector m_vOriginalTarget; // 0x17fc            
            std::int32_t arrow_width; // 0x1808            
            float arrow_speed; // 0x180c            
            float arrow_range_multiplier; // 0x1810            
            std::int32_t wave_count; // 0x1814            
            std::int32_t arrow_count_per_wave; // 0x1818            
            std::int32_t arrow_angle; // 0x181c            
            std::int32_t m_iLoopCount; // 0x1820            
            float m_flInterval; // 0x1824            
            float m_flCycleDelay; // 0x1828            
            float m_flTimeWaste; // 0x182c            
            source2sdk::entity2::GameTime_t m_flExpectedTime; // 0x1830            
            uint8_t _pad1834[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Drow_Ranger_Multishot because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Drow_Ranger_Multishot) == 0x1838);
    };
};
