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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x30
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAnimLocalHierarchy
        {
        public:
            CBufferString m_sBone; // 0x0            
            CBufferString m_sNewParent; // 0x10            
            std::int32_t m_nStartFrame; // 0x20            
            std::int32_t m_nPeakFrame; // 0x24            
            std::int32_t m_nTailFrame; // 0x28            
            std::int32_t m_nEndFrame; // 0x2c            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animationsystem::CAnimLocalHierarchy, m_sBone) == 0x0);
        static_assert(offsetof(source2sdk::animationsystem::CAnimLocalHierarchy, m_sNewParent) == 0x10);
        static_assert(offsetof(source2sdk::animationsystem::CAnimLocalHierarchy, m_nStartFrame) == 0x20);
        static_assert(offsetof(source2sdk::animationsystem::CAnimLocalHierarchy, m_nPeakFrame) == 0x24);
        static_assert(offsetof(source2sdk::animationsystem::CAnimLocalHierarchy, m_nTailFrame) == 0x28);
        static_assert(offsetof(source2sdk::animationsystem::CAnimLocalHierarchy, m_nEndFrame) == 0x2c);
        
        static_assert(sizeof(source2sdk::animationsystem::CAnimLocalHierarchy) == 0x30);
    };
};
