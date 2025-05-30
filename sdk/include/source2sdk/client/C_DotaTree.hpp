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
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x30
        // Has VTable
        // Is Abstract
        #pragma pack(push, 1)
        class C_DotaTree
        {
        public:
            uint8_t _pad0000[0x2c]; // 0x0
            std::uint32_t m_unOccluderID; // 0x2c            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::C_DotaTree, m_unOccluderID) == 0x2c);
        
        static_assert(sizeof(source2sdk::client::C_DotaTree) == 0x30);
    };
};
