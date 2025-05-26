#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

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
        // Size: 0x18c8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Oracle_FalsePromise : public source2sdk::client::CDOTA_Buff
        {
        public:
            uint8_t _pad1878[0x30]; // 0x1878
            bool m_bWaitingForInvulnerability; // 0x18a8            
            bool m_bDisableHealing; // 0x18a9            
            uint8_t _pad18aa[0x2]; // 0x18aa
            float m_flHealthOnCreated; // 0x18ac            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x18b0            
            source2sdk::client::ParticleIndex_t m_nFXIndexB; // 0x18b4            
            float m_flRunningDmg; // 0x18b8            
            float m_flRunningHealth; // 0x18bc            
            std::int32_t bonus_armor; // 0x18c0            
            uint8_t _pad18c4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Oracle_FalsePromise because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Oracle_FalsePromise) == 0x18c8);
    };
};
