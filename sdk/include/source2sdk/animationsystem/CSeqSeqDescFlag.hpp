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
        class CSeqSeqDescFlag
        {
        public:
            bool m_bLooping; // 0x_            
            bool m_bSnap; // 0x_            
            bool m_bAutoplay; // 0x_            
            bool m_bPost; // 0x_            
            bool m_bHidden; // 0x_            
            bool m_bMulti; // 0x_            
            bool m_bLegacyDelta; // 0x_            
            bool m_bLegacyWorldspace; // 0x_            
            bool m_bLegacyCyclepose; // 0x_            
            bool m_bLegacyRealtime; // 0x_            
            bool m_bModelDoc; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animationsystem::CSeqSeqDescFlag, m_bLooping) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CSeqSeqDescFlag, m_bSnap) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CSeqSeqDescFlag, m_bAutoplay) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CSeqSeqDescFlag, m_bPost) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CSeqSeqDescFlag, m_bHidden) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CSeqSeqDescFlag, m_bMulti) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CSeqSeqDescFlag, m_bLegacyDelta) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CSeqSeqDescFlag, m_bLegacyWorldspace) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CSeqSeqDescFlag, m_bLegacyCyclepose) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CSeqSeqDescFlag, m_bLegacyRealtime) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CSeqSeqDescFlag, m_bModelDoc) == 0x_);
        
        static_assert(sizeof(source2sdk::animationsystem::CSeqSeqDescFlag) == 0x_);
    };
};
