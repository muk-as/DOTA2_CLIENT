#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/DecalGroupOption_t.hpp"

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
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CDecalGroupVData
        {
        public:
            // m_vecOptions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::DecalGroupOption_t> m_vecOptions;
            char m_vecOptions[0x_]; // 0x_            
            // metadata: MPropertySuppressField
            float m_flTotalProbability; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDecalGroupVData, m_vecOptions) == 0x_);
        static_assert(offsetof(source2sdk::client::CDecalGroupVData, m_flTotalProbability) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CDecalGroupVData) == 0x_);
    };
};
