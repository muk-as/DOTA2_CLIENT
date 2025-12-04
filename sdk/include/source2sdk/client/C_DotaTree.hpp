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
        // Has VTable
        // Is Abstract
        #pragma pack(push, 1)
        class C_DotaTree
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            std::uint32_t m_unOccluderID; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::C_DotaTree, m_unOccluderID) == 0x_);
        
        static_assert(sizeof(source2sdk::client::C_DotaTree) == 0x_);
    };
};
