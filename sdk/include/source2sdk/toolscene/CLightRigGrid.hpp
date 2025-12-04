#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: toolscene
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace toolscene
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
        class CLightRigGrid
        {
        public:
            bool m_bEnabled; // 0x_            
            Color m_Color; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::toolscene::CLightRigGrid, m_bEnabled) == 0x_);
        static_assert(offsetof(source2sdk::toolscene::CLightRigGrid, m_Color) == 0x_);
        
        static_assert(sizeof(source2sdk::toolscene::CLightRigGrid) == 0x_);
    };
};
