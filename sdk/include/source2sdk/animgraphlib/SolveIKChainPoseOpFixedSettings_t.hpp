#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/ChainToSolveData_t.hpp"

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
        // Standard-layout class: true
        // Size: 0x18
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct SolveIKChainPoseOpFixedSettings_t
        {
        public:
            // m_ChainsToSolveData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animgraphlib::ChainToSolveData_t> m_ChainsToSolveData;
            char m_ChainsToSolveData[0x18]; // 0x0            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::SolveIKChainPoseOpFixedSettings_t, m_ChainsToSolveData) == 0x0);
        
        static_assert(sizeof(source2sdk::animgraphlib::SolveIKChainPoseOpFixedSettings_t) == 0x18);
    };
};
