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
        // Size: 0x18
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct RagdollCreationParams_t
        {
        public:
            Vector m_vForce; // 0x0            
            std::int32_t m_nForceBone; // 0xc            
            bool m_bForceCurrentWorldTransform; // 0x10            
            bool m_bUseLRURetirement; // 0x11            
            uint8_t _pad0012[0x2]; // 0x12
            std::int32_t m_nHealthToGrant; // 0x14            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::RagdollCreationParams_t, m_vForce) == 0x0);
        static_assert(offsetof(source2sdk::client::RagdollCreationParams_t, m_nForceBone) == 0xc);
        static_assert(offsetof(source2sdk::client::RagdollCreationParams_t, m_bForceCurrentWorldTransform) == 0x10);
        static_assert(offsetof(source2sdk::client::RagdollCreationParams_t, m_bUseLRURetirement) == 0x11);
        static_assert(offsetof(source2sdk::client::RagdollCreationParams_t, m_nHealthToGrant) == 0x14);
        
        static_assert(sizeof(source2sdk::client::RagdollCreationParams_t) == 0x18);
    };
};
