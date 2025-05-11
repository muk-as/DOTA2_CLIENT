#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CSurvivorsPowerUp_ProjectileAttack.hpp"

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
        // Size: 0x738
        // Has VTable
        #pragma pack(push, 1)
        class CSurvivorsPowerUp_ArcaneBolt : public source2sdk::client::CSurvivorsPowerUp_ProjectileAttack
        {
        public:
            float m_flNextShotTimer; // 0x730            
            std::int32_t m_nShotsFired; // 0x734            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSurvivorsPowerUp_ArcaneBolt because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CSurvivorsPowerUp_ArcaneBolt) == 0x738);
    };
};
