#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CraftworksComponentID_t.hpp"

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
        // Size: 0x40
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCraftworksComponentDefinition
        {
        public:
            source2sdk::client::CraftworksComponentID_t m_unComponentID; // 0x0            
            uint8_t _pad0001[0x7]; // 0x1
            CUtlString m_strComponentLocName; // 0x8            
            CUtlString m_strComponentLocDesc; // 0x10            
            CPanoramaImageName m_strComponentImageSmall; // 0x18            
            CPanoramaImageName m_strComponentImageMedium; // 0x28            
            CUtlString m_strSound; // 0x38            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CCraftworksComponentDefinition, m_unComponentID) == 0x0);
        static_assert(offsetof(source2sdk::client::CCraftworksComponentDefinition, m_strComponentLocName) == 0x8);
        static_assert(offsetof(source2sdk::client::CCraftworksComponentDefinition, m_strComponentLocDesc) == 0x10);
        static_assert(offsetof(source2sdk::client::CCraftworksComponentDefinition, m_strComponentImageSmall) == 0x18);
        static_assert(offsetof(source2sdk::client::CCraftworksComponentDefinition, m_strComponentImageMedium) == 0x28);
        static_assert(offsetof(source2sdk::client::CCraftworksComponentDefinition, m_strSound) == 0x38);
        
        static_assert(sizeof(source2sdk::client::CCraftworksComponentDefinition) == 0x40);
    };
};
