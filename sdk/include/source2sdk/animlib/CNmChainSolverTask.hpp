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
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x130
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CNmChainSolverTask : public source2sdk::animlib::CNmPoseTask
        {
        public:
            std::int32_t m_nEffectorBoneIdx; // 0x50            
            uint8_t _pad0054[0xc]; // 0x54
            CTransform m_targetTransform; // 0x60            
            std::int32_t m_nNumBonesInChain; // 0x80            
            uint8_t _pad0084[0xc]; // 0x84
            source2sdk::animlib::CNmTarget m_effectorTarget; // 0x90            
            source2sdk::animlib::NmIKBlendMode_t m_blendMode; // 0xc0            
            uint8_t _pad00c1[0x3]; // 0xc1
            float m_flBlendWeight; // 0xc4            
            bool m_bIsTargetInWorldSpace; // 0xc8            
            bool m_bIsRunningFromDeserializedData; // 0xc9            
            uint8_t _pad00ca[0x6]; // 0xca
            CGlobalSymbol m_debugEffectorBoneID; // 0xd0            
            uint8_t _pad00d8[0x8]; // 0xd8
            CTransform m_chainStartTransformMS; // 0xe0            
            CTransform m_debugRequestedTargetTransformMS; // 0x100            
            float m_debugTotalChainLength; // 0x120            
            uint8_t _pad0124[0xc];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNmChainSolverTask because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animlib::CNmChainSolverTask) == 0x130);
    };
};
