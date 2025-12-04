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
        class CSeqPoseSetting
        {
        public:
            CBufferString m_sPoseParameter; // 0x_            
            CBufferString m_sAttachment; // 0x_            
            CBufferString m_sReferenceSequence; // 0x_            
            float m_flValue; // 0x_            
            bool m_bX; // 0x_            
            bool m_bY; // 0x_            
            bool m_bZ; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_eType; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animationsystem::CSeqPoseSetting, m_sPoseParameter) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CSeqPoseSetting, m_sAttachment) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CSeqPoseSetting, m_sReferenceSequence) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CSeqPoseSetting, m_flValue) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CSeqPoseSetting, m_bX) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CSeqPoseSetting, m_bY) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CSeqPoseSetting, m_bZ) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CSeqPoseSetting, m_eType) == 0x_);
        
        static_assert(sizeof(source2sdk::animationsystem::CSeqPoseSetting) == 0x_);
    };
};
