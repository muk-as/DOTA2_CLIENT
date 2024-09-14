#pragma once
#include "source2sdk/particleslib/CParticleCollectionBindingInstance.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particleslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particleslib
{
    // Registered alignment: unknown
    // Alignment: 0x1
    // Standard-layout class: false
    // Size: 0x120
    // Has VTable
    // 
    // static metadata: MPulseInstanceDomainInfo
    // static metadata: MPulseDomainHookInfo
    // static metadata: MPulseLibraryBindings
    // static metadata: MPulseDomainHiddenInTool
    #pragma pack(push, 1)
    class CParticleBindingRealPulse : public particleslib::CParticleCollectionBindingInstance
    {
    public:
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CParticleBindingRealPulse) == 0x120);
};
