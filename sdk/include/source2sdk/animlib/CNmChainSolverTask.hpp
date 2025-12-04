#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animlib/CNmPoseTask.hpp"
#include "source2sdk/animlib/CNmTarget.hpp"
#include "source2sdk/animlib/NmIKBlendMode_t.hpp"

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
        class CNmChainSolverTask : public source2sdk::animlib::CNmPoseTask
        {
        public:
            std::int32_t m_nEffectorBoneIdx; // 0x_            
            std::int32_t m_nEffectorTargetBoneIdx; // 0x_            
            CTransform m_targetTransform; // 0x_            
            std::int32_t m_nNumBonesInChain; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::animlib::CNmTarget m_effectorTarget; // 0x_            
            source2sdk::animlib::NmIKBlendMode_t m_blendMode; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flBlendWeight; // 0x_            
            bool m_bIsTargetInWorldSpace; // 0x_            
            bool m_bIsRunningFromDeserializedData; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CGlobalSymbol m_debugEffectorBoneID; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CTransform m_chainStartTransformMS; // 0x_            
            CTransform m_debugRequestedTargetTransformMS; // 0x_            
            float m_debugTotalChainLength; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNmChainSolverTask because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animlib::CNmChainSolverTask) == 0x_);
    };
};
