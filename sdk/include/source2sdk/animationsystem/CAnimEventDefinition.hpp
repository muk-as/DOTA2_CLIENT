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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAnimEventDefinition
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_nFrame; // 0x_            
            std::int32_t m_nEndFrame; // 0x_            
            float m_flCycle; // 0x_            
            float m_flDuration; // 0x_            
            KeyValues3 m_EventData; // 0x_            
            // metadata: MKV3TransferName "m_sOptions"
            CBufferString m_sLegacyOptions; // 0x_            
            CGlobalSymbol m_sEventName; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animationsystem::CAnimEventDefinition, m_nFrame) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CAnimEventDefinition, m_nEndFrame) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CAnimEventDefinition, m_flCycle) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CAnimEventDefinition, m_flDuration) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CAnimEventDefinition, m_EventData) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CAnimEventDefinition, m_sLegacyOptions) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CAnimEventDefinition, m_sEventName) == 0x_);
        
        static_assert(sizeof(source2sdk::animationsystem::CAnimEventDefinition) == 0x_);
    };
};
