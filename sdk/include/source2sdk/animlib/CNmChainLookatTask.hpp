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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x88
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CNmChainLookatTask : public source2sdk::animlib::CNmPoseTask
        {
        public:
            std::int32_t m_nChainEndBoneIdx; // 0x50            
            std::int32_t m_nNumBonesInChain; // 0x54            
            Vector m_chainForwardDir; // 0x58            
            float m_flBlendWeight; // 0x64            
            float m_flHorizontalAngleLimitDegrees; // 0x68            
            float m_flVerticalAngleLimitDegrees; // 0x6c            
            Vector m_lookatTarget; // 0x70            
            bool m_bIsTargetInWorldSpace; // 0x7c            
            bool m_bIsRunningFromDeserializedData; // 0x7d            
            uint8_t _pad007e[0x2]; // 0x7e
            float m_flHorizontalAngleDegrees; // 0x80            
            float m_flVerticalAngleDegrees; // 0x84            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNmChainLookatTask because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animlib::CNmChainLookatTask) == 0x88);
    };
};
