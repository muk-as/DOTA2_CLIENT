#pragma once
#include "source2sdk/pulse_runtime_lib/CBasePulseGraphInstance.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x1
    // Standard-layout class: false
    // Size: 0x118
    // Has VTable
    // 
    // static metadata: MPulseInstanceDomainInfo
    // static metadata: MPulseDomainHookInfo
    // static metadata: MPulseLibraryBindings
    // static metadata: MPulseDomainOptInFeatureTag
    // static metadata: MPulseDomainOptInFeatureTag
    // static metadata: MPulseDomainOptInValueType
    // static metadata: MPulseDomainOptInValueType
    #pragma pack(push, 1)
    class CPulseGraphInstance_PanoramaPanel : public pulse_runtime_lib::CBasePulseGraphInstance
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xf8[0x20];
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CPulseGraphInstance_PanoramaPanel) == 0x118);
};
