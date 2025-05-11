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
        // Size: 0x78
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
            char m_pathTimeSamples[0x18]; // 0x50            
            float m_flDistance; // 0x68            
            bool m_bExtrapolateMovement; // 0x6c            
            uint8_t _pad006d[0x3]; // 0x6d
            float m_flMinExtrapolationSpeed; // 0x70            
            uint8_t _pad0074[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPathMetricEvaluator because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CPathMetricEvaluator) == 0x78);
    };
};
