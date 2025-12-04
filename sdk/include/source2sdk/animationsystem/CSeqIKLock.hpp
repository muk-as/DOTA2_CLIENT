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
        class CSeqIKLock
        {
        public:
            float m_flPosWeight; // 0x_            
            float m_flAngleWeight; // 0x_            
            std::int16_t m_nLocalBone; // 0x_            
            bool m_bBonesOrientedAlongPositiveX; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animationsystem::CSeqIKLock, m_flPosWeight) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CSeqIKLock, m_flAngleWeight) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CSeqIKLock, m_nLocalBone) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CSeqIKLock, m_bBonesOrientedAlongPositiveX) == 0x_);
        
        static_assert(sizeof(source2sdk::animationsystem::CSeqIKLock) == 0x_);
    };
};
