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
        #pragma pack(push, 1)
        class sSharedCooldownInfo
        {
        public:
            CUtlString cooldownName; // 0x_            
            float cooldownLength; // 0x_            
            source2sdk::entity2::GameTime_t cooldownTime; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::sSharedCooldownInfo, cooldownName) == 0x_);
        static_assert(offsetof(source2sdk::client::sSharedCooldownInfo, cooldownLength) == 0x_);
        static_assert(offsetof(source2sdk::client::sSharedCooldownInfo, cooldownTime) == 0x_);
        
        static_assert(sizeof(source2sdk::client::sSharedCooldownInfo) == 0x_);
    };
};
