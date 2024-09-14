#pragma once
#include "source2sdk/animgraphlib/IKSolverSettings_t.hpp"
#include "source2sdk/animgraphlib/IKTargetSettings_t.hpp"
#include "source2sdk/animgraphlib/SolveIKChainAnimNodeDebugSetting.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
    // Registered alignment: 0x10
    // Alignment: 0x10
    // Standard-layout class: true
    // Size: 0x50
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct ChainToSolveData_t
    {
    public:
        int32_t m_nChainIndex; // 0x0        
        animgraphlib::IKSolverSettings_t m_SolverSettings; // 0x4        
        [[maybe_unused]] std::uint8_t pad_0x0c[0x4]; // 0xc
        animgraphlib::IKTargetSettings_t m_TargetSettings; // 0x10        
        animgraphlib::SolveIKChainAnimNodeDebugSetting m_DebugSetting; // 0x38        
        float m_flDebugNormalizedValue; // 0x3c        
        VectorAligned m_vDebugOffset; // 0x40        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(ChainToSolveData_t, m_nChainIndex) == 0x0);
    static_assert(offsetof(ChainToSolveData_t, m_SolverSettings) == 0x4);
    static_assert(offsetof(ChainToSolveData_t, m_TargetSettings) == 0x10);
    static_assert(offsetof(ChainToSolveData_t, m_DebugSetting) == 0x38);
    static_assert(offsetof(ChainToSolveData_t, m_flDebugNormalizedValue) == 0x3c);
    static_assert(offsetof(ChainToSolveData_t, m_vDebugOffset) == 0x40);
    
    static_assert(sizeof(ChainToSolveData_t) == 0x50);
};
