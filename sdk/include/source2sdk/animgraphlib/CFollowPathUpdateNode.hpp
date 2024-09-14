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
    // Size: 0xa8
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CFollowPathUpdateNode : public animgraphlib::CUnaryUpdateNode
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x68[0x4]; // 0x68
        float m_flBlendOutTime; // 0x6c        
        bool m_bBlockNonPathMovement; // 0x70        
        bool m_bStopFeetAtGoal; // 0x71        
        bool m_bScaleSpeed; // 0x72        
        [[maybe_unused]] std::uint8_t pad_0x73[0x1]; // 0x73
        float m_flScale; // 0x74        
        float m_flMinAngle; // 0x78        
        float m_flMaxAngle; // 0x7c        
        float m_flSpeedScaleBlending; // 0x80        
        [[maybe_unused]] std::uint8_t pad_0x84[0x4]; // 0x84
        animgraphlib::CAnimInputDamping m_turnDamping; // 0x88        
        animgraphlib::AnimValueSource m_facingTarget; // 0x98        
        animgraphlib::CAnimParamHandle m_hParam; // 0x9c        
        [[maybe_unused]] std::uint8_t pad_0x9e[0x2]; // 0x9e
        float m_flTurnToFaceOffset; // 0xa0        
        bool m_bTurnToFace; // 0xa4        
        [[maybe_unused]] std::uint8_t pad_0xa5[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CFollowPathUpdateNode because it is not a standard-layout class
    static_assert(sizeof(CFollowPathUpdateNode) == 0xa8);
};
