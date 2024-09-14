#pragma once
#include "source2sdk/particles/CParticleFunctionPreEmission.hpp"
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
    class C_OP_SetControlPointOrientationToCPVelocity : public particles::CParticleFunctionPreEmission
    {
    public:
        // metadata: MPropertyFriendlyName "control point input for velocity"
        int32_t m_nCPInput; // 0x1c8        
        // metadata: MPropertyFriendlyName "control point output for orientation"
        int32_t m_nCPOutput; // 0x1cc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_SetControlPointOrientationToCPVelocity because it is not a standard-layout class
    static_assert(sizeof(C_OP_SetControlPointOrientationToCPVelocity) == 0x1d0);
};
