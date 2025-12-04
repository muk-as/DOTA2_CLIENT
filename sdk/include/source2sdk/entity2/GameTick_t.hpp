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
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        // 
        // static metadata: MIsBoxedIntegerType
        #pragma pack(push, 1)
        struct GameTick_t
        {
        public:
            std::int32_t m_Value; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::entity2::GameTick_t, m_Value) == 0x_);
        
        static_assert(sizeof(source2sdk::entity2::GameTick_t) == 0x_);
    };
};
