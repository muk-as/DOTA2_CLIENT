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
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct RagdollCreationParams_t
        {
        public:
            Vector m_vForce; // 0x_            
            std::int32_t m_nForceBone; // 0x_            
            bool m_bForceCurrentWorldTransform; // 0x_            
            bool m_bUseLRURetirement; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_nHealthToGrant; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::RagdollCreationParams_t, m_vForce) == 0x_);
        static_assert(offsetof(source2sdk::client::RagdollCreationParams_t, m_nForceBone) == 0x_);
        static_assert(offsetof(source2sdk::client::RagdollCreationParams_t, m_bForceCurrentWorldTransform) == 0x_);
        static_assert(offsetof(source2sdk::client::RagdollCreationParams_t, m_bUseLRURetirement) == 0x_);
        static_assert(offsetof(source2sdk::client::RagdollCreationParams_t, m_nHealthToGrant) == 0x_);
        
        static_assert(sizeof(source2sdk::client::RagdollCreationParams_t) == 0x_);
    };
};
