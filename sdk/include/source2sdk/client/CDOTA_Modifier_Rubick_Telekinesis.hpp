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
        // Size: 0x18b0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Rubick_Telekinesis : public source2sdk::client::CDOTA_Buff
        {
        public:
            source2sdk::entity2::GameTime_t m_fStartTime; // 0x1878            
            source2sdk::entity2::GameTime_t m_fEndTime; // 0x187c            
            float m_fTargetHeight; // 0x1880            
            float m_fCurHeight; // 0x1884            
            Vector m_vStartLoc; // 0x1888            
            Vector m_vCurLoc; // 0x1894            
            std::int32_t max_land_distance; // 0x18a0            
            float fall_duration; // 0x18a4            
            bool m_bOverrideDuration; // 0x18a8            
            uint8_t _pad18a9[0x3]; // 0x18a9
            float m_flOverrideDuration; // 0x18ac            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Rubick_Telekinesis because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Rubick_Telekinesis) == 0x18b0);
    };
};
