#pragma once
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1d0
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_INIT_InheritVelocity : public particles::CParticleFunctionInitializer
    {
    public:
        // metadata: MPropertyFriendlyName "control point number"
        int32_t m_nControlPointNumber; // 0x1c8        
        // metadata: MPropertyFriendlyName "velocity scale"
        float m_flVelocityScale; // 0x1cc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_INIT_InheritVelocity because it is not a standard-layout class
    static_assert(sizeof(C_INIT_InheritVelocity) == 0x1d0);
};
