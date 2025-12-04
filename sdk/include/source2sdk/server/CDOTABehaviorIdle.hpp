#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CountdownTimer.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTABehaviorIdle
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::server::CountdownTimer m_IdleRareAnimationTime; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CDOTABehaviorIdle, m_IdleRareAnimationTime) == 0x_);
        
        static_assert(sizeof(source2sdk::server::CDOTABehaviorIdle) == 0x_);
    };
};
