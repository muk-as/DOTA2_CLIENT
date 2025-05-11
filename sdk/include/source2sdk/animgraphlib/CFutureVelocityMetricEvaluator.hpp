#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/CMotionMetricEvaluator.hpp"
#include "source2sdk/animgraphlib/VelocityMetricMode.hpp"

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
        class CFutureVelocityMetricEvaluator : public source2sdk::animgraphlib::CMotionMetricEvaluator
        {
        public:
            float m_flDistance; // 0x50            
            float m_flStoppingDistance; // 0x54            
            float m_flTargetSpeed; // 0x58            
            source2sdk::animgraphlib::VelocityMetricMode m_eMode; // 0x5c            
            uint8_t _pad005d[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFutureVelocityMetricEvaluator because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CFutureVelocityMetricEvaluator) == 0x60);
    };
};
