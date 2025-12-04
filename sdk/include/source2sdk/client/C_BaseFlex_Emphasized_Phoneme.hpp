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
        #pragma pack(push, 1)
        class C_BaseFlex_Emphasized_Phoneme
        {
        public:
            CUtlString m_sClassName; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flAmount; // 0x_            
            bool m_bRequired; // 0x_            
            bool m_bBasechecked; // 0x_            
            bool m_bValid; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::C_BaseFlex_Emphasized_Phoneme, m_sClassName) == 0x_);
        static_assert(offsetof(source2sdk::client::C_BaseFlex_Emphasized_Phoneme, m_flAmount) == 0x_);
        static_assert(offsetof(source2sdk::client::C_BaseFlex_Emphasized_Phoneme, m_bRequired) == 0x_);
        static_assert(offsetof(source2sdk::client::C_BaseFlex_Emphasized_Phoneme, m_bBasechecked) == 0x_);
        static_assert(offsetof(source2sdk::client::C_BaseFlex_Emphasized_Phoneme, m_bValid) == 0x_);
        
        static_assert(sizeof(source2sdk::client::C_BaseFlex_Emphasized_Phoneme) == 0x_);
    };
};
