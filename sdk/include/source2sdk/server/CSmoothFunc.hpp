#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has VTable
        // Has Trivial Destructor
        #pragma pack(push, 1)
        class CSmoothFunc
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            float m_flSmoothAmplitude; // 0x_            
            float m_flSmoothBias; // 0x_            
            float m_flSmoothDuration; // 0x_            
            float m_flSmoothRemainingTime; // 0x_            
            std::int32_t m_nSmoothDir; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CSmoothFunc, m_flSmoothAmplitude) == 0x_);
        static_assert(offsetof(source2sdk::server::CSmoothFunc, m_flSmoothBias) == 0x_);
        static_assert(offsetof(source2sdk::server::CSmoothFunc, m_flSmoothDuration) == 0x_);
        static_assert(offsetof(source2sdk::server::CSmoothFunc, m_flSmoothRemainingTime) == 0x_);
        static_assert(offsetof(source2sdk::server::CSmoothFunc, m_nSmoothDir) == 0x_);
        
        static_assert(sizeof(source2sdk::server::CSmoothFunc) == 0x_);
    };
};
