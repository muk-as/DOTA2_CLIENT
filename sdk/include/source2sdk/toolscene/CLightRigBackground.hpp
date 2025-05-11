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
        // Registered alignment: 0x1
        // Alignment: 0x1
        // Standard-layout class: true
        // Size: 0x5
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CLightRigBackground
        {
        public:
            bool m_bEnabled; // 0x0            
            Color m_Color; // 0x1            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::toolscene::CLightRigBackground, m_bEnabled) == 0x0);
        static_assert(offsetof(source2sdk::toolscene::CLightRigBackground, m_Color) == 0x1);
        
        static_assert(sizeof(source2sdk::toolscene::CLightRigBackground) == 0x5);
    };
};
