#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has VTable
        // Has Trivial Destructor
        #pragma pack(push, 1)
        class SimpleConstraintSoundProfile
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            float m_flKeyPointMinSoundThreshold; // 0x_            
            float m_flKeyPointMaxSoundThreshold; // 0x_            
            float m_reversalSoundThresholdSmall; // 0x_            
            float m_reversalSoundThresholdMedium; // 0x_            
            float m_reversalSoundThresholdLarge; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::SimpleConstraintSoundProfile, m_flKeyPointMinSoundThreshold) == 0x_);
        static_assert(offsetof(source2sdk::server::SimpleConstraintSoundProfile, m_flKeyPointMaxSoundThreshold) == 0x_);
        static_assert(offsetof(source2sdk::server::SimpleConstraintSoundProfile, m_reversalSoundThresholdSmall) == 0x_);
        static_assert(offsetof(source2sdk::server::SimpleConstraintSoundProfile, m_reversalSoundThresholdMedium) == 0x_);
        static_assert(offsetof(source2sdk::server::SimpleConstraintSoundProfile, m_reversalSoundThresholdLarge) == 0x_);
        
        static_assert(sizeof(source2sdk::server::SimpleConstraintSoundProfile) == 0x_);
    };
};
