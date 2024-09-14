#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeCVMixListResource.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::soundsystem
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x8
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CSoundEventMetaData
    {
    public:
        // m_soundEventVMix has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCVMixListResource> m_soundEventVMix;
        char m_soundEventVMix[0x8]; // 0x0        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CSoundEventMetaData, m_soundEventVMix) == 0x0);
    
    static_assert(sizeof(CSoundEventMetaData) == 0x8);
};
