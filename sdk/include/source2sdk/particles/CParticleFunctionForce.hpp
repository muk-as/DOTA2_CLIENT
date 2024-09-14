#pragma once
#include "source2sdk/particles/CParticleFunction.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1d0
    // Has VTable
    // Is Abstract
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CParticleFunctionForce : public particles::CParticleFunction
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x1c0[0x10];
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CParticleFunctionForce) == 0x1d0);
};
