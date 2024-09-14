#pragma once
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
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
    class CParticleFunctionPreEmission : public particles::CParticleFunctionOperator
    {
    public:
        // metadata: MPropertyFriendlyName "Run Only Once"
        bool m_bRunOnce; // 0x1c0        
        [[maybe_unused]] std::uint8_t pad_0x1c1[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CParticleFunctionPreEmission because it is not a standard-layout class
    static_assert(sizeof(CParticleFunctionPreEmission) == 0x1c8);
};
