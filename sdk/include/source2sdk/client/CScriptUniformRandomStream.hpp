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
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0xa0
        // Has VTable
        #pragma pack(push, 1)
        class CScriptUniformRandomStream
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            HSCRIPT m_hScriptScope; // 0x8            
            uint8_t _pad0010[0x8c]; // 0x10
            std::int32_t m_nInitialSeed; // 0x9c            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CScriptUniformRandomStream, m_hScriptScope) == 0x8);
        static_assert(offsetof(source2sdk::client::CScriptUniformRandomStream, m_nInitialSeed) == 0x9c);
        
        static_assert(sizeof(source2sdk::client::CScriptUniformRandomStream) == 0xa0);
    };
};
