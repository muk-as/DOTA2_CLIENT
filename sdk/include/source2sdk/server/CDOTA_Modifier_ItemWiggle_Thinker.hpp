#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        class CDOTA_Modifier_ItemWiggle_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            Vector m_vOriginalPosition; // 0x_            
            float m_flOriginalScale; // 0x_            
            source2sdk::entity2::GameTime_t m_flLastChangeTime; // 0x_            
            Vector m_vLastChangePosition; // 0x_            
            float m_flLastChangeScale; // 0x_            
            Vector m_vTargetPosition; // 0x_            
            float m_flTargetScale; // 0x_            
            bool m_bFirstThink; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flStartAmplitude; // 0x_            
            float m_flEndAmplitude; // 0x_            
            float m_flScaleAmplitude; // 0x_            
            float m_flStartFrequency; // 0x_            
            float m_flEndFrequency; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_ItemWiggle_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_ItemWiggle_Thinker) == 0x_);
    };
};
