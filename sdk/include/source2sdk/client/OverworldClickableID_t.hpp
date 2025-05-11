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
        // Alignment: 0x2
        // Standard-layout class: true
        // Size: 0x2
        // Has Trivial Destructor
        // 
        // static metadata: MIsBoxedIntegerType
        #pragma pack(push, 1)
        struct OverworldClickableID_t
        {
        public:
            std::uint16_t m_Value; // 0x0            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::OverworldClickableID_t, m_Value) == 0x0);
        
        static_assert(sizeof(source2sdk::client::OverworldClickableID_t) == 0x2);
    };
};
