#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CSurvivorsPowerUp_InstantAttack.hpp"

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
        // Size: 0x700
        // Has VTable
        #pragma pack(push, 1)
        class CSurvivorsPowerUp_Frostbite : public source2sdk::client::CSurvivorsPowerUp_InstantAttack
        {
        public:
            uint8_t _pad06f0[0x8]; // 0x6f0
            float m_flScepterExplodeRadius; // 0x6f8            
            uint8_t _pad06fc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSurvivorsPowerUp_Frostbite because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CSurvivorsPowerUp_Frostbite) == 0x700);
    };
};
