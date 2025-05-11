#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: entity2
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace entity2
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x4
        // Has Trivial Destructor
        // 
        // static metadata: MIsBoxedFloatType
        #pragma pack(push, 1)
        struct GameTime_t
        {
        public:
            float m_Value; // 0x0            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::entity2::GameTime_t, m_Value) == 0x0);
        
        static_assert(sizeof(source2sdk::entity2::GameTime_t) == 0x4);
    };
};
