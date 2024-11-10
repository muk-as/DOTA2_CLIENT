#pragma once
#include "source2sdk/client/CSurvivorsPowerUp_AreaAttack.hpp"
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
    // Size: 0x810
    // Has VTable
    #pragma pack(push, 1)
    class CSurvivorsPowerUp_AreaAttack_Line : public client::CSurvivorsPowerUp_AreaAttack
    {
    public:
        Vector m_vCachedFacingDirection; // 0x800        
        bool m_bUseFacingDirection; // 0x80c        
        [[maybe_unused]] std::uint8_t pad_0x80d[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSurvivorsPowerUp_AreaAttack_Line because it is not a standard-layout class
    static_assert(sizeof(CSurvivorsPowerUp_AreaAttack_Line) == 0x810);
};
