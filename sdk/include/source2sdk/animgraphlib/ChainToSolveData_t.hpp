#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/IKSolverSettings_t.hpp"
#include "source2sdk/animgraphlib/IKTargetSettings_t.hpp"
#include "source2sdk/animgraphlib/SolveIKChainAnimNodeDebugSetting.hpp"

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct ChainToSolveData_t
        {
        public:
            std::int32_t m_nChainIndex; // 0x_            
            source2sdk::animgraphlib::IKSolverSettings_t m_SolverSettings; // 0x_            
            source2sdk::animgraphlib::IKTargetSettings_t m_TargetSettings; // 0x_            
            source2sdk::animgraphlib::SolveIKChainAnimNodeDebugSetting m_DebugSetting; // 0x_            
            float m_flDebugNormalizedValue; // 0x_            
            VectorAligned m_vDebugOffset; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::ChainToSolveData_t, m_nChainIndex) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::ChainToSolveData_t, m_SolverSettings) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::ChainToSolveData_t, m_TargetSettings) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::ChainToSolveData_t, m_DebugSetting) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::ChainToSolveData_t, m_flDebugNormalizedValue) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::ChainToSolveData_t, m_vDebugOffset) == 0x_);
        
        static_assert(sizeof(source2sdk::animgraphlib::ChainToSolveData_t) == 0x_);
    };
};
