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
        // Has VTable
        #pragma pack(push, 1)
        class CScriptUniformRandomStream
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            HSCRIPT m_hScriptScope; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_nInitialSeed; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CScriptUniformRandomStream, m_hScriptScope) == 0x_);
        static_assert(offsetof(source2sdk::client::CScriptUniformRandomStream, m_nInitialSeed) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CScriptUniformRandomStream) == 0x_);
    };
};
