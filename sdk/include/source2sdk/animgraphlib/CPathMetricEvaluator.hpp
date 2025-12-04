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
        class CPathMetricEvaluator : public source2sdk::animgraphlib::CMotionMetricEvaluator
        {
        public:
            // m_pathTimeSamples has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_pathTimeSamples;
            char m_pathTimeSamples[0x_]; // 0x_            
            float m_flDistance; // 0x_            
            bool m_bExtrapolateMovement; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flMinExtrapolationSpeed; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPathMetricEvaluator because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CPathMetricEvaluator) == 0x_);
    };
};
