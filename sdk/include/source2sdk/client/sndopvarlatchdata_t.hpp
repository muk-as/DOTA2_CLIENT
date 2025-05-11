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
        // Size: 0x30
        // Has VTable
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct sndopvarlatchdata_t
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            CUtlSymbolLarge m_iszStack; // 0x8            
            CUtlSymbolLarge m_iszOperator; // 0x10            
            CUtlSymbolLarge m_iszOpvar; // 0x18            
            float m_flVal; // 0x20            
            Vector m_vPos; // 0x24            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::sndopvarlatchdata_t, m_iszStack) == 0x8);
        static_assert(offsetof(source2sdk::client::sndopvarlatchdata_t, m_iszOperator) == 0x10);
        static_assert(offsetof(source2sdk::client::sndopvarlatchdata_t, m_iszOpvar) == 0x18);
        static_assert(offsetof(source2sdk::client::sndopvarlatchdata_t, m_flVal) == 0x20);
        static_assert(offsetof(source2sdk::client::sndopvarlatchdata_t, m_vPos) == 0x24);
        
        static_assert(sizeof(source2sdk::client::sndopvarlatchdata_t) == 0x30);
    };
};
