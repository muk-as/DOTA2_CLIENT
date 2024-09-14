#pragma once
#include "source2sdk/animgraphlib/ChainToSolveData_t.hpp"
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
    // Standard-layout class: true
    // Size: 0x20
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct SolveIKChainPoseOpFixedSettings_t
    {
    public:
        // m_ChainsToSolveData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<animgraphlib::ChainToSolveData_t> m_ChainsToSolveData;
        char m_ChainsToSolveData[0x18]; // 0x0        
        bool m_bMatchTargetOrientation; // 0x18        
        [[maybe_unused]] std::uint8_t pad_0x19[0x7];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(SolveIKChainPoseOpFixedSettings_t, m_ChainsToSolveData) == 0x0);
    static_assert(offsetof(SolveIKChainPoseOpFixedSettings_t, m_bMatchTargetOrientation) == 0x18);
    
    static_assert(sizeof(SolveIKChainPoseOpFixedSettings_t) == 0x20);
};
