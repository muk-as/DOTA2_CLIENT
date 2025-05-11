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
        // Has Trivial Destructor
        #pragma pack(push, 1)
        class CPhysicsShake
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            Vector m_force; // 0x8            
            uint8_t _pad0014[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CPhysicsShake, m_force) == 0x8);
        
        static_assert(sizeof(source2sdk::server::CPhysicsShake) == 0x18);
    };
};
