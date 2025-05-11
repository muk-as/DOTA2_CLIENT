#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeCVMixListResource.hpp"

// /////////////////////////////////////////////////////////////
// Module: soundsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace soundsystem
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
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCVMixListResource> m_soundEventVMix;
            char m_soundEventVMix[0x8]; // 0x0            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::soundsystem::CSoundEventMetaData, m_soundEventVMix) == 0x0);
        
        static_assert(sizeof(source2sdk::soundsystem::CSoundEventMetaData) == 0x8);
    };
};
