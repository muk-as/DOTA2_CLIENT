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
        // Size: 0x6f8
        // Has VTable
        #pragma pack(push, 1)
        class CSurvivorsPowerUp_LagunaBlade : public source2sdk::client::CSurvivorsPowerUp_InstantAttack
        {
        public:
            std::int32_t m_nEliteExtraHit; // 0x6f0            
            uint8_t _pad06f4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSurvivorsPowerUp_LagunaBlade because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CSurvivorsPowerUp_LagunaBlade) == 0x6f8);
    };
};
