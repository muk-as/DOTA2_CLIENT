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
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x10
        #pragma pack(push, 1)
        class sSharedCooldownInfo
        {
        public:
            CUtlString cooldownName; // 0x0            
            float cooldownLength; // 0x8            
            source2sdk::entity2::GameTime_t cooldownTime; // 0xc            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::sSharedCooldownInfo, cooldownName) == 0x0);
        static_assert(offsetof(source2sdk::client::sSharedCooldownInfo, cooldownLength) == 0x8);
        static_assert(offsetof(source2sdk::client::sSharedCooldownInfo, cooldownTime) == 0xc);
        
        static_assert(sizeof(source2sdk::client::sSharedCooldownInfo) == 0x10);
    };
};
