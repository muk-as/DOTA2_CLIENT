#pragma once
#include "source2sdk/particles/CParticleFunctionForce.hpp"
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
    // Size: 0x1e8
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_ParentVortices : public particles::CParticleFunctionForce
    {
    public:
        // metadata: MPropertyFriendlyName "amount of force"
        float m_flForceScale; // 0x1d0        
        // metadata: MPropertyFriendlyName "twist axis"
        // metadata: MVectorIsCoordinate
        Vector m_vecTwistAxis; // 0x1d4        
        // metadata: MPropertyFriendlyName "flip twist axis with yaw"
        bool m_bFlipBasedOnYaw; // 0x1e0        
        [[maybe_unused]] std::uint8_t pad_0x1e1[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_ParentVortices because it is not a standard-layout class
    static_assert(sizeof(C_OP_ParentVortices) == 0x1e8);
};
