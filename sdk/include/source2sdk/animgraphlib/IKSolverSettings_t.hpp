#pragma once
#include "source2sdk/animgraphlib/EIKEndEffectorRotationFixUpMode.hpp"
#include "source2sdk/animgraphlib/IKSolverType.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0xc
    // Has Trivial Destructor
    #pragma pack(push, 1)
    struct IKSolverSettings_t
    {
    public:
        // metadata: MPropertyFriendlyName "Solver Type"
        // metadata: MPropertyAttrChangeCallback
        animgraphlib::IKSolverType m_SolverType; // 0x0        
        // metadata: MPropertyFriendlyName "Num Iterations "
        // metadata: MPropertyAttrStateCallback
        int32_t m_nNumIterations; // 0x4        
        // metadata: MPropertyFriendlyName "End Effector Rotation Behaviour"
        animgraphlib::EIKEndEffectorRotationFixUpMode m_EndEffectorRotationFixUpMode; // 0x8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(IKSolverSettings_t, m_SolverType) == 0x0);
    static_assert(offsetof(IKSolverSettings_t, m_nNumIterations) == 0x4);
    static_assert(offsetof(IKSolverSettings_t, m_EndEffectorRotationFixUpMode) == 0x8);
    
    static_assert(sizeof(IKSolverSettings_t) == 0xc);
};
