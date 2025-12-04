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
        // Has Trivial Constructor
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct EngineLoopState_t
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_nPlatWindowWidth; // 0x_            
            std::int32_t m_nPlatWindowHeight; // 0x_            
            std::int32_t m_nRenderWidth; // 0x_            
            std::int32_t m_nRenderHeight; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::EngineLoopState_t, m_nPlatWindowWidth) == 0x_);
        static_assert(offsetof(source2sdk::client::EngineLoopState_t, m_nPlatWindowHeight) == 0x_);
        static_assert(offsetof(source2sdk::client::EngineLoopState_t, m_nRenderWidth) == 0x_);
        static_assert(offsetof(source2sdk::client::EngineLoopState_t, m_nRenderHeight) == 0x_);
        
        static_assert(sizeof(source2sdk::client::EngineLoopState_t) == 0x_);
    };
};
