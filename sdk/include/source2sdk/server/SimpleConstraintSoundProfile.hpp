#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/SimpleConstraintSoundProfile_SimpleConstraintsSoundProfileKeypoints_t.hpp"

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
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class SimpleConstraintSoundProfile
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::server::SimpleConstraintSoundProfile_SimpleConstraintsSoundProfileKeypoints_t eKeypoints; // 0x_            
            float m_keyPoints[2]; // 0x_            
            float m_reversalSoundThresholds[3]; // 0x_            
            
            // Datamap fields:
            // float m_keyPoints[0]; // 0x_
            // float m_keyPoints[1]; // 0x_
            // float m_reversalSoundThresholds[0]; // 0x_
            // float m_reversalSoundThresholds[1]; // 0x_
            // float m_reversalSoundThresholds[2]; // 0x_
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::SimpleConstraintSoundProfile, eKeypoints) == 0x_);
        static_assert(offsetof(source2sdk::server::SimpleConstraintSoundProfile, m_keyPoints) == 0x_);
        static_assert(offsetof(source2sdk::server::SimpleConstraintSoundProfile, m_reversalSoundThresholds) == 0x_);
        
        static_assert(sizeof(source2sdk::server::SimpleConstraintSoundProfile) == 0x_);
    };
};
