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
        // Has Trivial Constructor
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct DotaModifierPathNode_t
        {
        public:
            Vector m_vPosition; // 0x0            
            float m_flRadius; // 0xc            
            float m_flDistToNext; // 0x10            
            std::int32_t m_nMoveSpeedType; // 0x14            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::DotaModifierPathNode_t, m_vPosition) == 0x0);
        static_assert(offsetof(source2sdk::client::DotaModifierPathNode_t, m_flRadius) == 0xc);
        static_assert(offsetof(source2sdk::client::DotaModifierPathNode_t, m_flDistToNext) == 0x10);
        static_assert(offsetof(source2sdk::client::DotaModifierPathNode_t, m_nMoveSpeedType) == 0x14);
        
        static_assert(sizeof(source2sdk::client::DotaModifierPathNode_t) == 0x18);
    };
};
