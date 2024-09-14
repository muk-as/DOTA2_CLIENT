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
    // Size: 0x58
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CBoneVelocityMetricEvaluator : public animgraphlib::CMotionMetricEvaluator
    {
    public:
        int32_t m_nBoneIndex; // 0x50        
        [[maybe_unused]] std::uint8_t pad_0x54[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBoneVelocityMetricEvaluator because it is not a standard-layout class
    static_assert(sizeof(CBoneVelocityMetricEvaluator) == 0x58);
};
