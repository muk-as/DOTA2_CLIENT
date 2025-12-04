#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: tier2
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace tier2
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        // 
        // static metadata: MPropertyCustomEditor "multi_int(2)"
        #pragma pack(push, 1)
        class CRangeInt
        {
        public:
            std::int32_t m_pValue[2]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::tier2::CRangeInt, m_pValue) == 0x_);
        
        static_assert(sizeof(source2sdk::tier2::CRangeInt) == 0x_);
    };
};
