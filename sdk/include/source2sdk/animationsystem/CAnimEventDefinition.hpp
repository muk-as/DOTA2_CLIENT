#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animationsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animationsystem
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x40
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAnimEventDefinition
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            std::int32_t m_nFrame; // 0x8            
            std::int32_t m_nEndFrame; // 0xc            
            float m_flCycle; // 0x10            
            float m_flDuration; // 0x14            
            KeyValues3 m_EventData; // 0x18            
            // metadata: MKV3TransferName "m_sOptions"
            CBufferString m_sLegacyOptions; // 0x28            
            CGlobalSymbol m_sEventName; // 0x38            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animationsystem::CAnimEventDefinition, m_nFrame) == 0x8);
        static_assert(offsetof(source2sdk::animationsystem::CAnimEventDefinition, m_nEndFrame) == 0xc);
        static_assert(offsetof(source2sdk::animationsystem::CAnimEventDefinition, m_flCycle) == 0x10);
        static_assert(offsetof(source2sdk::animationsystem::CAnimEventDefinition, m_flDuration) == 0x14);
        static_assert(offsetof(source2sdk::animationsystem::CAnimEventDefinition, m_EventData) == 0x18);
        static_assert(offsetof(source2sdk::animationsystem::CAnimEventDefinition, m_sLegacyOptions) == 0x28);
        static_assert(offsetof(source2sdk::animationsystem::CAnimEventDefinition, m_sEventName) == 0x38);
        
        static_assert(sizeof(source2sdk::animationsystem::CAnimEventDefinition) == 0x40);
    };
};
