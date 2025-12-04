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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CRenderBufferBinding
        {
        public:
            std::uint64_t m_hBuffer; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::uint32_t m_nBindOffsetBytes; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::CRenderBufferBinding, m_hBuffer) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CRenderBufferBinding, m_nBindOffsetBytes) == 0x_);
        
        static_assert(sizeof(source2sdk::modellib::CRenderBufferBinding) == 0x_);
    };
};
