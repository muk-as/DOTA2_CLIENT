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
    // Size: 0x60
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CTimeRemainingMetricEvaluator : public animgraphlib::CMotionMetricEvaluator
    {
    public:
        bool m_bMatchByTimeRemaining; // 0x50        
        [[maybe_unused]] std::uint8_t pad_0x51[0x3]; // 0x51
        float m_flMaxTimeRemaining; // 0x54        
        bool m_bFilterByTimeRemaining; // 0x58        
        [[maybe_unused]] std::uint8_t pad_0x59[0x3]; // 0x59
        float m_flMinTimeRemaining; // 0x5c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CTimeRemainingMetricEvaluator because it is not a standard-layout class
    static_assert(sizeof(CTimeRemainingMetricEvaluator) == 0x60);
};
