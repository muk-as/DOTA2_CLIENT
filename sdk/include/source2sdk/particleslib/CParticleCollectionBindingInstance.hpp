#pragma once
#include "source2sdk/pulse_runtime_lib/CBasePulseGraphInstance.hpp"
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
    // static metadata: MPulseDomainOptInFeatureTag
    // static metadata: MPulseDomainOptInFeatureTag
    #pragma pack(push, 1)
    class CParticleCollectionBindingInstance : public pulse_runtime_lib::CBasePulseGraphInstance
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xf8[0x28];
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CParticleCollectionBindingInstance) == 0x120);
};
