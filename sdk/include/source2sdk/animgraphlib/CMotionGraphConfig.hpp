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
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x20
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CMotionGraphConfig
        {
        public:
            float m_paramValues[4]; // 0x0            
            float m_flDuration; // 0x10            
            source2sdk::animgraphlib::MotionIndex m_nMotionIndex; // 0x14            
            std::int32_t m_nSampleStart; // 0x18            
            std::int32_t m_nSampleCount; // 0x1c            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::CMotionGraphConfig, m_paramValues) == 0x0);
        static_assert(offsetof(source2sdk::animgraphlib::CMotionGraphConfig, m_flDuration) == 0x10);
        static_assert(offsetof(source2sdk::animgraphlib::CMotionGraphConfig, m_nMotionIndex) == 0x14);
        static_assert(offsetof(source2sdk::animgraphlib::CMotionGraphConfig, m_nSampleStart) == 0x18);
        static_assert(offsetof(source2sdk::animgraphlib::CMotionGraphConfig, m_nSampleCount) == 0x1c);
        
        static_assert(sizeof(source2sdk::animgraphlib::CMotionGraphConfig) == 0x20);
    };
};
