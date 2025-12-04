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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCraftworksComponentDefinition
        {
        public:
            source2sdk::client::CraftworksComponentID_t m_unComponentID; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlString m_strComponentLocName; // 0x_            
            CUtlString m_strComponentLocDesc; // 0x_            
            CPanoramaImageName m_strComponentImageSmall; // 0x_            
            CPanoramaImageName m_strComponentImageMedium; // 0x_            
            CUtlString m_strSound; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CCraftworksComponentDefinition, m_unComponentID) == 0x_);
        static_assert(offsetof(source2sdk::client::CCraftworksComponentDefinition, m_strComponentLocName) == 0x_);
        static_assert(offsetof(source2sdk::client::CCraftworksComponentDefinition, m_strComponentLocDesc) == 0x_);
        static_assert(offsetof(source2sdk::client::CCraftworksComponentDefinition, m_strComponentImageSmall) == 0x_);
        static_assert(offsetof(source2sdk::client::CCraftworksComponentDefinition, m_strComponentImageMedium) == 0x_);
        static_assert(offsetof(source2sdk::client::CCraftworksComponentDefinition, m_strSound) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CCraftworksComponentDefinition) == 0x_);
    };
};
