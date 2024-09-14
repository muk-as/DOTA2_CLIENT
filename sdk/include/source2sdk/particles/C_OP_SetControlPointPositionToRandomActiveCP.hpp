#pragma once
#include "source2sdk/particles/CParticleFunctionPreEmission.hpp"
#include "source2sdk/particleslib/CParticleCollectionFloatInput.hpp"
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
    // Size: 0x338
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_SetControlPointPositionToRandomActiveCP : public particles::CParticleFunctionPreEmission
    {
    public:
        // metadata: MPropertyFriendlyName "control point number"
        int32_t m_nCP1; // 0x1c8        
        // metadata: MPropertyFriendlyName "min active CP"
        int32_t m_nHeadLocationMin; // 0x1cc        
        // metadata: MPropertyFriendlyName "max active CP"
        int32_t m_nHeadLocationMax; // 0x1d0        
        [[maybe_unused]] std::uint8_t pad_0x1d4[0x4]; // 0x1d4
        // metadata: MPropertyFriendlyName "reset rate"
        particleslib::CParticleCollectionFloatInput m_flResetRate; // 0x1d8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_SetControlPointPositionToRandomActiveCP because it is not a standard-layout class
    static_assert(sizeof(C_OP_SetControlPointPositionToRandomActiveCP) == 0x338);
};
