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
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAnimLocalHierarchy
        {
        public:
            CBufferString m_sBone; // 0x_            
            CBufferString m_sNewParent; // 0x_            
            std::int32_t m_nStartFrame; // 0x_            
            std::int32_t m_nPeakFrame; // 0x_            
            std::int32_t m_nTailFrame; // 0x_            
            std::int32_t m_nEndFrame; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animationsystem::CAnimLocalHierarchy, m_sBone) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CAnimLocalHierarchy, m_sNewParent) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CAnimLocalHierarchy, m_nStartFrame) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CAnimLocalHierarchy, m_nPeakFrame) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CAnimLocalHierarchy, m_nTailFrame) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CAnimLocalHierarchy, m_nEndFrame) == 0x_);
        
        static_assert(sizeof(source2sdk::animationsystem::CAnimLocalHierarchy) == 0x_);
    };
};
