#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        // Size: 0x4
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class MotionDBIndex
        {
        public:
            std::uint32_t m_nIndex; // 0x0            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::MotionDBIndex, m_nIndex) == 0x0);
        
        static_assert(sizeof(source2sdk::animgraphlib::MotionDBIndex) == 0x4);
    };
};
