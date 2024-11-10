#pragma once
#include "source2sdk/animgraphlib/AnimValueSource.hpp"
#include "source2sdk/animgraphlib/CAnimInputDamping.hpp"
#include "source2sdk/animgraphlib/CAnimParamHandle.hpp"
#include "source2sdk/animgraphlib/CUnaryUpdateNode.hpp"
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
    // Size: 0xa0
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class COrientationWarpUpdateNode : public animgraphlib::CUnaryUpdateNode
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x68[0x4]; // 0x68
        animgraphlib::AnimValueSource m_eTarget; // 0x6c        
        animgraphlib::CAnimParamHandle m_hTargetParam; // 0x70        
        animgraphlib::CAnimParamHandle m_hTargetPositionParam; // 0x72        
        float m_flTargetOffset; // 0x74        
        animgraphlib::CAnimInputDamping m_damping; // 0x78        
        float m_flSmoothDampingDuration; // 0x88        
        bool m_bAddRootMotionIfNeeded; // 0x8c        
        [[maybe_unused]] std::uint8_t pad_0x8d[0x3]; // 0x8d
        float m_flMaxRootMotionScale; // 0x90        
        bool m_bEnablePreferredRotationDirection; // 0x94        
        [[maybe_unused]] std::uint8_t pad_0x95[0x3]; // 0x95
        animgraphlib::AnimValueSource m_ePreferredRotationDirection; // 0x98        
        float m_flPreferredRotationThreshold; // 0x9c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in COrientationWarpUpdateNode because it is not a standard-layout class
    static_assert(sizeof(COrientationWarpUpdateNode) == 0xa0);
};
