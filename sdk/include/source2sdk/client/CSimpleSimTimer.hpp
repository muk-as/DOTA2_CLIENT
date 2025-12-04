#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"

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
        class CSimpleSimTimer
        {
        public:
            source2sdk::entity2::GameTime_t m_flNext; // 0x_            
            WorldGroupId_t m_nWorldGroupId; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CSimpleSimTimer, m_flNext) == 0x_);
        static_assert(offsetof(source2sdk::client::CSimpleSimTimer, m_nWorldGroupId) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CSimpleSimTimer) == 0x_);
    };
};
