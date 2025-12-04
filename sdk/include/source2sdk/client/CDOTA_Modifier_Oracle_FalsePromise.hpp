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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Oracle_FalsePromise : public source2sdk::client::CDOTA_Buff
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            bool m_bWaitingForInvulnerability; // 0x_            
            bool m_bDisableHealing; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flHealthOnCreated; // 0x_            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x_            
            source2sdk::client::ParticleIndex_t m_nFXIndexB; // 0x_            
            float m_flRunningDmg; // 0x_            
            float m_flRunningHealth; // 0x_            
            std::int32_t bonus_armor; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Oracle_FalsePromise because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Oracle_FalsePromise) == 0x_);
    };
};
