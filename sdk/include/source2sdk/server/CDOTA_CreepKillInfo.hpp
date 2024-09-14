#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x20
    // Has Trivial Destructor
    #pragma pack(push, 1)
    class CDOTA_CreepKillInfo
    {
    public:
        entity2::GameTime_t m_flTimeOfDeath; // 0x0        
        float m_flDeathFlightDuration; // 0x4        
        Vector m_vWsKillDirection; // 0x8        
        Vector m_vWsKillOrigin; // 0x14        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CDOTA_CreepKillInfo, m_flTimeOfDeath) == 0x0);
    static_assert(offsetof(CDOTA_CreepKillInfo, m_flDeathFlightDuration) == 0x4);
    static_assert(offsetof(CDOTA_CreepKillInfo, m_vWsKillDirection) == 0x8);
    static_assert(offsetof(CDOTA_CreepKillInfo, m_vWsKillOrigin) == 0x14);
    
    static_assert(sizeof(CDOTA_CreepKillInfo) == 0x20);
};
