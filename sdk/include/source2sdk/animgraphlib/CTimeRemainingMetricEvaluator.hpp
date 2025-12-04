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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CTimeRemainingMetricEvaluator : public source2sdk::animgraphlib::CMotionMetricEvaluator
        {
        public:
            bool m_bMatchByTimeRemaining; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flMaxTimeRemaining; // 0x_            
            bool m_bFilterByTimeRemaining; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flMinTimeRemaining; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTimeRemainingMetricEvaluator because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CTimeRemainingMetricEvaluator) == 0x_);
    };
};
