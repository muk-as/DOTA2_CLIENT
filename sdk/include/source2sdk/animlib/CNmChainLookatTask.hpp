#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animlib/CNmPoseTask.hpp"

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
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CNmChainLookatTask : public source2sdk::animlib::CNmPoseTask
        {
        public:
            std::int32_t m_nChainEndBoneIdx; // 0x_            
            std::int32_t m_nNumBonesInChain; // 0x_            
            Vector m_chainForwardDir; // 0x_            
            float m_flBlendWeight; // 0x_            
            float m_flHorizontalAngleLimitDegrees; // 0x_            
            float m_flVerticalAngleLimitDegrees; // 0x_            
            Vector m_lookatTarget; // 0x_            
            bool m_bIsTargetInWorldSpace; // 0x_            
            bool m_bIsRunningFromDeserializedData; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flHorizontalAngleDegrees; // 0x_            
            float m_flVerticalAngleDegrees; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNmChainLookatTask because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animlib::CNmChainLookatTask) == 0x_);
    };
};
