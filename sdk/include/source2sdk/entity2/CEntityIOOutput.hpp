#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CVariantDefaultAllocator.hpp"

// /////////////////////////////////////////////////////////////
// Module: entity2
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace entity2
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x28
        // Has VTable
        #pragma pack(push, 1)
        class CEntityIOOutput
        {
        public:
            uint8_t _pad0000[0x18]; // 0x0
            // m_Value has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CVariantBase<source2sdk::entity2::CVariantDefaultAllocator> m_Value;
            char m_Value[0x10]; // 0x18            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::entity2::CEntityIOOutput, m_Value) == 0x18);
        
        static_assert(sizeof(source2sdk::entity2::CEntityIOOutput) == 0x28);
    };
};
