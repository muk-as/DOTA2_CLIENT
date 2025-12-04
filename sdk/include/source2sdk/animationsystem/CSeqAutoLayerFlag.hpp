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
        class CSeqAutoLayerFlag
        {
        public:
            bool m_bPost; // 0x_            
            bool m_bSpline; // 0x_            
            bool m_bXFade; // 0x_            
            bool m_bNoBlend; // 0x_            
            bool m_bLocal; // 0x_            
            bool m_bPose; // 0x_            
            bool m_bFetchFrame; // 0x_            
            bool m_bSubtract; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animationsystem::CSeqAutoLayerFlag, m_bPost) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CSeqAutoLayerFlag, m_bSpline) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CSeqAutoLayerFlag, m_bXFade) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CSeqAutoLayerFlag, m_bNoBlend) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CSeqAutoLayerFlag, m_bLocal) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CSeqAutoLayerFlag, m_bPose) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CSeqAutoLayerFlag, m_bFetchFrame) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CSeqAutoLayerFlag, m_bSubtract) == 0x_);
        
        static_assert(sizeof(source2sdk::animationsystem::CSeqAutoLayerFlag) == 0x_);
    };
};
