#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x18
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct DecalGroupOption_t
        {
        public:
            // m_hMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandleCopyable<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_hMaterial;
            char m_hMaterial[0x8]; // 0x0            
            CGlobalSymbol m_sSequenceName; // 0x8            
            float m_flProbability; // 0x10            
            uint8_t _pad0014[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::DecalGroupOption_t, m_hMaterial) == 0x0);
        static_assert(offsetof(source2sdk::client::DecalGroupOption_t, m_sSequenceName) == 0x8);
        static_assert(offsetof(source2sdk::client::DecalGroupOption_t, m_flProbability) == 0x10);
        
        static_assert(sizeof(source2sdk::client::DecalGroupOption_t) == 0x18);
    };
};
