#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animationsystem/AnimParamType_t.hpp"

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
        // Size: 0x2
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAnimParamHandle
        {
        public:
            source2sdk::animationsystem::AnimParamType_t m_type; // 0x0            
            std::uint8_t m_index; // 0x1            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::CAnimParamHandle, m_type) == 0x0);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimParamHandle, m_index) == 0x1);
        
        static_assert(sizeof(source2sdk::animgraphlib::CAnimParamHandle) == 0x2);
    };
};
