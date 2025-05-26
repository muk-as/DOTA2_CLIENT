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
        // Size: 0x110
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CNmChainSolverTask : public source2sdk::animlib::CNmPoseTask
        {
        public:
            std::int32_t m_nEffectorBoneIdx; // 0x30            
            uint8_t _pad0034[0xc]; // 0x34
            CTransform m_targetTransform; // 0x40            
            std::int32_t m_nNumBonesInChain; // 0x60            
            uint8_t _pad0064[0xc]; // 0x64
            source2sdk::animlib::CNmTarget m_effectorTarget; // 0x70            
            source2sdk::animlib::NmIKBlendMode_t m_blendMode; // 0xa0            
            uint8_t _pad00a1[0x3]; // 0xa1
            float m_flBlendWeight; // 0xa4            
            bool m_bIsTargetInWorldSpace; // 0xa8            
            bool m_bIsRunningFromDeserializedData; // 0xa9            
            uint8_t _pad00aa[0x6]; // 0xaa
            CGlobalSymbol m_debugEffectorBoneID; // 0xb0            
            uint8_t _pad00b8[0x8]; // 0xb8
            CTransform m_chainStartTransformMS; // 0xc0            
            CTransform m_debugRequestedTargetTransformMS; // 0xe0            
            float m_debugTotalChainLength; // 0x100            
            uint8_t _pad0104[0xc];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNmChainSolverTask because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animlib::CNmChainSolverTask) == 0x110);
    };
};
