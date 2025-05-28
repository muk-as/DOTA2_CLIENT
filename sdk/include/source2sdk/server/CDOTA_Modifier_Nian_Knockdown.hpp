#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

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
        // Size: 0x1898
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Nian_Knockdown : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_flStandUpDuration; // 0x1888            
            float m_flKnockDownDuration; // 0x188c            
            bool m_bDebuff; // 0x1890            
            bool m_bStandingUp; // 0x1891            
            uint8_t _pad1892[0x6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Nian_Knockdown because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Nian_Knockdown) == 0x1898);
    };
};
