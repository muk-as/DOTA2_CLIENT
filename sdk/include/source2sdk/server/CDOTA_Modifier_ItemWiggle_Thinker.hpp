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
        // Size: 0x18d8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_ItemWiggle_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            Vector m_vOriginalPosition; // 0x1888            
            float m_flOriginalScale; // 0x1894            
            source2sdk::entity2::GameTime_t m_flLastChangeTime; // 0x1898            
            Vector m_vLastChangePosition; // 0x189c            
            float m_flLastChangeScale; // 0x18a8            
            Vector m_vTargetPosition; // 0x18ac            
            float m_flTargetScale; // 0x18b8            
            bool m_bFirstThink; // 0x18bc            
            uint8_t _pad18bd[0x3]; // 0x18bd
            float m_flStartAmplitude; // 0x18c0            
            float m_flEndAmplitude; // 0x18c4            
            float m_flScaleAmplitude; // 0x18c8            
            float m_flStartFrequency; // 0x18cc            
            float m_flEndFrequency; // 0x18d0            
            uint8_t _pad18d4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_ItemWiggle_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_ItemWiggle_Thinker) == 0x18d8);
    };
};
