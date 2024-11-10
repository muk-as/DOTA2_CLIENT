#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeCPostProcessingResource.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: toolscene
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::toolscene
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x8
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CLightRigPostProcessing
    {
    public:
        // m_hPostProcessing has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCPostProcessingResource> m_hPostProcessing;
        char m_hPostProcessing[0x8]; // 0x0        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CLightRigPostProcessing, m_hPostProcessing) == 0x0);
    
    static_assert(sizeof(CLightRigPostProcessing) == 0x8);
};
