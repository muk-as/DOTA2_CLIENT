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
        // Size: 0x68
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CFootCycleMetricEvaluator : public source2sdk::animgraphlib::CMotionMetricEvaluator
        {
        public:
            // m_footIndices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_footIndices;
            char m_footIndices[0x18]; // 0x50            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFootCycleMetricEvaluator because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CFootCycleMetricEvaluator) == 0x68);
    };
};
