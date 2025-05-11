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
        class CBonePositionMetricEvaluator : public source2sdk::animgraphlib::CMotionMetricEvaluator
        {
        public:
            std::int32_t m_nBoneIndex; // 0x50            
            uint8_t _pad0054[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBonePositionMetricEvaluator because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CBonePositionMetricEvaluator) == 0x58);
    };
};
