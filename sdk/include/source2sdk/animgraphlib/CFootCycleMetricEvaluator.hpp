#pragma once
#include "source2sdk/animgraphlib/CMotionMetricEvaluator.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
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
    class CFootCycleMetricEvaluator : public animgraphlib::CMotionMetricEvaluator
    {
    public:
        // m_footIndices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int32_t> m_footIndices;
        char m_footIndices[0x18]; // 0x50        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CFootCycleMetricEvaluator because it is not a standard-layout class
    static_assert(sizeof(CFootCycleMetricEvaluator) == 0x68);
};
