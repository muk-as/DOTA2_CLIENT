#pragma once
#include "source2sdk/client/C_DOTAWorldParticleSystem.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x828
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CAmbientCreatures : public client::C_DOTAWorldParticleSystem
    {
    public:
        CUtlString m_szAnimationName; // 0x820        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAmbientCreatures because it is not a standard-layout class
    static_assert(sizeof(CAmbientCreatures) == 0x828);
};
