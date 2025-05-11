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
        // Size: 0x1848
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Oracle_FalsePromise : public source2sdk::client::CDOTA_Buff
        {
        public:
            uint8_t _pad17f8[0x30]; // 0x17f8
            bool m_bWaitingForInvulnerability; // 0x1828            
            bool m_bDisableHealing; // 0x1829            
            uint8_t _pad182a[0x2]; // 0x182a
            float m_flHealthOnCreated; // 0x182c            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1830            
            source2sdk::client::ParticleIndex_t m_nFXIndexB; // 0x1834            
            float m_flRunningDmg; // 0x1838            
            float m_flRunningHealth; // 0x183c            
            std::int32_t bonus_armor; // 0x1840            
            uint8_t _pad1844[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Oracle_FalsePromise because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Oracle_FalsePromise) == 0x1848);
    };
};
