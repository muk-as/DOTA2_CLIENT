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
        class CDOTA_Modifier_Rubick_Telekinesis : public source2sdk::client::CDOTA_Buff
        {
        public:
            source2sdk::entity2::GameTime_t m_fStartTime; // 0x_            
            source2sdk::entity2::GameTime_t m_fEndTime; // 0x_            
            float m_fTargetHeight; // 0x_            
            float m_fCurHeight; // 0x_            
            Vector m_vStartLoc; // 0x_            
            Vector m_vCurLoc; // 0x_            
            std::int32_t max_land_distance; // 0x_            
            float fall_duration; // 0x_            
            bool m_bOverrideDuration; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flOverrideDuration; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Rubick_Telekinesis because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Rubick_Telekinesis) == 0x_);
    };
};
