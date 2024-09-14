#pragma once
#include "source2sdk/particleslib/CParticleVecInput.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particleslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particleslib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x678
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyCustomEditor "CollectionVecInput()"
    #pragma pack(push, 1)
    class CParticleCollectionVecInput : public particleslib::CParticleVecInput
    {
    public:
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CParticleCollectionVecInput) == 0x678);
};
