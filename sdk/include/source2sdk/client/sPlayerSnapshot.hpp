#pragma once
#include "source2sdk/client/AbilityID_t.hpp"
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
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x30
    // Has Trivial Destructor
    #pragma pack(push, 1)
    class sPlayerSnapshot
    {
    public:
        client::AbilityID_t m_nItemAbilityID[10]; // 0x0        
        float m_fGameTime; // 0x28        
        uint8_t unKills; // 0x2c        
        uint8_t unDeaths; // 0x2d        
        uint8_t unAssists; // 0x2e        
        uint8_t unLevel; // 0x2f        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(sPlayerSnapshot, m_nItemAbilityID) == 0x0);
    static_assert(offsetof(sPlayerSnapshot, m_fGameTime) == 0x28);
    static_assert(offsetof(sPlayerSnapshot, unKills) == 0x2c);
    static_assert(offsetof(sPlayerSnapshot, unDeaths) == 0x2d);
    static_assert(offsetof(sPlayerSnapshot, unAssists) == 0x2e);
    static_assert(offsetof(sPlayerSnapshot, unLevel) == 0x2f);
    
    static_assert(sizeof(sPlayerSnapshot) == 0x30);
};
