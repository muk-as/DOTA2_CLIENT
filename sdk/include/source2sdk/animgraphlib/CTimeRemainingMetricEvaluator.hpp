#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/CMotionMetricEvaluator.hpp"

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x60
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CTimeRemainingMetricEvaluator : public source2sdk::animgraphlib::CMotionMetricEvaluator
        {
        public:
            bool m_bMatchByTimeRemaining; // 0x50            
            uint8_t _pad0051[0x3]; // 0x51
            float m_flMaxTimeRemaining; // 0x54            
            bool m_bFilterByTimeRemaining; // 0x58            
            uint8_t _pad0059[0x3]; // 0x59
            float m_flMinTimeRemaining; // 0x5c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTimeRemainingMetricEvaluator because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CTimeRemainingMetricEvaluator) == 0x60);
    };
};
