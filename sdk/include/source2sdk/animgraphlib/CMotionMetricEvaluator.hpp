#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
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
            uint8_t _pad0000[0x18]; // 0x0
            // m_means has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_means;
            char m_means[0x18]; // 0x18            
            // m_standardDeviations has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_standardDeviations;
            char m_standardDeviations[0x18]; // 0x30            
            float m_flWeight; // 0x48            
            std::int32_t m_nDimensionStartIndex; // 0x4c            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::CMotionMetricEvaluator, m_means) == 0x18);
        static_assert(offsetof(source2sdk::animgraphlib::CMotionMetricEvaluator, m_standardDeviations) == 0x30);
        static_assert(offsetof(source2sdk::animgraphlib::CMotionMetricEvaluator, m_flWeight) == 0x48);
        static_assert(offsetof(source2sdk::animgraphlib::CMotionMetricEvaluator, m_nDimensionStartIndex) == 0x4c);
        
        static_assert(sizeof(source2sdk::animgraphlib::CMotionMetricEvaluator) == 0x50);
    };
};
