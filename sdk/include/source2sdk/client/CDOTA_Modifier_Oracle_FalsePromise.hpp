#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

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
        // Size: 0x18d8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Oracle_FalsePromise : public source2sdk::client::CDOTA_Buff
        {
        public:
            uint8_t _pad1888[0x30]; // 0x1888
            bool m_bWaitingForInvulnerability; // 0x18b8            
            bool m_bDisableHealing; // 0x18b9            
            uint8_t _pad18ba[0x2]; // 0x18ba
            float m_flHealthOnCreated; // 0x18bc            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x18c0            
            source2sdk::client::ParticleIndex_t m_nFXIndexB; // 0x18c4            
            float m_flRunningDmg; // 0x18c8            
            float m_flRunningHealth; // 0x18cc            
            std::int32_t bonus_armor; // 0x18d0            
            uint8_t _pad18d4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Oracle_FalsePromise because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Oracle_FalsePromise) == 0x18d8);
    };
};
