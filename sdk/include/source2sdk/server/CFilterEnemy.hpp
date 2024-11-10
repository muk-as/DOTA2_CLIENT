#pragma once
#include "source2sdk/server/CBaseFilter.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x558
    // Has VTable
    // Construct allowed
    #pragma pack(push, 1)
    class CFilterEnemy : public server::CBaseFilter
    {
    public:
        CUtlSymbolLarge m_iszEnemyName; // 0x538        
        float m_flRadius; // 0x540        
        float m_flOuterRadius; // 0x544        
        int32_t m_nMaxSquadmatesPerEnemy; // 0x548        
        [[maybe_unused]] std::uint8_t pad_0x54c[0x4]; // 0x54c
        CUtlSymbolLarge m_iszPlayerName; // 0x550        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CFilterEnemy because it is not a standard-layout class
    static_assert(sizeof(CFilterEnemy) == 0x558);
};
