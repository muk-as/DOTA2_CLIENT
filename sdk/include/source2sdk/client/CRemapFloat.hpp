#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        // 
        // static metadata: MPropertyCustomEditor "multi_float( 4 )"
        #pragma pack(push, 1)
        class CRemapFloat
        {
        public:
            float m_pValue[4]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CRemapFloat, m_pValue) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CRemapFloat) == 0x_);
    };
};
