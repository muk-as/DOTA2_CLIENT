#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DynamicProp.hpp"

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
        // Standard-layout class: false
        // Size: 0xab8
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_DynamicPropClientside : public source2sdk::client::C_DynamicProp
        {
        public:
            uint8_t _pad0aa8[0x8]; // 0xaa8
            bool m_bSetupMaterialProxy; // 0xab0            
            uint8_t _pad0ab1[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DynamicPropClientside because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DynamicPropClientside) == 0xab8);
    };
};
