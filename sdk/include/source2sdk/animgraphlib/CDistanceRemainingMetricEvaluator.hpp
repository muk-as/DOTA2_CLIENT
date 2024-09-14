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
    class CDistanceRemainingMetricEvaluator : public animgraphlib::CMotionMetricEvaluator
    {
    public:
        float m_flMaxDistance; // 0x50        
        float m_flMinDistance; // 0x54        
        float m_flStartGoalFilterDistance; // 0x58        
        float m_flMaxGoalOvershootScale; // 0x5c        
        bool m_bFilterFixedMinDistance; // 0x60        
        bool m_bFilterGoalDistance; // 0x61        
        bool m_bFilterGoalOvershoot; // 0x62        
        [[maybe_unused]] std::uint8_t pad_0x63[0x5];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDistanceRemainingMetricEvaluator because it is not a standard-layout class
    static_assert(sizeof(CDistanceRemainingMetricEvaluator) == 0x68);
};
