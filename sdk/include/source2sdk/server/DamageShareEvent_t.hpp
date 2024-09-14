#pragma once
#include "source2sdk/client/PlayerID_t.hpp"
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
    // Size: 0xc
    // Has Trivial Destructor
    #pragma pack(push, 1)
    struct DamageShareEvent_t
    {
    public:
        float m_flOriginalDamage; // 0x0        
        float m_flTakenDamage; // 0x4        
        client::PlayerID_t m_nPlayerID; // 0x8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(DamageShareEvent_t, m_flOriginalDamage) == 0x0);
    static_assert(offsetof(DamageShareEvent_t, m_flTakenDamage) == 0x4);
    static_assert(offsetof(DamageShareEvent_t, m_nPlayerID) == 0x8);
    
    static_assert(sizeof(DamageShareEvent_t) == 0xc);
};
