#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animationsystem/CSeqAutoLayerFlag.hpp"

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
        class CSeqAutoLayer
        {
        public:
            std::int16_t m_nLocalReference; // 0x_            
            std::int16_t m_nLocalPose; // 0x_            
            source2sdk::animationsystem::CSeqAutoLayerFlag m_flags; // 0x_            
            float m_start; // 0x_            
            float m_peak; // 0x_            
            float m_tail; // 0x_            
            float m_end; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animationsystem::CSeqAutoLayer, m_nLocalReference) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CSeqAutoLayer, m_nLocalPose) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CSeqAutoLayer, m_flags) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CSeqAutoLayer, m_start) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CSeqAutoLayer, m_peak) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CSeqAutoLayer, m_tail) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CSeqAutoLayer, m_end) == 0x_);
        
        static_assert(sizeof(source2sdk::animationsystem::CSeqAutoLayer) == 0x_);
    };
};
