#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animlib
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
        class CNmIKEffector
        {
        public:
            std::int32_t m_nBodyIndex; // 0x_            
            bool m_bEnabled; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            Vector m_vTargetPosition; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            Quaternion m_qTargetOrientation; // 0x_            
            float m_flWeight; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animlib::CNmIKEffector, m_nBodyIndex) == 0x_);
        static_assert(offsetof(source2sdk::animlib::CNmIKEffector, m_bEnabled) == 0x_);
        static_assert(offsetof(source2sdk::animlib::CNmIKEffector, m_vTargetPosition) == 0x_);
        static_assert(offsetof(source2sdk::animlib::CNmIKEffector, m_qTargetOrientation) == 0x_);
        static_assert(offsetof(source2sdk::animlib::CNmIKEffector, m_flWeight) == 0x_);
        
        static_assert(sizeof(source2sdk::animlib::CNmIKEffector) == 0x_);
    };
};
