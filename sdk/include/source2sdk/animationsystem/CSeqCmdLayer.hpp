#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animationsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animationsystem
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CSeqCmdLayer
        {
        public:
            std::int16_t m_cmd; // 0x_            
            std::int16_t m_nLocalReference; // 0x_            
            std::int16_t m_nLocalBonemask; // 0x_            
            std::int16_t m_nDstResult; // 0x_            
            std::int16_t m_nSrcResult; // 0x_            
            bool m_bSpline; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flVar1; // 0x_            
            float m_flVar2; // 0x_            
            std::int16_t m_nLineNumber; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animationsystem::CSeqCmdLayer, m_cmd) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CSeqCmdLayer, m_nLocalReference) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CSeqCmdLayer, m_nLocalBonemask) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CSeqCmdLayer, m_nDstResult) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CSeqCmdLayer, m_nSrcResult) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CSeqCmdLayer, m_bSpline) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CSeqCmdLayer, m_flVar1) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CSeqCmdLayer, m_flVar2) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CSeqCmdLayer, m_nLineNumber) == 0x_);
        
        static_assert(sizeof(source2sdk::animationsystem::CSeqCmdLayer) == 0x_);
    };
};
