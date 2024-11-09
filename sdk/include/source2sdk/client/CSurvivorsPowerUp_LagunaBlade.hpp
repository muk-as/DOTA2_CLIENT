#pragma once
#include "source2sdk/client/CSurvivorsPowerUp_InstantAttack.hpp"
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
    // Size: 0x6f8
    // Has VTable
    #pragma pack(push, 1)
    class CSurvivorsPowerUp_LagunaBlade : public client::CSurvivorsPowerUp_InstantAttack
    {
    public:
        int32_t m_nEliteExtraHit; // 0x6f0        
        [[maybe_unused]] std::uint8_t pad_0x6f4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSurvivorsPowerUp_LagunaBlade because it is not a standard-layout class
    static_assert(sizeof(CSurvivorsPowerUp_LagunaBlade) == 0x6f8);
};
