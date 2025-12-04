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
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has VTable
        // Is Abstract
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CMotionMetricEvaluator
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // m_means has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_means;
            char m_means[0x_]; // 0x_            
            // m_standardDeviations has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_standardDeviations;
            char m_standardDeviations[0x_]; // 0x_            
            float m_flWeight; // 0x_            
            std::int32_t m_nDimensionStartIndex; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::CMotionMetricEvaluator, m_means) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CMotionMetricEvaluator, m_standardDeviations) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CMotionMetricEvaluator, m_flWeight) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CMotionMetricEvaluator, m_nDimensionStartIndex) == 0x_);
        
        static_assert(sizeof(source2sdk::animgraphlib::CMotionMetricEvaluator) == 0x_);
    };
};
