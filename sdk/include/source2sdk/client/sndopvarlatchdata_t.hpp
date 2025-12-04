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
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct sndopvarlatchdata_t
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            CUtlSymbolLarge m_iszStack; // 0x_            
            CUtlSymbolLarge m_iszOperator; // 0x_            
            CUtlSymbolLarge m_iszOpvar; // 0x_            
            float m_flVal; // 0x_            
            Vector m_vPos; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::sndopvarlatchdata_t, m_iszStack) == 0x_);
        static_assert(offsetof(source2sdk::client::sndopvarlatchdata_t, m_iszOperator) == 0x_);
        static_assert(offsetof(source2sdk::client::sndopvarlatchdata_t, m_iszOpvar) == 0x_);
        static_assert(offsetof(source2sdk::client::sndopvarlatchdata_t, m_flVal) == 0x_);
        static_assert(offsetof(source2sdk::client::sndopvarlatchdata_t, m_vPos) == 0x_);
        
        static_assert(sizeof(source2sdk::client::sndopvarlatchdata_t) == 0x_);
    };
};
