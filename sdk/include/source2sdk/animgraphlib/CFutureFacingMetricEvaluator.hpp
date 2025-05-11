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
        // Size: 0x58
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CFutureFacingMetricEvaluator : public source2sdk::animgraphlib::CMotionMetricEvaluator
        {
        public:
            float m_flDistance; // 0x50            
            float m_flTime; // 0x54            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFutureFacingMetricEvaluator because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CFutureFacingMetricEvaluator) == 0x58);
    };
};
