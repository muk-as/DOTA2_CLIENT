#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace modellib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x20
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CRenderBufferBinding
        {
        public:
            std::uint64_t m_hBuffer; // 0x0            
            uint8_t _pad0008[0x8]; // 0x8
            std::uint32_t m_nBindOffsetBytes; // 0x10            
            uint8_t _pad0014[0xc];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::CRenderBufferBinding, m_hBuffer) == 0x0);
        static_assert(offsetof(source2sdk::modellib::CRenderBufferBinding, m_nBindOffsetBytes) == 0x10);
        
        static_assert(sizeof(source2sdk::modellib::CRenderBufferBinding) == 0x20);
    };
};
