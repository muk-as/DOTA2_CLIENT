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
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x20
        // Has VTable
        // Has Trivial Destructor
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class SimpleConstraintSoundProfile
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            source2sdk::server::SimpleConstraintSoundProfile_SimpleConstraintsSoundProfileKeypoints_t eKeypoints; // 0x8            
            float m_keyPoints[2]; // 0xc            
            float m_reversalSoundThresholds[3]; // 0x14            
            
            // Datamap fields:
            // float m_keyPoints[0]; // 0xc
            // float m_keyPoints[1]; // 0x10
            // float m_reversalSoundThresholds[0]; // 0x14
            // float m_reversalSoundThresholds[1]; // 0x18
            // float m_reversalSoundThresholds[2]; // 0x1c
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::SimpleConstraintSoundProfile, eKeypoints) == 0x8);
        static_assert(offsetof(source2sdk::server::SimpleConstraintSoundProfile, m_keyPoints) == 0xc);
        static_assert(offsetof(source2sdk::server::SimpleConstraintSoundProfile, m_reversalSoundThresholds) == 0x14);
        
        static_assert(sizeof(source2sdk::server::SimpleConstraintSoundProfile) == 0x20);
    };
};
