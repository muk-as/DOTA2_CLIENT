#pragma once
#include "source2sdk/client/SurvivorsParticleID_t.hpp"
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
    // Size: 0x8
    // Has Trivial Destructor
    #pragma pack(push, 1)
    class CSurvivorsAttackParticleInfo
    {
    public:
        client::SurvivorsParticleID_t unParticleID; // 0x0        
        float flTimeLeft; // 0x4        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CSurvivorsAttackParticleInfo, unParticleID) == 0x0);
    static_assert(offsetof(CSurvivorsAttackParticleInfo, flTimeLeft) == 0x4);
    
    static_assert(sizeof(CSurvivorsAttackParticleInfo) == 0x8);
};
