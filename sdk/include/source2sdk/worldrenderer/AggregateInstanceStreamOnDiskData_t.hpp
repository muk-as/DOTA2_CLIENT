#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: worldrenderer
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace worldrenderer
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x18
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct AggregateInstanceStreamOnDiskData_t
        {
        public:
            std::uint32_t m_DecodedSize; // 0x0            
            uint8_t _pad0004[0x4]; // 0x4
            CUtlBinaryBlock m_BufferData; // 0x8            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::worldrenderer::AggregateInstanceStreamOnDiskData_t, m_DecodedSize) == 0x0);
        static_assert(offsetof(source2sdk::worldrenderer::AggregateInstanceStreamOnDiskData_t, m_BufferData) == 0x8);
        
        static_assert(sizeof(source2sdk::worldrenderer::AggregateInstanceStreamOnDiskData_t) == 0x18);
    };
};
