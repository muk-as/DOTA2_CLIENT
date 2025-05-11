#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CSurvivorsPowerUp_AreaAttack_Circle.hpp"

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
        // Standard-layout class: false
        // Size: 0x818
        // Has VTable
        #pragma pack(push, 1)
        class CSurvivorsPowerUp_CounterHelix : public source2sdk::client::CSurvivorsPowerUp_AreaAttack_Circle
        {
        public:
            uint8_t _pad0800[0x8]; // 0x800
            float m_flChanceToCounter; // 0x808            
            float m_flDelayBetweenCounters; // 0x80c            
            uint8_t _pad0810[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSurvivorsPowerUp_CounterHelix because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CSurvivorsPowerUp_CounterHelix) == 0x818);
    };
};
