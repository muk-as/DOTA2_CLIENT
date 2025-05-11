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
        // Size: 0x1848
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_ItemWiggle_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            Vector m_vOriginalPosition; // 0x17f8            
            float m_flOriginalScale; // 0x1804            
            source2sdk::entity2::GameTime_t m_flLastChangeTime; // 0x1808            
            Vector m_vLastChangePosition; // 0x180c            
            float m_flLastChangeScale; // 0x1818            
            Vector m_vTargetPosition; // 0x181c            
            float m_flTargetScale; // 0x1828            
            bool m_bFirstThink; // 0x182c            
            uint8_t _pad182d[0x3]; // 0x182d
            float m_flStartAmplitude; // 0x1830            
            float m_flEndAmplitude; // 0x1834            
            float m_flScaleAmplitude; // 0x1838            
            float m_flStartFrequency; // 0x183c            
            float m_flEndFrequency; // 0x1840            
            uint8_t _pad1844[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_ItemWiggle_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_ItemWiggle_Thinker) == 0x1848);
    };
};
