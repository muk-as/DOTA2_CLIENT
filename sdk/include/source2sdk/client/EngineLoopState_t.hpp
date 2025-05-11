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
        // Size: 0x28
        // Has Trivial Constructor
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct EngineLoopState_t
        {
        public:
            uint8_t _pad0000[0x18]; // 0x0
            std::int32_t m_nPlatWindowWidth; // 0x18            
            std::int32_t m_nPlatWindowHeight; // 0x1c            
            std::int32_t m_nRenderWidth; // 0x20            
            std::int32_t m_nRenderHeight; // 0x24            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::EngineLoopState_t, m_nPlatWindowWidth) == 0x18);
        static_assert(offsetof(source2sdk::client::EngineLoopState_t, m_nPlatWindowHeight) == 0x1c);
        static_assert(offsetof(source2sdk::client::EngineLoopState_t, m_nRenderWidth) == 0x20);
        static_assert(offsetof(source2sdk::client::EngineLoopState_t, m_nRenderHeight) == 0x24);
        
        static_assert(sizeof(source2sdk::client::EngineLoopState_t) == 0x28);
    };
};
