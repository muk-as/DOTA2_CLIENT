#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

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
        // Size: 0x18a0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Disruptor_KineticFieldThinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            float radius; // 0x1878            
            float formation_time; // 0x187c            
            bool m_bActive; // 0x1880            
            uint8_t _pad1881[0x17]; // 0x1881
            std::int32_t m_nFXIndex; // 0x1898            
            uint8_t _pad189c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Disruptor_KineticFieldThinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Disruptor_KineticFieldThinker) == 0x18a0);
    };
};
