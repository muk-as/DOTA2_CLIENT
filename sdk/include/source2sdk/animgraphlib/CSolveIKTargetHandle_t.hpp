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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct CSolveIKTargetHandle_t
        {
        public:
            source2sdk::animgraphlib::CAnimParamHandle m_positionHandle; // 0x_            
            source2sdk::animgraphlib::CAnimParamHandle m_orientationHandle; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::CSolveIKTargetHandle_t, m_positionHandle) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CSolveIKTargetHandle_t, m_orientationHandle) == 0x_);
        
        static_assert(sizeof(source2sdk::animgraphlib::CSolveIKTargetHandle_t) == 0x_);
    };
};
