#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/MotionIndex.hpp"

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
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CMotionGraphConfig
        {
        public:
            float m_paramValues[4]; // 0x_            
            float m_flDuration; // 0x_            
            source2sdk::animgraphlib::MotionIndex m_nMotionIndex; // 0x_            
            std::int32_t m_nSampleStart; // 0x_            
            std::int32_t m_nSampleCount; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::CMotionGraphConfig, m_paramValues) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CMotionGraphConfig, m_flDuration) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CMotionGraphConfig, m_nMotionIndex) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CMotionGraphConfig, m_nSampleStart) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CMotionGraphConfig, m_nSampleCount) == 0x_);
        
        static_assert(sizeof(source2sdk::animgraphlib::CMotionGraphConfig) == 0x_);
    };
};
