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
    // Size: 0x1c8
    // Has VTable
    // Is Abstract
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CParticleFunctionEmitter : public particles::CParticleFunction
    {
    public:
        // metadata: MPropertyFriendlyName "Emitter Index"
        int32_t m_nEmitterIndex; // 0x1c0        
        [[maybe_unused]] std::uint8_t pad_0x1c4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CParticleFunctionEmitter because it is not a standard-layout class
    static_assert(sizeof(CParticleFunctionEmitter) == 0x1c8);
};
