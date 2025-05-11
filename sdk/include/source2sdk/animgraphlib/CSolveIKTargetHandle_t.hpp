#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/CAnimParamHandle.hpp"

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
    {
        // Registered alignment: 0x1
        // Alignment: 0x1
        // Standard-layout class: true
        // Size: 0x4
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct CSolveIKTargetHandle_t
        {
        public:
            source2sdk::animgraphlib::CAnimParamHandle m_positionHandle; // 0x0            
            source2sdk::animgraphlib::CAnimParamHandle m_orientationHandle; // 0x2            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::CSolveIKTargetHandle_t, m_positionHandle) == 0x0);
        static_assert(offsetof(source2sdk::animgraphlib::CSolveIKTargetHandle_t, m_orientationHandle) == 0x2);
        
        static_assert(sizeof(source2sdk::animgraphlib::CSolveIKTargetHandle_t) == 0x4);
    };
};
