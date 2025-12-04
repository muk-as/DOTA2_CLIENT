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
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        #pragma pack(push, 1)
        class CInterpolatedValue
        {
        public:
            float m_flStartTime; // 0x_            
            float m_flEndTime; // 0x_            
            float m_flStartValue; // 0x_            
            float m_flEndValue; // 0x_            
            std::int32_t m_nInterpType; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CInterpolatedValue, m_flStartTime) == 0x_);
        static_assert(offsetof(source2sdk::client::CInterpolatedValue, m_flEndTime) == 0x_);
        static_assert(offsetof(source2sdk::client::CInterpolatedValue, m_flStartValue) == 0x_);
        static_assert(offsetof(source2sdk::client::CInterpolatedValue, m_flEndValue) == 0x_);
        static_assert(offsetof(source2sdk::client::CInterpolatedValue, m_nInterpType) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CInterpolatedValue) == 0x_);
    };
};
