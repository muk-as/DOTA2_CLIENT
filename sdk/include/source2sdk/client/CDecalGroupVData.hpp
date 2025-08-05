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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x20
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
            char m_vecOptions[0x18]; // 0x0            
            // metadata: MPropertySuppressField
            float m_flTotalProbability; // 0x18            
            uint8_t _pad001c[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDecalGroupVData, m_vecOptions) == 0x0);
        static_assert(offsetof(source2sdk::client::CDecalGroupVData, m_flTotalProbability) == 0x18);
        
        static_assert(sizeof(source2sdk::client::CDecalGroupVData) == 0x20);
    };
};
