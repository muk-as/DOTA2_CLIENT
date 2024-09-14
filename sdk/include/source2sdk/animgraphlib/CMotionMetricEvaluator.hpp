#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x50
    // Has VTable
    // Is Abstract
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CMotionMetricEvaluator
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x18]; // 0x0
        // m_means has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<float> m_means;
        char m_means[0x18]; // 0x18        
        // m_standardDeviations has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<float> m_standardDeviations;
        char m_standardDeviations[0x18]; // 0x30        
        float m_flWeight; // 0x48        
        int32_t m_nDimensionStartIndex; // 0x4c        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CMotionMetricEvaluator, m_means) == 0x18);
    static_assert(offsetof(CMotionMetricEvaluator, m_standardDeviations) == 0x30);
    static_assert(offsetof(CMotionMetricEvaluator, m_flWeight) == 0x48);
    static_assert(offsetof(CMotionMetricEvaluator, m_nDimensionStartIndex) == 0x4c);
    
    static_assert(sizeof(CMotionMetricEvaluator) == 0x50);
};
