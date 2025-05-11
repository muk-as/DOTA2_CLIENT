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
        // Size: 0x1830
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Rubick_Telekinesis : public source2sdk::client::CDOTA_Buff
        {
        public:
            source2sdk::entity2::GameTime_t m_fStartTime; // 0x17f8            
            source2sdk::entity2::GameTime_t m_fEndTime; // 0x17fc            
            float m_fTargetHeight; // 0x1800            
            float m_fCurHeight; // 0x1804            
            Vector m_vStartLoc; // 0x1808            
            Vector m_vCurLoc; // 0x1814            
            std::int32_t max_land_distance; // 0x1820            
            float fall_duration; // 0x1824            
            bool m_bOverrideDuration; // 0x1828            
            uint8_t _pad1829[0x3]; // 0x1829
            float m_flOverrideDuration; // 0x182c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Rubick_Telekinesis because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Rubick_Telekinesis) == 0x1830);
    };
};
