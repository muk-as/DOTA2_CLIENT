#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x14
        // Has Trivial Destructor
        #pragma pack(push, 1)
        class CInterpolatedValue
        {
        public:
            float m_flStartTime; // 0x0            
            float m_flEndTime; // 0x4            
            float m_flStartValue; // 0x8            
            float m_flEndValue; // 0xc            
            std::int32_t m_nInterpType; // 0x10            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CInterpolatedValue, m_flStartTime) == 0x0);
        static_assert(offsetof(source2sdk::client::CInterpolatedValue, m_flEndTime) == 0x4);
        static_assert(offsetof(source2sdk::client::CInterpolatedValue, m_flStartValue) == 0x8);
        static_assert(offsetof(source2sdk::client::CInterpolatedValue, m_flEndValue) == 0xc);
        static_assert(offsetof(source2sdk::client::CInterpolatedValue, m_nInterpType) == 0x10);
        
        static_assert(sizeof(source2sdk::client::CInterpolatedValue) == 0x14);
    };
};
