#pragma once
#include "source2sdk/client/CSurvivorsPowerUp_ProjectileAttack.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x738
    // Has VTable
    #pragma pack(push, 1)
    class CSurvivorsPowerUp_ArcaneBolt : public client::CSurvivorsPowerUp_ProjectileAttack
    {
    public:
        float m_flNextShotTimer; // 0x730        
        int32_t m_nShotsFired; // 0x734        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSurvivorsPowerUp_ArcaneBolt because it is not a standard-layout class
    static_assert(sizeof(CSurvivorsPowerUp_ArcaneBolt) == 0x738);
};
