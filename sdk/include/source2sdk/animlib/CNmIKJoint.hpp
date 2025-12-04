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
        class CNmIKJoint
        {
        public:
            std::int32_t m_nParentIndex; // 0x_            
            std::int32_t m_nBodyIndex; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CTransform m_xLocalFrame; // 0x_            
            float m_flSwingLimit; // 0x_            
            float m_flMinTwistLimit; // 0x_            
            float m_flMaxTwistLimit; // 0x_            
            float m_flWeight; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animlib::CNmIKJoint, m_nParentIndex) == 0x_);
        static_assert(offsetof(source2sdk::animlib::CNmIKJoint, m_nBodyIndex) == 0x_);
        static_assert(offsetof(source2sdk::animlib::CNmIKJoint, m_xLocalFrame) == 0x_);
        static_assert(offsetof(source2sdk::animlib::CNmIKJoint, m_flSwingLimit) == 0x_);
        static_assert(offsetof(source2sdk::animlib::CNmIKJoint, m_flMinTwistLimit) == 0x_);
        static_assert(offsetof(source2sdk::animlib::CNmIKJoint, m_flMaxTwistLimit) == 0x_);
        static_assert(offsetof(source2sdk::animlib::CNmIKJoint, m_flWeight) == 0x_);
        
        static_assert(sizeof(source2sdk::animlib::CNmIKJoint) == 0x_);
    };
};
