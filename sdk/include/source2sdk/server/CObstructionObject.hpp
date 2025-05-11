#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x18
        // Has VTable
        // Is Abstract
        // Has Trivial Destructor
        #pragma pack(push, 1)
        class CObstructionObject
        {
        public:
            uint8_t _pad0000[0x10]; // 0x0
            std::int32_t m_nObstructionProperties; // 0x10            
            uint8_t _pad0014[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CObstructionObject, m_nObstructionProperties) == 0x10);
        
        static_assert(sizeof(source2sdk::server::CObstructionObject) == 0x18);
    };
};
