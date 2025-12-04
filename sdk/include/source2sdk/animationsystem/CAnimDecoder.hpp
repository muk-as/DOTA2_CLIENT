#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animationsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animationsystem
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAnimDecoder
        {
        public:
            CBufferString m_szName; // 0x_            
            std::int32_t m_nVersion; // 0x_            
            std::int32_t m_nType; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animationsystem::CAnimDecoder, m_szName) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CAnimDecoder, m_nVersion) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CAnimDecoder, m_nType) == 0x_);
        
        static_assert(sizeof(source2sdk::animationsystem::CAnimDecoder) == 0x_);
    };
};
