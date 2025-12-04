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
        class CSeqMultiFetchFlag
        {
        public:
            bool m_bRealtime; // 0x_            
            bool m_bCylepose; // 0x_            
            bool m_b0D; // 0x_            
            bool m_b1D; // 0x_            
            bool m_b2D; // 0x_            
            bool m_b2D_TRI; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animationsystem::CSeqMultiFetchFlag, m_bRealtime) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CSeqMultiFetchFlag, m_bCylepose) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CSeqMultiFetchFlag, m_b0D) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CSeqMultiFetchFlag, m_b1D) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CSeqMultiFetchFlag, m_b2D) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CSeqMultiFetchFlag, m_b2D_TRI) == 0x_);
        
        static_assert(sizeof(source2sdk::animationsystem::CSeqMultiFetchFlag) == 0x_);
    };
};
