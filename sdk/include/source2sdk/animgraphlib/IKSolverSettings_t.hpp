#pragma once
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
    // Size: 0x8
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
    };
    #pragma pack(pop)
    
    static_assert(offsetof(IKSolverSettings_t, m_SolverType) == 0x0);
    static_assert(offsetof(IKSolverSettings_t, m_nNumIterations) == 0x4);
    
    static_assert(sizeof(IKSolverSettings_t) == 0x8);
};
